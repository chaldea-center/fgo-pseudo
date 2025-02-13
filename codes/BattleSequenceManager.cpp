void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4BDED30 & 1) == 0 )
  {
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    byte_4BDED30 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  struct BattlePerformance_BattleUIPanel_array *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_Dictionary_object__int__o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_HashSet_T__o *v67; // x20
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_RuntimeFieldHandle_o v74; // 0:w1.4

  if ( (byte_4BDED2F & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformance_BattleUIPanel___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1C21E38(&Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C);
    sub_1C21E38(&StringLiteral_9535/*"N_{0}{1}"*/);
    byte_4BDED2F = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Array_o *)sub_1C21EE0(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v74.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v4 = (struct BattlePerformance_BattleUIPanel_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v74, 0LL);
  this->fields.FadeTargetPanelIndexs = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.FadeTargetPanelIndexs, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ReleaseSoundNames, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.DelayInvokeMethodList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_9535/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9535/*"N_{0}{1}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.PosNodeFormatNP, v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v32;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.npEndDeleteObjects,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v39,
    (const MethodInfo_3306F3C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v39;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.rendererBaseAddColorsDict,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleTargetList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.createdObjects, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v60,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v60;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v67,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v67;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDED0F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDED0F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !actor )
      sub_1C22094(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_45012608(actor, (System_String_o *)StringLiteral_25041/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v7.fields.r = 0.0;
      v7.fields.g = 0.0;
      v7.fields.b = 0.0;
      v7.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v7, 0.3, 0LL);
    }
    v8.fields.r = 0.0;
    v8.fields.g = 0.0;
    v8.fields.b = 0.0;
    v8.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v8, 0.0, 0LL);
  }
}


void __fastcall BattleSequenceManager__CacheExecutingTdInfo(
        BattleSequenceManager_o *this,
        ExecutingTdInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.executingTdInfoCache = info;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.executingTdInfoCache,
    (int64_t)info,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__CacheRendererBaseAddColor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v5; // x19
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
  __int64 v19; // x0
  __int64 v20; // x1
  BattleActorControl_o *v21; // x21
  BattleServantData_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v25; // x1
  UnityEngine_SkinnedMeshRenderer_array *v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x29
  Il2CppObject *v29; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  int v33; // s0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Nullable_Color__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v42; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDED2D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_Color__get_Value__);
    byte_4BDED2D = 1;
  }
  entity = 0LL;
  memset(&v42, 0, sizeof(v42));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0LL)) == 0LL )
  {
    sub_1C22094(performance, method);
  }
  klass = performance->klass;
  v5 = performance;
  v6 = *(unsigned __int16 *)(&performance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&performance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleActorControl__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_1C73E18(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1C22094(0LL, v9);
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
          goto LABEL_16;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_16:
      v14 = sub_1C73E18(v10, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v17 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
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
      v18 = sub_1C73E18(v10, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = (BattleActorControl_o *)v19;
    if ( !v19 )
      sub_1C22094(0LL, v20);
    v22 = *(BattleServantData_o **)(v19 + 456);
    if ( !v22 )
      sub_1C22094(0LL, v20);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v22, &entity, 0LL) )
    {
      if ( !entity )
        sub_1C22094(0LL, v23);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v41, entity, 0LL);
      v42 = v41;
      if ( v41.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v21, 1, 0LL);
        v26 = RendererArray;
        if ( !RendererArray )
          sub_1C22094(0LL, v25);
        v27 = *(_QWORD *)&RendererArray->max_length;
        if ( (int)v27 >= 1 )
        {
          v28 = 0LL;
          do
          {
            if ( v28 >= (unsigned int)v27 )
              sub_1C2209C(RendererArray, v25);
            v29 = (Il2CppObject *)v26->m_Items[v28];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            *(UnityEngine_Color_o *)&v33 = System_Nullable_Color___get_Value(
                                             &v42,
                                             (const MethodInfo_37688FC *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1C22094(v31, v32);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v29,
              *(UnityEngine_Color_o *)&v33,
              (const MethodInfo_33078F8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(v27) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)v27 );
        }
      }
    }
  }
  v37 = *(_QWORD *)v10;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_41;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_41:
    v40 = sub_1C73E18(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v10, *(_QWORD *)(v40 + 8));
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4BDED25 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4BDED25 = 1;
  }
  if ( System_String__Equals_63124520(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2FC80F4 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void __fastcall BattleSequenceManager__ClearExecutingTdInfoCache(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.executingTdInfoCache = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.executingTdInfoCache, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_44184260(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_44184260(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v29; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v40; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v44; // x24

  if ( (byte_4BDECF7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass80_0__CreateCutInStandFigure_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass80_0_TypeInfo);
    byte_4BDECF7 = 1;
  }
  v7 = sub_1C22084(BattleSequenceManager___c__DisplayClass80_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass80_0___ctor((BattleSequenceManager___c__DisplayClass80_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)obj, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)onComplete, v22, v23, v24, v25, v26, v27);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v29 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v29 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v29, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.standFigure, (int64_t)MeshLocal, v32, v33, v34, v35, v36, v37);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v40 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass80_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v40 )
            return UIStandFigureM__SetCharacter_42308116(
                     v40,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v44,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1C22094(Instance, v9);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v5; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  _BOOL4 v13; // w21
  struct System_String_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  _BOOL4 v21; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *v30; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v32; // x3
  BgmPlayArgsGroup_o *v33; // x19
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x20
  float v37; // s0
  int v38; // w28
  System_Nullable_float__o v39; // x21
  const MethodInfo_376BF2C *v40; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Object_array *v48; // x20
  __int64 v49; // x0
  int64_t v50; // x1
  struct BattlePerformance_o *v51; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v53; // x8
  struct BattlePerformance_o *v54; // x8
  System_String_o *v55; // x19
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleSequenceManager_c *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x21
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Collections_Hashtable_o *v111; // x0
  __int64 v112; // x0
  int v113; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v114; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v118; // 0:x0.8
  System_Nullable_float__o v119; // 0:x1.8
  System_Nullable_float__o v120; // 0:x2.8
  System_Nullable_long__o v121; // 0:x0.16

  if ( (byte_4BDED10 & 1) == 0 )
  {
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_10031/*"OnChangeBgmVolume"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDED10 = 1;
  }
  changeBgm = 0LL;
  memset(&v116, 0, sizeof(v116));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v5 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v5, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v13 = 0;
  }
  else
  {
    *p_BackupBgmName = v5;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.BackupBgmName,
      (int64_t)v5,
      (int64_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v14 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v21 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v13 = 1;
  }
  else
  {
    v21 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v23 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v21 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v13 = 1;
  }
  v30 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1C22094(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v21 | System_String__op_Inequality(v30, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1C21EE0(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v48 = (System_Object_array *)performance;
    v49 = StringLiteral_19990/*"from"*/;
    if ( StringLiteral_19990/*"from"*/ )
    {
      v49 = sub_1C21F74(StringLiteral_19990/*"from"*/, v48->obj.klass->_1.element_class);
      if ( !v49 )
        goto LABEL_92;
      v50 = StringLiteral_19990/*"from"*/;
    }
    else
    {
      v50 = 0LL;
    }
    if ( !v48->max_length )
      goto LABEL_91;
    v48->m_Items[0] = (Il2CppObject *)v50;
    sub_1C21DDC((PartyOrganizationUtility_o *)v48->m_Items, v50, v42, v43, v44, v45, v46, v47);
    v59 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v59 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v115.fields._list = v59->static_fields->NoblePhantasmBgmVolumeRate;
    v49 = j_il2cpp_value_box_0(float_TypeInfo, &v115, v56, v57, v58);
    v66 = v49;
    if ( !v49 || (v49 = sub_1C21F74(v49, v48->obj.klass->_1.element_class)) != 0 )
    {
      if ( v48->max_length <= 1 )
        goto LABEL_91;
      v48->m_Items[1] = (Il2CppObject *)v66;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[1], v66, v60, v61, v62, v63, v64, v65);
      v49 = StringLiteral_24401/*"to"*/;
      if ( StringLiteral_24401/*"to"*/ )
      {
        v49 = sub_1C21F74(StringLiteral_24401/*"to"*/, v48->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_92;
        v50 = StringLiteral_24401/*"to"*/;
      }
      else
      {
        v50 = 0LL;
      }
      if ( v48->max_length <= 2 )
        goto LABEL_91;
      v48->m_Items[2] = (Il2CppObject *)v50;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[2], v50, v67, v68, v69, v70, v71, v72);
      *(_DWORD *)&v114.fields.hasValue = 1;
      v49 = j_il2cpp_value_box_0(int_TypeInfo, &v114, v73, v74, v75);
      v82 = v49;
      if ( !v49 || (v49 = sub_1C21F74(v49, v48->obj.klass->_1.element_class)) != 0 )
      {
        if ( v48->max_length <= 3 )
          goto LABEL_91;
        v48->m_Items[3] = (Il2CppObject *)v82;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[3], v82, v76, v77, v78, v79, v80, v81);
        v49 = StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          v49 = sub_1C21F74(StringLiteral_24360/*"time"*/, v48->obj.klass->_1.element_class);
          if ( !v49 )
            goto LABEL_92;
          v50 = StringLiteral_24360/*"time"*/;
        }
        else
        {
          v50 = 0LL;
        }
        if ( v48->max_length <= 4 )
          goto LABEL_91;
        v48->m_Items[4] = (Il2CppObject *)v50;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[4], v50, v83, v84, v85, v86, v87, v88);
        v113 = 1056964608;
        v49 = j_il2cpp_value_box_0(float_TypeInfo, &v113, v89, v90, v91);
        v98 = v49;
        if ( !v49 || (v49 = sub_1C21F74(v49, v48->obj.klass->_1.element_class)) != 0 )
        {
          if ( v48->max_length <= 5 )
            goto LABEL_91;
          v48->m_Items[5] = (Il2CppObject *)v98;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[5], v98, v92, v93, v94, v95, v96, v97);
          v49 = StringLiteral_22688/*"onupdate"*/;
          if ( StringLiteral_22688/*"onupdate"*/ )
          {
            v49 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v48->obj.klass->_1.element_class);
            if ( !v49 )
              goto LABEL_92;
            v50 = StringLiteral_22688/*"onupdate"*/;
          }
          else
          {
            v50 = 0LL;
          }
          if ( v48->max_length <= 6 )
            goto LABEL_91;
          v48->m_Items[6] = (Il2CppObject *)v50;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[6], v50, v99, v100, v101, v102, v103, v104);
          v49 = StringLiteral_10031/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10031/*"OnChangeBgmVolume"*/ )
          {
            v50 = 0LL;
LABEL_84:
            if ( v48->max_length > 7 )
            {
              v48->m_Items[7] = (Il2CppObject *)v50;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v48->m_Items[7], v50, v105, v106, v107, v108, v109, v110);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v111 = iTween__Hash(v48, 0LL);
              iTween__ValueTo(gameObject, v111, 0LL);
              return;
            }
LABEL_91:
            sub_1C2209C(v49, v50);
          }
          v49 = sub_1C21F74(StringLiteral_10031/*"OnChangeBgmVolume"*/, v48->obj.klass->_1.element_class);
          if ( v49 )
          {
            v50 = StringLiteral_10031/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v112 = sub_1C220B8(v49);
    sub_1C21F60(v112, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v13, this->fields.BackupBgmName, v32);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v33 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v115,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v116 = v115;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v116,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v34 )
              break;
            current = v116.fields._current;
            if ( !v116.fields._current )
              sub_1C22094(v34, v35);
            v37 = (float)(__int64)v116.fields._current[2].klass + -800.0;
            if ( v37 == INFINITY )
              v38 = 0x80000000;
            else
              v38 = (int)v37;
            v114 = 0LL;
            v118 = (System_Nullable_float__o)&v114;
            System_Nullable_float____ctor(v118, 0.5, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
            v39 = v114;
            v121.fields.value = v38 & (unsigned int)~(v38 >> 31);
            *(_OWORD *)&v115.fields._list = 0uLL;
            *(_QWORD *)&v121.fields.hasValue = &v115;
            System_Nullable_long____ctor(v121, Method_System_Nullable_long___ctor__, v40);
            v119 = 0LL;
            v120 = v39;
            BgmPlayArgs__Update(
              (BgmPlayArgs_o *)current,
              v119,
              v120,
              *(System_Nullable_long__o *)&v115.fields._list,
              0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v116,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_39559092(v33, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v13 )
  {
    v51 = this->fields.performance;
    if ( !v51 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v51->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v53 = this->fields.performance;
      if ( v53 )
      {
        performance = (__int64)v53->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v54 = this->fields.performance;
          if ( v54 )
          {
            performance = (__int64)v54->fields.logic;
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
  v55 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v55, 0LL);
}


bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
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
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4BDED27 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1C21E38(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass144_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass144_0_TypeInfo);
    byte_4BDED27 = 1;
  }
  v7 = sub_1C22084(BattleSequenceManager___c__DisplayClass144_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass144_0___ctor((BattleSequenceManager___c__DisplayClass144_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)checkBgmName, v10, v11, v12, v13, v14, v15);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v17 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass144_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50057592(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_2FBD178 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v14; // x8

  v6 = this;
  if ( (byte_4BDED07 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED07 = 1;
  }
  FadeTargetPanelIndexs = v6->fields.FadeTargetPanelIndexs;
  v6->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_23;
  v8 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1C2209C(this, method);
      this = (BattleSequenceManager_o *)v6->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v9 + 1],
                                        0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Panel )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Panel, 0LL);
        this = (BattleSequenceManager_o *)TweenAlpha__Begin(gameObject, time, targetAlpha, 0LL);
      }
      LODWORD(v8) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_14;
    }
LABEL_23:
    sub_1C22094(this, method);
  }
