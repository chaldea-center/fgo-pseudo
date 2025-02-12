void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4BB6E9F & 1) == 0 )
  {
    sub_1C13D24(&BattleSequenceManager_TypeInfo, v1);
    byte_4BB6E9F = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Array_o *v22; // x0
  struct BattlePerformance_BattleUIPanel_array *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_List_object__o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_object__o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_object__o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_Generic_List_object__o *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_Dictionary_object__int__o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_HashSet_T__o *v86; // x20
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_RuntimeFieldHandle_o v93; // 0:w1.4

  if ( (byte_4BB6E9E & 1) == 0 )
  {
    sub_1C13D24(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_HashSet_string__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Object___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action___ctor__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_Object__TypeInfo, v14);
    sub_1C13D24(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v15);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1C13D24(&System_Collections_Generic_List_Action__TypeInfo, v17);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v19);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v20);
    sub_1C13D24(&StringLiteral_9519/*"NTLM "*/, v21);
    byte_4BB6E9E = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v22 = (System_Array_o *)sub_1C13DCC(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v93.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v23 = (struct BattlePerformance_BattleUIPanel_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v22, v93, 0LL);
  this->fields.FadeTargetPanelIndexs = v23;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.FadeTargetPanelIndexs,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.ReleaseSoundNames, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v37;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.DelayInvokeMethodList,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = StringLiteral_9519/*"NTLM "*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9519/*"NTLM "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.PosNodeFormatNP, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v51;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.npEndDeleteObjects,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v58,
    (const MethodInfo_32E326C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v58;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.rendererBaseAddColorsDict,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v65;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.battleTargetList, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  v72 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v72;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.createdObjects, (int64_t)v72, v73, v74, v75, v76, v77, v78);
  v79 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v79,
    (const MethodInfo_32E9114 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v79;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v86,
    (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v86;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB6E7E & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, actor);
    sub_1C13D24(&StringLiteral_24998/*"vm.shared.size"*/, v5);
    byte_4BB6E7E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_1C13F80(v6, v7);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_44895696(actor, (System_String_o *)StringLiteral_24998/*"vm.shared.size"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v8.fields.r = 0.0;
      v8.fields.g = 0.0;
      v8.fields.b = 0.0;
      v8.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v8, 0.3, 0LL);
    }
    v9.fields.r = 0.0;
    v9.fields.g = 0.0;
    v9.fields.b = 0.0;
    v9.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v9, 0.0, 0LL);
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
  sub_1C13CC8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  BattleActorControl_o *v27; // x21
  BattleServantData_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v31; // x1
  UnityEngine_SkinnedMeshRenderer_array *v32; // x21
  __int64 v33; // x8
  unsigned __int64 v34; // x29
  Il2CppObject *v35; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  int v39; // s0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Nullable_Color__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v48; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BB6E9C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__, method);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, v5);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1C13D24(&Method_System_Nullable_Color__get_HasValue__, v7);
    sub_1C13D24(&Method_System_Nullable_Color__get_Value__, v8);
    byte_4BB6E9C = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0LL)) == 0LL )
  {
    sub_1C13F80(performance, method);
  }
  klass = performance->klass;
  v11 = performance;
  v12 = *(unsigned __int16 *)(&performance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&performance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleActorControl__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_1C65D04(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_1C13F80(0LL, v15);
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_1C65D04(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v16;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_1C65D04(v16, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    v27 = (BattleActorControl_o *)v25;
    if ( !v25 )
      sub_1C13F80(0LL, v26);
    v28 = *(BattleServantData_o **)(v25 + 456);
    if ( !v28 )
      sub_1C13F80(0LL, v26);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v28, &entity, 0LL) )
    {
      if ( !entity )
        sub_1C13F80(0LL, v29);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v47, entity, 0LL);
      v48 = v47;
      if ( v47.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v27, 1, 0LL);
        v32 = RendererArray;
        if ( !RendererArray )
          sub_1C13F80(0LL, v31);
        v33 = *(_QWORD *)&RendererArray->max_length;
        if ( (int)v33 >= 1 )
        {
          v34 = 0LL;
          do
          {
            if ( v34 >= (unsigned int)v33 )
              sub_1C13F88(RendererArray, v31);
            v35 = (Il2CppObject *)v32->m_Items[v34];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            *(UnityEngine_Color_o *)&v39 = System_Nullable_Color___get_Value(
                                             &v48,
                                             (const MethodInfo_3746558 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1C13F80(v37, v38);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v35,
              *(UnityEngine_Color_o *)&v39,
              (const MethodInfo_32E3C28 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(v33) = v32->max_length;
            ++v34;
          }
          while ( (__int64)v34 < (int)v33 );
        }
      }
    }
  }
  v43 = *(_QWORD *)v16;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_41;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_41:
    v46 = sub_1C65D04(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v16, *(_QWORD *)(v46 + 8));
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4BB6E94 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4BB6E94 = 1;
  }
  if ( System_String__Equals_62976988(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2FA7644 *)Method_System_Linq_Enumerable_Contains_string___);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.executingTdInfoCache, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C13F80(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_44069628(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_44069628(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
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
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v33; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v44; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v48; // x24

  if ( (byte_4BB6E66 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, obj);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass80_0__CreateCutInStandFigure_b__0__, v9);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass80_0_TypeInfo, v10);
    byte_4BB6E66 = 1;
  }
  v11 = sub_1C13F70(BattleSequenceManager___c__DisplayClass80_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass80_0___ctor((BattleSequenceManager___c__DisplayClass80_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)obj, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = onComplete;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)onComplete, v26, v27, v28, v29, v30, v31);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v33 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v33 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v33, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.standFigure, (int64_t)MeshLocal, v36, v37, v38, v39, v40, v41);
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
          v44 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v48 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v48,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass80_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v44 )
            return UIStandFigureM__SetCharacter_42196708(
                     v44,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v48,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1C13F80(Instance, v13);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v24; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _BOOL4 v32; // w21
  struct System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  _BOOL4 v40; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v51; // x3
  BgmPlayArgsGroup_o *v52; // x19
  _BOOL8 v53; // x0
  __int64 v54; // x1
  Il2CppObject *current; // x20
  float v56; // s0
  int v57; // w28
  System_Nullable_float__o v58; // x21
  const MethodInfo_3749B88 *v59; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Object_array *v67; // x20
  __int64 v68; // x0
  int64_t v69; // x1
  struct BattlePerformance_o *v70; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v72; // x8
  struct BattlePerformance_o *v73; // x8
  System_String_o *v74; // x19
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  BattleSequenceManager_c *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x21
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
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
  System_Collections_Hashtable_o *v130; // x0
  __int64 v131; // x0
  int v132; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v133; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v137; // 0:x0.8
  System_Nullable_float__o v138; // 0:x1.8
  System_Nullable_float__o v139; // 0:x2.8
  System_Nullable_long__o v140; // 0:x0.16

  if ( (byte_4BB6E7F & 1) == 0 )
  {
    sub_1C13D24(&BattleSequenceManager_TypeInfo, method);
    sub_1C13D24(&BgmManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_1C13D24(&Method_System_Nullable_long___ctor__, v9);
    sub_1C13D24(&Method_System_Nullable_float___ctor__, v10);
    sub_1C13D24(&object___TypeInfo, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&float_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_1C13D24(&SoundManager_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_19961/*"friendCode"*/, v16);
    sub_1C13D24(&StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/, v17);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v18);
    sub_1C13D24(&StringLiteral_22651/*"onProductPurchaseDeferred"*/, v19);
    sub_1C13D24(&StringLiteral_24361/*"timeoutTicks"*/, v20);
    sub_1C13D24(&iTween_TypeInfo, v21);
    byte_4BB6E7F = 1;
  }
  changeBgm = 0LL;
  memset(&v135, 0, sizeof(v135));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v24 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v24, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v32 = 0;
  }
  else
  {
    *p_BackupBgmName = v24;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.BackupBgmName,
      (int64_t)v24,
      (int64_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v26) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v33 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v33;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v40 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v32 = 1;
  }
  else
  {
    v40 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v42 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v42;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v42, v43, v44, v45, v46, v47, v48);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v40 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v32 = 1;
  }
  v49 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1C13F80(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v40 | System_String__op_Inequality(v49, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1C13DCC(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v67 = (System_Object_array *)performance;
    v68 = StringLiteral_19961/*"friendCode"*/;
    if ( StringLiteral_19961/*"friendCode"*/ )
    {
      v68 = sub_1C13E60(StringLiteral_19961/*"friendCode"*/, v67->obj.klass->_1.element_class);
      if ( !v68 )
        goto LABEL_92;
      v69 = StringLiteral_19961/*"friendCode"*/;
    }
    else
    {
      v69 = 0LL;
    }
    if ( !v67->max_length )
      goto LABEL_91;
    v67->m_Items[0] = (Il2CppObject *)v69;
    sub_1C13CC8((PartyOrganizationUtility_o *)v67->m_Items, v69, v61, v62, v63, v64, v65, v66);
    v78 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v78 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v134.fields._list = v78->static_fields->NoblePhantasmBgmVolumeRate;
    v68 = j_il2cpp_value_box_0(float_TypeInfo, &v134, v75, v76, v77);
    v85 = v68;
    if ( !v68 || (v68 = sub_1C13E60(v68, v67->obj.klass->_1.element_class)) != 0 )
    {
      if ( v67->max_length <= 1 )
        goto LABEL_91;
      v67->m_Items[1] = (Il2CppObject *)v85;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[1], v85, v79, v80, v81, v82, v83, v84);
      v68 = StringLiteral_24361/*"timeoutTicks"*/;
      if ( StringLiteral_24361/*"timeoutTicks"*/ )
      {
        v68 = sub_1C13E60(StringLiteral_24361/*"timeoutTicks"*/, v67->obj.klass->_1.element_class);
        if ( !v68 )
          goto LABEL_92;
        v69 = StringLiteral_24361/*"timeoutTicks"*/;
      }
      else
      {
        v69 = 0LL;
      }
      if ( v67->max_length <= 2 )
        goto LABEL_91;
      v67->m_Items[2] = (Il2CppObject *)v69;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[2], v69, v86, v87, v88, v89, v90, v91);
      *(_DWORD *)&v133.fields.hasValue = 1;
      v68 = j_il2cpp_value_box_0(int_TypeInfo, &v133, v92, v93, v94);
      v101 = v68;
      if ( !v68 || (v68 = sub_1C13E60(v68, v67->obj.klass->_1.element_class)) != 0 )
      {
        if ( v67->max_length <= 3 )
          goto LABEL_91;
        v67->m_Items[3] = (Il2CppObject *)v101;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[3], v101, v95, v96, v97, v98, v99, v100);
        v68 = StringLiteral_24320/*"textarea"*/;
        if ( StringLiteral_24320/*"textarea"*/ )
        {
          v68 = sub_1C13E60(StringLiteral_24320/*"textarea"*/, v67->obj.klass->_1.element_class);
          if ( !v68 )
            goto LABEL_92;
          v69 = StringLiteral_24320/*"textarea"*/;
        }
        else
        {
          v69 = 0LL;
        }
        if ( v67->max_length <= 4 )
          goto LABEL_91;
        v67->m_Items[4] = (Il2CppObject *)v69;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[4], v69, v102, v103, v104, v105, v106, v107);
        v132 = 1056964608;
        v68 = j_il2cpp_value_box_0(float_TypeInfo, &v132, v108, v109, v110);
        v117 = v68;
        if ( !v68 || (v68 = sub_1C13E60(v68, v67->obj.klass->_1.element_class)) != 0 )
        {
          if ( v67->max_length <= 5 )
            goto LABEL_91;
          v67->m_Items[5] = (Il2CppObject *)v117;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[5], v117, v111, v112, v113, v114, v115, v116);
          v68 = StringLiteral_22651/*"onProductPurchaseDeferred"*/;
          if ( StringLiteral_22651/*"onProductPurchaseDeferred"*/ )
          {
            v68 = sub_1C13E60(StringLiteral_22651/*"onProductPurchaseDeferred"*/, v67->obj.klass->_1.element_class);
            if ( !v68 )
              goto LABEL_92;
            v69 = StringLiteral_22651/*"onProductPurchaseDeferred"*/;
          }
          else
          {
            v69 = 0LL;
          }
          if ( v67->max_length <= 6 )
            goto LABEL_91;
          v67->m_Items[6] = (Il2CppObject *)v69;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[6], v69, v118, v119, v120, v121, v122, v123);
          v68 = StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/;
          if ( !StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/ )
          {
            v69 = 0LL;
LABEL_84:
            if ( v67->max_length > 7 )
            {
              v67->m_Items[7] = (Il2CppObject *)v69;
              sub_1C13CC8((PartyOrganizationUtility_o *)&v67->m_Items[7], v69, v124, v125, v126, v127, v128, v129);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v130 = iTween__Hash(v67, 0LL);
              iTween__ValueTo(gameObject, v130, 0LL);
              return;
            }
LABEL_91:
            sub_1C13F88(v68, v69);
          }
          v68 = sub_1C13E60(StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/, v67->obj.klass->_1.element_class);
          if ( v68 )
          {
            v69 = StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v131 = sub_1C13FA4(v68);
    sub_1C13E4C(v131, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v32, this->fields.BackupBgmName, v51);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v52 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v134,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v135 = v134;
          while ( 1 )
          {
            v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v135,
                    (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v53 )
              break;
            current = v135.fields._current;
            if ( !v135.fields._current )
              sub_1C13F80(v53, v54);
            v56 = (float)(__int64)v135.fields._current[2].klass + -800.0;
            if ( v56 == INFINITY )
              v57 = 0x80000000;
            else
              v57 = (int)v56;
            v133 = 0LL;
            v137 = (System_Nullable_float__o)&v133;
            System_Nullable_float____ctor(v137, 0.5, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
            v58 = v133;
            v140.fields.value = v57 & (unsigned int)~(v57 >> 31);
            *(_OWORD *)&v134.fields._list = 0uLL;
            *(_QWORD *)&v140.fields.hasValue = &v134;
            System_Nullable_long____ctor(v140, Method_System_Nullable_long___ctor__, v59);
            v138 = 0LL;
            v139 = v58;
            BgmPlayArgs__Update(
              (BgmPlayArgs_o *)current,
              v138,
              v139,
              *(System_Nullable_long__o *)&v134.fields._list,
              0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v135,
            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_39458848(v52, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v32 )
  {
    v70 = this->fields.performance;
    if ( !v70 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v70->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v72 = this->fields.performance;
      if ( v72 )
      {
        performance = (__int64)v72->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v73 = this->fields.performance;
          if ( v73 )
          {
            performance = (__int64)v73->fields.logic;
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
  v74 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v74, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v20; // x19
  System_Func_object__bool__o *v21; // x20

  if ( (byte_4BB6E96 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_1C13D24(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass144_0__ExistBackupBgmPlayGroup_b__0__, v8);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass144_0_TypeInfo, v9);
    byte_4BB6E96 = 1;
  }
  v10 = sub_1C13F70(BattleSequenceManager___c__DisplayClass144_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass144_0___ctor((BattleSequenceManager___c__DisplayClass144_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1C13F80(v11, v12);
  *(_QWORD *)(v10 + 16) = checkBgmName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)checkBgmName, v13, v14, v15, v16, v17, v18);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v20 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v21 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_BattleSequenceManager___c__DisplayClass144_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49924064(
           (System_Collections_Generic_IEnumerable_TSource__o *)v20,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_2F9C7E0 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_4BB6E76 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB6E76 = 1;
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
        sub_1C13F88(this, method);
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
    sub_1C13F80(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__50202144; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x21
  BattleSequenceManager___c_c *v39; // x0
  System_Comparison_T__o *_9__77_0; // x23
  Il2CppObject *v41; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Func_object__bool__o *v49; // x23
  System_Collections_Generic_List_object__o *v50; // x21
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  BattleSequenceManager___c_c *v52; // x0
  System_Comparison_T__o *_9__77_2; // x19
  Il2CppObject *v54; // x22
  struct BattleSequenceManager___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BB6E65 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_1C13D24(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6);
    sub_1C13D24(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v10);
    sub_1C13D24(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v11);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v21);
    sub_1C13D24(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v22);
    sub_1C13D24(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v23);
    sub_1C13D24(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_0__, v24);
    sub_1C13D24(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_2__, v25);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass77_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v26);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo, v27);
    sub_1C13D24(&BattleSequenceManager___c_TypeInfo, v28);
    byte_4BB6E65 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v29 = sub_1C13F70(BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass77_0___ctor((BattleSequenceManager___c__DisplayClass77_0_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_27;
  *(_QWORD *)(v29 + 16) = syncGroupName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)syncGroupName, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__50202144 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                                                                           sequence,
                                                                                           (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v38 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v38,
    ComponentsInChildren_object__50202144,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v39 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v39 = BattleSequenceManager___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v39->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = BattleSequenceManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__77_0,
      v41,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__77_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__77_0,
      (int64_t)_9__77_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  System_Collections_Generic_List_object___Sort_56814736(
    v38,
    _9__77_0,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v49 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v29,
    Method_BattleSequenceManager___c__DisplayClass77_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v38,
          (System_Func_T__bool__o *)v49,
          (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v50 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v50,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__50202144 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                                                                             sequence,
                                                                                             (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v50 )
    {
      System_Collections_Generic_List_object___AddRange(
        v50,
        ComponentsInChildren_object__50202144,
        (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v51 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                                             sequence,
                                                             (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v50,
        v51,
        (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v52 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v52 = BattleSequenceManager___c_TypeInfo;
      }
      _9__77_2 = (System_Comparison_T__o *)v52->static_fields->__9__77_2;
      if ( !_9__77_2 )
      {
        if ( !v52->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v52);
          v52 = BattleSequenceManager___c_TypeInfo;
        }
        v54 = (Il2CppObject *)v52->static_fields->__9;
        _9__77_2 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__77_2,
          v54,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__77_2__,
          0LL);
        v55 = BattleSequenceManager___c_TypeInfo->static_fields;
        v55->__9__77_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__77_2;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v55->__9__77_2, (int64_t)_9__77_2, v56, v57, v58, v59, v60, v61);
      }
      System_Collections_Generic_List_object___Sort_56814736(
        v50,
        _9__77_2,
        (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v50,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v63,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v63.fields._current )
          sub_1C13F80(0LL, v62);
      }
      while ( (((__int64 (*)(void))v63.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1C13F80(ComponentsInChildren_object__50202144, v31);
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
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4BB6E69 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB6E69 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C13F80(actor, *(_QWORD *)&curLimCnt);
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

  if ( (byte_4BB6E9B & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___, inputRenderer);
    byte_4BB6E9B = 1;
  }
  v9.fields.r = 0.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 0.0;
  *(UnityEngine_Color_o *)&v5 = BasicHelper__GetValue_object__Color_(
                                  (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
                                  (Il2CppObject *)inputRenderer,
                                  v9,
                                  (const MethodInfo_2F7DB14 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x22
  Il2CppObject *Instance; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB6E89 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&pos);
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1C13D24(&StringLiteral_6151/*"EndWrite can only be called once for each asynchronous operation."*/, v9);
    sub_1C13D24(&StringLiteral_10861/*"PlayRaceResult "*/, v10);
    byte_4BB6E89 = 1;
  }
  if ( isEnemy )
    v11 = &StringLiteral_6151/*"EndWrite can only be called once for each asynchronous operation."*/;
  else
    v11 = &StringLiteral_10861/*"PlayRaceResult "*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v14, v15, v16);
  v18 = System_String__Format_62982316(format, v12, v17, 0LL);
  if ( !Instance )
    sub_1C13F80(v18, v19);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleSequenceManager___c__DisplayClass125_0_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v12; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4BB6E8A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex);
    sub_1C13D24(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v5);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass125_0__GetTargetPosIndexTransform_b__0__, v6);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass125_0_TypeInfo, v7);
    byte_4BB6E8A = 1;
  }
  v8 = (BattleSequenceManager___c__DisplayClass125_0_o *)sub_1C13F70(BattleSequenceManager___c__DisplayClass125_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass125_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass125_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v12,
                                        (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v9 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v9 )
      return UnityEngine_GameObject__get_transform(v9, 0LL);
LABEL_9:
    sub_1C13F80(v9, v10);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)fxdVoice, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1C13CC8((PartyOrganizationUtility_o *)fxdVoice, (int64_t)fixedVoice, v10, v11, v12, v13, v14, v15);
  }
  return fixedVoice != 0LL;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *ExecutingTdInfo; // x0
  Il2CppObject *Component_object; // x19
  BattleSequenceManager_c *v12; // x0

  if ( (byte_4BB6E95 & 1) == 0 )
  {
    sub_1C13D24(&BattleSequenceManager_TypeInfo, entity);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    byte_4BB6E95 = 1;
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
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return 0;
  v12 = BattleSequenceManager_TypeInfo;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = (UnityEngine_GameObject_o *)BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v12);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_1C13F80(ExecutingTdInfo, v9);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           ExecutingTdInfo->fields.m_CachedPtr,
           0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4BB6E97 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v2);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4BB6E97 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v5[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  v5 = (UnityEngine_GameObject_o *)v5[4].klass;
  if ( !v5 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1C13F80(v5, v6);
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

  if ( (byte_4BB6E99 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB6E99 = 1;
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4BB6E67 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_1C13D24(&SoundManager_TypeInfo, v7);
    byte_4BB6E67 = 1;
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
    sub_1C13F80(IsNullOrEmpty, v9);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v19[4] = (Il2CppClass *)bgmName;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)bgmName, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4BB6E68 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, obj);
    byte_4BB6E68 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1C13F80(0LL, v8);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *klass; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *v14; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v17; // x21
  __int64 *v18; // x8
  struct BattlePerformance_o *v19; // x9
  System_String_o *v20; // x19
  BattleData_o *v21; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB6E85 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_19270/*"en-GB"*/, v6);
    sub_1C13D24(&StringLiteral_19269/*"en-CA"*/, v7);
    byte_4BB6E85 = 1;
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
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v11->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v13 = this->fields.performance;
        if ( !v13 )
          goto LABEL_54;
        v14 = v13->fields.data;
        if ( !v14 )
          goto LABEL_54;
        if ( v14->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                v17 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v17,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v17 )
                    goto LABEL_54;
                  if ( LOBYTE(v17[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v18 = &StringLiteral_19270/*"en-GB"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v18 = &StringLiteral_19269/*"en-CA"*/;
                      }
                      v19 = this->fields.performance;
                      if ( !v19 )
                        goto LABEL_54;
                      v20 = (System_String_o *)*v18;
                      v21 = v19->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v21 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v21,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v20,
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
                          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v26 = v23;
                            v27 = v24;
                            v28 = v25;
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
                                v34.fields.z = v28 - z;
                                v34.fields.y = v27 - y;
                                v34.fields.x = v26 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v34, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1C13F80(klass, v10);
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
    sub_1C13F80(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (PartyOrganizationUtility_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1C13CC8(p_BgChangedCallback, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  float v30; // s9
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4BB6E7A & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    sub_1C13D24(&System_IDisposable_TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4BB6E7A = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_1C13F80(0LL, v11);
    klass = v10->klass;
    v13 = v10;
    v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1C13F80(0LL, v17);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_16;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_16:
        v22 = sub_1C65D04(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_23;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_23:
        v26 = sub_1C65D04(v18, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !v27 )
        sub_1C13F80(0LL, v28);
      v29 = *(System_String_o **)(v27 + 16);
      v30 = *(float *)(v27 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v29, v30 * newValue, 0LL);
    }
    v31 = *(_QWORD *)v18;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_1C65D04(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
  }
}


void __fastcall BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4BB6E9A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__, method);
    byte_4BB6E9A = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_32E3DE8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v40; // w9
  Il2CppObject *v41; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v43; // w2
  int v44; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v55; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v59; // x20
  __int64 v60; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 v62; // x23
  UnityEngine_Object_o *v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct UnityEngine_GameObject_array *v70; // x8
  struct UnityEngine_GameObject_array *v71; // x9
  int64_t v72; // x1
  struct UnityEngine_GameObject_array *v73; // x27
  __int64 v74; // x8
  unsigned __int64 v75; // x21
  UnityEngine_Object_o *v76; // x23
  char v77; // w22
  Il2CppObject *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v80; // x20
  __int64 v81; // x23
  unsigned __int64 v82; // x9
  unsigned __int64 v83; // x27
  UnityEngine_Object_o *v84; // x22
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct UnityEngine_GameObject_array *v91; // x8
  struct UnityEngine_GameObject_array *v92; // x9
  int64_t v93; // x1
  struct UnityEngine_GameObject_array *v94; // x23
  __int64 v95; // x8
  unsigned __int64 v96; // x27
  int v97; // w28
  UnityEngine_Object_o *v98; // x22
  char v99; // w21
  Il2CppObject *v100; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v102; // x20
  __int64 v103; // x8
  unsigned __int64 v104; // x22
  UnityEngine_Object_o *v105; // x21
  Il2CppObject *v106; // x0
  const MethodInfo *v107; // x2
  struct UnityEngine_GameObject_array *v108; // x20
  __int64 v109; // x8
  unsigned __int64 v110; // x22
  UnityEngine_Object_o *v111; // x21
  Il2CppObject *v112; // x0
  const MethodInfo *v113; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v116; // x2
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  UnityEngine_Camera_o *v123; // x21
  int32_t cullingMask; // w22
  char v125; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v127; // w22
  char v128; // w0
  UnityEngine_Object_o *v129; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  BattlePerformance_o *v131; // x19
  int32_t v132; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BB6E7C & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&CommonUI_TypeInfo, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_TreasureDvcMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Object__Clear__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool__get_Count__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v22);
    sub_1C13D24(&StringLiteral_9680/*"NoPorts"*/, v23);
    sub_1C13D24(&StringLiteral_3261/*"Battle/TurnSituation/"*/, v24);
    byte_4BB6E7C = 1;
  }
  entity = 0LL;
  memset(&v136, 0, sizeof(v136));
  memset(&v135, 0, sizeof(v135));
  this->fields.IsPlaying = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v25);
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v28);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v30);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v31);
  BattleSequenceManager__restoreBattleActorTransform(this, v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_3238670 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v33) )
    BattleSequenceManager__CrossFadeBgm(this, v34);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v34);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v136 = v134;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v136,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v136.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v136,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v40 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v40;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v135 = v134;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v135,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v41 = v135.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)v41, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v43 = createdObjects->fields._size;
  v44 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v44;
  if ( v43 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v43, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v47 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v47, 0LL);
    *p_seqObject = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.seqObject, 0LL, v48, v49, v50, v51, v52, v53);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v55 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v55->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v55->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + p_actorlist->max_length )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v59 = 4LL;
      v60 = 32LL;
      while ( 1 )
      {
        max_length = saveWaitPlayer->max_length;
        v62 = v59 - 4;
        if ( v59 - 4 >= (int)max_length )
          break;
        if ( v62 >= max_length )
          goto LABEL_186;
        v63 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v59);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v70 = this->fields.saveWaitPlayer;
          if ( !v70 )
            goto LABEL_106;
          if ( v62 >= v70->max_length )
            goto LABEL_186;
          v71 = (*p_performance)->fields.p_actorlist;
          if ( !v71 )
            goto LABEL_106;
          if ( v62 >= v71->max_length )
            goto LABEL_186;
          v72 = *((_QWORD *)&v70->obj.klass + v59);
          *(Il2CppClass **)((char *)&v71->obj.klass + v60) = (Il2CppClass *)v72;
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v71 + v60), v72, v64, v65, v66, v67, v68, v69);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v59;
        v60 += 8LL;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v55 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v73 = v55->fields.p_actorlist;
    if ( !v73 )
      goto LABEL_106;
    v74 = *(_QWORD *)&v73->max_length;
    if ( (int)v74 >= 1 )
    {
      v75 = 0LL;
      while ( v75 < (unsigned int)v74 )
      {
        v76 = (UnityEngine_Object_o *)v73->m_Items[v75];
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
                                                   v75,
                                                   (const MethodInfo_35E3E98 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_106;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v76,
                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v77 & 1, 0LL);
          }
        }
        LODWORD(v74) = v73->max_length;
        if ( (__int64)++v75 >= (int)v74 )
          goto LABEL_92;
      }
LABEL_186:
      sub_1C13F88(transform, v27);
    }
    LODWORD(v75) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v80 = 4LL;
      v81 = 32LL;
      while ( 1 )
      {
        v82 = saveWaitEnemy->max_length;
        v83 = v80 - 4;
        if ( v80 - 4 >= (int)v82 )
          break;
        if ( v83 >= v82 )
          goto LABEL_186;
        v84 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v80);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v84, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v91 = this->fields.saveWaitEnemy;
          if ( !v91 )
            goto LABEL_106;
          if ( v83 >= v91->max_length )
            goto LABEL_186;
          v92 = (*p_performance)->fields.e_actorlist;
          if ( !v92 )
            goto LABEL_106;
          if ( v83 >= v92->max_length )
            goto LABEL_186;
          v93 = *((_QWORD *)&v91->obj.klass + v80);
          *(Il2CppClass **)((char *)&v92->obj.klass + v81) = (Il2CppClass *)v93;
          sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v92 + v81), v93, v85, v86, v87, v88, v89, v90);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v80;
        v81 += 8LL;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v94 = (*p_performance)->fields.e_actorlist;
    if ( !v94 )
      goto LABEL_106;
    v95 = *(_QWORD *)&v94->max_length;
    if ( (int)v95 >= 1 )
    {
      v96 = 0LL;
      v97 = v75;
      while ( v96 < (unsigned int)v95 )
      {
        v98 = (UnityEngine_Object_o *)v94->m_Items[v96];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v98, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v97 + v96,
                                                   (const MethodInfo_35E3E98 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v98 )
            goto LABEL_106;
          v99 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v98, (unsigned __int8)transform & 1, 0LL);
          v100 = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)v98,
                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v100,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v100 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v100[2].monitor;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v99 & 1, 0LL);
          }
        }
        LODWORD(v95) = v94->max_length;
        if ( (__int64)++v96 >= (int)v95 )
          goto LABEL_124;
      }
      goto LABEL_186;
    }
