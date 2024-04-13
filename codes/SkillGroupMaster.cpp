void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E97DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v14, v15, v16);
    byte_42E97DF = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v17,
    (const MethodInfo_2ED0604 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIdToGroupDict,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    441,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v111; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v112; // x20
  __int64 v113; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v115; // x22
  unsigned __int64 v116; // x10
  int32_t *p_offset; // x11
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x3
  __int64 v121; // x22
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  int *v124; // x11
  __int64 v125; // x0
  __int64 v126; // x3
  __int64 v127; // x8
  unsigned __int64 v128; // x10
  int *v129; // x11
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x23
  SimpleSkillData_o v134; // x24
  System_Collections_Generic_List_int__o *v135; // x25
  Il2CppObject *Item; // x0
  __int64 v137; // x1
  __int64 v138; // x0
  __int64 v139; // x1
  int32_t v140; // w24
  System_Collections_Generic_List_int__o *v141; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v142; // x0
  __int64 v143; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x8
  unsigned __int64 v147; // x10
  int *v148; // x11
  __int64 v149; // x0
  __int64 v150; // x1
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v152; // x22
  System_Int32_array *v153; // x0
  __int64 v154; // x1
  int v155; // w24
  int v156; // w8
  __int64 v157; // x1
  int32_t v158; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  WarBoardAIRoute_RouteData_o *v160; // x0
  __int64 v161; // x1
  int v162; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v163; // [xsp+0h] [xbp-E0h] BYREF
  int v164[3]; // [xsp+28h] [xbp-B8h]
  int v165; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v166; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v167; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v168; // 0:x1.8
  SimpleSkillData_o v169; // 0:x1.8
  SimpleSkillData_o v170; // 0:x1.8
  SimpleSkillData_o v171; // 0:x1.8

  if ( (byte_42E97DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__,
      v53,
      v54,
      v55);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v56, v57, v58);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__,
      v59,
      v60,
      v61);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v62, v63, v64);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__,
      v65,
      v66,
      v67);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v68, v69, v70);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v83, v84, v85);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v86, v87, v88);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v89, v90, v91);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v92, v93, v94);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v95, v96, v97);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v98, v99, v100);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v101, v102, v103);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v104, v105, v106);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v107, v108, v109);
    byte_42E97DC = 1;
  }
  memset(&v167, 0, sizeof(v167));
  memset(&v166, 0, sizeof(v166));
  v165 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2ED1390 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillToGroupDict,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v111 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v111,
    (const MethodInfo_2ED0604 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v112 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v112,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_73;
  klass = skillToGroupDict->klass;
  v115 = skillToGroupDict;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.bitflags1 )
  {
    v116 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v116;
      p_offset += 4;
      if ( v116 >= *(unsigned __int16 *)&skillToGroupDict->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v118 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v118 = sub_AF54C0(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL, v113);
  }
  v121 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v118)(
           v115,
           *(_QWORD *)(v118 + 8));
  if ( !v121 )
    sub_B5D69C(0LL, v119);
  while ( 1 )
  {
    v122 = *(_QWORD *)v121;
    if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
    {
      v123 = 0LL;
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v123;
        v124 += 4;
        if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
          goto LABEL_17;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_17:
      v125 = sub_AF54C0(v121, System_Collections_IEnumerator_TypeInfo, 0LL, v120);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8)) & 1) == 0 )
      break;
    v127 = *(_QWORD *)v121;
    if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
    {
      v128 = 0LL;
      v129 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v129 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v128;
        v129 += 4;
        if ( v128 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
          goto LABEL_24;
      }
      v130 = v127 + 16LL * *v129 + 312;
    }
    else
    {
LABEL_24:
      v130 = sub_AF54C0(v121, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL, v126);
    }
    v131 = (*(__int64 (__fastcall **)(__int64, _QWORD))v130)(v121, *(_QWORD *)(v130 + 8));
    v133 = v131;
    if ( !v131 )
      sub_B5D69C(0LL, v132);
    if ( !v111 )
      sub_B5D69C(v131, v132);
    v134 = *(SimpleSkillData_o *)(v131 + 20);
    v168 = v134;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v111,
            v168,
            (const MethodInfo_2ED1428 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v135 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v135,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v169 = v134;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v111,
        v169,
        (Il2CppObject *)v135,
        (const MethodInfo_2ED118C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v170 = v134;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v111,
             v170,
             (const MethodInfo_2ED10F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B5D69C(0LL, v137);
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v133 + 16),
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v112 )
      sub_B5D69C(v138, v139);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v112,
            *(_DWORD *)(v133 + 20),
            (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v140 = *(_DWORD *)(v133 + 20);
      v141 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v141,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v112,
        v140,
        (WarBoardAIRoute_RouteData_o *)v141,
        (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v142 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             v112,
             *(_DWORD *)(v133 + 20),
             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v142 )
      sub_B5D69C(0LL, v143);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v142,
            *(_DWORD *)(v133 + 16),
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v144 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v112,
               *(_DWORD *)(v133 + 20),
               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v144 )
        sub_B5D69C(0LL, v145);
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v144,
        *(_DWORD *)(v133 + 16),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v164[0] = 226;
  v165 = 1;
  v146 = *(_QWORD *)v121;
  if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
  {
    v147 = 0LL;
    v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v148 - 1) != System_IDisposable_TypeInfo )
    {
      ++v147;
      v148 += 4;
      if ( v147 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
        goto LABEL_42;
    }
    v149 = v146 + 16LL * *v148 + 312;
  }
  else
  {
LABEL_42:
    v149 = sub_AF54C0(v121, System_IDisposable_TypeInfo, 0LL, v126);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v149)(
                                                                                v121,
                                                                                *(_QWORD *)(v149 + 8));
  v165 = 0;
  if ( !v111 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v163,
    v111,
    (const MethodInfo_2ED1794 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v167 = v163;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v167,
            (const MethodInfo_276D74C *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v167.fields.current.fields.value )
      sub_B5D69C(0LL, v150);
    key = v167.fields.current.fields.key;
    v152 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v153 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)v167.fields.current.fields.value,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v152 )
      sub_B5D69C(v153, v154);
    v171 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v152,
      v171,
      &v153->obj,
      (const MethodInfo_2ED118C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v164[0] = 300;
  v155 = ++v165;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v167,
    (const MethodInfo_276D8B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v155 )
  {
    v156 = v155 - 1;
    if ( v164[v155 - 1] == 300 )
    {
      --v155;
      v165 = v156;
    }
  }
  if ( !v112 )
LABEL_73:
    sub_B5D69C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v166,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v112,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v166,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v166.fields.current.fields.value )
      sub_B5D69C(0LL, v157);
    v158 = (int32_t)v166.fields.current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v160 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                            (System_Collections_Generic_List_int__o *)v166.fields.current.fields.value,
                                            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_B5D69C(v160, v161);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
      v158,
      v160,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v164[v155] = 374;
  v162 = ++v165;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v166,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v162 && v164[v162 - 1] == 374 )
    v165 = v162 - 1;
}