LABEL_14:
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_23;
  root_drop = (UnityEngine_Object_o *)performance->fields.root_drop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v6->fields.performance;
    if ( !v14 )
      goto LABEL_23;
    this = (BattleSequenceManager_o *)v14->fields.root_drop;
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
  __int64 v6; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__50336088; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  BattleSequenceManager___c_c *v16; // x0
  System_Comparison_T__o *_9__77_0; // x23
  Il2CppObject *v18; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Func_object__bool__o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x21
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  BattleSequenceManager___c_c *v29; // x0
  System_Comparison_T__o *_9__77_2; // x19
  Il2CppObject *v31; // x22
  struct BattleSequenceManager___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BDECF6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1C21E38(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1C21E38(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1C21E38(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_0__);
    sub_1C21E38(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_2__);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass77_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
    sub_1C21E38(&BattleSequenceManager___c_TypeInfo);
    byte_4BDECF6 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v6 = sub_1C22084(BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass77_0___ctor((BattleSequenceManager___c__DisplayClass77_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)syncGroupName, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__50336088 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                                           sequence,
                                                                                           (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v15 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v15,
    ComponentsInChildren_object__50336088,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v16 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v16 = BattleSequenceManager___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v16->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleSequenceManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__77_0,
      v18,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__77_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__77_0,
      (int64_t)_9__77_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v15,
    _9__77_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass77_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v15,
          (System_Func_T__bool__o *)v26,
          (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__50336088 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                                             sequence,
                                                                                             (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v27 )
    {
      System_Collections_Generic_List_object___AddRange(
        v27,
        ComponentsInChildren_object__50336088,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                             sequence,
                                                             (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v27,
        v28,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v29 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v29 = BattleSequenceManager___c_TypeInfo;
      }
      _9__77_2 = (System_Comparison_T__o *)v29->static_fields->__9__77_2;
      if ( !_9__77_2 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleSequenceManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__77_2 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__77_2,
          v31,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_2__,
          0LL);
        v32 = BattleSequenceManager___c_TypeInfo->static_fields;
        v32->__9__77_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__77_2;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v32->__9__77_2, (int64_t)_9__77_2, v33, v34, v35, v36, v37, v38);
      }
      System_Collections_Generic_List_object___Sort_56953720(
        v27,
        _9__77_2,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        v27,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v40.fields._current )
          sub_1C22094(0LL, v39);
      }
      while ( (((__int64 (*)(void))v40.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1C22094(ComponentsInChildren_object__50336088, v8);
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
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4BDECFA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECFA = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(actor, *(_QWORD *)&curLimCnt);
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

  if ( (byte_4BDED2C & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_4BDED2C = 1;
  }
  v9.fields.r = 0.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 0.0;
  *(UnityEngine_Color_o *)&v5 = BasicHelper__GetValue_object__Color_(
                                  (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
                                  (Il2CppObject *)inputRenderer,
                                  v9,
                                  (const MethodInfo_2F9E4AC *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *Instance; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDED1A & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6165/*"Enemy"*/);
    sub_1C21E38(&StringLiteral_10880/*"Player"*/);
    byte_4BDED1A = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6165/*"Enemy"*/;
  else
    v8 = &StringLiteral_10880/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v18 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v15 = System_String__Format_63129848(format, v9, v14, 0LL);
  if ( !Instance )
    sub_1C22094(v15, v16);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v15, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass125_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v9; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4BDED1B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1C21E38(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass125_0__GetTargetPosIndexTransform_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass125_0_TypeInfo);
    byte_4BDED1B = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass125_0_o *)sub_1C22084(BattleSequenceManager___c__DisplayClass125_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass125_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass125_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v9,
                                        (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0LL);
LABEL_9:
    sub_1C22094(v6, v7);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)fxdVoice, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1C21DDC((PartyOrganizationUtility_o *)fxdVoice, (int64_t)fixedVoice, v10, v11, v12, v13, v14, v15);
  }
  return fixedVoice != 0LL;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *ExecutingTdInfo; // x0
  Il2CppObject *Component_object; // x19
  BattleSequenceManager_c *v10; // x0

  if ( (byte_4BDED26 & 1) == 0 )
  {
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED26 = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  ExecutingTdInfo = this->fields.actor;
  if ( !ExecutingTdInfo )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       ExecutingTdInfo,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return 0;
  v10 = BattleSequenceManager_TypeInfo;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = (UnityEngine_GameObject_o *)BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v10);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_1C22094(ExecutingTdInfo, v7);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           ExecutingTdInfo->fields.m_CachedPtr,
           0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4BDED28 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4BDED28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v2[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[4].klass;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1C22094(v2, v3);
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
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4BDED2A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED2A = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v4);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4BDECF8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDECF8 = 1;
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
    sub_1C22094(IsNullOrEmpty, v8);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v18[4] = (Il2CppClass *)bgmName;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)bgmName, v9, v10, v11, v12, v13, v14);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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

  if ( (byte_4BDECF9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECF9 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1C22094(0LL, v8);
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
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *klass; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v14; // x21
  __int64 *v15; // x8
  struct BattlePerformance_o *v16; // x9
  System_String_o *v17; // x19
  BattleData_o *v18; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDED16 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19299/*"en_Parts_Up01"*/);
    sub_1C21E38(&StringLiteral_19298/*"en_Parts_Under01"*/);
    byte_4BDED16 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)klass & 1) == 0 )
    {
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v10 = this->fields.performance;
        if ( !v10 )
          goto LABEL_54;
        v11 = v10->fields.data;
        if ( !v11 )
          goto LABEL_54;
        if ( v11->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                klass = this->fields.SingleTarget;
                if ( !klass )
                  goto LABEL_54;
                v14 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v14,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_54;
                  if ( LOBYTE(v14[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v15 = &StringLiteral_19299/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_19298/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_54;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v18 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v17,
                                                                    0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0LL);
                        if ( klass )
                        {
                          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v23 = v20;
                            v24 = v21;
                            v25 = v22;
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
                                v31.fields.z = v25 - z;
                                v31.fields.y = v24 - y;
                                v31.fields.x = v23 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v31, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1C22094(klass, v7);
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
    sub_1C22094(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (PartyOrganizationUtility_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1C21DDC(p_BgChangedCallback, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v9; // x19
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  float v26; // s9
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4BDED0B & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BDED0B = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v6 )
      sub_1C22094(0LL, v7);
    klass = v6->klass;
    v9 = v6;
    v10 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v9,
            *(_QWORD *)(p_method + 8));
    if ( !v14 )
      sub_1C22094(0LL, v13);
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
            goto LABEL_16;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_16:
        v18 = sub_1C73E18(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_23;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_23:
        v22 = sub_1C73E18(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C22094(0LL, v24);
      v25 = *(System_String_o **)(v23 + 16);
      v26 = *(float *)(v23 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v25, v26 * newValue, 0LL);
    }
    v27 = *(_QWORD *)v14;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_1C73E18(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4BDED2B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_4BDED2B = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_3307AB8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v18; // w9
  Il2CppObject *v19; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v21; // w2
  int v22; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v33; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v37; // x20
  __int64 v38; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 v40; // x23
  UnityEngine_Object_o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UnityEngine_GameObject_array *v48; // x8
  struct UnityEngine_GameObject_array *v49; // x9
  int64_t v50; // x1
  struct UnityEngine_GameObject_array *v51; // x27
  __int64 v52; // x8
  unsigned __int64 v53; // x21
  UnityEngine_Object_o *v54; // x23
  char v55; // w22
  Il2CppObject *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v58; // x20
  __int64 v59; // x23
  unsigned __int64 v60; // x9
  unsigned __int64 v61; // x27
  UnityEngine_Object_o *v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct UnityEngine_GameObject_array *v69; // x8
  struct UnityEngine_GameObject_array *v70; // x9
  int64_t v71; // x1
  struct UnityEngine_GameObject_array *v72; // x23
  __int64 v73; // x8
  unsigned __int64 v74; // x27
  int v75; // w28
  UnityEngine_Object_o *v76; // x22
  char v77; // w21
  Il2CppObject *v78; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v80; // x20
  __int64 v81; // x8
  unsigned __int64 v82; // x22
  UnityEngine_Object_o *v83; // x21
  Il2CppObject *v84; // x0
  const MethodInfo *v85; // x2
  struct UnityEngine_GameObject_array *v86; // x20
  __int64 v87; // x8
  unsigned __int64 v88; // x22
  UnityEngine_Object_o *v89; // x21
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v94; // x2
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  UnityEngine_Camera_o *v101; // x21
  int32_t cullingMask; // w22
  char v103; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v105; // w22
  char v106; // w0
  UnityEngine_Object_o *v107; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  BattlePerformance_o *v109; // x19
  int32_t v110; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BDED0D & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&CommonUI_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9696/*"NoblePhantasm/CutIns"*/);
    sub_1C21E38(&StringLiteral_3273/*"Battle2D"*/);
    byte_4BDED0D = 1;
  }
  entity = 0LL;
  memset(&v114, 0, sizeof(v114));
  memset(&v113, 0, sizeof(v113));
  this->fields.IsPlaying = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v3);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v6);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v8);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v9);
  BattleSequenceManager__restoreBattleActorTransform(this, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v11) )
    BattleSequenceManager__CrossFadeBgm(this, v12);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v12);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v114 = v112;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v114,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v114.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v114,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v18 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v113 = v112;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v113,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v19 = v113.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v19, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v113,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v21 = createdObjects->fields._size;
  v22 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v22;
  if ( v21 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v21, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v25 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v25, 0LL);
    *p_seqObject = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.seqObject, 0LL, v26, v27, v28, v29, v30, v31);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v33 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v33->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v33->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + p_actorlist->max_length )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v37 = 4LL;
      v38 = 32LL;
      while ( 1 )
      {
        max_length = saveWaitPlayer->max_length;
        v40 = v37 - 4;
        if ( v37 - 4 >= (int)max_length )
          break;
        if ( v40 >= max_length )
          goto LABEL_186;
        v41 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v37);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v48 = this->fields.saveWaitPlayer;
          if ( !v48 )
            goto LABEL_106;
          if ( v40 >= v48->max_length )
            goto LABEL_186;
          v49 = (*p_performance)->fields.p_actorlist;
          if ( !v49 )
            goto LABEL_106;
          if ( v40 >= v49->max_length )
            goto LABEL_186;
          v50 = *((_QWORD *)&v48->obj.klass + v37);
          *(Il2CppClass **)((char *)&v49->obj.klass + v38) = (Il2CppClass *)v50;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v49 + v38), v50, v42, v43, v44, v45, v46, v47);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v37;
        v38 += 8LL;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v33 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v51 = v33->fields.p_actorlist;
    if ( !v51 )
      goto LABEL_106;
    v52 = *(_QWORD *)&v51->max_length;
    if ( (int)v52 >= 1 )
    {
      v53 = 0LL;
      while ( v53 < (unsigned int)v52 )
      {
        v54 = (UnityEngine_Object_o *)v51->m_Items[v53];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v53,
                                                   (const MethodInfo_3605D80 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v54 )
            goto LABEL_106;
          v55 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v54, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v54,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v55 & 1, 0LL);
          }
        }
        LODWORD(v52) = v51->max_length;
        if ( (__int64)++v53 >= (int)v52 )
          goto LABEL_92;
      }
LABEL_186:
      sub_1C2209C(transform, v5);
    }
    LODWORD(v53) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v58 = 4LL;
      v59 = 32LL;
      while ( 1 )
      {
        v60 = saveWaitEnemy->max_length;
        v61 = v58 - 4;
        if ( v58 - 4 >= (int)v60 )
          break;
        if ( v61 >= v60 )
          goto LABEL_186;
        v62 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v58);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v69 = this->fields.saveWaitEnemy;
          if ( !v69 )
            goto LABEL_106;
          if ( v61 >= v69->max_length )
            goto LABEL_186;
          v70 = (*p_performance)->fields.e_actorlist;
          if ( !v70 )
            goto LABEL_106;
          if ( v61 >= v70->max_length )
            goto LABEL_186;
          v71 = *((_QWORD *)&v69->obj.klass + v58);
          *(Il2CppClass **)((char *)&v70->obj.klass + v59) = (Il2CppClass *)v71;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v70 + v59), v71, v63, v64, v65, v66, v67, v68);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v58;
        v59 += 8LL;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v72 = (*p_performance)->fields.e_actorlist;
    if ( !v72 )
      goto LABEL_106;
    v73 = *(_QWORD *)&v72->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0LL;
      v75 = v53;
      while ( v74 < (unsigned int)v73 )
      {
        v76 = (UnityEngine_Object_o *)v72->m_Items[v74];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v75 + v74,
                                                   (const MethodInfo_3605D80 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_106;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0LL);
          v78 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v76,
                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v78,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v78 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v78[2].monitor;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v77 & 1, 0LL);
          }
        }
        LODWORD(v73) = v72->max_length;
        if ( (__int64)++v74 >= (int)v73 )
          goto LABEL_124;
      }
      goto LABEL_186;
    }
LABEL_124:
    v33 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v33->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v80 = (*p_performance)->fields.p_actorlist;
  if ( !v80 )
    goto LABEL_106;
  v81 = *(_QWORD *)&v80->max_length;
  if ( (int)v81 >= 1 )
  {
    v82 = 0LL;
    while ( v82 < (unsigned int)v81 )
    {
      v83 = (UnityEngine_Object_o *)v80->m_Items[v82];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_106;
        v84 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v83,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v84, v85);
      }
      LODWORD(v81) = v80->max_length;
      if ( (__int64)++v82 >= (int)v81 )
        goto LABEL_144;
    }
    goto LABEL_186;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v86 = (*p_performance)->fields.e_actorlist;
  if ( !v86 )
    goto LABEL_106;
  v87 = *(_QWORD *)&v86->max_length;
  if ( (int)v87 >= 1 )
  {
    v88 = 0LL;
    while ( v88 < (unsigned int)v87 )
    {
      v89 = (UnityEngine_Object_o *)v86->m_Items[v88];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v89, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v89 )
          goto LABEL_106;
        v90 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v89,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v90, v91);
      }
      LODWORD(v87) = v86->max_length;
      if ( (__int64)++v88 >= (int)v87 )
        goto LABEL_155;
    }
    goto LABEL_186;
  }
LABEL_155:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_106;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.standFigure, 0LL, v95, v96, v97, v98, v99, v100);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v94) )
    BattleSequenceManager__ReleaseCpk(this, v5);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v101 = this->fields.actorCamera;
  if ( !v101 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v103 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3273/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v101, (1 << v103) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v105 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v106 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3273/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v105 & ~(1 << v106), 0LL);
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
  v107 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v107, 0LL, 0LL);
  v5 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v5 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_106:
    sub_1C22094(transform, v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v5,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_176:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9696/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v109 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v110 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v109, v110, CurrentGroundType, 0, 0LL);
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
  BgmPlayArgsGroup_o *v3; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v9; // x19
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  int64_t v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Func_object__bool__o *v31; // x23
  Il2CppObject *object; // x0
  const MethodInfo_376BF2C *v33; // x3
  BgmPlayArgs_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Nullable_long__o v41; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v42; // 0:x1.8
  System_Nullable_float__o v43; // 0:x2.8
  System_Nullable_long__o v44; // 0:x0.16

  if ( (byte_4BDED12 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C21E38(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass115_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
    byte_4BDED12 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v3 )
    {
      v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(v3, 0LL);
      v5 = System_Linq_Enumerable__ToArray_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v4,
             (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0LL)) == 0LL) )
      {
        sub_1C22094(v5, v6);
      }
      klass = v5->obj.klass;
      v9 = v5;
      v10 = *(unsigned __int16 *)(&v5->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v5->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C73E18(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v14 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8));
      if ( !v14 )
        sub_1C22094(0LL, v13);
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
              goto LABEL_20;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_20:
          v18 = sub_1C73E18(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = sub_1C22084(BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass115_0___ctor((BattleSequenceManager___c__DisplayClass115_0_o *)v19, 0LL);
        v20 = *(_QWORD *)v14;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1C73E18(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_1C22094(v24, v24);
        *(_QWORD *)(v19 + 16) = v24;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 16), v24, v25, v26, v27, v28, v29, v30);
        v31 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass115_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v7,
                   (System_Func_T__bool__o *)v31,
                   (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v44.fields.value = (int64_t)object[2].klass;
        else
          v44.fields.value = 0LL;
        v34 = *(BgmPlayArgs_o **)(v19 + 16);
        *(_QWORD *)&v41.fields.hasValue = 0LL;
        v41.fields.value = 0LL;
        *(_QWORD *)&v44.fields.hasValue = &v41;
        System_Nullable_long____ctor(v44, Method_System_Nullable_long___ctor__, v33);
        if ( !v34 )
          sub_1C22094(v35, v36);
        v42 = 0LL;
        v43 = 0LL;
        BgmPlayArgs__Update(v34, v42, v43, v41, 0LL);
      }
      v37 = *(_QWORD *)v14;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_39;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_39:
        v40 = sub_1C73E18(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
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

  if ( (byte_4BDED0E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED0E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1C22094(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDED13 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager__ReleaseCpk_b__116_0__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9699/*"NoblePhantasm_"*/);
    byte_4BDED13 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v32 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v32, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_9699/*"NoblePhantasm_"*/, v8, 0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v18 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), v18, v9, v10, v11, v12, v13, v14);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__116_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v28 = DelayInvokeMethodList->fields._items,
        v29 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v28) )
  {
LABEL_17:
    sub_1C22094(Instance, v4);
  }
  v30 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v21,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    DelayInvokeMethodList->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fixedVoice, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.intactBgmList, 0LL, v2, v3, v4, v5, v6, v7);
}