LABEL_124:
    v55 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v55->fields.data;
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
  v102 = (*p_performance)->fields.p_actorlist;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v105, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v105 )
          goto LABEL_106;
        v106 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v105,
                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v106, v107);
      }
      LODWORD(v103) = v102->max_length;
      if ( (__int64)++v104 >= (int)v103 )
        goto LABEL_144;
    }
    goto LABEL_186;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v108 = (*p_performance)->fields.e_actorlist;
  if ( !v108 )
    goto LABEL_106;
  v109 = *(_QWORD *)&v108->max_length;
  if ( (int)v109 >= 1 )
  {
    v110 = 0LL;
    while ( v110 < (unsigned int)v109 )
    {
      v111 = (UnityEngine_Object_o *)v108->m_Items[v110];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v111, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v111 )
          goto LABEL_106;
        v112 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v111,
                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v112, v113);
      }
      LODWORD(v109) = v108->max_length;
      if ( (__int64)++v110 >= (int)v109 )
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
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.standFigure, 0LL, v117, v118, v119, v120, v121, v122);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v116) )
    BattleSequenceManager__ReleaseCpk(this, v27);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v123 = this->fields.actorCamera;
  if ( !v123 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v125 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3261/*"Battle/TurnSituation/"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v123, (1 << v125) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v127 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v128 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3261/*"Battle/TurnSituation/"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v127 & ~(1 << v128), 0LL);
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
  v129 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v129, 0LL, 0LL);
  v27 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v27 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_106:
    sub_1C13F80(transform, v27);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v27,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_176:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9680/*"NoPorts"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v131 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v132 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v131, v132, CurrentGroundType, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BgmPlayArgsGroup_o *v13; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v14; // x0
  System_Object_array *v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v19; // x19
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int64_t v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Func_object__bool__o *v41; // x23
  Il2CppObject *object; // x0
  const MethodInfo_3749B88 *v43; // x3
  BgmPlayArgs_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Nullable_long__o v51; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v52; // 0:x1.8
  System_Nullable_float__o v53; // 0:x2.8
  System_Nullable_long__o v54; // 0:x0.16

  if ( (byte_4BB6E81 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_1C13D24(&BgmManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1C13D24(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C13D24(&Method_System_Nullable_long___ctor__, v10);
    sub_1C13D24(
      &Method_BattleSequenceManager___c__DisplayClass115_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v11);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass115_0_TypeInfo, v12);
    byte_4BB6E81 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v13 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v13 )
    {
      v14 = BgmPlayArgsGroup__AllArgsListNullExcluded(v13, 0LL);
      v15 = System_Linq_Enumerable__ToArray_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = v15,
            (v15 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1C13F80(v15, v16);
      }
      klass = v15->obj.klass;
      v19 = v15;
      v20 = *(unsigned __int16 *)(&v15->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C65D04(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v19, *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_1C13F80(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_20;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_20:
          v28 = sub_1C65D04(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = sub_1C13F70(BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass115_0___ctor((BattleSequenceManager___c__DisplayClass115_0_o *)v29, 0LL);
        v30 = *(_QWORD *)v24;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1C65D04(v24, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
        if ( !v29 )
          sub_1C13F80(v34, v34);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 16), v34, v35, v36, v37, v38, v39, v40);
        v41 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v29,
          Method_BattleSequenceManager___c__DisplayClass115_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v17,
                   (System_Func_T__bool__o *)v41,
                   (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v54.fields.value = (int64_t)object[2].klass;
        else
          v54.fields.value = 0LL;
        v44 = *(BgmPlayArgs_o **)(v29 + 16);
        *(_QWORD *)&v51.fields.hasValue = 0LL;
        v51.fields.value = 0LL;
        *(_QWORD *)&v54.fields.hasValue = &v51;
        System_Nullable_long____ctor(v54, Method_System_Nullable_long___ctor__, v43);
        if ( !v44 )
          sub_1C13F80(v45, v46);
        v52 = 0LL;
        v53 = 0LL;
        BgmPlayArgs__Update(v44, v52, v53, v51, 0LL);
      }
      v47 = *(_QWORD *)v24;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
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
        v50 = sub_1C65D04(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v24, *(_QWORD *)(v50 + 8));
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

  if ( (byte_4BB6E7D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, actor);
    byte_4BB6E7D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1C13F80(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB6E82 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleSequenceManager__ReleaseCpk_b__116_0__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_9683/*"NoSkipDeadFirstId"*/, v7);
    byte_4BB6E82 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v37 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v13 = System_Int32__ToString((int32_t)&v37, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_62967944(
                                            (System_String_o *)StringLiteral_9683/*"NoSkipDeadFirstId"*/,
                                            v13,
                                            0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v21 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v23 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v26 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__116_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v33 = DelayInvokeMethodList->fields._items,
        v34 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v33) )
  {
LABEL_17:
    sub_1C13F80(Instance, v9);
  }
  v35 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v26,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    DelayInvokeMethodList->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fixedVoice, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.intactBgmList, 0LL, v2, v3, v4, v5, v6, v7);
}