// local variable allocation has failed, the output may be wrong!
SkillGroupEntity_o *__fastcall SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E97E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__,
      id,
      skillId,
      *(_QWORD *)&lv);
    byte_42E97E0 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  unsigned __int64 v14; // x21
  _QWORD **v16; // x20
  __int64 v17; // x19
  __int16 v18; // w8
  __int64 v19; // x19
  __int64 v20; // x19
  __int64 v21; // x19
  SimpleSkillData_o v22; // 0:x1.8
  SimpleSkillData_o v23; // 0:x1.8

  if ( (byte_42E97DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, skillId, skillLv, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v10, v11, v12);
    byte_42E97DD = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v14 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v22 = (SimpleSkillData_o)v14;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v22,
         (const MethodInfo_2ED1428 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v23 = (SimpleSkillData_o)v14;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v23,
                                     (const MethodInfo_2ED10F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B5D69C(skillToGroupDict, *(_QWORD *)&skillId);
  }
  v16 = (_QWORD **)Method_System_Array_Empty_int___;
  v17 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v18 = *(_WORD *)(v17 + 306);
  if ( (v18 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v18 = *(_WORD *)(v17 + 306);
  }
  if ( (v18 & 0x400) != 0 )
  {
    v19 = *v16[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AF52C4(*v16[6]);
    if ( !*(_DWORD *)(v19 + 224) )
    {
      v20 = *v16[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        sub_AF52C4(*v16[6]);
      j_il2cpp_runtime_class_init_0(v20);
    }
  }
  v21 = *v16[6];
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AF52C4(*v16[6]);
  return **(System_Int32_array ***)(v21 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  _QWORD **v14; // x20
  __int64 v15; // x19
  __int16 v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x19

  if ( (byte_42E97DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, skillId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v9, v10, v11);
    byte_42E97DE = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B5D69C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v14 = (_QWORD **)Method_System_Array_Empty_int___;
  v15 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AF52C4(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AF52C4(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(*v14[6]);
  return **(System_Int32_array ***)(v19 + 184);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillGroupMaster__TryGetEntity(
        SkillGroupMaster_o *this,
        SkillGroupEntity_o **entity,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E97E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&skillId);
    byte_42E97E1 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}