ExecutingTdInfo_o *__fastcall BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1

  if ( (byte_4BDED2E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4BDED2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v2 )
      goto LABEL_11;
    if ( v2[24].monitor )
    {
      v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v2 )
        return (ExecutingTdInfo_o *)v2[24].monitor;
LABEL_11:
      sub_1C22094(v2, v3);
    }
  }
  return ExecutingTdInfo__GetDefault(0LL);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDED11 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BDED11 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.backupBgmPlayArgsGroup, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t limitCount; // w21
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Object_o *v11; // x0
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4BDED04 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3264/*"Battle/Prefab/"*/);
    byte_4BDED04 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)Manager__LoadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v9,
                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v10 = System_String__Concat_63115476((System_String_o *)StringLiteral_3264/*"Battle/Prefab/"*/, name, 0LL);
  v11 = UnityEngine_Resources__Load(v10, 0LL);
  if ( v11 )
  {
    if ( (UnityEngine_GameObject_c *)v11->klass == UnityEngine_GameObject_TypeInfo )
      v12 = v11;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)v12;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v9,
                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v7; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v9; // x20
  System_String_o **v10; // x8
  __int64 v11; // x9
  __int64 v12; // x25
  System_String_o *v13; // x21
  unsigned __int64 v14; // x26
  unsigned int v15; // w8
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0
  struct BattlePerformance_o *v23; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v27; // s9
  int v28; // s2
  unsigned int v29; // s0
  float v30; // s1
  struct BattlePerformance_o *v31; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDED17 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9533/*"N_Enemy2"*/);
    sub_1C21E38(&StringLiteral_9534/*"N_Player2"*/);
    byte_4BDED17 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v7 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9533/*"N_Enemy2"*/
                           : &StringLiteral_9534/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 352LL;
  if ( LOBYTE(actor[20].klass) )
    v11 = 360LL;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1C22094(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1C2209C(actor, method);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0LL);
        if ( !v16 )
          goto LABEL_55;
        v18 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !v18 )
          goto LABEL_55;
        v19 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v18, 0LL);
        if ( !v19 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = this->fields.performance;
        if ( !v23 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v23->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v9[20].klass) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            v27 = (unsigned int)UnityEngine_Transform__get_position(v18, 0LL);
            *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_position(v18, 0LL);
            if ( !transform )
              goto LABEL_55;
            v29 = v27;
            v30 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v28 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v16, 0, 0LL);
          v31 = this->fields.performance;
          if ( !v31 )
            goto LABEL_55;
          data = v31->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[20].klass) )
            UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        }
      }
      v15 = *(_DWORD *)(v12 + 24);
      ++v14;
    }
    while ( (__int64)v14 < (int)v15 );
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
    sub_1C22094(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1C21DDC(
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
  void *battleTargetList; // x0
  int32_t v6; // w21

  if ( (byte_4BDED23 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4BDED23 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v6 = 0;
  while ( v6 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v6,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
        ++v6;
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
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1C22094(battleTargetList, isReset);
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
  sub_1C21DDC(
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_String_array *BgmNameListWithIds; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDED24 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDED24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.intactBgmList,
    (int64_t)BgmNameListWithIds,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  BattleSequenceManager_o *v11; // x19

  v4 = this;
  if ( (byte_4BDED15 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED15 = 1;
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
    sub_1C22094(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v9 = v4->fields.performance;
    if ( v9 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v9->fields.root_field, 0LL);
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
            v11 = this;
            if ( !byte_4BD6BB1 )
            {
              this = (BattleSequenceManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB1 = 1;
            }
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v11,
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
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  int32_t v8; // w21
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4BDECFC & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4BDECFC = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1C22094(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          *(BattleFBXComponent_o **)&klass->_1.byval_arg.bits,
          isStart,
          v9);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v8;
        if ( actor )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void __fastcall BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDECFD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16889/*"_y0"*/);
    byte_4BDECFD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v6 )
  {
    if ( !fbx )
      sub_1C22094(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16889/*"_y0"*/, 0LL);
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
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *Component_object; // x20
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x26
  System_String_o *v11; // x0
  BattleSequenceManager_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v17; // x0
  BattleSequenceManager_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  unsigned __int64 v21; // x8
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDECFB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_2276/*"Actors/Actor"*/);
    byte_4BDECFB = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1C22094(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0LL;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0LL);
    v12 = (BattleSequenceManager_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_2276/*"Actors/Actor"*/, v11, 0LL);
    v14 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v12,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v12,
                                    v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v9 < (int)max_length )
      {
        if ( v9 >= max_length )
LABEL_28:
          sub_1C2209C(seqObject, playerList);
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v14 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v14,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v9;
  }
  while ( v10 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v22 = i + 4;
    v17 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = (BattleSequenceManager_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_2276/*"Actors/Actor"*/, v17, 0LL);
    v20 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v18,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v18,
                                    v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v21 = enemyList->max_length;
      if ( (__int64)i < (int)v21 )
      {
        if ( i >= v21 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v20 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v20,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  __int64 v10; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v14; // x25
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *v21; // x21
  int v22; // w8
  void *v23; // x25
  unsigned int v24; // w20
  __int64 v25; // x8
  int v26; // w8
  void *v27; // x25
  unsigned int v28; // w20
  __int64 v29; // x8
  int v30; // w8
  void *v31; // x25
  unsigned int v32; // w20
  __int64 v33; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v35; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v37; // x22
  int v38; // w29
  int i; // w24
  __int64 v40; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int32_t v53; // w21
  struct UnityEngine_GameObject_o *v54; // x21
  Il2CppObject *v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  BattlePerformance_o *v64; // x0
  int32_t v65; // w20
  UnityEngine_Object_o *v66; // x21
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *v69; // x22
  BattleSequenceManager_BattleTarget_o *v70; // x21
  __int64 v71; // x1
  BattlePerformance_o *v72; // x0
  __int64 ServantPosIndex; // x0
  __int64 v74; // x1
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x8
  int v87; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v88; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BDED14 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1C21E38(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass118_0__SetupTargetInfo_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass118_0_TypeInfo);
    byte_4BDED14 = 1;
  }
  memset(&j, 0, sizeof(j));
  v3 = sub_1C22084(BattleSequenceManager___c__DisplayClass118_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass118_0___ctor((BattleSequenceManager___c__DisplayClass118_0_o *)v3, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SingleTarget, 0LL, v4, v5, v6, v7, v8, v9);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v14 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v14,
        (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v14;
        v21 = (PartyOrganizationUtility_o *)(v3 + 16);
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v14, v15, v16, v17, v18, v19, v20);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v22 = *((_DWORD *)actor + 6);
            v23 = actor;
            if ( v22 >= 1 )
            {
              v24 = 0;
              while ( v24 < v22 )
              {
                v25 = *((_QWORD *)v23 + (int)v24 + 4);
                if ( !v25 )
                  goto LABEL_78;
                v10 = *(unsigned int *)(v25 + 28);
                if ( (_DWORD)v10 )
                {
                  actor = v21->klass;
                  if ( !v21->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v10,
                                    (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v22 = *((_DWORD *)v23 + 6);
                if ( (int)++v24 >= v22 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1C2209C(actor, v10);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v26 = *((_DWORD *)actor + 6);
              v27 = actor;
              if ( v26 >= 1 )
              {
                v28 = 0;
                while ( v28 < v26 )
                {
                  v29 = *((_QWORD *)v27 + (int)v28 + 4);
                  if ( !v29 )
                    goto LABEL_78;
                  v10 = *(unsigned int *)(v29 + 40);
                  if ( (_DWORD)v10 )
                  {
                    actor = v21->klass;
                    if ( !v21->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v10,
                                      (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v26 = *((_DWORD *)v27 + 6);
                  if ( (int)++v28 >= v26 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v30 = *((_DWORD *)actor + 6);
                v31 = actor;
                if ( v30 >= 1 )
                {
                  v32 = 0;
                  while ( v32 < v30 )
                  {
                    v33 = *((_QWORD *)v31 + (int)v32 + 4);
                    if ( !v33 )
                      goto LABEL_78;
                    v10 = *(unsigned int *)(v33 + 28);
                    if ( (_DWORD)v10 )
                    {
                      actor = v21->klass;
                      if ( !v21->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v10,
                                        (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v30 = *((_DWORD *)v31 + 6);
                    if ( (int)++v32 >= v30 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v35 = (System_Action_object__o *)sub_1C22084(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v35,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass118_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v35,
                    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v37 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v37,
                  (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v21->klass;
                if ( v21->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v88,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v87 = 0;
                  j = v88;
                  v38 = 0;
LABEL_41:
                  for ( i = v38; ; ++i )
                  {
                    v38 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1C22094(0LL, v40);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1C22094(0LL, v44);
                    v45 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v45 )
                      sub_1C22094(0LL, v46);
                    if ( (klass_low != 0) == (LOBYTE(v45[30].klass) != 0) )
                    {
                      ++v87;
                      goto LABEL_41;
                    }
                    if ( !v37 )
                      sub_1C22094(v45, v46);
                    System_Collections_Generic_HashSet_int___Add(
                      v37,
                      current,
                      (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v87 && i == 1 )
                  {
                    v21->klass = (PartyOrganizationUtility_c *)v37;
                    sub_1C21DDC(v21, (int64_t)v37, v47, v48, v49, v50, v51, v52);
                  }
                  actor = v21->klass;
                  if ( v21->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v88,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v53 = -1;
                      for ( j = v88;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v53 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v53, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v54 = (struct UnityEngine_GameObject_o *)actor;
                      v55 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v54;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&this->fields.SingleTarget,
                        (int64_t)v54,
                        v56,
                        v57,
                        v58,
                        v59,
                        v60,
                        v61);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v55, v62);
                    }
                    if ( v37 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v88,
                        v37,
                        (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v88;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v64 = this->fields.performance;
                        if ( !v64 )
                          sub_1C22094(0LL, v63);
                        v65 = (int32_t)j.fields._current;
                        v66 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v64,
                                                        (int32_t)j.fields._current,
                                                        0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v67 = UnityEngine_Object__op_Equality(v66, 0LL, 0LL);
                        if ( !v67 )
                        {
                          if ( !v66 )
                            sub_1C22094(v67, v68);
                          v69 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v66,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v70 = (BattleSequenceManager_BattleTarget_o *)sub_1C22084(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v70, 0LL);
                          v72 = this->fields.performance;
                          if ( !v72 )
                            sub_1C22094(0LL, v71);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v72, v65, 0LL);
                          if ( !v70 )
                            sub_1C22094(ServantPosIndex, v74);
                          BattleSequenceManager_BattleTarget__setup(
                            v70,
                            (BattleActorControl_o *)v69,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1C22094(0LL, v75);
                          items = battleTargetList->fields._items;
                          v84 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1C22094(battleTargetList, v75);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v70,
                              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v86 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v86[4] = (Il2CppClass *)v70;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)(v86 + 4),
                              (int64_t)v70,
                              v76,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1C22094(actor, v10);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C22094(0LL, method);
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
  if ( (byte_4BDED0A & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED0A = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(this, isFullScreen);
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v12; // x4
  BaseMonoBehaviour_o *v13; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *monitor; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v28; // x1
  Il2CppClass **v29; // x0
  int v30; // w22
  UnityEngine_Component_o *v31; // x0
  BattleSyncTransformComponent_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4BDED19 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED19 = 1;
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
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                          v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v13 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        monitor = (UnityEngine_Transform_o *)v13[10].monitor;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v12);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v13,
                                            dummyActorPrefab,
                                            monitor,
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
        v26 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v28 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v28, v19, v20, v21, v22, v23, v24);
        }
        v30 = 0;
      }
      else
      {
        v30 = 1;
      }
      v31 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0LL);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v31,
                                          (const MethodInfo_2F9DB30 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v32 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v30 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v32;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v39 = *(_QWORD *)&this->fields.m_CachedPtr;
        v40 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v39 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = v39 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v42 + 32) = tlcont;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)tlcont, v33, v34, v35, v36, v37, v38);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1C22094(this, tlcont);
    }
  }
}


void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  void *v17; // x8
  unsigned __int64 v18; // x26
  NoblePhantasmTargetOverwriteTransform_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDED29 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDED29 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      battleTargetList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v21,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v6 )
        break;
      if ( !v21.fields._current )
        sub_1C22094(v6, v7);
      monitor = (UnityEngine_Object_o *)v21.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !monitor )
          sub_1C22094(v9, v10);
        v11 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
        {
          v13 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v13 )
            sub_1C22094(0LL, v12);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v13,
                                                                    (const MethodInfo_3000E90 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1C22094(IsNullOrEmpty, v16);
            v17 = Components_object[1].monitor;
            if ( (int)v17 >= 1 )
            {
              v18 = 0LL;
              do
              {
                if ( v18 >= (unsigned int)v17 )
                  sub_1C2209C(IsNullOrEmpty, v16);
                v19 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v18);
                if ( isOverwrite )
                {
                  if ( !v19 )
                    sub_1C22094(0LL, v16);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v19 )
                    sub_1C22094(0LL, v16);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v17) = Components_object[1].monitor;
                ++v18;
              }
              while ( (__int64)v18 < (int)v17 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1C22094(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1C21DDC(
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
  float delayInvokeTimer; // s8
  __int64 v4; // x1
  float v5; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDECF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4BDECF4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v5 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v5;
    if ( v5 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        DelayInvokeMethodList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v10.fields._current[1].monitor)(
            v10.fields._current[4].klass,
            v10.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_1C22094(DelayInvokeMethodList, v4);
      size = v7->fields._size;
      v9 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v9;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDED0C & 1) == 0 )
  {
    sub_1C21E38(&BattleSequenceManager__WaitEndSequence_d__109_TypeInfo);
    byte_4BDED0C = 1;
  }
  v3 = sub_1C22084(BattleSequenceManager__WaitEndSequence_d__109_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__109___ctor((BattleSequenceManager__WaitEndSequence_d__109_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__116_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDED31 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4BDED31 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_1C22094(ReleaseSoundNames, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__89_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1C22094(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, 0LL);
}


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

  if ( (byte_4BDECFF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDECFF = 1;
  }
  FlagRequestNumber = System_String__Concat_63115476((System_String_o *)StringLiteral_16399/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_43825576((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1C22094(FlagRequestNumber, v10);
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
  BattlePerformance_o *performance; // x23
  System_Action_o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4BDED08 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4BDED08 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.BgChangedCallback,
    (int64_t)callback,
    *(int64_t *)&tp,
    parentCamera,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v8,
    v9);
  performance = this->fields.performance;
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1C22094(v23, v24);
  v25.fields.z = v15;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v25.fields.x = v17;
  v25.fields.y = v16;
  BattlePerformance__ForceChangeBg(performance, id, tp, v25, v26, 1, parentCamera, v22, 0LL);
}


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

  if ( (byte_4BDED01 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDED01 = 1;
  }
  FlagRequestNumber = System_String__Concat_63115476((System_String_o *)StringLiteral_16399/*"_"*/, labelName, 0LL);
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
    sub_1C22094(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4BDED1E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4BDED1E = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1C22094(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDED20 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4BDED20 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BDECF0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECF0 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1C22094(0LL, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BDECF3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4BDECF3 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C73D14(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
  return BYTE1(Instance[8].monitor) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_4BDECF1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECF1 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_14:
    sub_1C22094(v4, v5);
  return v10->fields.systemflg_acceleration > 1;
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


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_4BDECF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECF2 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_27;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_object + 57);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_27:
    sub_1C22094(Component_object, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 57), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v11, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_27;
  Component_object = v13->fields.data;
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
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
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct UnityEngine_Transform_o *parent; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x1
  System_Collections_Generic_Dictionary_object__int__o *v69; // x20
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_HashSet_T__o *v76; // x20
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4BDED06 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4BDED06 = 1;
  }
  this->fields.performance = performance;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.performance,
    (int64_t)performance,
    (int64_t)actor,
    (int32_t)players,
    (System_String_o *)enemies,
    (BattleSetupInfo_o *)camera,
    (FollowerInfo_o *)bg,
    (PartyListViewItem_o *)method);
  this->fields.actor = actor;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actor, (int64_t)actor, v15, v16, v17, v18, v19, v20);
  this->fields.playerActors = players;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.playerActors, (int64_t)players, v21, v22, v23, v24, v25, v26);
  this->fields.enemyActors = enemies;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.enemyActors, (int64_t)enemies, v27, v28, v29, v30, v31, v32);
  this->fields.actorCamera = camera;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actorCamera, (int64_t)camera, v33, v34, v35, v36, v37, v38);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.effectCamera,
    (int64_t)middleCamera,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cutInCamera,
    (int64_t)cutIncamera,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1C22094(actorCamera, v40);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.originalCameraRoot,
    (int64_t)parent,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.bgObject = bg;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgObject, (int64_t)bg, v62, v63, v64, v65, v66, v67);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v68);
  v69 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v69,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v69;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v76,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v76;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
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
  if ( (byte_4BDED21 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4BDED21 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4BDED03 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2272/*"Actor"*/);
    sub_1C21E38(&StringLiteral_17055/*"animCamLoc"*/);
    byte_4BDED03 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2272/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_17055/*"animCamLoc"*/, 0LL);
}


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
  __int64 v17; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Component_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  AssetLoader_LoadEndDataHandler_o *v39; // x19

  if ( (byte_4BDECF5 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__0__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9696/*"NoblePhantasm/CutIns"*/);
    byte_4BDECF5 = 1;
  }
  v17 = sub_1C22084(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 56), (int64_t)onComplete, v26, v27, v28, v29, v30, v31);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)Component_object, v33, v34, v35, v36, v37, v38);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1C22094(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9696/*"NoblePhantasm/CutIns"*/, v39, 1, 0LL);
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
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x8
  int64_t v10; // x0
  struct UnityEngine_GameObject_array **p_saveWaitPlayer; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattlePerformance_o *v18; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  int64_t v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v29; // x8
  struct BattlePerformance_o *v30; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v33; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v35; // w25
  char v36; // w0
  System_Collections_Generic_List_bool__o *v37; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct BattlePerformance_o *v45; // x8
  struct UnityEngine_GameObject_array *v46; // x29
  __int64 v47; // x8
  unsigned __int64 v48; // x20
  UnityEngine_Object_o *v49; // x25
  const MethodInfo *v50; // x2
  BattleServantData_o *sequenceManager; // x26
  System_Collections_Generic_List_bool__o *v52; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct UnityEngine_GameObject_array *v65; // x8
  __int64 v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct BattlePerformance_o *v73; // x8
  struct UnityEngine_GameObject_array *v74; // x8
  __int64 v75; // x0
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x27
  __int64 v78; // x8
  unsigned __int64 v79; // x20
  UnityEngine_Object_o *v80; // x24
  const MethodInfo *v81; // x2
  BattleServantData_o *v82; // x25
  System_Collections_Generic_List_bool__o *v83; // x26
  struct System_Boolean_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct UnityEngine_GameObject_array *v96; // x8
  __int64 v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct BattlePerformance_o *v104; // x8
  struct UnityEngine_GameObject_array *v105; // x8
  __int64 v106; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  BattleSequenceManager_o *v114; // x22
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  BattleSequenceManager_o *v124; // x23
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  BattleSequenceManager_c *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  BattleSequenceManager_o *v141; // x23
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  BattleSequenceManager_o *v157; // x23
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  System_Collections_Hashtable_o *v170; // x0
  System_String_o *BgmName; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  const MethodInfo *v178; // x2
  BattleSequenceManager_o *v179; // x21
  PartyOrganizationUtility_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v182; // x24
  System_Delegate_o *v183; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v191; // x1
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  const MethodInfo *v198; // x2
  __int64 v199; // x0
  System_Action_USSequencer__o *v200; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v202; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v204; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4BDED09 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1C21E38(&BattleSequenceManager_TypeInfo);
    sub_1C21E38(&CommonUI_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C21E38(&StringLiteral_13013/*"ShowNobleInfo"*/);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_10031/*"OnChangeBgmVolume"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_3273/*"Battle2D"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDED09 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v10 = sub_1C21EE0(UnityEngine_GameObject___TypeInfo, p_actorlist->max_length);
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.saveWaitPlayer, v10, v12, v13, v14, v15, v16, v17);
  v18 = v7->fields.performance;
  if ( !v18 )
    goto LABEL_142;
  e_actorlist = v18->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v20 = sub_1C21EE0(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.saveWaitEnemy, v20, v21, v22, v23, v24, v25, v26);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    chrId = v7->fields.chrId;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( **(_BYTE **)&this->fields.overwriteSvtVoiceId )
      {
        if ( !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_13013/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v29 = v7->fields.performance;
    if ( !v29 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v29->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v30 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v30 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v30->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v33 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3273/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v33), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    v35 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v36 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3273/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v36) | v35, 0LL);
    v37 = (System_Collections_Generic_List_bool__o *)sub_1C22084(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v37,
      (const MethodInfo_360581C *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v37;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.ActorActiveList, (int64_t)v37, v39, v40, v41, v42, v43, v44);
    v45 = v7->fields.performance;
    if ( !v45 )
      goto LABEL_142;
    v46 = v45->fields.p_actorlist;
    v200 = callback;
    if ( !v46 )
      goto LABEL_142;
    v47 = *(_QWORD *)&v46->max_length;
    if ( (int)v47 >= 1 )
    {
      v48 = 0LL;
      while ( v48 < (unsigned int)v47 )
      {
        v49 = (UnityEngine_Object_o *)v46->m_Items[v48];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v49,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          sequenceManager = (BattleServantData_o *)this[1].fields.sequenceManager;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v50);
          v52 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v49, 0LL);
          if ( !v52 )
            goto LABEL_142;
          items = v52->fields._items;
          v54 = Method_System_Collections_Generic_List_bool__Add__;
          ++v52->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v52->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v52,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3606080 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v52->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          if ( !sequenceManager )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(sequenceManager, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || sequenceManager->fields.isAnimPlayedWithdraw )
          {
            v65 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v48 >= v65->max_length )
              break;
            v66 = (__int64)v65 + 8 * v48;
            *(_QWORD *)(v66 + 32) = v49;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v49, v59, v60, v61, v62, v63, v64);
            v73 = v7->fields.performance;
            if ( !v73 )
              goto LABEL_142;
            v74 = v73->fields.p_actorlist;
            if ( !v74 )
              goto LABEL_142;
            if ( v48 >= v74->max_length )
              break;
            v75 = (__int64)v74 + 8 * v48;
            *(_QWORD *)(v75 + 32) = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v75 + 32), 0LL, v67, v68, v69, v70, v71, v72);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v49, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v56 = *(_QWORD *)&this->fields.m_CachedPtr;
          v57 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v56 )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v56 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_3606080 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v56 + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(v47) = v46->max_length;
        if ( (__int64)++v48 >= (int)v47 )
          goto LABEL_57;
      }
LABEL_143:
      sub_1C2209C(this, isOpponent);
    }
LABEL_57:
    v76 = v7->fields.performance;
    if ( !v76 )
      goto LABEL_142;
    v77 = v76->fields.e_actorlist;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    if ( !v77 )
      goto LABEL_142;
    v78 = *(_QWORD *)&v77->max_length;
    if ( (int)v78 >= 1 )
    {
      v79 = 0LL;
      while ( v79 < (unsigned int)v78 )
      {
        v80 = (UnityEngine_Object_o *)v77->m_Items[v79];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v80 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v80,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v82 = (BattleServantData_o *)this[1].fields.sequenceManager;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v81);
          v83 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v80, 0LL);
          if ( !v83 )
            goto LABEL_142;
          v84 = v83->fields._items;
          v85 = Method_System_Collections_Generic_List_bool__Add__;
          ++v83->fields._version;
          if ( !v84 )
            goto LABEL_142;
          v86 = v83->fields._size;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v83,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3606080 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v83->fields._size = v86 + 1;
            v84->m_Items[v86 + 4] = (unsigned __int8)this & 1;
          }
          if ( !v82 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v82, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || v82->fields.isAnimPlayedWithdraw )
          {
            v96 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v79 >= v96->max_length )
              goto LABEL_143;
            v97 = (__int64)v96 + 8 * v79;
            *(_QWORD *)(v97 + 32) = v80;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v97 + 32), (int64_t)v80, v90, v91, v92, v93, v94, v95);
            v104 = v7->fields.performance;
            if ( !v104 )
              goto LABEL_142;
            v105 = v104->fields.e_actorlist;
            if ( !v105 )
              goto LABEL_142;
            if ( v79 >= v105->max_length )
              goto LABEL_143;
            v106 = (__int64)v105 + 8 * v79;
            *(_QWORD *)(v106 + 32) = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v106 + 32), 0LL, v98, v99, v100, v101, v102, v103);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v80, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v87 = *(_QWORD *)&this->fields.m_CachedPtr;
          v88 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v87 )
            goto LABEL_142;
          v89 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_3606080 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
            *(_BYTE *)(v87 + v89 + 32) = 0;
          }
        }
        LODWORD(v78) = v77->max_length;
        if ( (__int64)++v79 >= (int)v78 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1C21EE0(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_142;
    v114 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19990/*"from"*/;
    if ( StringLiteral_19990/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1C21F74(StringLiteral_19990/*"from"*/, v114->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      *(_QWORD *)&isOpponent = StringLiteral_19990/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v114->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v114->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v114->fields.sequenceManager,
      isOpponent,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v204 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v115, v116, v117);
    v124 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1C21F74(this, v114->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.servantId = v124;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v114->fields.servantId,
        (int64_t)v124,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      this = (BattleSequenceManager_o *)StringLiteral_24401/*"to"*/;
      if ( StringLiteral_24401/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1C21F74(StringLiteral_24401/*"to"*/, v114->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        *(_QWORD *)&isOpponent = StringLiteral_24401/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.testNpPer = isOpponent;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v114->fields.testNpPer, isOpponent, v125, v126, v127, v128, v129, v130);
      v134 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v134 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v134->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v131,
                                          v132,
                                          v133);
      v141 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1C21F74(this, v114->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v114->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v141;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v114->fields.FadeTargetPanelIndexs,
          (int64_t)v141,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140);
        this = (BattleSequenceManager_o *)StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v114->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          *(_QWORD *)&isOpponent = StringLiteral_24360/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        *(_QWORD *)&v114->fields.IsPlaying = isOpponent;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v114->fields.IsPlaying,
          isOpponent,
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
        v202 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v202, v148, v149, v150);
        v157 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1C21F74(this, v114->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v114->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v157;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v114->fields.ReleaseSoundNames,
            (int64_t)v157,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          this = (BattleSequenceManager_o *)StringLiteral_22688/*"onupdate"*/;
          if ( StringLiteral_22688/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v114->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            *(_QWORD *)&isOpponent = StringLiteral_22688/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v114->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v114->fields.performance,
            isOpponent,
            v158,
            v159,
            v160,
            v161,
            v162,
            v163);
          this = (BattleSequenceManager_o *)StringLiteral_10031/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10031/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_125:
            if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v114->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v114->fields.seqObject,
              isOpponent,
              v164,
              v165,
              v166,
              v167,
              v168,
              v169);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v170 = iTween__Hash((System_Object_array *)v114, 0LL);
            iTween__ValueTo(gameObject, v170, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v7->fields.BackupBgmName,
                (int64_t)BgmName,
                v172,
                v173,
                v174,
                v175,
                v176,
                v177);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v178);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v179 = this;
                    p_playerActors = (PartyOrganizationUtility_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v182 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1C22084(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v182,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v183 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v182, 0LL);
                    v190 = (int64_t)v183;
                    if ( v183 )
                    {
                      v191 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v183->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (PartyOrganizationUtility_c *)v183;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v183->klass == v191 )
                          goto LABEL_137;
                      }
                      sub_1C22354(v183);
                    }
                    p_playerActors->klass = (PartyOrganizationUtility_c *)v190;
LABEL_137:
                    sub_1C21DDC(p_playerActors, v190, v184, v185, v186, v187, v188, v189);
                    v7->fields.OnCompleteActorCallback = v200;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&v7->fields.OnCompleteActorCallback,
                      (int64_t)v200,
                      v192,
                      v193,
                      v194,
                      v195,
                      v196,
                      v197);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v179, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v198);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1C22094(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1C21F74(StringLiteral_10031/*"OnChangeBgmVolume"*/, v114->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_10031/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v199 = sub_1C220B8(this);
    sub_1C21F60(v199, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  VoiceMaster_o *v15; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v18; // x4
  __int64 v19; // x8
  unsigned __int64 v20; // x22

  if ( (byte_4BDED22 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDED22 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v7 = this->fields.performance;
        if ( !v7 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v7->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v9);
          if ( PlayedSoundList )
          {
            v11 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v15 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v15, chrId, FileName, v18);
                }
                v19 = *(_QWORD *)&v11->max_length;
                if ( (int)v19 >= 1 )
                {
                  v20 = 0LL;
                  do
                  {
                    if ( v20 >= (unsigned int)v19 )
                      sub_1C2209C(MasterData_object, v13);
                    BattleSequenceManager__addServantVoicePlayed(this, v15, this->fields.chrId, v11->m_Items[v20], v14);
                    LODWORD(v19) = v11->max_length;
                    ++v20;
                  }
                  while ( (__int64)v20 < (int)v19 );
                }
                return;
              }
LABEL_31:
              sub_1C22094(actor, method);
            }
          }
        }
      }
    }
  }
}


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

  if ( (byte_4BDED00 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDED00 = 1;
  }
  FlagRequestNumber = System_String__Concat_63115476((System_String_o *)StringLiteral_16399/*"_"*/, labelName, 0LL);
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
    sub_1C22094(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDED1D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4BDED1D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C22094(0LL, v4);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v8.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_1C22094(battleTargetList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0LL);
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  WellFired_USTimelineContainer_o *v23; // x21
  System_String_o *monitor; // x22
  System_String_o *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BDED05 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDED05 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1C22094(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C22094(0LL, v17);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v16);
LABEL_37:
      sub_1C22094(Component_object, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v20);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_63115476((System_String_o *)StringLiteral_1123/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v25, 0LL) )
      goto LABEL_27;
  }
  v23 = 0LL;
LABEL_27:
  v26 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1C73E18(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  return v23;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4BDED1F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4BDED1F = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_330D784 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1C22094(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__49967896; // x0
  BattleSequenceManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__89_0; // x21
  Il2CppObject *v15; // x22
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_T__o *v23; // x20
  System_Action_object__o *v24; // x21
  BattleSequenceManager_o *v25; // x0
  const MethodInfo *v26; // x3
  WellFired_USTimelineContainer_o *v27; // x26
  System_Collections_Generic_List_object__o *v28; // x21
  System_Collections_Generic_List_object__o *v29; // x29
  Il2CppObject *klass; // x27
  System_Collections_Generic_List_object__o *monitor; // x27
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  int64_t v41; // x1
  Il2CppClass **v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  __int64 v50; // x27
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppClass *v71; // x8
  int64_t methodPtr; // x1
  Il2CppObject *v73; // x28
  struct UnityEngine_Vector3_StaticFields *v74; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v78; // x0
  PartyOrganizationUtility_o *v79; // x27
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x2
  int v88; // w8
  __int64 v89; // x20
  int v90; // w22
  UnityEngine_Object_o *v91; // x26
  __int64 v92; // x8
  __int64 v93; // x27
  unsigned __int64 v94; // x20
  __int64 v95; // x28
  System_String_o *name; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int32_t klass_high; // w26
  int32_t monitor_high; // w29
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x26
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_List_object__o *v112; // x8
  struct System_Object_array *v113; // x9
  _QWORD *v114; // x10
  __int64 v115; // x11
  Il2CppClass **v116; // x0
  System_String_o *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x10
  System_String_o *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x9
  int64_t v133; // x1
  System_Action_o *parent; // x0
  PartyOrganizationUtility_o *v135; // x0
  System_String_o *v136; // x0
  __int64 v137; // x9
  System_String_o **v138; // x29
  System_String_o *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_String_o *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x1
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  __int64 methodPtr_low; // x9
  int64_t v165; // x1
  __int64 v166; // x28
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  UnityEngine_Transform_o *v173; // x28
  int v174; // s0
  System_Collections_Generic_List_object__o *v177; // x25
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  BattleSequenceManager_o *v188; // x0
  const MethodInfo *v189; // x3
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  struct System_Object_array *v196; // x8
  _QWORD *v197; // x9
  __int64 v198; // x10
  int64_t v199; // x1
  Il2CppClass **v200; // x0
  Il2CppObject *current; // x24
  _BOOL8 v202; // x0
  __int64 v203; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v205; // x1
  void *v206; // x24
  int v207; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v209; // x0
  _QWORD *v210; // x25
  __int64 v211; // x8
  unsigned __int64 v212; // x28
  int64_t v213; // x26
  System_String_o *v214; // x0
  __int64 v215; // x9
  _BOOL8 v216; // x0
  __int64 v217; // x1
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  UnityEngine_Component_o *v224; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v226; // x2
  int32_t v227; // w3
  System_String_o *v228; // x4
  BattleSetupInfo_o *v229; // x5
  FollowerInfo_o *v230; // x6
  PartyListViewItem_o *v231; // x7
  struct System_Object_array *v232; // x8
  _QWORD *v233; // x9
  __int64 v234; // x10
  Il2CppClass **v235; // x0
  __int64 v236; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v238; // w19
  System_Collections_IEnumerator_c *v239; // x8
  __int64 v240; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v243; // x8
  __int64 v244; // x9
  System_Collections_IEnumerator_c **v245; // x10
  __int64 v246; // x0
  UnityEngine_Component_o *v247; // x0
  __int64 v248; // x1
  __int64 v249; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v251; // x1
  Il2CppObject *v252; // x0
  __int64 v253; // x1
  Il2CppObject *v254; // x25
  System_String_o *v255; // x0
  __int64 v256; // x1
  System_String_o *v257; // x0
  __int64 v258; // x1
  System_String_o *v259; // x0
  System_String_o *v260; // x0
  __int64 v261; // x0
  __int64 v262; // x8
  __int64 v263; // x24
  __int64 v264; // x9
  int *v265; // x10
  __int64 v266; // x0
  __int64 v267; // x1
  System_Collections_IEnumerator_c *v268; // x8
  __int64 v269; // x9
  int32_t *v270; // x10
  __int64 v271; // x0
  System_Collections_IEnumerator_c *v272; // x8
  __int64 v273; // x9
  System_Collections_IEnumerator_c **v274; // x10
  __int64 v275; // x0
  UnityEngine_Component_o *v276; // x0
  __int64 v277; // x1
  __int64 v278; // x9
  UnityEngine_GameObject_o *v279; // x0
  __int64 v280; // x1
  Il2CppObject *v281; // x0
  __int64 v282; // x1
  WellFired_USTimelineContainer_o *v283; // x24
  System_String_o *v284; // x0
  __int64 v285; // x1
  bool v286; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v288; // x27
  System_String_o *v289; // x0
  __int64 v290; // x1
  bool v291; // w28
  System_String_o *v292; // x0
  System_String_o *v293; // x0
  __int64 v294; // x1
  System_String_o *v295; // x0
  UnityEngine_Component_o *v296; // x0
  UnityEngine_Transform_o *v297; // x0
  System_String_o *v298; // x0
  __int64 v299; // x1
  UnityEngine_GameObject_o *v300; // x0
  __int64 v301; // x1
  UnityEngine_Transform_o *v302; // x25
  System_String_o *v303; // x0
  System_String_o *v304; // x0
  UnityEngine_Transform_o *v305; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v307; // x1
  System_String_o *v308; // x0
  bool v309; // w0
  __int64 v310; // x1
  __int64 *v311; // x8
  System_String_o *v312; // x0
  bool v313; // w0
  System_String_o *v314; // x28
  UnityEngine_GameObject_o *v315; // x0
  System_String_o *v316; // x27
  UnityEngine_Transform_o *v317; // x0
  __int64 v318; // x1
  UnityEngine_Object_o *v319; // x25
  _BOOL8 v320; // x0
  __int64 v321; // x1
  __int64 v322; // x1
  System_Collections_IEnumerator_o *v323; // x26
  System_Collections_IEnumerator_c *v324; // x8
  __int64 v325; // x9
  int32_t *v326; // x10
  __int64 v327; // x0
  System_Collections_IEnumerator_c *v328; // x8
  __int64 v329; // x9
  System_Collections_IEnumerator_c **v330; // x10
  __int64 v331; // x0
  UnityEngine_Component_o *v332; // x0
  __int64 v333; // x1
  UnityEngine_Object_o *v334; // x25
  __int64 v335; // x9
  UnityEngine_Object_o *v336; // x0
  __int64 v337; // x1
  System_String_o *v338; // x0
  __int64 v339; // x1
  System_String_o *v340; // x0
  _BOOL8 v341; // x0
  const MethodInfo *v342; // x2
  __int64 v343; // x1
  __int64 v344; // x1
  int32_t v345; // w25
  System_String_o *v346; // x26
  __int64 v347; // x0
  __int64 v348; // x25
  __int64 v349; // x8
  __int64 v350; // x9
  int *v351; // x10
  __int64 v352; // x0
  System_String_o *v353; // x25
  System_String_o *v354; // x0
  __int64 v355; // x1
  System_String_o *v356; // x0
  __int64 v357; // x1
  System_String_array *v358; // x0
  __int64 v359; // x1
  __int64 v360; // x1
  System_String_o *v361; // x26
  UnityEngine_GameObject_o *v362; // x0
  __int64 v363; // x1
  UnityEngine_Transform_o *v364; // x25
  System_String_o *v365; // x0
  System_String_o *v366; // x0
  __int64 v367; // x1
  System_String_o *v368; // x0
  UnityEngine_Transform_o *v369; // x0
  Il2CppObject *v370; // x25
  System_Collections_Generic_List_object__o *v371; // x0
  _BOOL8 v372; // x0
  __int64 v373; // x1
  System_String_o *v374; // x0
  __int64 v375; // x1
  System_String_o *v376; // x1
  const MethodInfo *v377; // x3
  __int64 v378; // x1
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  System_Collections_Generic_List_object__o *v385; // x0
  struct System_Object_array *v386; // x8
  _QWORD *v387; // x9
  __int64 v388; // x10
  Il2CppClass **v389; // x8
  __int64 v390; // x0
  __int64 v391; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v393; // x1
  UnityEngine_Transform_o *v394; // x0
  UnityEngine_Transform_o *v395; // x0
  __int64 v396; // x1
  float v397; // s8
  float v398; // s9
  float v399; // s10
  __int64 v400; // x1
  UnityEngine_Transform_o *v401; // x26
  UnityEngine_GameObject_o *v402; // x0
  UnityEngine_Transform_o *v403; // x0
  UnityEngine_Transform_o *v404; // x0
  __int64 v405; // x1
  BattleSequenceManager_o *v406; // x0
  const MethodInfo *v407; // x4
  int32_t v408; // w26
  UnityEngine_Transform_o *v409; // x0
  __int64 v410; // x1
  UnityEngine_Transform_o *v411; // x0
  System_String_o *v412; // x0
  __int64 v413; // x1
  System_String_o *v414; // x0
  System_String_o *v415; // x0
  const MethodInfo *v416; // x3
  int32_t v417; // w2
  const MethodInfo *v418; // x3
  System_Object_array *EventCount; // x0
  __int64 v420; // x1
  System_Object_array *v421; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v424; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v426; // x0
  __int64 v427; // x1
  Il2CppObject *v428; // x27
  System_String_o *v429; // x0
  __int64 v430; // x9
  _BOOL8 v431; // x0
  __int64 v432; // x1
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  UnityEngine_Component_o *v439; // x0
  UnityEngine_Transform_o *v440; // x0
  int64_t v441; // x2
  int32_t v442; // w3
  System_String_o *v443; // x4
  BattleSetupInfo_o *v444; // x5
  FollowerInfo_o *v445; // x6
  PartyListViewItem_o *v446; // x7
  struct System_Object_array *v447; // x8
  _QWORD *v448; // x9
  __int64 v449; // x10
  Il2CppClass **v450; // x0
  int32_t layer; // w26
  __int64 v452; // x22
  __int64 v453; // x8
  __int64 v454; // x20
  __int64 v455; // x9
  int *v456; // x10
  __int64 v457; // x0
  __int64 v458; // x1
  _DWORD *v459; // x8
  UnityEngine_Object_o *v460; // x21
  Il2CppClass *v461; // x8
  UnityEngine_Object_o *v462; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v464; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v466; // x4
  int32_t v467; // w22
  System_String_o *v468; // x0
  const MethodInfo *v469; // x4
  _DWORD *v470; // x8
  int v471; // w20
  BalanceConfig_c *v472; // x0
  int32_t v473; // w20
  System_String_o *v474; // x0
  const MethodInfo *v475; // x4
  __int64 v476; // x0
  __int64 v477; // x22
  __int64 v478; // x8
  __int64 v479; // x9
  int *v480; // x10
  __int64 v481; // x0
  int v482; // w1
  int v483; // w19
  void *v484; // x0
  void *v485; // x25
  __int64 v486; // x0
  __int64 v487; // x19
  __int64 v488; // x8
  __int64 v489; // x9
  int *v490; // x10
  __int64 v491; // x0
  System_String_o *v492; // [xsp+8h] [xbp-138h]
  System_String_o *v493; // [xsp+10h] [xbp-130h]
  Il2CppObject *v494; // [xsp+18h] [xbp-128h]
  Il2CppObject *item; // [xsp+20h] [xbp-120h]
  UnityEngine_Component_o *v496; // [xsp+28h] [xbp-118h]
  char v497; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evsa; // [xsp+30h] [xbp-110h]
  bool v500; // [xsp+38h] [xbp-108h]
  __int64 v501; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v502; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v504; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v507; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v508; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v510; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v512; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDECFE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1C21E38(&Method_BattleSequenceManager__setup_b__89_1__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1C21E38(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USTimelineContainer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715648);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__setup_b__89_0__);
    sub_1C21E38(&BattleSequenceManager___c_TypeInfo);
    sub_1C21E38(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1C21E38(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1C21E38(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1C21E38(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1C21E38(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1C21E38(&Voice_TypeInfo);
    sub_1C21E38(&StringLiteral_1131/*"/Actor/chr/"*/);
    sub_1C21E38(&StringLiteral_3275/*"BattleBG"*/);
    sub_1C21E38(&StringLiteral_1141/*"/BattleActors/"*/);
    sub_1C21E38(&StringLiteral_3277/*"BattleCamera"*/);
    sub_1C21E38(&StringLiteral_3280/*"BattleCutIn"*/);
    sub_1C21E38(&StringLiteral_15118/*"USFGOSetCameraEvent"*/);
    sub_1C21E38(&StringLiteral_2272/*"Actor"*/);
    sub_1C21E38(&StringLiteral_17645/*"body_level_"*/);
    sub_1C21E38(&StringLiteral_1133/*"/Actor/chr/weapon_level_"*/);
    sub_1C21E38(&StringLiteral_1132/*"/Actor/chr/body_level_"*/);
    sub_1C21E38(&StringLiteral_6540/*"FGOSequenceManager"*/);
    sub_1C21E38(&StringLiteral_1135/*"/AllEffects/"*/);
    sub_1C21E38(&StringLiteral_18268/*"chr(Clone)"*/);
    sub_1C21E38(&StringLiteral_4080/*"Cameras/BattleCamera"*/);
    sub_1C21E38(&StringLiteral_15116/*"USFGOChangeBgEvent"*/);
    sub_1C21E38(&StringLiteral_1153/*"/BattleCamera"*/);
    sub_1C21E38(&StringLiteral_1156/*"/CutIns/"*/);
    sub_1C21E38(&StringLiteral_3273/*"Battle2D"*/);
    sub_1C21E38(&StringLiteral_1155/*"/Cameras/BattleCamera"*/);
    sub_1C21E38(&StringLiteral_17055/*"animCamLoc"*/);
    sub_1C21E38(&StringLiteral_25114/*"weapon_level_"*/);
    sub_1C21E38(&StringLiteral_729/*"(Clone)"*/);
    sub_1C21E38(&StringLiteral_15115/*"USFGOAttachToParentEvent"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_1130/*"/Actor/chr"*/);
    sub_1C21E38(&StringLiteral_15114/*"USFGOAnimationCameraEvent"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    sub_1C21E38(&StringLiteral_15117/*"USFGOPlayCutInEvent"*/);
    byte_4BDECFE = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v508, 0, sizeof(v508));
  memset(&v507, 0, sizeof(v507));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_418;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2272/*"Actor"*/,
                                  v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[6].klass;
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v10 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_418;
  ComponentsInChildren_object__49967896 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v12 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v10;
  v500 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v13 = ComponentsInChildren_object__49967896;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__49967896 = v13;
  }
  _9__89_0 = (System_Func_object__bool__o *)v12->static_fields->__9__89_0;
  v496 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__89_0 )
  {
    evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)ComponentsInChildren_object__49967896;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__89_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__89_0, v15, Method_BattleSequenceManager___c__setup_b__89_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__89_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_0,
      (int64_t)_9__89_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    ComponentsInChildren_object__49967896 = (System_Collections_Generic_IEnumerable_TSource__o *)evs;
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__49967896,
                                                         (System_Func_TSource__bool__o *)_9__89_0,
                                                         (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v24 = (System_Action_object__o *)sub_1C22084(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v24, object, Method_BattleSequenceManager__setup_b__89_1__, 0LL);
  BasicHelper__ForEach_object_(
    v23,
    (System_Action_T__o *)v24,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v27 = BattleSequenceManager__searchTimeline(
          v25,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6540/*"FGOSequenceManager"*/,
          v26);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[6].klass;
  if ( !seqObject )
LABEL_418:
    sub_1C22094(seqObject, callback);
  v494 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  evsa = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v29;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v27 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(v27, (UnityEngine_Transform_o *)seqObject, 0LL);
    monitor = (System_Collections_Generic_List_object__o *)object[21].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v27, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !monitor )
      goto LABEL_418;
    items = monitor->fields._items;
    v39 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_418;
    size = monitor->fields._size;
    v41 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v41;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), v41, v32, v33, v34, v35, v36, v37);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v27, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_418;
    v49 = (int64_t)object[8].klass;
    v50 = seqObject;
    *(_QWORD *)(seqObject + 32) = v49;
    sub_1C21DDC((PartyOrganizationUtility_o *)(seqObject + 32), v49, v43, v44, v45, v46, v47, v48);
    v51 = (int64_t)object[8].monitor;
    *(_QWORD *)(v50 + 40) = v51;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 40), v51, v52, v53, v54, v55, v56, v57);
    v58 = (int64_t)object[9].klass;
    *(_QWORD *)(v50 + 48) = v58;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 48), v58, v59, v60, v61, v62, v63, v64);
    v71 = object[5].klass;
    if ( !v71 )
      goto LABEL_418;
    methodPtr = (int64_t)v71->vtable[7].methodPtr;
    *(_QWORD *)(v50 + 96) = methodPtr;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 96), methodPtr, v65, v66, v67, v68, v69, v70);
    v73 = (Il2CppObject *)object[22].klass;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    v74 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v74->zeroVector.fields.x;
    y = v74->zeroVector.fields.y;
    z = v74->zeroVector.fields.z;
    if ( !byte_4BD6BB7 )
    {
      sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
      byte_4BD6BB7 = 1;
    }
    v510.fields.x = x;
    v510.fields.y = y;
    v510.fields.z = z;
    v78 = UnityEngine_Object__Instantiate_object__50551576(
            v73,
            v510,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_3035B18 *)Method_UnityEngine_Object_Instantiate_GameObject____77715648);
    *(_QWORD *)(v50 + 72) = v78;
    v79 = (PartyOrganizationUtility_o *)(v50 + 72);
    sub_1C21DDC(v79, (int64_t)v78, v80, v81, v82, v83, v84, v85);
    seqObject = (__int64)v79->klass;
    if ( !v79->klass )
      goto LABEL_418;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v500 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v86);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v87);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v27,
                           1,
                           (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_418;
    v88 = *(_DWORD *)(seqObject + 24);
    v89 = seqObject;
    if ( v88 >= 1 )
    {
      v90 = 0;
      v91 = 0LL;
      v501 = seqObject;
      while ( 1 )
      {
        if ( v90 >= (unsigned int)v88 )
LABEL_422:
          sub_1C2209C(seqObject, callback);
        seqObject = *(_QWORD *)(v89 + 8LL * v90 + 32);
        if ( !seqObject )
          goto LABEL_418;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_418;
        v92 = *(_QWORD *)(seqObject + 24);
        v93 = seqObject;
        if ( (int)v92 >= 1 )
          break;
LABEL_102:
        v89 = v501;
        ++v90;
        v88 = *(_DWORD *)(v501 + 24);
        if ( v90 >= v88 )
          goto LABEL_103;
      }
      v94 = 0LL;
      while ( 1 )
      {
        if ( v94 >= (unsigned int)v92 )
          goto LABEL_422;
        v95 = *(_QWORD *)(v93 + 32 + 8 * v94);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v95, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v95 )
            goto LABEL_418;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v95, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15114/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v91, 0LL, 0LL) )
            {
              klass_high = HIDWORD(object[11].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_17055/*"animCamLoc"*/,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v112 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              v29 = (System_Collections_Generic_List_object__o *)evsa;
              if ( !v112 )
                goto LABEL_418;
              v113 = v112->fields._items;
              v114 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v112->fields._version;
              if ( !v113 )
                goto LABEL_418;
              v115 = v112->fields._size;
              v91 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v115 >= v113->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v112,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
              }
              else
              {
                v116 = &v113->obj.klass + v115;
                v112->fields._size = v115 + 1;
                v116[4] = (Il2CppClass *)v91;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v116 + 4), (int64_t)v91, v106, v107, v108, v109, v110, v111);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v95 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v95 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_423:
              sub_1C22354(v95);
LABEL_424:
              sub_1C22354(v247);
LABEL_425:
              sub_1C22094(v426, v427);
            }
            *(_QWORD *)(v95 + 56) = v91;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 56), (int64_t)v91, v97, v98, v99, v100, v101, v102);
            v165 = (int64_t)object[8].klass;
            *(_QWORD *)(v95 + 64) = v165;
            v166 = v95 + 64;
            sub_1C21DDC((PartyOrganizationUtility_o *)v166, v165, v167, v168, v169, v170, v171, v172);
            *(_BYTE *)(v166 + 28) = 0;
            if ( !v91 )
              goto LABEL_418;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v91, 0LL);
            if ( !object[6].klass )
              goto LABEL_418;
            v173 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[6].klass, 0LL);
            if ( !seqObject )
              goto LABEL_418;
            *(UnityEngine_Vector3_o *)&v174 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v173 )
              goto LABEL_418;
            UnityEngine_Transform__set_position(v173, *(UnityEngine_Vector3_o *)&v174, 0LL);
          }
          else
          {
            v117 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v95, 0LL);
            seqObject = System_String__op_Equality(v117, (System_String_o *)StringLiteral_15117/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_418;
              v124 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v95 + 304LL) >= (unsigned int)v124 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v95 + 200LL) + 8 * v124 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v95
                         : 0LL;
              else
                callback = 0LL;
              v160 = v29->fields._items;
              v161 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v29->fields._version;
              if ( !v160 )
                goto LABEL_418;
              v162 = v29->fields._size;
              if ( (unsigned int)v162 >= v160->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v163 = &v160->obj.klass + v162;
              v29->fields._size = v162 + 1;
              v163[4] = (Il2CppClass *)callback;
              v135 = (PartyOrganizationUtility_o *)(v163 + 4);
              goto LABEL_91;
            }
            v125 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v95, 0LL);
            if ( System_String__op_Equality(v125, (System_String_o *)StringLiteral_15118/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v132 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v95 + 304LL) < (unsigned int)v132
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v95 + 200LL) + 8 * v132 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v133 = (int64_t)object[8].klass;
              *(_QWORD *)(v95 + 56) = v133;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 56), v133, v126, v127, v128, v129, v130, v131);
              seqObject = (__int64)object[8].klass;
              if ( !seqObject )
                goto LABEL_418;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_418;
              parent = (System_Action_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v95 + 64) = parent;
              callback = parent;
              v135 = (PartyOrganizationUtility_o *)(v95 + 64);