ExecutingTdInfo_o *__fastcall BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  __int64 v5; // x1

  if ( (byte_4BB6E9D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    byte_4BB6E9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v4 )
      goto LABEL_11;
    if ( v4[24].monitor )
    {
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v4 )
        return (ExecutingTdInfo_o *)v4[24].monitor;
LABEL_11:
      sub_1C13F80(v4, v5);
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

  if ( (byte_4BB6E80 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    byte_4BB6E80 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.backupBgmPlayArgsGroup, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t limitCount; // w21
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *v15; // x0
  UnityEngine_Object_o *v16; // x19

  if ( (byte_4BB6E73 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_3252/*"Battle/Effect/"*/, v10);
    byte_4BB6E73 = 1;
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
    v13 = (Il2CppObject *)Manager__LoadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v13,
                                         (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v14 = System_String__Concat_62967944((System_String_o *)StringLiteral_3252/*"Battle/Effect/"*/, name, 0LL);
  v15 = UnityEngine_Resources__Load(v14, 0LL);
  if ( v15 )
  {
    if ( (UnityEngine_GameObject_c *)v15->klass == UnityEngine_GameObject_TypeInfo )
      v16 = v15;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (Il2CppObject *)v16;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v13,
                                         (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v11; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v13; // x20
  System_String_o **v14; // x8
  __int64 v15; // x9
  __int64 v16; // x25
  System_String_o *v17; // x21
  unsigned __int64 v18; // x26
  unsigned int v19; // w8
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  struct BattlePerformance_o *v27; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v31; // s9
  int v32; // s2
  unsigned int v33; // s0
  float v34; // s1
  struct BattlePerformance_o *v35; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB6E86 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_1C13D24(&StringLiteral_9517/*"NS_4551-1"*/, v5);
    sub_1C13D24(&StringLiteral_9518/*"NTLM"*/, v6);
    byte_4BB6E86 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  v11 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9517/*"NS_4551-1"*/
                           : &StringLiteral_9518/*"NTLM"*/);
  if ( !performance )
    goto LABEL_55;
  v15 = 344LL;
  if ( LOBYTE(actor[20].klass) )
    v15 = 352LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_55:
    sub_1C13F80(actor, method);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
        sub_1C13F88(actor, method);
      v20 = *(UnityEngine_GameObject_o **)(v16 + 32 + 8 * v18);
      v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, v21, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v17,
                                              0LL);
        if ( !v20 )
          goto LABEL_55;
        v22 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
        if ( !v22 )
          goto LABEL_55;
        v23 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(v22, 0LL);
        if ( !v23 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
        v27 = this->fields.performance;
        if ( !v27 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v27->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v13[20].klass) )
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
            v31 = (unsigned int)UnityEngine_Transform__get_position(v22, 0LL);
            *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_position(v22, 0LL);
            if ( !transform )
              goto LABEL_55;
            v33 = v31;
            v34 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v32 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v20, 0, 0LL);
          v35 = this->fields.performance;
          if ( !v35 )
            goto LABEL_55;
          data = v35->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v13[20].klass) )
            UnityEngine_GameObject__SetActive(v20, 1, 0LL);
        }
      }
      v19 = *(_DWORD *)(v16 + 24);
      ++v18;
    }
    while ( (__int64)v18 < (int)v19 );
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
    sub_1C13F80(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1C13CC8(
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
  __int64 v6; // x1
  void *battleTargetList; // x0
  int32_t v8; // w21

  if ( (byte_4BB6E92 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4BB6E92 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v8 = 0;
  while ( v8 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v8,
                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
        ++v8;
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
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1C13F80(battleTargetList, isReset);
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
  sub_1C13CC8(
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_String_array *BgmNameListWithIds; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB6E93 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB6E93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v7);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.intactBgmList,
    (int64_t)BgmNameListWithIds,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  if ( (byte_4BB6E84 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4BB6E84 = 1;
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
    sub_1C13F80(this, targetActor);
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
            if ( !byte_4BAEDA1 )
            {
              this = (BattleSequenceManager_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, targetActor);
              byte_4BAEDA1 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4BB6E6B & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4BB6E6B = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v9),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1C13F80(actor, isStart);
  }
  v10 = 0;
  while ( v10 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v10,
                                          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          *(BattleFBXComponent_o **)&klass->_1.byval_arg.bits,
          isStart,
          v11);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v10;
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
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB6E6C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, fbx);
    sub_1C13D24(&StringLiteral_16863/*"_txt_servant"*/, v6);
    byte_4BB6E6C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_1C13F80(v7, v8);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16863/*"_txt_servant"*/, 0LL);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *Component_object; // x20
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x26
  System_String_o *v13; // x0
  BattleSequenceManager_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v19; // x0
  BattleSequenceManager_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x21
  unsigned __int64 v23; // x8
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB6E6A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_2266/*"ActorSide"*/, v8);
    byte_4BB6E6A = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1C13F80(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v24 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v24, 0LL);
    v14 = (BattleSequenceManager_o *)System_String__Concat_62967944((System_String_o *)StringLiteral_2266/*"ActorSide"*/, v13, 0LL);
    v16 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v14,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v14,
                                    v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v11 < (int)max_length )
      {
        if ( v11 >= max_length )
LABEL_28:
          sub_1C13F88(seqObject, playerList);
        seqObject = playerList->m_Items[v11];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v16 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v16,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v11;
  }
  while ( v12 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v24 = i + 4;
    v19 = System_Int32__ToString((int32_t)&v24, 0LL);
    v20 = (BattleSequenceManager_o *)System_String__Concat_62967944((System_String_o *)StringLiteral_2266/*"ActorSide"*/, v19, 0LL);
    v22 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v20,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v20,
                                    v21);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v23 = enemyList->max_length;
      if ( (__int64)i < (int)v23 )
      {
        if ( i >= v23 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v22 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v22,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v29; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PartyOrganizationUtility_o *v36; // x21
  int v37; // w8
  void *v38; // x25
  unsigned int v39; // w20
  __int64 v40; // x8
  int v41; // w8
  void *v42; // x25
  unsigned int v43; // w20
  __int64 v44; // x8
  int v45; // w8
  void *v46; // x25
  unsigned int v47; // w20
  __int64 v48; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v50; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v52; // x22
  int v53; // w29
  int i; // w24
  __int64 v55; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v59; // x1
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int32_t v68; // w21
  struct UnityEngine_GameObject_o *v69; // x21
  Il2CppObject *v70; // x23
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo *v77; // x2
  __int64 v78; // x1
  BattlePerformance_o *v79; // x0
  int32_t v80; // w20
  UnityEngine_Object_o *v81; // x21
  _BOOL8 v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x22
  BattleSequenceManager_BattleTarget_o *v85; // x21
  __int64 v86; // x1
  BattlePerformance_o *v87; // x0
  __int64 ServantPosIndex; // x0
  __int64 v89; // x1
  __int64 v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x8
  int v102; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v103; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BB6E83 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method);
    sub_1C13D24(&BattleSequenceManager_BattleTarget_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass118_0__SetupTargetInfo_b__0__, v16);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass118_0_TypeInfo, v17);
    byte_4BB6E83 = 1;
  }
  memset(&j, 0, sizeof(j));
  v18 = sub_1C13F70(BattleSequenceManager___c__DisplayClass118_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass118_0___ctor((BattleSequenceManager___c__DisplayClass118_0_o *)v18, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.SingleTarget, 0LL, v19, v20, v21, v22, v23, v24);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v29 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v29,
        (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = v29;
        v36 = (PartyOrganizationUtility_o *)(v18 + 16);
        sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v29, v30, v31, v32, v33, v34, v35);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v37 = *((_DWORD *)actor + 6);
            v38 = actor;
            if ( v37 >= 1 )
            {
              v39 = 0;
              while ( v39 < v37 )
              {
                v40 = *((_QWORD *)v38 + (int)v39 + 4);
                if ( !v40 )
                  goto LABEL_78;
                v25 = *(unsigned int *)(v40 + 28);
                if ( (_DWORD)v25 )
                {
                  actor = v36->klass;
                  if ( !v36->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v25,
                                    (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v37 = *((_DWORD *)v38 + 6);
                if ( (int)++v39 >= v37 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1C13F88(actor, v25);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v41 = *((_DWORD *)actor + 6);
              v42 = actor;
              if ( v41 >= 1 )
              {
                v43 = 0;
                while ( v43 < v41 )
                {
                  v44 = *((_QWORD *)v42 + (int)v43 + 4);
                  if ( !v44 )
                    goto LABEL_78;
                  v25 = *(unsigned int *)(v44 + 40);
                  if ( (_DWORD)v25 )
                  {
                    actor = v36->klass;
                    if ( !v36->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v25,
                                      (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v41 = *((_DWORD *)v42 + 6);
                  if ( (int)++v43 >= v41 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v45 = *((_DWORD *)actor + 6);
                v46 = actor;
                if ( v45 >= 1 )
                {
                  v47 = 0;
                  while ( v47 < v45 )
                  {
                    v48 = *((_QWORD *)v46 + (int)v47 + 4);
                    if ( !v48 )
                      goto LABEL_78;
                    v25 = *(unsigned int *)(v48 + 28);
                    if ( (_DWORD)v25 )
                    {
                      actor = v36->klass;
                      if ( !v36->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v25,
                                        (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v45 = *((_DWORD *)v46 + 6);
                    if ( (int)++v47 >= v45 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v50 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v50,
                    (Il2CppObject *)v18,
                    Method_BattleSequenceManager___c__DisplayClass118_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v50,
                    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v52 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v52,
                  (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v36->klass;
                if ( v36->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v103,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v102 = 0;
                  j = v103;
                  v53 = 0;
LABEL_41:
                  for ( i = v53; ; ++i )
                  {
                    v53 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1C13F80(0LL, v55);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1C13F80(0LL, v59);
                    v60 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v60 )
                      sub_1C13F80(0LL, v61);
                    if ( (klass_low != 0) == (LOBYTE(v60[30].klass) != 0) )
                    {
                      ++v102;
                      goto LABEL_41;
                    }
                    if ( !v52 )
                      sub_1C13F80(v60, v61);
                    System_Collections_Generic_HashSet_int___Add(
                      v52,
                      current,
                      (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v102 && i == 1 )
                  {
                    v36->klass = (PartyOrganizationUtility_c *)v52;
                    sub_1C13CC8(v36, (int64_t)v52, v62, v63, v64, v65, v66, v67);
                  }
                  actor = v36->klass;
                  if ( v36->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v103,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v68 = -1;
                      for ( j = v103;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v68 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v68, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v69 = (struct UnityEngine_GameObject_o *)actor;
                      v70 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v69;
                      sub_1C13CC8(
                        (PartyOrganizationUtility_o *)&this->fields.SingleTarget,
                        (int64_t)v69,
                        v71,
                        v72,
                        v73,
                        v74,
                        v75,
                        v76);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v70, v77);
                    }
                    if ( v52 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v103,
                        v52,
                        (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v103;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v79 = this->fields.performance;
                        if ( !v79 )
                          sub_1C13F80(0LL, v78);
                        v80 = (int32_t)j.fields._current;
                        v81 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v79,
                                                        (int32_t)j.fields._current,
                                                        0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v82 = UnityEngine_Object__op_Equality(v81, 0LL, 0LL);
                        if ( !v82 )
                        {
                          if ( !v81 )
                            sub_1C13F80(v82, v83);
                          v84 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v81,
                                  (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v85 = (BattleSequenceManager_BattleTarget_o *)sub_1C13F70(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v85, 0LL);
                          v87 = this->fields.performance;
                          if ( !v87 )
                            sub_1C13F80(0LL, v86);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v87, v80, 0LL);
                          if ( !v85 )
                            sub_1C13F80(ServantPosIndex, v89);
                          BattleSequenceManager_BattleTarget__setup(
                            v85,
                            (BattleActorControl_o *)v84,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1C13F80(0LL, v90);
                          items = battleTargetList->fields._items;
                          v99 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1C13F80(battleTargetList, v90);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v85,
                              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v101 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v101[4] = (Il2CppClass *)v85;
                            sub_1C13CC8(
                              (PartyOrganizationUtility_o *)(v101 + 4),
                              (int64_t)v85,
                              v91,
                              v92,
                              v93,
                              v94,
                              v95,
                              v96);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1C13F80(actor, v25);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C13F80(0LL, method);
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
  if ( (byte_4BB6E79 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4BB6E79 = 1;
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
    sub_1C13F80(this, isFullScreen);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v15; // x4
  BaseMonoBehaviour_o *v16; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *klass; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v31; // x1
  Il2CppClass **v32; // x0
  int v33; // w22
  UnityEngine_Component_o *v34; // x0
  BattleSyncTransformComponent_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v45; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4BB6E88 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___, tlcont);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB6E88 = 1;
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
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
                                                          v12);
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
        v16 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v16 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        klass = (UnityEngine_Transform_o *)v16[10].klass;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v15);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v16,
                                            dummyActorPrefab,
                                            klass,
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
        v29 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v31 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v31, v22, v23, v24, v25, v26, v27);
        }
        v33 = 0;
      }
      else
      {
        v33 = 1;
      }
      v34 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0LL);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v34,
                                          (const MethodInfo_2F7D198 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v35 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v33 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v35;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v42 = *(_QWORD *)&this->fields.m_CachedPtr;
        v43 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v42 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = v42 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v45 + 32) = tlcont;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)tlcont, v36, v37, v38, v39, v40, v41);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1C13F80(this, tlcont);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  void *v22; // x8
  unsigned __int64 v23; // x26
  NoblePhantasmTargetOverwriteTransform_o *v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BB6E98 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BB6E98 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      battleTargetList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v11 )
        break;
      if ( !v26.fields._current )
        sub_1C13F80(v11, v12);
      monitor = (UnityEngine_Object_o *)v26.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v14 )
      {
        if ( !monitor )
          sub_1C13F80(v14, v15);
        v16 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v18 )
            sub_1C13F80(0LL, v17);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v18,
                                                                    (const MethodInfo_2FE0358 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1C13F80(IsNullOrEmpty, v21);
            v22 = Components_object[1].monitor;
            if ( (int)v22 >= 1 )
            {
              v23 = 0LL;
              do
              {
                if ( v23 >= (unsigned int)v22 )
                  sub_1C13F88(IsNullOrEmpty, v21);
                v24 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v23);
                if ( isOverwrite )
                {
                  if ( !v24 )
                    sub_1C13F80(0LL, v21);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v24, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v24 )
                    sub_1C13F80(0LL, v21);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v24, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v22) = Components_object[1].monitor;
                ++v23;
              }
              while ( (__int64)v23 < (int)v22 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1C13F80(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1C13CC8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  float delayInvokeTimer; // s8
  __int64 v8; // x1
  float v9; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB6E63 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4BB6E63 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v9 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v9;
    if ( v9 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        DelayInvokeMethodList,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v14.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v14.fields._current[1].monitor)(
            v14.fields._current[4].klass,
            v14.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v11 = this->fields.DelayInvokeMethodList;
      if ( !v11 )
LABEL_14:
        sub_1C13F80(DelayInvokeMethodList, v8);
      size = v11->fields._size;
      v13 = v11->fields._version + 1;
      v11->fields._size = 0;
      v11->fields._version = v13;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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

  if ( (byte_4BB6E7B & 1) == 0 )
  {
    sub_1C13D24(&BattleSequenceManager__WaitEndSequence_d__109_TypeInfo, method);
    byte_4BB6E7B = 1;
  }
  v3 = sub_1C13F70(BattleSequenceManager__WaitEndSequence_d__109_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__109___ctor((BattleSequenceManager__WaitEndSequence_d__109_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C13F80(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__116_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB6EA0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4BB6EA0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v16.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C13F80(0LL, v11);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v12 = this->fields.ReleaseSoundNames;
  if ( !v12 )
LABEL_14:
    sub_1C13F80(ReleaseSoundNames, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__89_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1C13F80(this, comp);
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

  if ( (byte_4BB6E6E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, voiceMaster);
    byte_4BB6E6E = 1;
  }
  FlagRequestNumber = System_String__Concat_62967944((System_String_o *)StringLiteral_16374/*"^c"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_43711144((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1C13F80(FlagRequestNumber, v10);
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
  BattlePerformance_o *performance; // x23
  System_Action_o *v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4BB6E77 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1C13D24(&Method_BattleSequenceManager_OnBgChanged__, v21);
    byte_4BB6E77 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.BgChangedCallback,
    (int64_t)callback,
    *(int64_t *)&tp,
    parentCamera,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v8,
    v9);
  performance = this->fields.performance;
  v23 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1C13F80(v24, v25);
  v26.fields.z = v15;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v26.fields.x = v17;
  v26.fields.y = v16;
  BattlePerformance__ForceChangeBg(performance, id, tp, v26, v27, 1, parentCamera, v23, 0LL);
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

  if ( (byte_4BB6E70 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, voiceMaster);
    byte_4BB6E70 = 1;
  }
  FlagRequestNumber = System_String__Concat_62967944((System_String_o *)StringLiteral_16374/*"^c"*/, labelName, 0LL);
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
    sub_1C13F80(FlagRequestNumber, v10);
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
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4BB6E8D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4BB6E8D = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_32E9CBC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_32E9A48 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1C13F80(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB6E8F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4BB6E8F = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4BB6E5F & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB6E5F = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.actor;
  if ( !v6 )
    sub_1C13F80(0LL, v5);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v6,
                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4BB6E62 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v5);
    byte_4BB6E62 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C65C00(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C65C00(v2);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v10);
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

  if ( (byte_4BB6E60 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB6E60 = 1;
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
    sub_1C13F80(v4, v5);
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
  __int64 v3; // x1
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v10; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v12; // x20
  struct BattlePerformance_o *v14; // x8

  if ( (byte_4BB6E61 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB6E61 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v7->fields.data;
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
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v10 = this->fields.performance;
  if ( !v10 )
    goto LABEL_27;
  nowAction = v10->fields.nowAction;
  v12 = (BattleServantData_o *)*((_QWORD *)Component_object + 57);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v12 )
LABEL_27:
    sub_1C13F80(Component_object, v6);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 57), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v12, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_27;
  Component_object = v14->fields.data;
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
  __int64 v16; // x1
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct UnityEngine_Transform_o *parent; // x0
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
  const MethodInfo *v71; // x1
  System_Collections_Generic_Dictionary_object__int__o *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_HashSet_T__o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  if ( (byte_4BB6E75 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4BB6E75 = 1;
  }
  this->fields.performance = performance;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.performance,
    (int64_t)performance,
    (int64_t)actor,
    (int32_t)players,
    (System_String_o *)enemies,
    (BattleSetupInfo_o *)camera,
    (FollowerInfo_o *)bg,
    (PartyListViewItem_o *)method);
  this->fields.actor = actor;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.actor, (int64_t)actor, v18, v19, v20, v21, v22, v23);
  this->fields.playerActors = players;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.playerActors, (int64_t)players, v24, v25, v26, v27, v28, v29);
  this->fields.enemyActors = enemies;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.enemyActors, (int64_t)enemies, v30, v31, v32, v33, v34, v35);
  this->fields.actorCamera = camera;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.actorCamera, (int64_t)camera, v36, v37, v38, v39, v40, v41);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.effectCamera,
    (int64_t)middleCamera,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.cutInCamera,
    (int64_t)cutIncamera,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1C13F80(actorCamera, v43);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.originalCameraRoot,
    (int64_t)parent,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.bgObject = bg;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bgObject, (int64_t)bg, v65, v66, v67, v68, v69, v70);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v71);
  v72 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v72,
    (const MethodInfo_32E9114 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v72;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v79,
    (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v79;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
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
  if ( (byte_4BB6E90 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4BB6E90 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4BB6E72 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_2262/*"ActiveOpens"*/, name);
    sub_1C13D24(&StringLiteral_17029/*"android.os.Environment"*/, v4);
    byte_4BB6E72 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2262/*"ActiveOpens"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_17029/*"android.os.Environment"*/, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  AssetLoader_LoadEndDataHandler_o *v44; // x19

  if ( (byte_4BB6E64 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__0__, v19);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo, v20);
    sub_1C13D24(&StringLiteral_9680/*"NoPorts"*/, v21);
    byte_4BB6E64 = 1;
  }
  v22 = sub_1C13F70(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 56) = onComplete;
  *(_DWORD *)(v22 + 24) = chrId;
  *(_DWORD *)(v22 + 28) = limitCount;
  *(_DWORD *)(v22 + 32) = treasureDeviceId;
  *(_DWORD *)(v22 + 36) = treasureDeviceLv;
  *(_DWORD *)(v22 + 40) = npChargeStage;
  *(_DWORD *)(v22 + 44) = overwriteSvtVoiceId;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 56), (int64_t)onComplete, v31, v32, v33, v34, v35, v36);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v22 + 24);
  this->fields.limitCount = *(_DWORD *)(v22 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v22 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v22 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v22 + 48) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 48), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
  actor = *(UnityEngine_GameObject_o **)(v22 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v22 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1C13F80(actor, v24);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9680/*"NoPorts"*/, v44, 1, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x8
  int64_t v33; // x0
  struct UnityEngine_GameObject_array **p_saveWaitPlayer; // x24
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct BattlePerformance_o *v41; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  int64_t v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v52; // x8
  struct BattlePerformance_o *v53; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v56; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v58; // w25
  char v59; // w0
  System_Collections_Generic_List_bool__o *v60; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct BattlePerformance_o *v68; // x8
  struct UnityEngine_GameObject_array *v69; // x29
  __int64 v70; // x8
  unsigned __int64 v71; // x20
  UnityEngine_Object_o *v72; // x25
  const MethodInfo *v73; // x2
  BattleServantData_o *sequenceManager; // x26
  System_Collections_Generic_List_bool__o *v75; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct UnityEngine_GameObject_array *v88; // x8
  __int64 v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct BattlePerformance_o *v96; // x8
  struct UnityEngine_GameObject_array *v97; // x8
  __int64 v98; // x0
  struct BattlePerformance_o *v99; // x8
  struct UnityEngine_GameObject_array *v100; // x27
  __int64 v101; // x8
  unsigned __int64 v102; // x20
  UnityEngine_Object_o *v103; // x24
  const MethodInfo *v104; // x2
  BattleServantData_o *v105; // x25
  System_Collections_Generic_List_bool__o *v106; // x26
  struct System_Boolean_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct UnityEngine_GameObject_array *v119; // x8
  __int64 v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct BattlePerformance_o *v127; // x8
  struct UnityEngine_GameObject_array *v128; // x8
  __int64 v129; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  BattleSequenceManager_o *v137; // x22
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  BattleSequenceManager_o *v147; // x23
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  BattleSequenceManager_c *v157; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  BattleSequenceManager_o *v164; // x23
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  BattleSequenceManager_o *v180; // x23
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  System_Collections_Hashtable_o *v193; // x0
  System_String_o *BgmName; // x0
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  const MethodInfo *v201; // x2
  BattleSequenceManager_o *v202; // x21
  PartyOrganizationUtility_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v205; // x24
  System_Delegate_o *v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  int64_t v213; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v214; // x1
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  const MethodInfo *v221; // x2
  __int64 v222; // x0
  System_Action_USSequencer__o *v223; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v225; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v227; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4BB6E78 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_1C13D24(&BattleSequenceManager_TypeInfo, v8);
    sub_1C13D24(&CommonUI_TypeInfo, v9);
    sub_1C13D24(&FSUtility_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, v11);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_1C13D24(&int_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1C13D24(&object___TypeInfo, v18);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    sub_1C13D24(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_1C13D24(&float_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v22);
    sub_1C13D24(&StringLiteral_12991/*"Short"*/, v23);
    sub_1C13D24(&StringLiteral_19961/*"friendCode"*/, v24);
    sub_1C13D24(&StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/, v25);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v26);
    sub_1C13D24(&StringLiteral_22651/*"onProductPurchaseDeferred"*/, v27);
    sub_1C13D24(&StringLiteral_3261/*"Battle/TurnSituation/"*/, v28);
    sub_1C13D24(&StringLiteral_24361/*"timeoutTicks"*/, v29);
    this = (BattleSequenceManager_o *)sub_1C13D24(&iTween_TypeInfo, v30);
    byte_4BB6E78 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v33 = sub_1C13DCC(UnityEngine_GameObject___TypeInfo, p_actorlist->max_length);
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v33;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v7->fields.saveWaitPlayer, v33, v35, v36, v37, v38, v39, v40);
  v41 = v7->fields.performance;
  if ( !v41 )
    goto LABEL_142;
  e_actorlist = v41->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v43 = sub_1C13DCC(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v43;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v7->fields.saveWaitEnemy, v43, v44, v45, v46, v47, v48, v49);
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
        (System_String_o *)StringLiteral_12991/*"Short"*/,
        0.7,
        0LL);
    v52 = v7->fields.performance;
    if ( !v52 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v52->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v53 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v53 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v53->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v56 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3261/*"Battle/TurnSituation/"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v56), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    v58 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v59 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3261/*"Battle/TurnSituation/"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v59) | v58, 0LL);
    v60 = (System_Collections_Generic_List_bool__o *)sub_1C13F70(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v60,
      (const MethodInfo_35E3934 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v60;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v7->fields.ActorActiveList, (int64_t)v60, v62, v63, v64, v65, v66, v67);
    v68 = v7->fields.performance;
    if ( !v68 )
      goto LABEL_142;
    v69 = v68->fields.p_actorlist;
    v223 = callback;
    if ( !v69 )
      goto LABEL_142;
    v70 = *(_QWORD *)&v69->max_length;
    if ( (int)v70 >= 1 )
    {
      v71 = 0LL;
      while ( v71 < (unsigned int)v70 )
      {
        v72 = (UnityEngine_Object_o *)v69->m_Items[v71];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v72 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v72,
                                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          sequenceManager = (BattleServantData_o *)this[1].fields.sequenceManager;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v73);
          v75 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v72, 0LL);
          if ( !v75 )
            goto LABEL_142;
          items = v75->fields._items;
          v77 = Method_System_Collections_Generic_List_bool__Add__;
          ++v75->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v75->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v75,
              (unsigned __int8)this & 1,
              *(const MethodInfo_35E4198 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v75->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          if ( !sequenceManager )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(sequenceManager, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || sequenceManager->fields.isAnimPlayedWithdraw )
          {
            v88 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v71 >= v88->max_length )
              break;
            v89 = (__int64)v88 + 8 * v71;
            *(_QWORD *)(v89 + 32) = v72;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v89 + 32), (int64_t)v72, v82, v83, v84, v85, v86, v87);
            v96 = v7->fields.performance;
            if ( !v96 )
              goto LABEL_142;
            v97 = v96->fields.p_actorlist;
            if ( !v97 )
              goto LABEL_142;
            if ( v71 >= v97->max_length )
              break;
            v98 = (__int64)v97 + 8 * v71;
            *(_QWORD *)(v98 + 32) = 0LL;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v98 + 32), 0LL, v90, v91, v92, v93, v94, v95);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v72, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v79 = *(_QWORD *)&this->fields.m_CachedPtr;
          v80 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v79 )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v79 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_35E4198 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v79 + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(v70) = v69->max_length;
        if ( (__int64)++v71 >= (int)v70 )
          goto LABEL_57;
      }
LABEL_143:
      sub_1C13F88(this, isOpponent);
    }
LABEL_57:
    v99 = v7->fields.performance;
    if ( !v99 )
      goto LABEL_142;
    v100 = v99->fields.e_actorlist;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    if ( !v100 )
      goto LABEL_142;
    v101 = *(_QWORD *)&v100->max_length;
    if ( (int)v101 >= 1 )
    {
      v102 = 0LL;
      while ( v102 < (unsigned int)v101 )
      {
        v103 = (UnityEngine_Object_o *)v100->m_Items[v102];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v103, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v103 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v103,
                                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v105 = (BattleServantData_o *)this[1].fields.sequenceManager;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v104);
          v106 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                              (UnityEngine_GameObject_o *)v103,
                                              0LL);
          if ( !v106 )
            goto LABEL_142;
          v107 = v106->fields._items;
          v108 = Method_System_Collections_Generic_List_bool__Add__;
          ++v106->fields._version;
          if ( !v107 )
            goto LABEL_142;
          v109 = v106->fields._size;
          if ( (unsigned int)v109 >= v107->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v106,
              (unsigned __int8)this & 1,
              *(const MethodInfo_35E4198 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v106->fields._size = v109 + 1;
            v107->m_Items[v109 + 4] = (unsigned __int8)this & 1;
          }
          if ( !v105 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v105, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || v105->fields.isAnimPlayedWithdraw )
          {
            v119 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v102 >= v119->max_length )
              goto LABEL_143;
            v120 = (__int64)v119 + 8 * v102;
            *(_QWORD *)(v120 + 32) = v103;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v120 + 32), (int64_t)v103, v113, v114, v115, v116, v117, v118);
            v127 = v7->fields.performance;
            if ( !v127 )
              goto LABEL_142;
            v128 = v127->fields.e_actorlist;
            if ( !v128 )
              goto LABEL_142;
            if ( v102 >= v128->max_length )
              goto LABEL_143;
            v129 = (__int64)v128 + 8 * v102;
            *(_QWORD *)(v129 + 32) = 0LL;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v129 + 32), 0LL, v121, v122, v123, v124, v125, v126);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v103, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v110 = *(_QWORD *)&this->fields.m_CachedPtr;
          v111 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v110 )
            goto LABEL_142;
          v112 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_35E4198 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v112 + 1;
            *(_BYTE *)(v110 + v112 + 32) = 0;
          }
        }
        LODWORD(v101) = v100->max_length;
        if ( (__int64)++v102 >= (int)v101 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1C13DCC(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_142;
    v137 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19961/*"friendCode"*/;
    if ( StringLiteral_19961/*"friendCode"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1C13E60(StringLiteral_19961/*"friendCode"*/, v137->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      *(_QWORD *)&isOpponent = StringLiteral_19961/*"friendCode"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v137->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v137->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v137->fields.sequenceManager,
      isOpponent,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    v227 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v227, v138, v139, v140);
    v147 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1C13E60(this, v137->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v137->fields.servantId = v147;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v137->fields.servantId,
        (int64_t)v147,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      this = (BattleSequenceManager_o *)StringLiteral_24361/*"timeoutTicks"*/;
      if ( StringLiteral_24361/*"timeoutTicks"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1C13E60(StringLiteral_24361/*"timeoutTicks"*/, v137->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        *(_QWORD *)&isOpponent = StringLiteral_24361/*"timeoutTicks"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v137->fields.testNpPer = isOpponent;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v137->fields.testNpPer, isOpponent, v148, v149, v150, v151, v152, v153);
      v157 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v157 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v157->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v154,
                                          v155,
                                          v156);
      v164 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1C13E60(this, v137->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v137->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v164;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v137->fields.FadeTargetPanelIndexs,
          (int64_t)v164,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
        this = (BattleSequenceManager_o *)StringLiteral_24320/*"textarea"*/;
        if ( StringLiteral_24320/*"textarea"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1C13E60(StringLiteral_24320/*"textarea"*/, v137->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          *(_QWORD *)&isOpponent = StringLiteral_24320/*"textarea"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        *(_QWORD *)&v137->fields.IsPlaying = isOpponent;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v137->fields.IsPlaying,
          isOpponent,
          v165,
          v166,
          v167,
          v168,
          v169,
          v170);
        v225 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v225, v171, v172, v173);
        v180 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1C13E60(this, v137->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v137->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v180;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v137->fields.ReleaseSoundNames,
            (int64_t)v180,
            v174,
            v175,
            v176,
            v177,
            v178,
            v179);
          this = (BattleSequenceManager_o *)StringLiteral_22651/*"onProductPurchaseDeferred"*/;
          if ( StringLiteral_22651/*"onProductPurchaseDeferred"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1C13E60(StringLiteral_22651/*"onProductPurchaseDeferred"*/, v137->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            *(_QWORD *)&isOpponent = StringLiteral_22651/*"onProductPurchaseDeferred"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v137->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v137->fields.performance,
            isOpponent,
            v181,
            v182,
            v183,
            v184,
            v185,
            v186);
          this = (BattleSequenceManager_o *)StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/;
          if ( !StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_125:
            if ( LODWORD(v137->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v137->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v137->fields.seqObject,
              isOpponent,
              v187,
              v188,
              v189,
              v190,
              v191,
              v192);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v193 = iTween__Hash((System_Object_array *)v137, 0LL);
            iTween__ValueTo(gameObject, v193, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&v7->fields.BackupBgmName,
                (int64_t)BgmName,
                v195,
                v196,
                v197,
                v198,
                v199,
                v200);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v201);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v202 = this;
                    p_playerActors = (PartyOrganizationUtility_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v205 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1C13F70(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v205,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v206 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v205, 0LL);
                    v213 = (int64_t)v206;
                    if ( v206 )
                    {
                      v214 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v206->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (PartyOrganizationUtility_c *)v206;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v206->klass == v214 )
                          goto LABEL_137;
                      }
                      sub_1C14240(v206);
                    }
                    p_playerActors->klass = (PartyOrganizationUtility_c *)v213;
LABEL_137:
                    sub_1C13CC8(p_playerActors, v213, v207, v208, v209, v210, v211, v212);
                    v7->fields.OnCompleteActorCallback = v223;
                    sub_1C13CC8(
                      (PartyOrganizationUtility_o *)&v7->fields.OnCompleteActorCallback,
                      (int64_t)v223,
                      v215,
                      v216,
                      v217,
                      v218,
                      v219,
                      v220);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v202, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v221);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1C13F80(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1C13E60(StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/, v137->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_10015/*"On iOS and tvOS Firebase requires native (C/C++) and Cocoapod\ncomponents that are distributed with the Firebase SDK and via\nCocoapods.\n\nIt's likely that you did not include the require Cocoapod\ndependencies for Firebase in your Unity project.\nYou may have disabled the iOS Resolver which would have added\nthe Cocoapod dependencies for you.\n\nDo the following to enable the iOS Resolver in Unity:\n* Select the menu option 'Assets -> Play Services Resolver ->\n  iOS Resolver -> Settings'\n* In the iOS Resolver settings check 'Podfile Generation' and\n  'Add Cocoapods to Generated Xcode Project'.\n* Build your iOS or tvOS project and check the Unity console for\n  any errors associated with Cocoapod tool execution.\n  You will need to correctly install Cocoapods tools to generate\n  a working build.\n"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v222 = sub_1C13FA4(this);
    sub_1C13E4C(v222, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v13; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v15; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  VoiceMaster_o *v19; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x22

  if ( (byte_4BB6E91 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&Voice_TypeInfo, v6);
    byte_4BB6E91 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v11->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v13);
          if ( PlayedSoundList )
          {
            v15 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_VoiceMaster___);
                v19 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v19, chrId, FileName, v22);
                }
                v23 = *(_QWORD *)&v15->max_length;
                if ( (int)v23 >= 1 )
                {
                  v24 = 0LL;
                  do
                  {
                    if ( v24 >= (unsigned int)v23 )
                      sub_1C13F88(MasterData_object, v17);
                    BattleSequenceManager__addServantVoicePlayed(this, v19, this->fields.chrId, v15->m_Items[v24], v18);
                    LODWORD(v23) = v15->max_length;
                    ++v24;
                  }
                  while ( (__int64)v24 < (int)v23 );
                }
                return;
              }
LABEL_31:
              sub_1C13F80(actor, method);
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

  if ( (byte_4BB6E6F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, voiceMaster);
    byte_4BB6E6F = 1;
  }
  FlagRequestNumber = System_String__Concat_62967944((System_String_o *)StringLiteral_16374/*"^c"*/, labelName, 0LL);
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
    sub_1C13F80(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB6E8C & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4BB6E8C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    battleTargetList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C13F80(0LL, v8);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v12.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v9 = this->fields.battleTargetList;
  if ( !v9 )
LABEL_13:
    sub_1C13F80(battleTargetList, method);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  WellFired_USTimelineContainer_o *v27; // x21
  System_String_o *monitor; // x22
  System_String_o *v29; // x1
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  if ( (byte_4BB6E74 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_1C13D24(&StringLiteral_1123/*"/"*/, v9);
    byte_4BB6E74 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1C13F80(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1C13F80(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C13F80(0LL, v21);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C14240(v20);
LABEL_37:
      sub_1C13F80(Component_object, v26);
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_1C13F80(0LL, v24);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v27 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v29 = System_String__Concat_62967944((System_String_o *)StringLiteral_1123/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v29, 0LL) )
      goto LABEL_27;
  }
  v27 = 0LL;
LABEL_27:
  v30 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_32;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_32:
      v35 = sub_1C65D04(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  return v27;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4BB6E8E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4BB6E8E = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_32E9AB4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1C13F80(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_34E78E0 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v89; // x3
  UnityEngine_Object_o *v90; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__49834368; // x0
  BattleSequenceManager___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x19
  System_Func_object__bool__o *_9__89_0; // x21
  Il2CppObject *v95; // x22
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Generic_IEnumerable_T__o *v103; // x20
  System_Action_object__o *v104; // x21
  BattleSequenceManager_o *v105; // x0
  const MethodInfo *v106; // x3
  WellFired_USTimelineContainer_o *v107; // x26
  System_Collections_Generic_List_object__o *v108; // x21
  System_Collections_Generic_List_object__o *v109; // x29
  Il2CppObject *klass; // x27
  System_Collections_Generic_List_object__o *monitor; // x27
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  int64_t v121; // x1
  Il2CppClass **v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  __int64 v130; // x27
  int64_t v131; // x1
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x1
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  Il2CppClass *v151; // x8
  int64_t v152; // x1
  __int64 v153; // x1
  Il2CppObject *v154; // x28
  struct UnityEngine_Vector3_StaticFields *v155; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v159; // x0
  PartyOrganizationUtility_o *v160; // x27
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  const MethodInfo *v167; // x1
  const MethodInfo *v168; // x2
  int v169; // w8
  __int64 v170; // x20
  int v171; // w22
  UnityEngine_Object_o *v172; // x26
  __int64 v173; // x8
  __int64 v174; // x27
  unsigned __int64 v175; // x20
  __int64 v176; // x28
  System_String_o *name; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  int32_t klass_high; // w26
  int32_t monitor_high; // w29
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x26
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  System_Collections_Generic_List_object__o *v193; // x8
  struct System_Object_array *v194; // x9
  _QWORD *v195; // x10
  __int64 v196; // x11
  Il2CppClass **v197; // x0
  System_String_o *v198; // x0
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  __int64 v205; // x10
  System_String_o *v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  __int64 v213; // x9
  int64_t v214; // x1
  System_Action_o *parent; // x0
  PartyOrganizationUtility_o *v216; // x0
  System_String_o *v217; // x0
  __int64 v218; // x9
  System_String_o **v219; // x29
  System_String_o *v220; // x0
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  System_String_o *v227; // x0
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  int64_t v234; // x1
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  __int64 methodPtr_low; // x9
  int64_t v246; // x1
  __int64 v247; // x28
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  UnityEngine_Transform_o *v254; // x28
  int v255; // s0
  System_Collections_Generic_List_object__o *v258; // x25
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  struct System_Object_array *v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  Il2CppClass **v268; // x0
  BattleSequenceManager_o *v269; // x0
  const MethodInfo *v270; // x3
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  struct System_Object_array *v277; // x8
  _QWORD *v278; // x9
  __int64 v279; // x10
  int64_t v280; // x1
  Il2CppClass **v281; // x0
  Il2CppObject *current; // x24
  _BOOL8 v283; // x0
  __int64 v284; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v286; // x1
  void *v287; // x24
  int v288; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v290; // x0
  _QWORD *v291; // x25
  __int64 v292; // x8
  unsigned __int64 v293; // x28
  int64_t v294; // x26
  System_String_o *v295; // x0
  __int64 v296; // x9
  _BOOL8 v297; // x0
  __int64 v298; // x1
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  UnityEngine_Component_o *v305; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  struct System_Object_array *v313; // x8
  _QWORD *v314; // x9
  __int64 v315; // x10
  Il2CppClass **v316; // x0
  __int64 v317; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v319; // w19
  System_Collections_IEnumerator_c *v320; // x8
  __int64 v321; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v324; // x8
  __int64 v325; // x9
  System_Collections_IEnumerator_c **v326; // x10
  __int64 v327; // x0
  UnityEngine_Component_o *v328; // x0
  __int64 v329; // x1
  __int64 v330; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v332; // x1
  Il2CppObject *v333; // x0
  __int64 v334; // x1
  Il2CppObject *v335; // x25
  System_String_o *v336; // x0
  __int64 v337; // x1
  System_String_o *v338; // x0
  __int64 v339; // x1
  System_String_o *v340; // x0
  System_String_o *v341; // x0
  __int64 v342; // x0
  __int64 v343; // x8
  __int64 v344; // x24
  __int64 v345; // x9
  int *v346; // x10
  __int64 v347; // x0
  __int64 v348; // x1
  System_Collections_IEnumerator_c *v349; // x8
  __int64 v350; // x9
  int32_t *v351; // x10
  __int64 v352; // x0
  System_Collections_IEnumerator_c *v353; // x8
  __int64 v354; // x9
  System_Collections_IEnumerator_c **v355; // x10
  __int64 v356; // x0
  UnityEngine_Component_o *v357; // x0
  __int64 v358; // x1
  __int64 v359; // x9
  UnityEngine_GameObject_o *v360; // x0
  __int64 v361; // x1
  Il2CppObject *v362; // x0
  __int64 v363; // x1
  WellFired_USTimelineContainer_o *v364; // x24
  System_String_o *v365; // x0
  __int64 v366; // x1
  bool v367; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v369; // x27
  System_String_o *v370; // x0
  __int64 v371; // x1
  bool v372; // w28
  System_String_o *v373; // x0
  System_String_o *v374; // x0
  __int64 v375; // x1
  System_String_o *v376; // x0
  UnityEngine_Component_o *v377; // x0
  UnityEngine_Transform_o *v378; // x0
  System_String_o *v379; // x0
  __int64 v380; // x1
  UnityEngine_GameObject_o *v381; // x0
  __int64 v382; // x1
  UnityEngine_Transform_o *v383; // x25
  System_String_o *v384; // x0
  System_String_o *v385; // x0
  UnityEngine_Transform_o *v386; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v388; // x1
  System_String_o *v389; // x0
  bool v390; // w0
  __int64 v391; // x1
  __int64 *v392; // x8
  System_String_o *v393; // x0
  bool v394; // w0
  System_String_o *v395; // x28
  UnityEngine_GameObject_o *v396; // x0
  System_String_o *v397; // x27
  UnityEngine_Transform_o *v398; // x0
  __int64 v399; // x1
  UnityEngine_Object_o *v400; // x25
  _BOOL8 v401; // x0
  __int64 v402; // x1
  __int64 v403; // x1
  System_Collections_IEnumerator_o *v404; // x26
  System_Collections_IEnumerator_c *v405; // x8
  __int64 v406; // x9
  int32_t *v407; // x10
  __int64 v408; // x0
  System_Collections_IEnumerator_c *v409; // x8
  __int64 v410; // x9
  System_Collections_IEnumerator_c **v411; // x10
  __int64 v412; // x0
  UnityEngine_Component_o *v413; // x0
  __int64 v414; // x1
  UnityEngine_Object_o *v415; // x25
  __int64 v416; // x9
  UnityEngine_Object_o *v417; // x0
  __int64 v418; // x1
  System_String_o *v419; // x0
  __int64 v420; // x1
  System_String_o *v421; // x0
  _BOOL8 v422; // x0
  const MethodInfo *v423; // x2
  __int64 v424; // x1
  __int64 v425; // x1
  int32_t v426; // w25
  System_String_o *v427; // x26
  __int64 v428; // x0
  __int64 v429; // x25
  __int64 v430; // x8
  __int64 v431; // x9
  int *v432; // x10
  __int64 v433; // x0
  System_String_o *v434; // x25
  System_String_o *v435; // x0
  __int64 v436; // x1
  System_String_o *v437; // x0
  __int64 v438; // x1
  System_String_array *v439; // x0
  __int64 v440; // x1
  __int64 v441; // x1
  System_String_o *v442; // x26
  UnityEngine_GameObject_o *v443; // x0
  __int64 v444; // x1
  UnityEngine_Transform_o *v445; // x25
  System_String_o *v446; // x0
  System_String_o *v447; // x0
  __int64 v448; // x1
  System_String_o *v449; // x0
  UnityEngine_Transform_o *v450; // x0
  Il2CppObject *v451; // x25
  System_Collections_Generic_List_object__o *v452; // x0
  _BOOL8 v453; // x0
  __int64 v454; // x1
  System_String_o *v455; // x0
  __int64 v456; // x1
  System_String_o *v457; // x1
  const MethodInfo *v458; // x3
  __int64 v459; // x1
  int64_t v460; // x2
  int32_t v461; // w3
  System_String_o *v462; // x4
  BattleSetupInfo_o *v463; // x5
  FollowerInfo_o *v464; // x6
  PartyListViewItem_o *v465; // x7
  System_Collections_Generic_List_object__o *v466; // x0
  struct System_Object_array *v467; // x8
  _QWORD *v468; // x9
  __int64 v469; // x10
  Il2CppClass **v470; // x8
  __int64 v471; // x0
  __int64 v472; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v474; // x1
  UnityEngine_Transform_o *v475; // x0
  UnityEngine_Transform_o *v476; // x0
  __int64 v477; // x1
  float v478; // s8
  float v479; // s9
  float v480; // s10
  __int64 v481; // x1
  UnityEngine_Transform_o *v482; // x26
  UnityEngine_GameObject_o *v483; // x0
  UnityEngine_Transform_o *v484; // x0
  UnityEngine_Transform_o *v485; // x0
  __int64 v486; // x1
  BattleSequenceManager_o *v487; // x0
  const MethodInfo *v488; // x4
  int32_t v489; // w26
  UnityEngine_Transform_o *v490; // x0
  __int64 v491; // x1
  UnityEngine_Transform_o *v492; // x0
  System_String_o *v493; // x0
  __int64 v494; // x1
  System_String_o *v495; // x0
  System_String_o *v496; // x0
  const MethodInfo *v497; // x3
  int32_t v498; // w2
  const MethodInfo *v499; // x3
  System_Object_array *EventCount; // x0
  __int64 v501; // x1
  System_Object_array *v502; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v505; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v507; // x0
  __int64 v508; // x1
  Il2CppObject *v509; // x27
  System_String_o *v510; // x0
  __int64 v511; // x9
  _BOOL8 v512; // x0
  __int64 v513; // x1
  int64_t v514; // x2
  int32_t v515; // w3
  System_String_o *v516; // x4
  BattleSetupInfo_o *v517; // x5
  FollowerInfo_o *v518; // x6
  PartyListViewItem_o *v519; // x7
  UnityEngine_Component_o *v520; // x0
  UnityEngine_Transform_o *v521; // x0
  int64_t v522; // x2
  int32_t v523; // w3
  System_String_o *v524; // x4
  BattleSetupInfo_o *v525; // x5
  FollowerInfo_o *v526; // x6
  PartyListViewItem_o *v527; // x7
  struct System_Object_array *v528; // x8
  _QWORD *v529; // x9
  __int64 v530; // x10
  Il2CppClass **v531; // x0
  int32_t layer; // w26
  __int64 v533; // x22
  __int64 v534; // x8
  __int64 v535; // x20
  __int64 v536; // x9
  int *v537; // x10
  __int64 v538; // x0
  __int64 v539; // x1
  _DWORD *v540; // x8
  UnityEngine_Object_o *v541; // x21
  Il2CppClass *v542; // x8
  UnityEngine_Object_o *v543; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v545; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v547; // x4
  int32_t v548; // w22
  System_String_o *v549; // x0
  const MethodInfo *v550; // x4
  _DWORD *v551; // x8
  int v552; // w20
  BalanceConfig_c *v553; // x0
  int32_t v554; // w20
  System_String_o *v555; // x0
  const MethodInfo *v556; // x4
  __int64 v557; // x0
  __int64 v558; // x22
  __int64 v559; // x8
  __int64 v560; // x9
  int *v561; // x10
  __int64 v562; // x0
  int v563; // w1
  int v564; // w19
  void *v565; // x0
  void *v566; // x25
  __int64 v567; // x0
  __int64 v568; // x19
  __int64 v569; // x8
  __int64 v570; // x9
  int *v571; // x10
  __int64 v572; // x0
  System_String_o *v573; // [xsp+8h] [xbp-138h]
  System_String_o *v574; // [xsp+10h] [xbp-130h]
  Il2CppObject *v575; // [xsp+18h] [xbp-128h]
  Il2CppObject *item; // [xsp+20h] [xbp-120h]
  UnityEngine_Component_o *v577; // [xsp+28h] [xbp-118h]
  char v578; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evsa; // [xsp+30h] [xbp-110h]
  bool v581; // [xsp+38h] [xbp-108h]
  __int64 v582; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v583; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v585; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v588; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v589; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v591; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v593; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB6E6D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo, callback);
    sub_1C13D24(&BalanceConfig_TypeInfo, v7);
    sub_1C13D24(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___, v8);
    sub_1C13D24(&Method_BattleSequenceManager__setup_b__89_1__, v9);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v10);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___, v11);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_VoiceMaster___, v13);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v23);
    sub_1C13D24(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo, v24);
    sub_1C13D24(&System_GC_TypeInfo, v25);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v26);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v27);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v28);
    sub_1C13D24(&System_IDisposable_TypeInfo, v29);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v30);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v31);
    sub_1C13D24(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v32);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v35);
    sub_1C13D24(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v36);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v37);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v38);
    sub_1C13D24(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v39);
    sub_1C13D24(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v40);
    sub_1C13D24(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v41);
    sub_1C13D24(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v42);
    sub_1C13D24(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v43);
    sub_1C13D24(&NGUITools_TypeInfo, v44);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v45);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555760, v46);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v47);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v48);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v50);
    sub_1C13D24(&Method_BattleSequenceManager___c__setup_b__89_0__, v51);
    sub_1C13D24(&BattleSequenceManager___c_TypeInfo, v52);
    sub_1C13D24(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v53);
    sub_1C13D24(&WellFired_USFGOAttachToParentEvent_TypeInfo, v54);
    sub_1C13D24(&WellFired_USFGOChangeBgEvent_TypeInfo, v55);
    sub_1C13D24(&WellFired_USFGOPlayCutInEvent_TypeInfo, v56);
    sub_1C13D24(&WellFired_USFGOSetCameraEvent_TypeInfo, v57);
    sub_1C13D24(&Voice_TypeInfo, v58);
    sub_1C13D24(&StringLiteral_1131/*"/Actor/chr/"*/, v59);
    sub_1C13D24(&StringLiteral_3263/*"Battle/UniqueCamera/Add/{0}"*/, v60);
    sub_1C13D24(&StringLiteral_1141/*"/BattleActors/"*/, v61);
    sub_1C13D24(&StringLiteral_3265/*"BattleAssetUIAtlas"*/, v62);
    sub_1C13D24(&StringLiteral_3268/*"BattleCamera"*/, v63);
    sub_1C13D24(&StringLiteral_15095/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, v64);
    sub_1C13D24(&StringLiteral_2262/*"ActiveOpens"*/, v65);
    sub_1C13D24(&StringLiteral_17618/*"block"*/, v66);
    sub_1C13D24(&StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, v67);
    sub_1C13D24(&StringLiteral_1132/*"/Actor/chr/body_level_"*/, v68);
    sub_1C13D24(&StringLiteral_6527/*"FFFFFF"*/, v69);
    sub_1C13D24(&StringLiteral_1135/*"/AllEffects/"*/, v70);
    sub_1C13D24(&StringLiteral_18240/*"check_date_version"*/, v71);
    sub_1C13D24(&StringLiteral_4068/*"CameraRoot"*/, v72);
    sub_1C13D24(&StringLiteral_15093/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/, v73);
    sub_1C13D24(&StringLiteral_1153/*"/BattleCamera"*/, v74);
    sub_1C13D24(&StringLiteral_1156/*"/CutIns/"*/, v75);
    sub_1C13D24(&StringLiteral_3261/*"Battle/TurnSituation/"*/, v76);
    sub_1C13D24(&StringLiteral_1155/*"/Cameras/BattleCamera"*/, v77);
    sub_1C13D24(&StringLiteral_17029/*"android.os.Environment"*/, v78);
    sub_1C13D24(&StringLiteral_25071/*"war_board_move"*/, v79);
    sub_1C13D24(&StringLiteral_729/*"(Clone)"*/, v80);
    sub_1C13D24(&StringLiteral_15092/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/, v81);
    sub_1C13D24(&StringLiteral_1/*""*/, v82);
    sub_1C13D24(&StringLiteral_1130/*"/Actor/chr"*/, v83);
    sub_1C13D24(&StringLiteral_15091/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/, v84);
    sub_1C13D24(&StringLiteral_1212/*"0"*/, v85);
    sub_1C13D24(&StringLiteral_15094/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, v86);
    byte_4BB6E6D = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v589, 0, sizeof(v589));
  memset(&v588, 0, sizeof(v588));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_418;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v90 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2262/*"ActiveOpens"*/,
                                  v89);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[6].klass;
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v90 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v90,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_418;
  ComponentsInChildren_object__49834368 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__49834368(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2F86980 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v92 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v90;
  v581 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v93 = ComponentsInChildren_object__49834368;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v92 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__49834368 = v93;
  }
  _9__89_0 = (System_Func_object__bool__o *)v92->static_fields->__9__89_0;
  v577 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__89_0 )
  {
    evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)ComponentsInChildren_object__49834368;
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v92 = BattleSequenceManager___c_TypeInfo;
    }
    v95 = (Il2CppObject *)v92->static_fields->__9;
    _9__89_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__89_0, v95, Method_BattleSequenceManager___c__setup_b__89_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__89_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_0,
      (int64_t)_9__89_0,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    ComponentsInChildren_object__49834368 = (System_Collections_Generic_IEnumerable_TSource__o *)evs;
  }
  v103 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          ComponentsInChildren_object__49834368,
                                                          (System_Func_TSource__bool__o *)_9__89_0,
                                                          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v104 = (System_Action_object__o *)sub_1C13F70(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v104, object, Method_BattleSequenceManager__setup_b__89_1__, 0LL);
  BasicHelper__ForEach_object_(
    v103,
    (System_Action_T__o *)v104,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v107 = BattleSequenceManager__searchTimeline(
           v105,
           (WellFired_USSequencer_o *)Component_object,
           (System_String_o *)StringLiteral_6527/*"FFFFFF"*/,
           v106);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v109 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[6].klass;
  if ( !seqObject )
LABEL_418:
    sub_1C13F80(seqObject, callback);
  v575 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  evsa = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v109;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v107, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v107 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(v107, (UnityEngine_Transform_o *)seqObject, 0LL);
    monitor = (System_Collections_Generic_List_object__o *)object[21].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v107, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !monitor )
      goto LABEL_418;
    items = monitor->fields._items;
    v119 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_418;
    size = monitor->fields._size;
    v121 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v122[4] = (Il2CppClass *)v121;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v107, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_418;
    v129 = (int64_t)object[8].klass;
    v130 = seqObject;
    *(_QWORD *)(seqObject + 32) = v129;
    sub_1C13CC8((PartyOrganizationUtility_o *)(seqObject + 32), v129, v123, v124, v125, v126, v127, v128);
    v131 = (int64_t)object[8].monitor;
    *(_QWORD *)(v130 + 40) = v131;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v130 + 40), v131, v132, v133, v134, v135, v136, v137);
    v138 = (int64_t)object[9].klass;
    *(_QWORD *)(v130 + 48) = v138;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v130 + 48), v138, v139, v140, v141, v142, v143, v144);
    v151 = object[5].klass;
    if ( !v151 )
      goto LABEL_418;
    v152 = (int64_t)v151->vtable[6].method;
    *(_QWORD *)(v130 + 96) = v152;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v130 + 96), v152, v145, v146, v147, v148, v149, v150);
    v154 = (Il2CppObject *)object[22].klass;
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v153);
      byte_4BAEDA1 = 1;
    }
    v155 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v155->zeroVector.fields.x;
    y = v155->zeroVector.fields.y;
    z = v155->zeroVector.fields.z;
    if ( !byte_4BAEDA7 )
    {
      sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v153);
      byte_4BAEDA7 = 1;
    }
    v591.fields.x = x;
    v591.fields.y = y;
    v591.fields.z = z;
    v159 = UnityEngine_Object__Instantiate_object__50417632(
             v154,
             v591,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_3014FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555760);
    *(_QWORD *)(v130 + 72) = v159;
    v160 = (PartyOrganizationUtility_o *)(v130 + 72);
    sub_1C13CC8(v160, (int64_t)v159, v161, v162, v163, v164, v165, v166);
    seqObject = (__int64)v160->klass;
    if ( !v160->klass )
      goto LABEL_418;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v581 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v167);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v168);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v107,
                           1,
                           (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_418;
    v169 = *(_DWORD *)(seqObject + 24);
    v170 = seqObject;
    if ( v169 >= 1 )
    {
      v171 = 0;
      v172 = 0LL;
      v582 = seqObject;
      while ( 1 )
      {
        if ( v171 >= (unsigned int)v169 )
LABEL_422:
          sub_1C13F88(seqObject, callback);
        seqObject = *(_QWORD *)(v170 + 8LL * v171 + 32);
        if ( !seqObject )
          goto LABEL_418;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_418;
        v173 = *(_QWORD *)(seqObject + 24);
        v174 = seqObject;
        if ( (int)v173 >= 1 )
          break;
LABEL_102:
        v170 = v582;
        ++v171;
        v169 = *(_DWORD *)(v582 + 24);
        if ( v171 >= v169 )
          goto LABEL_103;
      }
      v175 = 0LL;
      while ( 1 )
      {
        if ( v175 >= (unsigned int)v173 )
          goto LABEL_422;
        v176 = *(_QWORD *)(v174 + 32 + 8 * v175);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v176, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v176 )
            goto LABEL_418;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v176, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15091/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v172, 0LL, 0LL) )
            {
              klass_high = HIDWORD(object[11].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_17029/*"android.os.Environment"*/,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v193 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              v109 = (System_Collections_Generic_List_object__o *)evsa;
              if ( !v193 )
                goto LABEL_418;
              v194 = v193->fields._items;
              v195 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v193->fields._version;
              if ( !v194 )
                goto LABEL_418;
              v196 = v193->fields._size;
              v172 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v196 >= v194->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v193,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
              }
              else
              {
                v197 = &v194->obj.klass + v196;
                v193->fields._size = v196 + 1;
                v197[4] = (Il2CppClass *)v172;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v197 + 4), (int64_t)v172, v187, v188, v189, v190, v191, v192);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v176 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v176 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_423:
              sub_1C14240(v176);