LABEL_91:
              sub_1C21DDC(v135, (int64_t)callback, v118, v119, v120, v121, v122, v123);
              goto LABEL_101;
            }
            v136 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v95, 0LL);
            seqObject = System_String__op_Equality(v136, (System_String_o *)StringLiteral_15116/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v137 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v95 + 304LL) < (unsigned int)v137
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v95 + 200LL) + 8 * v137 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v138 = (System_String_o **)(v95 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v95 + 64),
                     (System_String_o *)StringLiteral_1212/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v138, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v139 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v138 = v139;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 64), (int64_t)v139, v140, v141, v142, v143, v144, v145);
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v146 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v95 + 72) = v146;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 72), (int64_t)v146, v147, v148, v149, v150, v151, v152);
                v153 = (int64_t)object[26].klass;
                *(_QWORD *)(v95 + 136) = v153;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 136), v153, v154, v155, v156, v157, v158, v159);
              }
              v29 = (System_Collections_Generic_List_object__o *)evsa;
            }
          }
        }
LABEL_101:
        LODWORD(v92) = *(_DWORD *)(v93 + 24);
        if ( (__int64)++v94 >= (int)v92 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v177 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v177,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v177 )
    goto LABEL_418;
  v184 = v177->fields._items;
  v185 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v177->fields._version;
  if ( !v184 )
    goto LABEL_418;
  v186 = v177->fields._size;
  if ( (unsigned int)v186 >= v184->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v177,
      item,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
  }
  else
  {
    v187 = &v184->obj.klass + v186;
    v177->fields._size = v186 + 1;
    v187[4] = (Il2CppClass *)item;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v187 + 4), (int64_t)item, v178, v179, v180, v181, v182, v183);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v188,
                         (WellFired_USSequencer_o *)v496,
                         (System_String_o *)StringLiteral_4080/*"Cameras/BattleCamera"*/,
                         v189);
  v196 = v177->fields._items;
  v197 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v177->fields._version;
  if ( !v196 )
    goto LABEL_418;
  v198 = v177->fields._size;
  v199 = seqObject;
  if ( (unsigned int)v198 >= v196->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v177,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
  }
  else
  {
    v200 = &v196->obj.klass + v198;
    v177->fields._size = v198 + 1;
    v200[4] = (Il2CppClass *)v199;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v200 + 4), v199, v190, v191, v192, v193, v194, v195);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v504,
    v177,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v508 = v504;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v508,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v508.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v202 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v202 )
    {
      if ( !current )
        sub_1C22094(v202, v203);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v206 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1C22094(0LL, v205);
      v207 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v207 >= 1 )
      {
        for ( i = 0; i < v207; ++i )
        {
          if ( i >= (unsigned int)v207 )
            sub_1C2209C(ComponentsInChildren_object, v205);
          v209 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v206 + i + 4);
          if ( !v209 )
            sub_1C22094(0LL, v205);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v209, 0LL);
          v210 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1C22094(0LL, v205);
          v211 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v211 >= 1 )
          {
            v212 = 0LL;
            do
            {
              if ( v212 >= (unsigned int)v211 )
                sub_1C2209C(ComponentsInChildren_object, v205);
              v213 = v210[v212 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v213,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v213 )
                  sub_1C22094(ComponentsInChildren_object, v205);
                v214 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v213, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v214,
                                                        (System_String_o *)StringLiteral_15115/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v215 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v213 + 304LL) < (unsigned int)v215
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v213 + 200LL) + 8 * v215 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C22354(v213);
LABEL_415:
                    sub_1C22094(v216, v217);
                  }
                  v216 = System_String__op_Equality(
                           *(System_String_o **)(v213 + 80),
                           (System_String_o *)StringLiteral_3277/*"BattleCamera"*/,
                           0LL);
                  if ( v216 )
                  {
                    v224 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v224 )
                      sub_1C22094(0LL, v217);
                    transform = UnityEngine_Component__get_transform(v224, 0LL);
                    *(_QWORD *)(v213 + 64) = transform;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v213 + 64),
                      (int64_t)transform,
                      v226,
                      v227,
                      v228,
                      v229,
                      v230,
                      v231);
                  }
                  else
                  {
                    if ( !v28 )
                      goto LABEL_415;
                    v232 = v28->fields._items;
                    v233 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v28->fields._version;
                    if ( !v232 )
                      sub_1C22094(v216, v217);
                    v234 = v28->fields._size;
                    if ( (unsigned int)v234 >= v232->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v28,
                        (Il2CppObject *)v213,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v235 = &v232->obj.klass + v234;
                      v28->fields._size = v234 + 1;
                      v235[4] = (Il2CppClass *)v213;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v235 + 4), v213, v218, v219, v220, v221, v222, v223);
                    }
                  }
                }
              }
              LODWORD(v211) = *((_DWORD *)v210 + 6);
              ++v212;
            }
            while ( (__int64)v212 < (int)v211 );
          }
          v207 = *((_DWORD *)v206 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v508,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v496, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v236);
  v238 = 0;
  while ( 1 )
  {
    v239 = Enumerator->klass;
    v240 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v239->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v240;
        p_offset += 4;
        if ( !v240 )
          goto LABEL_152;
      }
      p_method = (__int64)&v239->vtable[*p_offset].method;
    }
    else
    {
LABEL_152:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v243 = Enumerator->klass;
    v244 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v245 = (System_Collections_IEnumerator_c **)&v243->_1.interfaceOffsets->offset;
      while ( *(v245 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v244;
        v245 += 2;
        if ( !v244 )
          goto LABEL_159;
      }
      v246 = (__int64)&v243->vtable[*(_DWORD *)v245 + 1].method;
    }
    else
    {
LABEL_159:
      v246 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v247 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v246)(
                                        Enumerator,
                                        *(_QWORD *)(v246 + 8));
    if ( !v247 )
      sub_1C22094(0LL, v248);
    v249 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v247->klass->vtable._0_Equals.methodPtr) < (unsigned int)v249
      || (UnityEngine_Transform_c *)v247->klass->_2.typeHierarchy[v249 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_424;
    }
    gameObject = UnityEngine_Component__get_gameObject(v247, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v251);
    v252 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v254 = v252;
    if ( !v252 )
      goto LABEL_428;
    v255 = (System_String_o *)v252[2].monitor;
    if ( !v255 )
      sub_1C22094(0LL, v253);
    if ( System_String__StartsWith(v255, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) && v254[2].monitor )
    {
      v257 = (System_String_o *)v254[2].monitor;
      if ( !v257 )
        sub_1C22094(0LL, v256);
      if ( System_String__StartsWith(v257, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
      {
        v259 = (System_String_o *)v254[2].monitor;
        if ( !v259 )
          sub_1C22094(0LL, v258);
        v260 = System_String__Substring_63134480(v259, v259->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v238 += System_Int32__TryParse(v260, result, 0LL);
      }
    }
  }
  v261 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v261 )
  {
    v262 = *(_QWORD *)v261;
    v263 = v261;
    v264 = *(unsigned __int16 *)(*(_QWORD *)v261 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v261 + 302LL) )
    {
      v265 = (int *)(*(_QWORD *)(v262 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v265 - 1) != System_IDisposable_TypeInfo )
      {
        --v264;
        v265 += 4;
        if ( !v264 )
          goto LABEL_178;
      }
      v266 = v262 + 16LL * *v265 + 312;
    }
    else
    {
LABEL_178:
      v266 = sub_1C73E18(v261, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v266)(v263, *(_QWORD *)(v266 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v496, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  v502 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v502 )
    sub_1C22094(0LL, v267);
  v497 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v268 = v502->klass;
          v269 = *(unsigned __int16 *)(&v502->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v502->klass->_2.bitflags2 + 3) )
          {
            v270 = &v268->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v270 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v269;
              v270 += 4;
              if ( !v269 )
                goto LABEL_188;
            }
            v271 = (__int64)&v268->vtable[*v270].method;
          }
          else
          {
LABEL_188:
            v271 = sub_1C73E18(v502, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v271)(
                  v502,
                  *(_QWORD *)(v271 + 8)) & 1) == 0 )
          {
            v452 = 0LL;
            goto LABEL_366;
          }
          v272 = v502->klass;
          v273 = *(unsigned __int16 *)(&v502->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v502->klass->_2.bitflags2 + 3) )
          {
            v274 = (System_Collections_IEnumerator_c **)&v272->_1.interfaceOffsets->offset;
            while ( *(v274 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v273;
              v274 += 2;
              if ( !v273 )
                goto LABEL_195;
            }
            v275 = (__int64)&v272->vtable[*(_DWORD *)v274 + 1].method;
          }
          else
          {
LABEL_195:
            v275 = sub_1C73E18(v502, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v276 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v275)(
                                              v502,
                                              *(_QWORD *)(v275 + 8));
          if ( !v276 )
            sub_1C22094(0LL, v277);
          v278 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v276->klass->vtable._0_Equals.methodPtr) < (unsigned int)v278
            || (UnityEngine_Transform_c *)v276->klass->_2.typeHierarchy[v278 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_427:
            sub_1C22354(v276);
LABEL_428:
            sub_1C22094(v252, v253);
          }
          v279 = UnityEngine_Component__get_gameObject(v276, 0LL);
          if ( !v279 )
            sub_1C22094(0LL, v280);
          v281 = UnityEngine_GameObject__GetComponent_object_(
                   v279,
                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v283 = (WellFired_USTimelineContainer_o *)v281;
          if ( !v281 )
            sub_1C22094(0LL, v282);
          v284 = (System_String_o *)v281[2].monitor;
          if ( !v284 )
            sub_1C22094(0LL, v282);
          v286 = System_String__StartsWith(v284, (System_String_o *)StringLiteral_1135/*"/AllEffects/"*/, 0LL);
          if ( v286 )
          {
            affectedObjectPath = v283->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1C22094(0LL, v285);
            v288 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v288 = 0LL;
          }
          v289 = v283->fields.affectedObjectPath;
          if ( !v289 )
            sub_1C22094(0LL, v285);
          v291 = System_String__StartsWith(v289, (System_String_o *)StringLiteral_1156/*"/CutIns/"*/, 0LL);
          if ( v291 )
          {
            v292 = v283->fields.affectedObjectPath;
            if ( !v292 )
              sub_1C22094(0LL, v290);
            v288 = System_String__Substring(v292, 8, 0LL);
          }
          v293 = v283->fields.affectedObjectPath;
          if ( !v293 )
            sub_1C22094(0LL, v290);
          if ( !System_String__StartsWith(v293, (System_String_o *)StringLiteral_1153/*"/BattleCamera"*/, 0LL) )
          {
            v295 = v283->fields.affectedObjectPath;
            if ( !v295 )
              sub_1C22094(0LL, v294);
            if ( !System_String__StartsWith(v295, (System_String_o *)StringLiteral_1155/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v296 = (UnityEngine_Component_o *)object[8].klass;
          if ( !v296 )
            sub_1C22094(0LL, v294);
          v297 = UnityEngine_Component__get_transform(v296, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v283, v297, 0LL);
        }
        v298 = v283->fields.affectedObjectPath;
        if ( !v298 )
          sub_1C22094(0LL, v294);
        if ( System_String__StartsWith(v298, (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/, 0LL) )
          break;
        v340 = v283->fields.affectedObjectPath;
        if ( !v340 )
          sub_1C22094(0LL, v299);
        v341 = System_String__StartsWith(v340, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL);
        if ( v341 )
          v288 = v283->fields.affectedObjectPath;
        if ( v288 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v341, v288, v342) )
            goto LABEL_326;
          if ( v286 )
          {
            v345 = System_String__IndexOf(v288, 0x2Fu, 0LL);
            if ( (v345 & 0x80000000) == 0 )
            {
              v346 = System_String__Substring(v288, v345 + 1, 0LL);
              v288 = System_String__Substring_63134480(v288, 0, v345, 0LL);
              goto LABEL_287;
            }
            if ( (v497 & 1) != 0 )
            {
              v346 = 0LL;
LABEL_287:
              v371 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v371 )
                sub_1C22094(0LL, v344);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v504,
                v371,
                (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v493 = v346;
              v507 = v504;
              while ( 1 )
              {
                v372 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v507,
                         (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v372 )
                  break;
                v370 = v507.fields._current;
                if ( !v507.fields._current )
                  sub_1C22094(v372, v373);
                v374 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v507.fields._current, 0LL);
                if ( !v374 )
                  sub_1C22094(0LL, v375);
                v376 = System_String__Replace_63135104(
                         v374,
                         (System_String_o *)StringLiteral_729/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v288, v376, 0LL) )
                  goto LABEL_295;
              }
              v370 = 0LL;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v507,
                (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v497 = 1;
              goto LABEL_297;
            }
            v346 = 0LL;
            v370 = 0LL;
            v497 = 0;
          }
          else
          {
            v346 = 0LL;
            v370 = 0LL;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v370, 0LL, 0LL) )
          {
            v370 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[11].klass),
                                     v288,
                                     v377);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v370, 0LL, 0LL) )
            {
              v385 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v385 )
                sub_1C22094(0LL, v378);
              v386 = v385->fields._items;
              v387 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v385->fields._version;
              if ( !v386 )
                sub_1C22094(v385, v378);
              v388 = v385->fields._size;
              if ( (unsigned int)v388 >= v386->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v385,
                  v370,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v387[4] + 192LL) + 112LL));
              }
              else
              {
                v389 = &v386->obj.klass + v388;
                v385->fields._size = v388 + 1;
                v389[4] = (Il2CppClass *)v370;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v389 + 4), (int64_t)v370, v379, v380, v381, v382, v383, v384);
              }
              if ( !v370 )
                sub_1C22094(v390, v391);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v370, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v370, 0LL, 0LL) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v346, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v370 )
              sub_1C22094(IsNullOrEmpty, v393);
            v409 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v370, 0LL);
            if ( !v409 )
              sub_1C22094(0LL, v410);
            v411 = UnityEngine_Transform__Find(v409, v346, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v283, v411, 0LL);
            goto LABEL_326;
          }
          if ( !v370 )
            sub_1C22094(IsNullOrEmpty, v393);
          v394 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v370, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v283, v394, 0LL);
          if ( v291 )
          {
            v395 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v370, 0LL);
            if ( !v395 )
              sub_1C22094(0LL, v396);
            localPosition = UnityEngine_Transform__get_localPosition(v395, 0LL);
            v397 = localPosition.fields.x;
            v398 = localPosition.fields.y;
            v399 = localPosition.fields.z;
            v401 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v370, 0LL);
            v402 = (UnityEngine_GameObject_o *)object[6].monitor;
            if ( !v402 )
              sub_1C22094(0LL, v400);
            v403 = UnityEngine_GameObject__get_transform(v402, 0LL);
            if ( !v401 )
              sub_1C22094(v403, v403);
            UnityEngine_Transform__set_parent(v401, v403, 0LL);
            v404 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v370, 0LL);
            if ( !v404 )
              sub_1C22094(0LL, v405);
            v512.fields.x = v397;
            v512.fields.y = v398;
            v512.fields.z = v399;
            UnityEngine_Transform__set_localPosition(v404, v512, 0LL);
            BattleSequenceManager__updateCutInEvents(v406, evsa, v288, (UnityEngine_GameObject_o *)v370, v407);
            v408 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3280/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v370, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3275/*"BattleBG"*/, 0LL) )
              goto LABEL_326;
            v408 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3273/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v370, v408, 0LL);
LABEL_326:
          v412 = v283->fields.affectedObjectPath;
          if ( !v412 )
            sub_1C22094(0LL, v343);
          if ( System_String__StartsWith(v412, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
          {
            v414 = v283->fields.affectedObjectPath;
            if ( !v414 )
              sub_1C22094(0LL, v413);
            v415 = System_String__Substring_63134480(v414, v414->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v415, &targetPosIndex, 0LL);
            v417 = --targetPosIndex;
            if ( v238 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v283, v417, v416);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v283,
                targetPosIndex,
                v418);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v283, v417, v416);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v283,
                         1,
                         (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v421 = EventCount;
          if ( !EventCount )
            sub_1C22094(0LL, v420);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1C2209C(EventCount, v420);
              v424 = (WellFired_USTimelineEvent_o *)v421->m_Items[j];
              if ( !v424 )
                sub_1C22094(EventCount, v420);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v424, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v426 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v424, k, 0LL);
                v428 = (Il2CppObject *)v426;
                if ( !v426 )
                  goto LABEL_425;
                v429 = UnityEngine_Object__get_name(v426, 0LL);
                if ( System_String__op_Equality(v429, (System_String_o *)StringLiteral_15115/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v430 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v428->klass->vtable[0].methodPtr) < (unsigned int)v430
                    || (WellFired_USFGOAttachToParentEvent_c *)v428->klass->_2.typeHierarchy[v430 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C22354(v428);
                    goto LABEL_427;
                  }
                  v431 = System_String__op_Equality(
                           (System_String_o *)v428[5].klass,
                           (System_String_o *)StringLiteral_3277/*"BattleCamera"*/,
                           0LL);
                  if ( v431 )
                  {
                    v439 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v439 )
                      sub_1C22094(0LL, v432);
                    v440 = UnityEngine_Component__get_transform(v439, 0LL);
                    v428[4].klass = (Il2CppClass *)v440;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&v428[4],
                      (int64_t)v440,
                      v441,
                      v442,
                      v443,
                      v444,
                      v445,
                      v446);
                  }
                  else
                  {
                    if ( !v28 )
                      sub_1C22094(v431, v432);
                    v447 = v28->fields._items;
                    v448 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v28->fields._version;
                    if ( !v447 )
                      sub_1C22094(v431, v432);
                    v449 = v28->fields._size;
                    if ( (unsigned int)v449 >= v447->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v28,
                        v428,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v448[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v450 = &v447->obj.klass + v449;
                      v28->fields._size = v449 + 1;
                      v450[4] = (Il2CppClass *)v428;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)(v450 + 4),
                        (int64_t)v428,
                        v433,
                        v434,
                        v435,
                        v436,
                        v437,
                        v438);
                    }
                  }
                }
              }
              max_length = v421->max_length;
            }
          }
        }
      }
      v300 = (UnityEngine_GameObject_o *)object[6].klass;
      if ( !v300 )
        sub_1C22094(0LL, v299);
      v302 = UnityEngine_GameObject__get_transform(v300, 0LL);
      v303 = v283->fields.affectedObjectPath;
      if ( !v303 )
        sub_1C22094(0LL, v301);
      v304 = System_String__Replace_63135104(
               v303,
               (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_18268/*"chr(Clone)"*/,
               0LL);
      if ( !v302 )
        sub_1C22094(v304, v304);
      v305 = UnityEngine_Transform__Find(v302, v304, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v283, v305, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v283, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v308 = v283->fields.affectedObjectPath;
        if ( !v308 )
          sub_1C22094(0LL, v307);
        v309 = System_String__StartsWith(v308, (System_String_o *)StringLiteral_1132/*"/Actor/chr/body_level_"*/, 0LL);
        v311 = &StringLiteral_17645/*"body_level_"*/;
        if ( v309 )
          goto LABEL_229;
        v312 = v283->fields.affectedObjectPath;
        if ( !v312 )
          sub_1C22094(0LL, v310);
        v313 = System_String__StartsWith(v312, (System_String_o *)StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, 0LL);
        v311 = &StringLiteral_25114/*"weapon_level_"*/;
        if ( v313 )
        {
LABEL_229:
          v314 = (System_String_o *)*v311;
          if ( *v311 )
            break;
        }
      }
    }
    v315 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v315 )
      sub_1C22094(0LL, v310);
    v316 = (System_String_o *)StringLiteral_1/*""*/;
    v317 = UnityEngine_GameObject__get_transform(v315, 0LL);
    if ( !v317 )
      sub_1C22094(0LL, v318);
    v319 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v317, (System_String_o *)StringLiteral_18268/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v320 = UnityEngine_Object__op_Inequality(v319, 0LL, 0LL);
    if ( v320 )
      break;