LABEL_424:
              sub_1C14240(v328);
LABEL_425:
              sub_1C13F80(v507, v508);
            }
            *(_QWORD *)(v176 + 56) = v172;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v176 + 56), (int64_t)v172, v178, v179, v180, v181, v182, v183);
            v246 = (int64_t)object[8].klass;
            *(_QWORD *)(v176 + 64) = v246;
            v247 = v176 + 64;
            sub_1C13CC8((PartyOrganizationUtility_o *)v247, v246, v248, v249, v250, v251, v252, v253);
            *(_BYTE *)(v247 + 28) = 0;
            if ( !v172 )
              goto LABEL_418;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v172, 0LL);
            if ( !object[6].klass )
              goto LABEL_418;
            v254 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[6].klass, 0LL);
            if ( !seqObject )
              goto LABEL_418;
            *(UnityEngine_Vector3_o *)&v255 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v254 )
              goto LABEL_418;
            UnityEngine_Transform__set_position(v254, *(UnityEngine_Vector3_o *)&v255, 0LL);
          }
          else
          {
            v198 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v176, 0LL);
            seqObject = System_String__op_Equality(v198, (System_String_o *)StringLiteral_15094/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v109 )
                goto LABEL_418;
              v205 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v176 + 304LL) >= (unsigned int)v205 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v176 + 200LL) + 8 * v205 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v176
                         : 0LL;
              else
                callback = 0LL;
              v241 = v109->fields._items;
              v242 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v109->fields._version;
              if ( !v241 )
                goto LABEL_418;
              v243 = v109->fields._size;
              if ( (unsigned int)v243 >= v241->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v109,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v244 = &v241->obj.klass + v243;
              v109->fields._size = v243 + 1;
              v244[4] = (Il2CppClass *)callback;
              v216 = (PartyOrganizationUtility_o *)(v244 + 4);
              goto LABEL_91;
            }
            v206 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v176, 0LL);
            if ( System_String__op_Equality(v206, (System_String_o *)StringLiteral_15095/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, 0LL) )
            {
              v213 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v176 + 304LL) < (unsigned int)v213
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v176 + 200LL) + 8 * v213 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v214 = (int64_t)object[8].klass;
              *(_QWORD *)(v176 + 56) = v214;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v176 + 56), v214, v207, v208, v209, v210, v211, v212);
              seqObject = (__int64)object[8].klass;
              if ( !seqObject )
                goto LABEL_418;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_418;
              parent = (System_Action_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v176 + 64) = parent;
              callback = parent;
              v216 = (PartyOrganizationUtility_o *)(v176 + 64);