LABEL_274:
    v353 = v283->fields.affectedObjectPath;
    v354 = System_String__Concat_63115476((System_String_o *)StringLiteral_1131/*"/Actor/chr/"*/, v314, 0LL);
    if ( !v354 )
      sub_1C22094(0LL, v355);
    if ( !v353 )
      sub_1C22094(v354, v355);
    v356 = System_String__Substring(v353, v354->fields._stringLength, 0LL);
    if ( !v356 )
      sub_1C22094(0LL, v357);
    v358 = System_String__Split(v356, 0x2Fu, 0, 0LL);
    if ( !v358 )
      sub_1C22094(0LL, v359);
    if ( !v358->max_length )
      sub_1C2209C(v358, v359);
    v361 = System_String__Concat_63115476(v314, v358->m_Items[0], 0LL);
    v362 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v362 )
      sub_1C22094(0LL, v360);
    v364 = UnityEngine_GameObject__get_transform(v362, 0LL);
    v365 = v283->fields.affectedObjectPath;
    if ( !v365 )
      sub_1C22094(0LL, v363);
    v366 = System_String__Replace_63135104(
             v365,
             (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_18268/*"chr(Clone)"*/,
             0LL);
    if ( !v366 )
      sub_1C22094(0LL, v367);
    v368 = System_String__Replace_63135104(v366, v361, v316, 0LL);
    if ( !v364 )
      sub_1C22094(v368, v368);
    v369 = UnityEngine_Transform__Find(v364, v368, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v283, v369, 0LL);
  }
  if ( !v319 )
    sub_1C22094(v320, v321);
  v323 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v319, 0LL);
  if ( !v323 )
    sub_1C22094(0LL, v322);
  while ( 2 )
  {
    v324 = v323->klass;
    v325 = *(unsigned __int16 *)(&v323->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v323->klass->_2.bitflags2 + 3) )
    {
      v326 = &v324->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v326 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v325;
        v326 += 4;
        if ( !v325 )
          goto LABEL_241;
      }
      v327 = (__int64)&v324->vtable[*v326].method;
    }
    else
    {
LABEL_241:
      v327 = sub_1C73E18(v323, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v327)(v323, *(_QWORD *)(v327 + 8)) & 1) == 0 )
    {
      v492 = v316;
      v493 = 0LL;
      goto LABEL_266;
    }
    v328 = v323->klass;
    v329 = *(unsigned __int16 *)(&v323->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v323->klass->_2.bitflags2 + 3) )
    {
      v330 = (System_Collections_IEnumerator_c **)&v328->_1.interfaceOffsets->offset;
      while ( *(v330 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v329;
        v330 += 2;
        if ( !v329 )
          goto LABEL_248;
      }
      v331 = (__int64)&v328->vtable[*(_DWORD *)v330 + 1].method;
    }
    else
    {
LABEL_248:
      v331 = sub_1C73E18(v323, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v332 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v331)(
                                        v323,
                                        *(_QWORD *)(v331 + 8));
    v334 = (UnityEngine_Object_o *)v332;
    if ( !v332 )
      sub_1C22094(0LL, v333);
    v335 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v332->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v335
      && (UnityEngine_Transform_c *)v332->klass->_2.typeHierarchy[v335 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v336 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v332, 0LL);
      if ( !v336 )
        sub_1C22094(0LL, v337);
      v338 = UnityEngine_Object__get_name(v336, 0LL);
      if ( !v338 )
        sub_1C22094(0LL, v339);
      if ( !System_String__StartsWith(v338, v314, 0LL) )
        continue;
      v492 = UnityEngine_Object__get_name(v334, 0LL);
      v493 = 0LL;
LABEL_266:
      v347 = sub_1C21F74(v323, System_IDisposable_TypeInfo);
      v316 = v492;
      v348 = v347;
      if ( v347 )
      {
        v349 = *(_QWORD *)v347;
        v350 = *(unsigned __int16 *)(*(_QWORD *)v347 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v347 + 302LL) )
        {
          v351 = (int *)(*(_QWORD *)(v349 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v351 - 1) != System_IDisposable_TypeInfo )
          {
            --v350;
            v351 += 4;
            if ( !v350 )
              goto LABEL_271;
          }
          v352 = v349 + 16LL * *v351 + 312;
        }
        else
        {
LABEL_271:
          v352 = sub_1C73E18(v347, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v352)(v348, *(_QWORD *)(v352 + 8));
      }
      goto LABEL_274;
    }
    break;
  }
  sub_1C22354(v332);
  v483 = v482;
  v485 = v484;
  v476 = sub_1C21F74(v323, System_IDisposable_TypeInfo);
  v477 = v476;
  if ( v476 )
  {
    v478 = *(_QWORD *)v476;
    v479 = *(unsigned __int16 *)(*(_QWORD *)v476 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v476 + 302LL) )
    {
      v480 = (int *)(*(_QWORD *)(v478 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v480 - 1) != System_IDisposable_TypeInfo )
      {
        --v479;
        v480 += 4;
        if ( !v479 )
          goto LABEL_459;
      }
      v481 = v478 + 16LL * *v480 + 312;
    }
    else
    {
LABEL_459:
      v481 = sub_1C73E18(v476, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v481)(v477, *(_QWORD *)(v481 + 8));
  }
  if ( v493 )
    sub_1C2208C(v493);
  if ( v483 != 1 )
  {
    v486 = sub_1C21F74(v502, System_IDisposable_TypeInfo);
    v487 = v486;
    if ( v486 )
    {
      v488 = *(_QWORD *)v486;
      v489 = *(unsigned __int16 *)(*(_QWORD *)v486 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v486 + 302LL) )
      {
        v490 = (int *)(*(_QWORD *)(v488 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v490 - 1) != System_IDisposable_TypeInfo )
        {
          --v489;
          v490 += 4;
          if ( !v489 )
            goto LABEL_506;
        }
        v491 = v488 + 16LL * *v490 + 312;
      }
      else
      {
LABEL_506:
        v491 = sub_1C73E18(v486, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v491)(v487, *(_QWORD *)(v491 + 8));
    }
    sub_1D0C8C8();
  }
  v452 = *(_QWORD *)__cxa_begin_catch(v485);
  __cxa_end_catch();
LABEL_366:
  seqObject = sub_1C21F74(v502, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v453 = *(_QWORD *)seqObject;
    v454 = seqObject;
    v455 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v456 = (int *)(*(_QWORD *)(v453 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v456 - 1) != System_IDisposable_TypeInfo )
      {
        --v455;
        v456 += 4;
        if ( !v455 )
          goto LABEL_371;
      }
      v457 = v453 + 16LL * *v456 + 312;
    }
    else
    {
LABEL_371:
      v457 = sub_1C73E18(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v457)(v454, *(_QWORD *)(v457 + 8));
  }
  if ( v452 )
    sub_1C2208C(v452);
  if ( !v28 )
    goto LABEL_418;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v504,
    v28,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v504;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[5].klass,
          (UnityEngine_GameObject_o *)object[6].klass,
          (System_Collections_Generic_List_GameObject__o *)object[21].monitor,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1C22094(0LL, v458);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v494, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v494 )
      goto LABEL_418;
    if ( LOBYTE(v494[30].klass) )
      goto LABEL_409;
    v459 = v494[28].monitor;
    if ( !v459 )
      goto LABEL_418;
    if ( !v459[83] && !BattleActorControl__isNoVoice((BattleActorControl_o *)v494, 0LL) )
    {
      v460 = (UnityEngine_Object_o *)object[5].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v460, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v461 = object[5].klass;
        if ( !v461 )
          goto LABEL_418;
        v462 = *(UnityEngine_Object_o **)&v461->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v462, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[23].monitor) = 0;
            v464 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v464,
                   FileName,
                   v466) )
            {
              LOBYTE(object[23].monitor) = 1;
            }
            v467 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v468 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v467,
              v468,
              v469);
            v470 = v494[28].monitor;
            if ( v470 )
            {
              v471 = v470[176];
              v472 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v472 = BalanceConfig_TypeInfo;
              }
              if ( v471 == v472->static_fields->TreasureDeviceIdMashu3 )
              {
                v473 = (int32_t)object[11].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v474 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v473,
                  v474,
                  v475);
              }
              goto LABEL_409;
            }
          }
          goto LABEL_418;
        }
      }
    }
  }