LABEL_91:
              sub_1C13CC8(v216, (int64_t)callback, v199, v200, v201, v202, v203, v204);
              goto LABEL_101;
            }
            v217 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v176, 0LL);
            seqObject = System_String__op_Equality(v217, (System_String_o *)StringLiteral_15093/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v218 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v176 + 304LL) < (unsigned int)v218
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v176 + 200LL) + 8 * v218 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v219 = (System_String_o **)(v176 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v176 + 64),
                     (System_String_o *)StringLiteral_1212/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v219, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v220 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v219 = v220;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v176 + 64),
                  (int64_t)v220,
                  v221,
                  v222,
                  v223,
                  v224,
                  v225,
                  v226);
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v227 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v176 + 72) = v227;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v176 + 72),
                  (int64_t)v227,
                  v228,
                  v229,
                  v230,
                  v231,
                  v232,
                  v233);
                v234 = (int64_t)object[26].klass;
                *(_QWORD *)(v176 + 136) = v234;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v176 + 136), v234, v235, v236, v237, v238, v239, v240);
              }
              v109 = (System_Collections_Generic_List_object__o *)evsa;
            }
          }
        }
LABEL_101:
        LODWORD(v173) = *(_DWORD *)(v174 + 24);
        if ( (__int64)++v175 >= (int)v173 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v258 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v258,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v258 )
    goto LABEL_418;
  v265 = v258->fields._items;
  v266 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v258->fields._version;
  if ( !v265 )
    goto LABEL_418;
  v267 = v258->fields._size;
  if ( (unsigned int)v267 >= v265->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v258,
      item,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
  }
  else
  {
    v268 = &v265->obj.klass + v267;
    v258->fields._size = v267 + 1;
    v268[4] = (Il2CppClass *)item;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v268 + 4), (int64_t)item, v259, v260, v261, v262, v263, v264);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v269,
                         (WellFired_USSequencer_o *)v577,
                         (System_String_o *)StringLiteral_4068/*"CameraRoot"*/,
                         v270);
  v277 = v258->fields._items;
  v278 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v258->fields._version;
  if ( !v277 )
    goto LABEL_418;
  v279 = v258->fields._size;
  v280 = seqObject;
  if ( (unsigned int)v279 >= v277->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v258,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
  }
  else
  {
    v281 = &v277->obj.klass + v279;
    v258->fields._size = v279 + 1;
    v281[4] = (Il2CppClass *)v280;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v281 + 4), v280, v271, v272, v273, v274, v275, v276);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v585,
    v258,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v589 = v585;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v589,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v589.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v283 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v283 )
    {
      if ( !current )
        sub_1C13F80(v283, v284);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v287 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1C13F80(0LL, v286);
      v288 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v288 >= 1 )
      {
        for ( i = 0; i < v288; ++i )
        {
          if ( i >= (unsigned int)v288 )
            sub_1C13F88(ComponentsInChildren_object, v286);
          v290 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v287 + i + 4);
          if ( !v290 )
            sub_1C13F80(0LL, v286);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v290, 0LL);
          v291 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1C13F80(0LL, v286);
          v292 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v292 >= 1 )
          {
            v293 = 0LL;
            do
            {
              if ( v293 >= (unsigned int)v292 )
                sub_1C13F88(ComponentsInChildren_object, v286);
              v294 = v291[v293 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v294,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v294 )
                  sub_1C13F80(ComponentsInChildren_object, v286);
                v295 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v294, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v295,
                                                        (System_String_o *)StringLiteral_15092/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v296 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v294 + 304LL) < (unsigned int)v296
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v294 + 200LL) + 8 * v296 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C14240(v294);
LABEL_415:
                    sub_1C13F80(v297, v298);
                  }
                  v297 = System_String__op_Equality(
                           *(System_String_o **)(v294 + 80),
                           (System_String_o *)StringLiteral_3265/*"BattleAssetUIAtlas"*/,
                           0LL);
                  if ( v297 )
                  {
                    v305 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v305 )
                      sub_1C13F80(0LL, v298);
                    transform = UnityEngine_Component__get_transform(v305, 0LL);
                    *(_QWORD *)(v294 + 64) = transform;
                    sub_1C13CC8(
                      (PartyOrganizationUtility_o *)(v294 + 64),
                      (int64_t)transform,
                      v307,
                      v308,
                      v309,
                      v310,
                      v311,
                      v312);
                  }
                  else
                  {
                    if ( !v108 )
                      goto LABEL_415;
                    v313 = v108->fields._items;
                    v314 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v108->fields._version;
                    if ( !v313 )
                      sub_1C13F80(v297, v298);
                    v315 = v108->fields._size;
                    if ( (unsigned int)v315 >= v313->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v108,
                        (Il2CppObject *)v294,
                        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v316 = &v313->obj.klass + v315;
                      v108->fields._size = v315 + 1;
                      v316[4] = (Il2CppClass *)v294;
                      sub_1C13CC8((PartyOrganizationUtility_o *)(v316 + 4), v294, v299, v300, v301, v302, v303, v304);
                    }
                  }
                }
              }
              LODWORD(v292) = *((_DWORD *)v291 + 6);
              ++v293;
            }
            while ( (__int64)v293 < (int)v292 );
          }
          v288 = *((_DWORD *)v287 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v589,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v577, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1C13F80(0LL, v317);
  v319 = 0;
  while ( 1 )
  {
    v320 = Enumerator->klass;
    v321 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v320->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v321;
        p_offset += 4;
        if ( !v321 )
          goto LABEL_152;
      }
      p_method = (__int64)&v320->vtable[*p_offset].method;
    }
    else
    {
LABEL_152:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v324 = Enumerator->klass;
    v325 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v326 = (System_Collections_IEnumerator_c **)&v324->_1.interfaceOffsets->offset;
      while ( *(v326 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v325;
        v326 += 2;
        if ( !v325 )
          goto LABEL_159;
      }
      v327 = (__int64)&v324->vtable[*(_DWORD *)v326 + 1].method;
    }
    else
    {
LABEL_159:
      v327 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v328 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v327)(
                                        Enumerator,
                                        *(_QWORD *)(v327 + 8));
    if ( !v328 )
      sub_1C13F80(0LL, v329);
    v330 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v328->klass->vtable._0_Equals.methodPtr) < (unsigned int)v330
      || (UnityEngine_Transform_c *)v328->klass->_2.typeHierarchy[v330 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_424;
    }
    gameObject = UnityEngine_Component__get_gameObject(v328, 0LL);
    if ( !gameObject )
      sub_1C13F80(0LL, v332);
    v333 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v335 = v333;
    if ( !v333 )
      goto LABEL_428;
    v336 = (System_String_o *)v333[2].monitor;
    if ( !v336 )
      sub_1C13F80(0LL, v334);
    if ( System_String__StartsWith(v336, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) && v335[2].monitor )
    {
      v338 = (System_String_o *)v335[2].monitor;
      if ( !v338 )
        sub_1C13F80(0LL, v337);
      if ( System_String__StartsWith(v338, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
      {
        v340 = (System_String_o *)v335[2].monitor;
        if ( !v340 )
          sub_1C13F80(0LL, v339);
        v341 = System_String__Substring_62986948(v340, v340->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v319 += System_Int32__TryParse(v341, result, 0LL);
      }
    }
  }
  v342 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
  if ( v342 )
  {
    v343 = *(_QWORD *)v342;
    v344 = v342;
    v345 = *(unsigned __int16 *)(*(_QWORD *)v342 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v342 + 302LL) )
    {
      v346 = (int *)(*(_QWORD *)(v343 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v346 - 1) != System_IDisposable_TypeInfo )
      {
        --v345;
        v346 += 4;
        if ( !v345 )
          goto LABEL_178;
      }
      v347 = v343 + 16LL * *v346 + 312;
    }
    else
    {
LABEL_178:
      v347 = sub_1C65D04(v342, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v347)(v344, *(_QWORD *)(v347 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v577, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  v583 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v583 )
    sub_1C13F80(0LL, v348);
  v578 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v349 = v583->klass;
          v350 = *(unsigned __int16 *)(&v583->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v583->klass->_2.bitflags2 + 3) )
          {
            v351 = &v349->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v351 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v350;
              v351 += 4;
              if ( !v350 )
                goto LABEL_188;
            }
            v352 = (__int64)&v349->vtable[*v351].method;
          }
          else
          {
LABEL_188:
            v352 = sub_1C65D04(v583, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v352)(
                  v583,
                  *(_QWORD *)(v352 + 8)) & 1) == 0 )
          {
            v533 = 0LL;
            goto LABEL_366;
          }
          v353 = v583->klass;
          v354 = *(unsigned __int16 *)(&v583->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v583->klass->_2.bitflags2 + 3) )
          {
            v355 = (System_Collections_IEnumerator_c **)&v353->_1.interfaceOffsets->offset;
            while ( *(v355 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v354;
              v355 += 2;
              if ( !v354 )
                goto LABEL_195;
            }
            v356 = (__int64)&v353->vtable[*(_DWORD *)v355 + 1].method;
          }
          else
          {
LABEL_195:
            v356 = sub_1C65D04(v583, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v357 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v356)(
                                              v583,
                                              *(_QWORD *)(v356 + 8));
          if ( !v357 )
            sub_1C13F80(0LL, v358);
          v359 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v357->klass->vtable._0_Equals.methodPtr) < (unsigned int)v359
            || (UnityEngine_Transform_c *)v357->klass->_2.typeHierarchy[v359 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_427:
            sub_1C14240(v357);
LABEL_428:
            sub_1C13F80(v333, v334);
          }
          v360 = UnityEngine_Component__get_gameObject(v357, 0LL);
          if ( !v360 )
            sub_1C13F80(0LL, v361);
          v362 = UnityEngine_GameObject__GetComponent_object_(
                   v360,
                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v364 = (WellFired_USTimelineContainer_o *)v362;
          if ( !v362 )
            sub_1C13F80(0LL, v363);
          v365 = (System_String_o *)v362[2].monitor;
          if ( !v365 )
            sub_1C13F80(0LL, v363);
          v367 = System_String__StartsWith(v365, (System_String_o *)StringLiteral_1135/*"/AllEffects/"*/, 0LL);
          if ( v367 )
          {
            affectedObjectPath = v364->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1C13F80(0LL, v366);
            v369 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v369 = 0LL;
          }
          v370 = v364->fields.affectedObjectPath;
          if ( !v370 )
            sub_1C13F80(0LL, v366);
          v372 = System_String__StartsWith(v370, (System_String_o *)StringLiteral_1156/*"/CutIns/"*/, 0LL);
          if ( v372 )
          {
            v373 = v364->fields.affectedObjectPath;
            if ( !v373 )
              sub_1C13F80(0LL, v371);
            v369 = System_String__Substring(v373, 8, 0LL);
          }
          v374 = v364->fields.affectedObjectPath;
          if ( !v374 )
            sub_1C13F80(0LL, v371);
          if ( !System_String__StartsWith(v374, (System_String_o *)StringLiteral_1153/*"/BattleCamera"*/, 0LL) )
          {
            v376 = v364->fields.affectedObjectPath;
            if ( !v376 )
              sub_1C13F80(0LL, v375);
            if ( !System_String__StartsWith(v376, (System_String_o *)StringLiteral_1155/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v377 = (UnityEngine_Component_o *)object[8].klass;
          if ( !v377 )
            sub_1C13F80(0LL, v375);
          v378 = UnityEngine_Component__get_transform(v377, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v364, v378, 0LL);
        }
        v379 = v364->fields.affectedObjectPath;
        if ( !v379 )
          sub_1C13F80(0LL, v375);
        if ( System_String__StartsWith(v379, (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/, 0LL) )
          break;
        v421 = v364->fields.affectedObjectPath;
        if ( !v421 )
          sub_1C13F80(0LL, v380);
        v422 = System_String__StartsWith(v421, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL);
        if ( v422 )
          v369 = v364->fields.affectedObjectPath;
        if ( v369 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v422, v369, v423) )
            goto LABEL_326;
          if ( v367 )
          {
            v426 = System_String__IndexOf(v369, 0x2Fu, 0LL);
            if ( (v426 & 0x80000000) == 0 )
            {
              v427 = System_String__Substring(v369, v426 + 1, 0LL);
              v369 = System_String__Substring_62986948(v369, 0, v426, 0LL);
              goto LABEL_287;
            }
            if ( (v578 & 1) != 0 )
            {
              v427 = 0LL;
LABEL_287:
              v452 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v452 )
                sub_1C13F80(0LL, v425);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v585,
                v452,
                (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v574 = v427;
              v588 = v585;
              while ( 1 )
              {
                v453 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v588,
                         (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v453 )
                  break;
                v451 = v588.fields._current;
                if ( !v588.fields._current )
                  sub_1C13F80(v453, v454);
                v455 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v588.fields._current, 0LL);
                if ( !v455 )
                  sub_1C13F80(0LL, v456);
                v457 = System_String__Replace_62987572(
                         v455,
                         (System_String_o *)StringLiteral_729/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v369, v457, 0LL) )
                  goto LABEL_295;
              }
              v451 = 0LL;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v588,
                (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v578 = 1;
              goto LABEL_297;
            }
            v427 = 0LL;
            v451 = 0LL;
            v578 = 0;
          }
          else
          {
            v427 = 0LL;
            v451 = 0LL;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v451, 0LL, 0LL) )
          {
            v451 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[11].klass),
                                     v369,
                                     v458);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v451, 0LL, 0LL) )
            {
              v466 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v466 )
                sub_1C13F80(0LL, v459);
              v467 = v466->fields._items;
              v468 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v466->fields._version;
              if ( !v467 )
                sub_1C13F80(v466, v459);
              v469 = v466->fields._size;
              if ( (unsigned int)v469 >= v467->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v466,
                  v451,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v468[4] + 192LL) + 112LL));
              }
              else
              {
                v470 = &v467->obj.klass + v469;
                v466->fields._size = v469 + 1;
                v470[4] = (Il2CppClass *)v451;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v470 + 4), (int64_t)v451, v460, v461, v462, v463, v464, v465);
              }
              if ( !v451 )
                sub_1C13F80(v471, v472);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v451, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v451, 0LL, 0LL) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v427, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v451 )
              sub_1C13F80(IsNullOrEmpty, v474);
            v490 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v451, 0LL);
            if ( !v490 )
              sub_1C13F80(0LL, v491);
            v492 = UnityEngine_Transform__Find(v490, v427, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v364, v492, 0LL);
            goto LABEL_326;
          }
          if ( !v451 )
            sub_1C13F80(IsNullOrEmpty, v474);
          v475 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v451, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v364, v475, 0LL);
          if ( v372 )
          {
            v476 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v451, 0LL);
            if ( !v476 )
              sub_1C13F80(0LL, v477);
            localPosition = UnityEngine_Transform__get_localPosition(v476, 0LL);
            v478 = localPosition.fields.x;
            v479 = localPosition.fields.y;
            v480 = localPosition.fields.z;
            v482 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v451, 0LL);
            v483 = (UnityEngine_GameObject_o *)object[6].monitor;
            if ( !v483 )
              sub_1C13F80(0LL, v481);
            v484 = UnityEngine_GameObject__get_transform(v483, 0LL);
            if ( !v482 )
              sub_1C13F80(v484, v484);
            UnityEngine_Transform__set_parent(v482, v484, 0LL);
            v485 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v451, 0LL);
            if ( !v485 )
              sub_1C13F80(0LL, v486);
            v593.fields.x = v478;
            v593.fields.y = v479;
            v593.fields.z = v480;
            UnityEngine_Transform__set_localPosition(v485, v593, 0LL);
            BattleSequenceManager__updateCutInEvents(v487, evsa, v369, (UnityEngine_GameObject_o *)v451, v488);
            v489 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3268/*"BattleCamera"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v451, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3263/*"Battle/UniqueCamera/Add/{0}"*/, 0LL) )
              goto LABEL_326;
            v489 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3261/*"Battle/TurnSituation/"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v451, v489, 0LL);
LABEL_326:
          v493 = v364->fields.affectedObjectPath;
          if ( !v493 )
            sub_1C13F80(0LL, v424);
          if ( System_String__StartsWith(v493, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
          {
            v495 = v364->fields.affectedObjectPath;
            if ( !v495 )
              sub_1C13F80(0LL, v494);
            v496 = System_String__Substring_62986948(v495, v495->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v496, &targetPosIndex, 0LL);
            v498 = --targetPosIndex;
            if ( v319 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v364, v498, v497);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v364,
                targetPosIndex,
                v499);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v364, v498, v497);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v364,
                         1,
                         (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v502 = EventCount;
          if ( !EventCount )
            sub_1C13F80(0LL, v501);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1C13F88(EventCount, v501);
              v505 = (WellFired_USTimelineEvent_o *)v502->m_Items[j];
              if ( !v505 )
                sub_1C13F80(EventCount, v501);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v505, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v507 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v505, k, 0LL);
                v509 = (Il2CppObject *)v507;
                if ( !v507 )
                  goto LABEL_425;
                v510 = UnityEngine_Object__get_name(v507, 0LL);
                if ( System_String__op_Equality(v510, (System_String_o *)StringLiteral_15092/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/, 0LL) )
                {
                  v511 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v509->klass->vtable[0].methodPtr) < (unsigned int)v511
                    || (WellFired_USFGOAttachToParentEvent_c *)v509->klass->_2.typeHierarchy[v511 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C14240(v509);
                    goto LABEL_427;
                  }
                  v512 = System_String__op_Equality(
                           (System_String_o *)v509[5].klass,
                           (System_String_o *)StringLiteral_3265/*"BattleAssetUIAtlas"*/,
                           0LL);
                  if ( v512 )
                  {
                    v520 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v520 )
                      sub_1C13F80(0LL, v513);
                    v521 = UnityEngine_Component__get_transform(v520, 0LL);
                    v509[4].klass = (Il2CppClass *)v521;
                    sub_1C13CC8(
                      (PartyOrganizationUtility_o *)&v509[4],
                      (int64_t)v521,
                      v522,
                      v523,
                      v524,
                      v525,
                      v526,
                      v527);
                  }
                  else
                  {
                    if ( !v108 )
                      sub_1C13F80(v512, v513);
                    v528 = v108->fields._items;
                    v529 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v108->fields._version;
                    if ( !v528 )
                      sub_1C13F80(v512, v513);
                    v530 = v108->fields._size;
                    if ( (unsigned int)v530 >= v528->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v108,
                        v509,
                        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v529[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v531 = &v528->obj.klass + v530;
                      v108->fields._size = v530 + 1;
                      v531[4] = (Il2CppClass *)v509;
                      sub_1C13CC8(
                        (PartyOrganizationUtility_o *)(v531 + 4),
                        (int64_t)v509,
                        v514,
                        v515,
                        v516,
                        v517,
                        v518,
                        v519);
                    }
                  }
                }
              }
              max_length = v502->max_length;
            }
          }
        }
      }
      v381 = (UnityEngine_GameObject_o *)object[6].klass;
      if ( !v381 )
        sub_1C13F80(0LL, v380);
      v383 = UnityEngine_GameObject__get_transform(v381, 0LL);
      v384 = v364->fields.affectedObjectPath;
      if ( !v384 )
        sub_1C13F80(0LL, v382);
      v385 = System_String__Replace_62987572(
               v384,
               (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_18240/*"check_date_version"*/,
               0LL);
      if ( !v383 )
        sub_1C13F80(v385, v385);
      v386 = UnityEngine_Transform__Find(v383, v385, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v364, v386, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v364, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v389 = v364->fields.affectedObjectPath;
        if ( !v389 )
          sub_1C13F80(0LL, v388);
        v390 = System_String__StartsWith(v389, (System_String_o *)StringLiteral_1132/*"/Actor/chr/body_level_"*/, 0LL);
        v392 = &StringLiteral_17618/*"block"*/;
        if ( v390 )
          goto LABEL_229;
        v393 = v364->fields.affectedObjectPath;
        if ( !v393 )
          sub_1C13F80(0LL, v391);
        v394 = System_String__StartsWith(v393, (System_String_o *)StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, 0LL);
        v392 = &StringLiteral_25071/*"war_board_move"*/;
        if ( v394 )
        {
LABEL_229:
          v395 = (System_String_o *)*v392;
          if ( *v392 )
            break;
        }
      }
    }
    v396 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v396 )
      sub_1C13F80(0LL, v391);
    v397 = (System_String_o *)StringLiteral_1/*""*/;
    v398 = UnityEngine_GameObject__get_transform(v396, 0LL);
    if ( !v398 )
      sub_1C13F80(0LL, v399);
    v400 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v398, (System_String_o *)StringLiteral_18240/*"check_date_version"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v401 = UnityEngine_Object__op_Inequality(v400, 0LL, 0LL);
    if ( v401 )
      break;
LABEL_274:
    v434 = v364->fields.affectedObjectPath;
    v435 = System_String__Concat_62967944((System_String_o *)StringLiteral_1131/*"/Actor/chr/"*/, v395, 0LL);
    if ( !v435 )
      sub_1C13F80(0LL, v436);
    if ( !v434 )
      sub_1C13F80(v435, v436);
    v437 = System_String__Substring(v434, v435->fields._stringLength, 0LL);
    if ( !v437 )
      sub_1C13F80(0LL, v438);
    v439 = System_String__Split(v437, 0x2Fu, 0, 0LL);
    if ( !v439 )
      sub_1C13F80(0LL, v440);
    if ( !v439->max_length )
      sub_1C13F88(v439, v440);
    v442 = System_String__Concat_62967944(v395, v439->m_Items[0], 0LL);
    v443 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v443 )
      sub_1C13F80(0LL, v441);
    v445 = UnityEngine_GameObject__get_transform(v443, 0LL);
    v446 = v364->fields.affectedObjectPath;
    if ( !v446 )
      sub_1C13F80(0LL, v444);
    v447 = System_String__Replace_62987572(
             v446,
             (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_18240/*"check_date_version"*/,
             0LL);
    if ( !v447 )
      sub_1C13F80(0LL, v448);
    v449 = System_String__Replace_62987572(v447, v442, v397, 0LL);
    if ( !v445 )
      sub_1C13F80(v449, v449);
    v450 = UnityEngine_Transform__Find(v445, v449, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v364, v450, 0LL);
  }
  if ( !v400 )
    sub_1C13F80(v401, v402);
  v404 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v400, 0LL);
  if ( !v404 )
    sub_1C13F80(0LL, v403);
  while ( 2 )
  {
    v405 = v404->klass;
    v406 = *(unsigned __int16 *)(&v404->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v404->klass->_2.bitflags2 + 3) )
    {
      v407 = &v405->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v407 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v406;
        v407 += 4;
        if ( !v406 )
          goto LABEL_241;
      }
      v408 = (__int64)&v405->vtable[*v407].method;
    }
    else
    {
LABEL_241:
      v408 = sub_1C65D04(v404, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v408)(v404, *(_QWORD *)(v408 + 8)) & 1) == 0 )
    {
      v573 = v397;
      v574 = 0LL;
      goto LABEL_266;
    }
    v409 = v404->klass;
    v410 = *(unsigned __int16 *)(&v404->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v404->klass->_2.bitflags2 + 3) )
    {
      v411 = (System_Collections_IEnumerator_c **)&v409->_1.interfaceOffsets->offset;
      while ( *(v411 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v410;
        v411 += 2;
        if ( !v410 )
          goto LABEL_248;
      }
      v412 = (__int64)&v409->vtable[*(_DWORD *)v411 + 1].method;
    }
    else
    {
LABEL_248:
      v412 = sub_1C65D04(v404, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v413 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v412)(
                                        v404,
                                        *(_QWORD *)(v412 + 8));
    v415 = (UnityEngine_Object_o *)v413;
    if ( !v413 )
      sub_1C13F80(0LL, v414);
    v416 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v413->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v416
      && (UnityEngine_Transform_c *)v413->klass->_2.typeHierarchy[v416 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v417 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v413, 0LL);
      if ( !v417 )
        sub_1C13F80(0LL, v418);
      v419 = UnityEngine_Object__get_name(v417, 0LL);
      if ( !v419 )
        sub_1C13F80(0LL, v420);
      if ( !System_String__StartsWith(v419, v395, 0LL) )
        continue;
      v573 = UnityEngine_Object__get_name(v415, 0LL);
      v574 = 0LL;
LABEL_266:
      v428 = sub_1C13E60(v404, System_IDisposable_TypeInfo);
      v397 = v573;
      v429 = v428;
      if ( v428 )
      {
        v430 = *(_QWORD *)v428;
        v431 = *(unsigned __int16 *)(*(_QWORD *)v428 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v428 + 302LL) )
        {
          v432 = (int *)(*(_QWORD *)(v430 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v432 - 1) != System_IDisposable_TypeInfo )
          {
            --v431;
            v432 += 4;
            if ( !v431 )
              goto LABEL_271;
          }
          v433 = v430 + 16LL * *v432 + 312;
        }
        else
        {
LABEL_271:
          v433 = sub_1C65D04(v428, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v433)(v429, *(_QWORD *)(v433 + 8));
      }
      goto LABEL_274;
    }
    break;
  }
  sub_1C14240(v413);
  v564 = v563;
  v566 = v565;
  v557 = sub_1C13E60(v404, System_IDisposable_TypeInfo);
  v558 = v557;
  if ( v557 )
  {
    v559 = *(_QWORD *)v557;
    v560 = *(unsigned __int16 *)(*(_QWORD *)v557 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v557 + 302LL) )
    {
      v561 = (int *)(*(_QWORD *)(v559 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v561 - 1) != System_IDisposable_TypeInfo )
      {
        --v560;
        v561 += 4;
        if ( !v560 )
          goto LABEL_459;
      }
      v562 = v559 + 16LL * *v561 + 312;
    }
    else
    {
LABEL_459:
      v562 = sub_1C65D04(v557, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v562)(v558, *(_QWORD *)(v562 + 8));
  }
  if ( v574 )
    sub_1C13F78(v574);
  if ( v564 != 1 )
  {
    v567 = sub_1C13E60(v583, System_IDisposable_TypeInfo);
    v568 = v567;
    if ( v567 )
    {
      v569 = *(_QWORD *)v567;
      v570 = *(unsigned __int16 *)(*(_QWORD *)v567 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v567 + 302LL) )
      {
        v571 = (int *)(*(_QWORD *)(v569 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v571 - 1) != System_IDisposable_TypeInfo )
        {
          --v570;
          v571 += 4;
          if ( !v570 )
            goto LABEL_506;
        }
        v572 = v569 + 16LL * *v571 + 312;
      }
      else
      {
LABEL_506:
        v572 = sub_1C65D04(v567, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v572)(v568, *(_QWORD *)(v572 + 8));
    }
    sub_1CFE7B4();
  }
  v533 = *(_QWORD *)__cxa_begin_catch(v566);
  __cxa_end_catch();