LABEL_409:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64162132(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v9; // w24
  int32_t v10; // w22

  if ( (byte_4BDED18 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4BDED18 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v9 = size - 1;
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
        v10 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v9 == v10 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v10;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1C22094(battleTargetList, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4BDED1C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1C21E38(&StringLiteral_14759/*"Tmp_Target"*/);
    byte_4BDED1C = 1;
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
                                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1C22094(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1C22084(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14759/*"Tmp_Target"*/, 0LL);
    if ( !v8 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v8, 0LL);
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
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w21
  Il2CppObject *current; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDED02 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4BDED02 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !evs )
    sub_1C22094(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C22094(v8, v9);
    if ( System_String__op_Equality((System_String_o *)v20.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1C21DDC((PartyOrganizationUtility_o *)&current[3].monitor, (int64_t)obj, v12, v13, v14, v15, v16, v17);
      v18 = 4;
      goto LABEL_10;
    }
  }
  v18 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10 && v18 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4BD6BB7 )
  {
    sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
    byte_4BD6BB7 = 1;
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
      sub_1C22094(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetActor, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(targetActor, method);
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
  sub_1C21DDC(
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


void __fastcall BattleSequenceManager__WaitEndSequence_d__109___ctor(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__109__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleSequenceManager__WaitEndSequence_d__109_o *v8; // x19
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
  if ( (byte_4BDEE4E & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__109_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDEE4E = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__109__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__109__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleSequenceManager__WaitEndSequence_d__109_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__109__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__109__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__109_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDEE48 & 1) == 0 )
  {
    sub_1C21E38(&BattleSequenceManager___c_TypeInfo);
    byte_4BDEE48 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__77_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1C22094(this, x1);
  return System_Single__CompareTo_64003512(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__77_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1C22094(this, x1);
  return System_Single__CompareTo_64003512(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__89_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(comp, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass115_0___ctor(
        BattleSequenceManager___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass115_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass115_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_1C22094(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass118_0___ctor(
        BattleSequenceManager___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass118_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass118_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass118_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BDEE49 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass118_0_o *)sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4BDEE49 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass118_0_o *)v4->fields.targetList) == 0LL )
    sub_1C22094(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass125_0___ctor(
        BattleSequenceManager___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass125_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass125_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass144_0___ctor(
        BattleSequenceManager___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass144_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass144_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_0___ctor(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass76_0_o *v4; // x19
  struct BattleSequenceManager_o *_4__this; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v4 = this;
  if ( (byte_4BDEE4A & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__1__);
    sub_1C21E38(&StringLiteral_13190/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass76_0_o *)sub_1C21E38(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4BDEE4A = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass76_0_o *)AssetData__GetObject_object__49880776(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13190/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.CutInPrefab,
          (int64_t)this,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (this = (BattleSequenceManager___c__DisplayClass76_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v14 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1C22084(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v20, v21, v22, v23, v24, v25);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v14,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *_4__this; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  struct BattleSequenceManager_o *v28; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_Action_o *v32; // x23
  struct BattleSequenceManager_o *v33; // x8
  struct BattleSequenceManager_o *v34; // x8
  _DWORD *v35; // x20
  int v36; // w8
  int v37; // w9
  __int64 v38; // x10
  struct BattleSequenceManager_o *v39; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDEE4B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__2__);
    sub_1C21E38(&BattleSequenceManager___c__DisplayClass76_1_TypeInfo);
    sub_1C21E38(&StringLiteral_9699/*"NoblePhantasm_"*/);
    byte_4BDEE4B = 1;
  }
  v5 = sub_1C22084(BattleSequenceManager___c__DisplayClass76_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = obj;
  v14 = (int64_t *)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)obj, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v27 = *v14;
  *((_QWORD *)_4__this + 11) = *v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)_4__this + 88), v27, v21, v22, v23, v24, v25, v26);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_26;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_26;
    overwriteSvtVoiceId = v28->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v30 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v31 = System_String__Concat_63115476((System_String_o *)StringLiteral_9699/*"NoblePhantasm_"*/, v30, 0LL);
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v31, v32, 1, 0LL);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_26;
  _4__this = v33->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_26;
  v35 = _4__this;
  v34->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v35 )
    goto LABEL_26;
  v36 = v35[6];
  if ( v36 < 1 )
    return;
  v37 = 0;
  while ( 1 )
  {
    if ( v36 == v37 )
      sub_1C2209C(_4__this, v7);
    v38 = *(_QWORD *)&v35[2 * v37 + 8];
    if ( !v38 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v38 + 64) && *(_BYTE *)(v38 + 69) )
      break;
    if ( v36 == ++v37 )
      return;
  }
  v39 = this->fields.__4__this;
  if ( !v39 )
LABEL_26:
    sub_1C22094(_4__this, v7);
  v39->fields.isNoDamageMotionInDamageNoble = 1;
}


void __fastcall BattleSequenceManager___c__DisplayClass76_1___ctor(
        BattleSequenceManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass76_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass76_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v5; // x20
  int v6; // w8
  BattleSequenceManager___c__DisplayClass76_1_o *v7; // x21
  unsigned int v8; // w23
  int v9; // w24
  UnityEngine_Behaviour_o *v10; // x22
  struct BattleSequenceManager___c__DisplayClass76_0_o *v11; // x8
  BattleSequenceManager_o *v12; // x21
  System_Action_o *_9__3; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v2 = this;
  if ( (byte_4BDEE4C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEE4C = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_20;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v6 = (int)this->fields.CS___8__locals1;
  v7 = this;
  if ( v6 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C2209C(this, method);
      v10 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v7->fields.__9__4 + (int)v8);
      if ( !v10 )
        break;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v10->klass[1]._2.typeHierarchy)(
                                                                v10,
                                                                v10->klass[1]._2.unity_user_data);
      if ( (v9 & (unsigned int)this & 1) != 0 )
      {
        v5 = *(System_String_o **)&v10[2].fields.m_CachedPtr;
        v9 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
      }
      v6 = (int)v7->fields.CS___8__locals1;
      if ( (int)++v8 >= v6 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C22094(this, method);
  }
LABEL_15:
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__3, (int64_t)_9__3, v14, v15, v16, v17, v18, v19);
  }
  if ( !v12 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v12, v5, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass76_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass76_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v5; // x8
  struct BattleSequenceManager_o *v6; // x8
  BattleSequenceManager___c__DisplayClass76_1_o *v7; // x20
  struct BattleSequenceManager___c__DisplayClass76_0_o *v8; // x8
  struct BattleSequenceManager_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass76_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x21
  struct BattleSequenceManager___c__DisplayClass76_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleSequenceManager___c__DisplayClass76_0_o *v25; // x8
  struct BattleSequenceManager_o *v26; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass76_0_o *v28; // x8
  struct BattleSequenceManager_o *v29; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass76_0_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x10
  struct BattleSequenceManager___c__DisplayClass76_0_o *v36; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v39; // x1
  struct BattleSequenceManager___c__DisplayClass76_0_o *v40; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v41; // x8
  struct BattleSequenceManager_o *v42; // x20
  struct BattleSequenceManager_o *v43; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v44; // x8
  struct BattleSequenceManager_o *v45; // x8
  UnityEngine_Object_o *v46; // x20
  struct BattleSequenceManager___c__DisplayClass76_0_o *v47; // x8
  struct BattleSequenceManager_o *v48; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v49; // x8
  struct BattleSequenceManager_o *v50; // x8
  UIStandFigureM_o *v51; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct BattleSequenceManager___c__DisplayClass76_0_o *v62; // x8

  v2 = this;
  if ( (byte_4BDEE4D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)sub_1C21E38(&Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__4__);
    byte_4BDEE4D = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_73;
  v7 = this;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)v6->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_73;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_73;
  v10 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)v9->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v2->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_73;
    if ( !v7 )
      goto LABEL_73;
    v13 = v12->fields.__4__this;
    if ( !v13 )
      goto LABEL_73;
    v13->fields.faceType = (int32_t)v7[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_73;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_73;
    performance = v15->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v17 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v17 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v17, (UnityEngine_GameObject_o *)this, 0LL);
    v13->fields.standFigure = MeshLocal;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v13->fields.standFigure,
      (int64_t)MeshLocal,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = v2->fields.CS___8__locals1;
    if ( !v25 )
      goto LABEL_73;
    v26 = v25->fields.__4__this;
    if ( !v26 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v26->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v28 = v2->fields.CS___8__locals1;
    if ( !v28 )
      goto LABEL_73;
    v29 = v28->fields.__4__this;
    if ( !v29 )
      goto LABEL_73;
    monitor = (int32_t)v7[1].monitor;
    v29->fields.loadStandFigureId = monitor;
    battleActor = v28->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v7[1].monitor), monitor_high == -1) )
    {
      v41 = v2->fields.CS___8__locals1;
      if ( !v41 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v41->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v42 = v41->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v42 )
        goto LABEL_73;
      v42->fields.loadStandFigureLimitCount = (int)this;
      v34 = v2->fields.CS___8__locals1;
      if ( !v34 )
        goto LABEL_73;
    }
    else
    {
      v34 = v2->fields.CS___8__locals1;
      if ( !v34 )
        goto LABEL_73;
      v35 = v34->fields.__4__this;
      if ( !v35 )
        goto LABEL_73;
      v35->fields.loadStandFigureLimitCount = monitor_high;
    }
    v43 = v34->fields.__4__this;
    if ( !v43 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)v43->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v44 = v2->fields.CS___8__locals1;
    if ( !v44 )
      goto LABEL_73;
    v45 = v44->fields.__4__this;
    if ( !v45 )
      goto LABEL_73;
    v46 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v45->fields.loadStandFigureId,
                                                              v45->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v46 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v46, (System_String_o *)this, 0LL);
    v47 = v2->fields.CS___8__locals1;
    if ( !v47 )
      goto LABEL_73;
    v48 = v47->fields.__4__this;
    if ( !v48 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)v48->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v49 = v2->fields.CS___8__locals1;
    if ( !v49 )
      goto LABEL_73;
    v50 = v49->fields.__4__this;
    if ( !v50 )
      goto LABEL_73;
    v51 = v50->fields.standFigure;
    loadStandFigureId = v50->fields.loadStandFigureId;
    loadStandFigureLimitCount = v50->fields.loadStandFigureLimitCount;
    faceType = v50->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__4, (int64_t)_9__4, v56, v57, v58, v59, v60, v61);
    }
    if ( !v51 )
LABEL_73:
      sub_1C22094(this, method);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UIStandFigureM__SetCharacter_42308116(
                                                              v51,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v62 = v2->fields.CS___8__locals1;
      if ( v62 )
      {
        this = (BattleSequenceManager___c__DisplayClass76_1_o *)v62->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v62->fields.onComplete,
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v36->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v36->fields.onComplete;
      obj = v2->fields.obj;
      v39 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v40 = v2->fields.CS___8__locals1;
      if ( !v40 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v40->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v40->fields.onComplete;
      obj = v2->fields.obj;
      v39 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v39,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void __fastcall BattleSequenceManager___c__DisplayClass76_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass76_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1C22094(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass77_0___ctor(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass77_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass80_0___ctor(
        BattleSequenceManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass80_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A65AA0;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A65A80;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A65A38;
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
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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