LABEL_366:
  seqObject = sub_1C13E60(v583, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v534 = *(_QWORD *)seqObject;
    v535 = seqObject;
    v536 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v537 = (int *)(*(_QWORD *)(v534 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v537 - 1) != System_IDisposable_TypeInfo )
      {
        --v536;
        v537 += 4;
        if ( !v536 )
          goto LABEL_371;
      }
      v538 = v534 + 16LL * *v537 + 312;
    }
    else
    {
LABEL_371:
      v538 = sub_1C65D04(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v538)(v535, *(_QWORD *)(v538 + 8));
  }
  if ( v533 )
    sub_1C13F78(v533);
  if ( !v108 )
    goto LABEL_418;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v585,
    v108,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v585;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[5].klass,
          (UnityEngine_GameObject_o *)object[6].klass,
          (System_Collections_Generic_List_GameObject__o *)object[21].monitor,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1C13F80(0LL, v539);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v575, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v575 )
      goto LABEL_418;
    if ( LOBYTE(v575[30].klass) )
      goto LABEL_409;
    v540 = v575[28].monitor;
    if ( !v540 )
      goto LABEL_418;
    if ( !v540[83] && !BattleActorControl__isNoVoice((BattleActorControl_o *)v575, 0LL) )
    {
      v541 = (UnityEngine_Object_o *)object[5].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v541, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v542 = object[5].klass;
        if ( !v542 )
          goto LABEL_418;
        v543 = *(UnityEngine_Object_o **)&v542->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v543, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[23].monitor) = 0;
            v545 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v545,
                   FileName,
                   v547) )
            {
              LOBYTE(object[23].monitor) = 1;
            }
            v548 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v549 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v548,
              v549,
              v550);
            v551 = v575[28].monitor;
            if ( v551 )
            {
              v552 = v551[176];
              v553 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v553 = BalanceConfig_TypeInfo;
              }
              if ( v552 == v553->static_fields->TreasureDeviceIdMashu3 )
              {
                v554 = (int32_t)object[11].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v555 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v554,
                  v555,
                  v556);
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
  System_GC__Collect_64014508(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v10; // w24
  int32_t v11; // w22

  if ( (byte_4BB6E87 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_4BB6E87 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v10 = size - 1;
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
        v11 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v10 == v11 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v11;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1C13F80(battleTargetList, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4BB6E8B & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    sub_1C13D24(&StringLiteral_14736/*"TitleInfoEventUIPrefab"*/, v9);
    byte_4BB6E8B = 1;
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
                                                                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1C13F80(battleTargetList, tlcont);
    }
    v11 = (UnityEngine_GameObject_o *)sub_1C13F70(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_14736/*"TitleInfoEventUIPrefab"*/, 0LL);
    if ( !v11 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v11, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  bool v13; // w21
  Il2CppObject *current; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int v21; // w19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB6E71 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_1C13D24(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4BB6E71 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !evs )
    sub_1C13F80(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C13F80(v11, v12);
    if ( System_String__op_Equality((System_String_o *)v23.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1C13CC8((PartyOrganizationUtility_o *)&current[3].monitor, (int64_t)obj, v15, v16, v17, v18, v19, v20);
      v21 = 4;
      goto LABEL_10;
    }
  }
  v21 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v13 && v21 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BAEDA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4BAEDA7 )
  {
    sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4BAEDA7 = 1;
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
      sub_1C13F80(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.targetActor, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C13F80(targetActor, method);
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
  sub_1C13CC8(
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
  if ( (byte_4BB6FBD & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__109_o *)sub_1C13D24(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_4BB6FBD = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C13F70(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C13F80(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C13CC8(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_BattleSequenceManager__WaitEndSequence_d__109_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB6FB7 & 1) == 0 )
  {
    sub_1C13D24(&BattleSequenceManager___c_TypeInfo, v1);
    byte_4BB6FB7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, x1);
  return System_Single__CompareTo_63855888(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1C13F80(this, x1);
  return System_Single__CompareTo_63855888(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__89_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, x);
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
  if ( (byte_4BB6FB8 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass118_0_o *)sub_1C13D24(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_4BB6FB8 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass118_0_o *)v4->fields.targetList) == 0LL )
    sub_1C13F80(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager_o *_4__this; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v18; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  v4 = this;
  if ( (byte_4BB6FB9 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, data);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__1__, v6);
    sub_1C13D24(&StringLiteral_13168/*"StDev"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass76_0_o *)sub_1C13D24(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_4BB6FB9 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass76_0_o *)AssetData__GetObject_object__49747248(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13168/*"StDev"*/,
                                                                  (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&_4__this->fields.CutInPrefab,
          (int64_t)this,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (this = (BattleSequenceManager___c__DisplayClass76_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v18 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1C13F70(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass76_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v24, v25, v26, v27, v28, v29);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v18,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  void *_4__this; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t *v20; // x22
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
  int64_t v33; // x1
  struct BattleSequenceManager_o *v34; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_Action_o *v38; // x23
  struct BattleSequenceManager_o *v39; // x8
  struct BattleSequenceManager_o *v40; // x8
  _DWORD *v41; // x20
  int v42; // w8
  int v43; // w9
  __int64 v44; // x10
  struct BattleSequenceManager_o *v45; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB6FBA & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, obj);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__2__, v8);
    sub_1C13D24(&BattleSequenceManager___c__DisplayClass76_1_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_9683/*"NoSkipDeadFirstId"*/, v10);
    byte_4BB6FBA = 1;
  }
  v11 = sub_1C13F70(BattleSequenceManager___c__DisplayClass76_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 16) = obj;
  v20 = (int64_t *)(v11 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)obj, v21, v22, v23, v24, v25, v26);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v33 = *v20;
  *((_QWORD *)_4__this + 11) = *v20;
  sub_1C13CC8((PartyOrganizationUtility_o *)((char *)_4__this + 88), v33, v27, v28, v29, v30, v31, v32);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v34 = this->fields.__4__this;
    if ( !v34 )
      goto LABEL_26;
    overwriteSvtVoiceId = v34->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v36 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v37 = System_String__Concat_62967944((System_String_o *)StringLiteral_9683/*"NoSkipDeadFirstId"*/, v36, 0LL);
  v38 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v11,
    Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v37, v38, 1, 0LL);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_26;
  _4__this = v39->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_26;
  v41 = _4__this;
  v40->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v41 )
    goto LABEL_26;
  v42 = v41[6];
  if ( v42 < 1 )
    return;
  v43 = 0;
  while ( 1 )
  {
    if ( v42 == v43 )
      sub_1C13F88(_4__this, v13);
    v44 = *(_QWORD *)&v41[2 * v43 + 8];
    if ( !v44 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v44 + 64) && *(_BYTE *)(v44 + 69) )
      break;
    if ( v42 == ++v43 )
      return;
  }
  v45 = this->fields.__4__this;
  if ( !v45 )
LABEL_26:
    sub_1C13F80(_4__this, v13);
  v45->fields.isNoDamageMotionInDamageNoble = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleSequenceManager___c__DisplayClass76_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v8; // x20
  int v9; // w8
  BattleSequenceManager___c__DisplayClass76_1_o *v10; // x21
  unsigned int v11; // w23
  int v12; // w24
  UnityEngine_Behaviour_o *v13; // x22
  struct BattleSequenceManager___c__DisplayClass76_0_o *v14; // x8
  BattleSequenceManager_o *v15; // x21
  System_Action_o *_9__3; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v2 = this;
  if ( (byte_4BB6FBB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_1C13D24(&Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB6FBB = 1;
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
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v9 = (int)this->fields.CS___8__locals1;
  v10 = this;
  if ( v9 >= 1 )
  {
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1C13F88(this, method);
      v13 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v10->fields.__9__4 + (int)v11);
      if ( !v13 )
        break;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v13->klass[1]._2.typeHierarchy)(
                                                                v13,
                                                                v13->klass[1]._2.unity_user_data);
      if ( (v12 & (unsigned int)this & 1) != 0 )
      {
        v8 = *(System_String_o **)&v13[2].fields.m_CachedPtr;
        v12 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      }
      v9 = (int)v10->fields.CS___8__locals1;
      if ( (int)++v11 >= v9 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C13F80(this, method);
  }
LABEL_15:
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_20;
  v15 = v14->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.__9__3, (int64_t)_9__3, v17, v18, v19, v20, v21, v22);
  }
  if ( !v15 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v15, v8, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass76_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass76_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v11; // x8
  struct BattleSequenceManager_o *v12; // x8
  BattleSequenceManager___c__DisplayClass76_1_o *v13; // x20
  struct BattleSequenceManager___c__DisplayClass76_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass76_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x21
  struct BattleSequenceManager___c__DisplayClass76_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v23; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleSequenceManager___c__DisplayClass76_0_o *v31; // x8
  struct BattleSequenceManager_o *v32; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass76_0_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass76_0_o *v40; // x8
  struct BattleSequenceManager_o *v41; // x10
  struct BattleSequenceManager___c__DisplayClass76_0_o *v42; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v45; // x1
  struct BattleSequenceManager___c__DisplayClass76_0_o *v46; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v47; // x8
  struct BattleSequenceManager_o *v48; // x20
  struct BattleSequenceManager_o *v49; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v50; // x8
  struct BattleSequenceManager_o *v51; // x8
  UnityEngine_Object_o *v52; // x20
  struct BattleSequenceManager___c__DisplayClass76_0_o *v53; // x8
  struct BattleSequenceManager_o *v54; // x8
  struct BattleSequenceManager___c__DisplayClass76_0_o *v55; // x8
  struct BattleSequenceManager_o *v56; // x8
  UIStandFigureM_o *v57; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct BattleSequenceManager___c__DisplayClass76_0_o *v68; // x8

  v2 = this;
  if ( (byte_4BB6FBC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)sub_1C13D24(
                                                              &Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__4__,
                                                              v8);
    byte_4BB6FBC = 1;
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
                                                            (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_73;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_73;
  v13 = this;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)v12->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_73;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_73;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)v15->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v13,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v2->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_73;
    if ( !v13 )
      goto LABEL_73;
    v19 = v18->fields.__4__this;
    if ( !v19 )
      goto LABEL_73;
    v19->fields.faceType = (int32_t)v13[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v20 = v2->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_73;
    v21 = v20->fields.__4__this;
    if ( !v21 )
      goto LABEL_73;
    performance = v21->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v23 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v23 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v23, (UnityEngine_GameObject_o *)this, 0LL);
    v19->fields.standFigure = MeshLocal;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v19->fields.standFigure,
      (int64_t)MeshLocal,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = v2->fields.CS___8__locals1;
    if ( !v31 )
      goto LABEL_73;
    v32 = v31->fields.__4__this;
    if ( !v32 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v32->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v34 = v2->fields.CS___8__locals1;
    if ( !v34 )
      goto LABEL_73;
    v35 = v34->fields.__4__this;
    if ( !v35 )
      goto LABEL_73;
    monitor = (int32_t)v13[1].monitor;
    v35->fields.loadStandFigureId = monitor;
    battleActor = v34->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v13[1].monitor), monitor_high == -1) )
    {
      v47 = v2->fields.CS___8__locals1;
      if ( !v47 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v47->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v48 = v47->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v48 )
        goto LABEL_73;
      v48->fields.loadStandFigureLimitCount = (int)this;
      v40 = v2->fields.CS___8__locals1;
      if ( !v40 )
        goto LABEL_73;
    }
    else
    {
      v40 = v2->fields.CS___8__locals1;
      if ( !v40 )
        goto LABEL_73;
      v41 = v40->fields.__4__this;
      if ( !v41 )
        goto LABEL_73;
      v41->fields.loadStandFigureLimitCount = monitor_high;
    }
    v49 = v40->fields.__4__this;
    if ( !v49 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)v49->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v50 = v2->fields.CS___8__locals1;
    if ( !v50 )
      goto LABEL_73;
    v51 = v50->fields.__4__this;
    if ( !v51 )
      goto LABEL_73;
    v52 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v51->fields.loadStandFigureId,
                                                              v51->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v52 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v52, (System_String_o *)this, 0LL);
    v53 = v2->fields.CS___8__locals1;
    if ( !v53 )
      goto LABEL_73;
    v54 = v53->fields.__4__this;
    if ( !v54 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)v54->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v55 = v2->fields.CS___8__locals1;
    if ( !v55 )
      goto LABEL_73;
    v56 = v55->fields.__4__this;
    if ( !v56 )
      goto LABEL_73;
    v57 = v56->fields.standFigure;
    loadStandFigureId = v56->fields.loadStandFigureId;
    loadStandFigureLimitCount = v56->fields.loadStandFigureLimitCount;
    faceType = v56->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass76_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.__9__4, (int64_t)_9__4, v62, v63, v64, v65, v66, v67);
    }
    if ( !v57 )
LABEL_73:
      sub_1C13F80(this, method);
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)UIStandFigureM__SetCharacter_42196708(
                                                              v57,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v68 = v2->fields.CS___8__locals1;
      if ( v68 )
      {
        this = (BattleSequenceManager___c__DisplayClass76_1_o *)v68->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v68->fields.onComplete,
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
      v42 = v2->fields.CS___8__locals1;
      if ( !v42 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v42->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v42->fields.onComplete;
      obj = v2->fields.obj;
      v45 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v46 = v2->fields.CS___8__locals1;
      if ( !v46 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass76_1_o *)v46->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v46->fields.onComplete;
      obj = v2->fields.obj;
      v45 = (WellFired_USFGOPlayCutInBase_o *)v16;
    }
    this = (BattleSequenceManager___c__DisplayClass76_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v45,
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(0LL, method);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A57CF8;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A57CD8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A57C90;
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
  return (System_IAsyncResult_o *)sub_1C13CD8(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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