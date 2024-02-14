void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42175E2 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42175E2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
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
  __int64 v52; // x22
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  const MethodInfo *v65; // x3
  __int64 v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_HashSet_int__o *v75; // x19
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  const MethodInfo *v82; // x3
  FortificationAutomaticDialogComponent___c_c **v83; // x22
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v86; // x25
  FortificationAutomaticDialogComponent___c_c *v87; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_1; // x26
  Il2CppObject *v90; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v98; // x0
  Il2CppObject *v99; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v100; // x21
  __int64 v101; // x1
  __int64 v102; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v103; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v104; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  unsigned __int64 v114; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v117; // x27
  FortificationAutomaticDialogComponent_o *v118; // x26
  _BOOL8 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  int32_t v122; // w19
  int32_t klass_high; // w21
  EnterUserSvtInfo_o *v124; // x22
  __int64 v125; // x0
  FortificationAutomaticDialogComponent_o *v126; // x21
  Il2CppObject *v127; // x25
  __int64 v128; // x23
  System_Collections_IEnumerator_c **v129; // x21
  __int64 v130; // x8
  System_Collections_IEnumerator_c *v131; // x1
  unsigned __int64 v132; // x10
  int *v133; // x11
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x27
  __int64 v138; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  __int64 v145; // x8
  unsigned __int64 v146; // x10
  int *v147; // x11
  __int64 v148; // x0
  System_Int32_array **v149; // x0
  __int64 *v150; // x26
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x1
  __int64 v158; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v159; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v163; // x27
  FortificationAutomaticDialogComponent___c_c *v164; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v165; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_4; // x28
  Il2CppObject *v167; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v175; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v176; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v177; // x27
  FortificationAutomaticDialogComponent___c_c **v178; // x20
  System_Collections_IEnumerator_c **v179; // x22
  __int64 v180; // x19
  __int64 v181; // x21
  System_Collections_Generic_HashSet_int__o *v182; // x28
  __int64 v183; // x0
  _BOOL8 v184; // x0
  __int64 v185; // x8
  __int128 v186; // q0
  __int128 v187; // q1
  int32_t v188; // w26
  int32_t v189; // w27
  int64_t v190; // x19
  __int64 v191; // x1
  __int64 v192; // x2
  EnterUserSvtInfo_o *v193; // x28
  __int64 v194; // x0
  __int64 v195; // x8
  unsigned __int64 v196; // x10
  int *v197; // x11
  __int64 v198; // x0
  __int64 v199; // x1
  __int64 v200; // x2
  NetworkManager_ResultCallbackFunc_o *v201; // x22
  int32_t eventId; // w21
  EventFortificationRequest_o *v203; // x19
  Il2CppObject *v204; // [xsp+0h] [xbp-E0h]
  FortificationAutomaticDialogComponent_o *v205; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v206; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v208; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v209; // [xsp+40h] [xbp-A0h] BYREF
  int v210; // [xsp+60h] [xbp-80h]
  int v211; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v212; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16

  if ( (byte_42175DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&EnterUserSvtInfo_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__int___ctor__, v18);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__bool___ctor__, v19);
    sub_B0D8A4(&Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__, v20);
    sub_B0D8A4(&System_Func_UserServantEntity__bool__TypeInfo, v21);
    sub_B0D8A4(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v22);
    sub_B0D8A4(&System_Func_UserServantEntity__int__TypeInfo, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v26);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v27);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v28);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v29);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v30);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v32);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v35);
    sub_B0D8A4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v36);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v37);
    sub_B0D8A4(&NetworkManager_TypeInfo, v38);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v41);
    sub_B0D8A4(&SoundManager_TypeInfo, v42);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v43);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v44);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v45);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v46);
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v47);
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v48);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v49);
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v50);
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c_TypeInfo, v51);
    byte_42175DD = 1;
  }
  entities = 0LL;
  memset(&v212, 0, sizeof(v212));
  v211 = 0;
  v52 = sub_B0D974(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, isSet, method);
  FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
    (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_100;
  *(_QWORD *)(v52 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v52 + 24), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  *(_BYTE *)(v52 + 32) = isSet;
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v52 + 16) = 0x800000000LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  if ( !EventFortificationMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entities, this->fields.eventId, 0LL) )
    return;
  v206 = v62;
  if ( *(_BYTE *)(v52 + 32) )
  {
    v66 = sub_B0D974(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v63, v64);
    FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
      (FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *)v66,
      0LL);
    if ( v66 )
    {
      *(_QWORD *)(v66 + 24) = v52;
      v204 = (Il2CppObject *)v52;
      sub_B0D840((BattleServantConfConponent_o *)(v66 + 24), (System_Int32_array **)v52, v67, v68, v69, v70, v71, v72);
      v75 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v73,
                                                           v74);
      System_Collections_Generic_HashSet_int____ctor(
        v75,
        (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
      this->fields.setSvtIdList = v75;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.setSvtIdList,
        (System_Int32_array **)v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      v205 = this;
      v83 = &FortificationAutomaticDialogComponent___c_TypeInfo;
      v86 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v82);
      v87 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( (BYTE3(FortificationAutomaticDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v87 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v87->static_fields;
      _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v87);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v90 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                                                     v84,
                                                                                     v85);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__18_1,
          v90,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          (const MethodInfo_2619564 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
        v91 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v91->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v91->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      v98 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v86,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v99 = *(Il2CppObject **)(v66 + 24);
      v100 = v98;
      v103 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                               System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                                               v101,
                                                                               v102);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        v103,
        v99,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        (const MethodInfo_2619564 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
      v104 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
               v100,
               (System_Func_TSource__TKey__o *)v103,
               (const MethodInfo_1B55D8C *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                                  0LL);
        v106 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v66 + 16) = v106;
        sub_B0D840((BattleServantConfConponent_o *)(v66 + 16), v106, v107, v108, v109, v110, v111, v112);
        if ( v104 )
        {
          klass = v104->klass;
          if ( *(_WORD *)&v104->klass->_2.bitflags1 )
          {
            v114 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              ++v114;
              p_offset += 4;
              if ( v114 >= *(unsigned __int16 *)&v104->klass->_2.bitflags1 )
                goto LABEL_28;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_28:
            p_method = sub_AA67A0(
                         v104,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v128 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v104,
                   *(_QWORD *)(p_method + 8));
          if ( !v128 )
            sub_B0D97C(0LL);
          v129 = &System_Collections_IEnumerator_TypeInfo;
          while ( 1 )
          {
            v130 = *(_QWORD *)v128;
            v131 = *v129;
            if ( *(_WORD *)(*(_QWORD *)v128 + 298LL) )
            {
              v132 = 0LL;
              v133 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v133 - 1) != v131 )
              {
                ++v132;
                v133 += 4;
                if ( v132 >= *(unsigned __int16 *)(*(_QWORD *)v128 + 298LL) )
                  goto LABEL_43;
              }
              v134 = v130 + 16LL * *v133 + 312;
            }
            else
            {
LABEL_43:
              v134 = sub_AA67A0(v128, v131, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v134)(v128, *(_QWORD *)(v134 + 8)) & 1) == 0 )
              break;
            v137 = sub_B0D974(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v135, v136);
            FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
              (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)v137,
              0LL);
            if ( !v137 )
              sub_B0D97C(v138);
            *(_QWORD *)(v137 + 24) = v66;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v137 + 24),
              (System_Int32_array **)v66,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
            v145 = *(_QWORD *)v128;
            if ( *(_WORD *)(*(_QWORD *)v128 + 298LL) )
            {
              v146 = 0LL;
              v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v147
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                ++v146;
                v147 += 4;
                if ( v146 >= *(unsigned __int16 *)(*(_QWORD *)v128 + 298LL) )
                  goto LABEL_51;
              }
              v148 = v145 + 16LL * *v147 + 312;
            }
            else
            {
LABEL_51:
              v148 = sub_AA67A0(
                       v128,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v149 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v148)(v128, *(_QWORD *)(v148 + 8));
            *(_QWORD *)(v137 + 16) = v149;
            v150 = (__int64 *)(v137 + 16);
            sub_B0D840((BattleServantConfConponent_o *)(v137 + 16), v149, v151, v152, v153, v154, v155, v156);
            v159 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_UserServantEntity__bool__TypeInfo,
                                                                                        v157,
                                                                                        v158);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v159,
              (Il2CppObject *)v137,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              (const MethodInfo_26189B8 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v160 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v159,
                     (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v163 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v160,
                                                                          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v164 = *v83;
            if ( (BYTE3((*v83)->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v164);
              v164 = *v83;
            }
            v165 = v164->static_fields;
            _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v165->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v164);
                v165 = (*v83)->static_fields;
              }
              v167 = (Il2CppObject *)v165->__9;
              _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                           System_Func_UserServantEntity__int__TypeInfo,
                                                                                           v161,
                                                                                           v162);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__18_4,
                v167,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                (const MethodInfo_2619564 *)Method_System_Func_UserServantEntity__int___ctor__);
              v168 = (*v83)->static_fields;
              v168->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v168->__9__18_4,
                (System_Int32_array **)_9__18_4,
                v169,
                v170,
                v171,
                v172,
                v173,
                v174);
            }
            v175 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                          v163,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v176 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                     v175,
                     (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v177 = v176;
            if ( v176 )
            {
              v178 = v83;
              v179 = v129;
              v181 = *(_QWORD *)&v176[1].fields.freeStoneNum;
              v180 = *(_QWORD *)&v176[1].fields.isCommitedAlready;
              v182 = *p_setSvtIdList;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v214.fields.currentCryptoKey = v181;
              *(_QWORD *)&v214.fields.fakeValue = v180;
              v183 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v214, 0LL);
              if ( !v182 )
                sub_B0D97C(v183);
              v129 = v179;
              v184 = System_Collections_Generic_HashSet_int___Add(
                       v182,
                       v183,
                       (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v185 = *v150;
              if ( !*v150 )
                sub_B0D97C(v184);
              v186 = *(_OWORD *)&v177->fields.purchasedBankShopId;
              v187 = *(_OWORD *)&v177->fields.freeStoneNum;
              v189 = *(_DWORD *)(v185 + 16);
              v188 = *(_DWORD *)(v185 + 20);
              v83 = v178;
              *(_OWORD *)&v209.fields.currentCryptoKey = v186;
              *(_OWORD *)&v209.fields.fakeValue = v187;
              v62 = v206;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v208 = v209;
              v190 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v208, 0LL);
              v193 = (EnterUserSvtInfo_o *)sub_B0D974(EnterUserSvtInfo_TypeInfo, v191, v192);
              EnterUserSvtInfo___ctor(v193, v189, v188, v190, 0LL);
              if ( !v206 )
                sub_B0D97C(v194);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v206,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v193,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
            }
          }
          v127 = v204;
          v126 = v205;
          v210 = 399;
          v211 = 1;
          v195 = *(_QWORD *)v128;
          if ( *(_WORD *)(*(_QWORD *)v128 + 298LL) )
          {
            v196 = 0LL;
            v197 = (int *)(*(_QWORD *)(v195 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v197 - 1) != System_IDisposable_TypeInfo )
            {
              ++v196;
              v197 += 4;
              if ( v196 >= *(unsigned __int16 *)(*(_QWORD *)v128 + 298LL) )
                goto LABEL_77;
            }
            v198 = v195 + 16LL * *v197 + 312;
          }
          else
          {
LABEL_77:
            v198 = sub_AA67A0(v128, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v198)(v128, *(_QWORD *)(v198 + 8));
          if ( v210 == 399 )
            v211 = 0;
          Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
              (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_100:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v117 = (Il2CppObject *)v52;
  v118 = this;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                                   this,
                                                                   entities,
                                                                   0,
                                                                   v65);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v209,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v212.fields.current = (Il2CppObject *)v209.fields.fakeValue;
  *(_OWORD *)&v212.fields.list = *(_OWORD *)&v209.fields.currentCryptoKey;
  while ( 1 )
  {
    v119 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v212,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v119 )
      break;
    if ( !v212.fields.current )
      sub_B0D97C(v119);
    v122 = (int32_t)v212.fields.current[1].klass;
    klass_high = HIDWORD(v212.fields.current[1].klass);
    v124 = (EnterUserSvtInfo_o *)sub_B0D974(EnterUserSvtInfo_TypeInfo, v120, v121);
    EnterUserSvtInfo___ctor(v124, v122, klass_high, 0LL, 0LL);
    if ( !v62 )
      sub_B0D97C(v125);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v62,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  }
  v210 = 494;
  v211 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v212,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
  v211 = 0;
  v126 = v118;
  v127 = v117;
LABEL_84:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v201 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v199, v200);
  NetworkManager_ResultCallbackFunc___ctor(
    v201,
    v127,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v201,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v62 )
    goto LABEL_100;
  eventId = v126->fields.eventId;
  v203 = (EventFortificationRequest_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v203 )
    goto LABEL_100;
  EventFortificationRequest__beginRequest(v203, eventId, (EnterUserSvtInfo_array *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_42175E0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v4);
    byte_42175E0 = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42175DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_42175DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    FortificationAutomaticDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickRemove(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 0, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickSet(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 1, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__Open(
        FortificationAutomaticDialogComponent_o *this,
        System_Action_o *onDecide,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v25; // x0
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x20

  if ( (byte_42175DC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, onDecide);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_6431/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v13);
    sub_B0D8A4(&StringLiteral_6432/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v14);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_B0D8A4(&StringLiteral_6433/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v16);
    sub_B0D8A4(&StringLiteral_6434/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v17);
    byte_42175DC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)closeCallBack,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.closeCallBack,
      (System_Int32_array **)closeCallBack,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6434/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v25, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6431/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v25, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v25, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v25, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B0D97C(v25);
    }
    UILabel__set_text(cancelButtonLb, v25, 0LL);
    this->fields.state = 1;
    v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  EventFortificationDetailMaster_o *v29; // x23
  WarQuestSelectionMaster_o *v30; // x0
  EventFortificationSvtMaster_o *v31; // x24
  int v32; // w10
  _BOOL8 v33; // x0
  Il2CppObject *current; // x21
  int64_t UserId; // x2
  _BOOL8 v36; // x0
  int v37; // w9
  _BOOL8 v38; // x0
  Il2CppObject *v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t klass_high; // w26
  int32_t monitor; // w27
  int32_t v44; // w28
  FortificationAutomaticDialogComponent_DetailInfo_o *v45; // x25
  __int64 v46; // x0
  int v47; // w26
  int v48; // w8
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x26
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v60; // x25
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  struct SetSvtInfo_array *setSvtInfos; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x28
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v69; // x26
  __int64 v70; // x1
  int32_t v71; // w28
  int32_t v72; // w27
  int32_t v73; // w26
  FortificationAutomaticDialogComponent_DetailInfo_o *v74; // x25
  __int64 v75; // x0
  __int64 v76; // x8
  int32_t v77; // w27
  int32_t v78; // w28
  int32_t v79; // w26
  __int64 v80; // x0
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  int32_t v85; // w28
  int32_t v86; // w27
  int32_t treasureDeviceIds; // w26
  __int64 v88; // x0
  int v89; // w26
  int v90; // w21
  int v92; // [xsp+Ch] [xbp-F4h]
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-F0h]
  int v95; // [xsp+20h] [xbp-E0h]
  _BYTE v96[36]; // [xsp+28h] [xbp-D8h] BYREF
  int v97; // [xsp+4Ch] [xbp-B4h]
  EventFortificationSvtEntity_o *v98; // [xsp+50h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v99; // [xsp+58h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+60h] [xbp-A0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+90h] [xbp-70h] BYREF

  v4 = isSet;
  if ( (byte_42175DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v16);
    sub_B0D8A4(&Method_System_Func_SetSvtInfo__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_SetSvtInfo__bool__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v24);
    sub_B0D8A4(&NetworkManager_TypeInfo, v25);
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v26);
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v27);
    byte_42175DE = 1;
  }
  memset(&v103, 0, sizeof(v103));
  entities = 0LL;
  entity = 0LL;
  memset(&v100, 0, sizeof(v100));
  v98 = 0LL;
  v99 = 0LL;
  v97 = 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                                                                                                  teamList,
                                                                                                  isSet);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v29 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_B0D97C(v30);
  v31 = (EventFortificationSvtMaster_o *)v30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v96,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)teamList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v32 = 0;
  v103 = *(System_Collections_Generic_List_Enumerator_T__o *)v96;
LABEL_8:
  v95 = v32;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v103,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v33 )
      break;
    current = v103.fields.current;
    if ( !v103.fields.current )
      sub_B0D97C(v33);
    if ( !v29 )
      sub_B0D97C(v33);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v29,
           &entities,
           (int32_t)v103.fields.current[1].klass,
           HIDWORD(v103.fields.current[1].klass),
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B0D97C(0LL);
      v36 = UserEventFortificationMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( !v36 )
        goto LABEL_21;
      if ( !entity )
        sub_B0D97C(v36);
      if ( entity->fields.setSvtInfos )
      {
        v37 = v95;
      }
      else
      {
LABEL_21:
        if ( !entities )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v96,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
        v100 = *(System_Collections_Generic_List_Enumerator_T__o *)v96;
        while ( 1 )
        {
          v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v100,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
          if ( !v38 )
            break;
          v39 = v100.fields.current;
          if ( !v100.fields.current )
            sub_B0D97C(v38);
          if ( !v31 )
            sub_B0D97C(v38);
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v31,
                  &v99,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)v100.fields.current[1].monitor,
                  0LL)
            && v4 )
          {
            klass_high = HIDWORD(current[1].klass);
            monitor = (int32_t)v39[1].monitor;
            v44 = (int32_t)v39[2].monitor;
            v45 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B0D974(
                                                                          FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                          v40,
                                                                          v41);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v45, klass_high, monitor, v44, 0LL);
            if ( !v28 )
              sub_B0D97C(v46);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v28,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
          }
        }
        *(_DWORD *)&v96[4 * v95 + 24] = 551;
        v47 = ++v97;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v100,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
        if ( v47 )
        {
          v48 = v47 - 1;
          v37 = v47;
          if ( *(_DWORD *)&v96[4 * v47 + 20] == 551 )
            goto LABEL_62;
        }
        else
        {
          v37 = 0;
        }
      }
      v92 = v37;
      if ( !entities )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v96,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v100 = *(System_Collections_Generic_List_Enumerator_T__o *)v96;
      while ( 1 )
      {
LABEL_35:
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v100,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          *(_DWORD *)&v96[4 * v92 + 24] = 551;
          v89 = ++v97;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v100,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
          v32 = 0;
          if ( v89 )
          {
            v48 = v89 - 1;
            v32 = v89;
            if ( *(_DWORD *)&v96[4 * v89 + 20] == 551 )
            {
LABEL_62:
              v32 = v48;
              v97 = v48;
            }
          }
          goto LABEL_8;
        }
        v51 = sub_B0D974(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v49, v50);
        FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
          (FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *)v51,
          0LL);
        if ( !v51 )
          sub_B0D97C(v52);
        v59 = (System_Int32_array **)v100.fields.current;
        *(_QWORD *)(v51 + 16) = v100.fields.current;
        v60 = v51 + 16;
        sub_B0D840((BattleServantConfConponent_o *)(v51 + 16), v59, v53, v54, v55, v56, v57, v58);
        if ( !entity )
          sub_B0D97C(v61);
        setSvtInfos = entity->fields.setSvtInfos;
        v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_SetSvtInfo__bool__TypeInfo,
                                                                                   v62,
                                                                                   v63);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v65,
          (Il2CppObject *)v51,
          Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_SetSvtInfo__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)setSvtInfos,
                                                                           (System_Func_T__bool__o *)v65,
                                                                           (const MethodInfo_170767C *)Method_BasicHelper_Find_SetSvtInfo___);
        v69 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          if ( !v4 )
            continue;
          v76 = *(_QWORD *)v60;
          if ( !*(_QWORD *)v60 )
            sub_B0D97C(0LL);
          v77 = *(_DWORD *)(v76 + 24);
          v78 = *(_DWORD *)(v76 + 40);
          v79 = HIDWORD(current[1].klass);
          v74 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B0D974(
                                                                        FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                        v67,
                                                                        v68);
          FortificationAutomaticDialogComponent_DetailInfo___ctor(v74, v79, v77, v78, 0LL);
          if ( !v28 )
            sub_B0D97C(v80);
          goto LABEL_59;
        }
        v70 = *(unsigned int *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
        if ( !(_DWORD)v70 && v4 )
          break;
        if ( (_DWORD)v70
          && !HIDWORD(USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds)
          && v4 )
        {
          setSvtIdList = this->fields.setSvtIdList;
          if ( !setSvtIdList )
            sub_B0D97C(0LL);
          System_Collections_Generic_HashSet_int___Add(
            setSvtIdList,
            v70,
            (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        else if ( (_DWORD)v70 && !v4 )
        {
          if ( !v31 )
            sub_B0D97C(USFGOActorBattleActionEventConditional_OverwriteParamCondition);
          v82 = EventFortificationSvtMaster__TryGetEntity(
                  v31,
                  &v98,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds,
                  0LL);
          if ( !v82 )
          {
            if ( !*(_QWORD *)v60 )
              sub_B0D97C(v82);
            v85 = *(_DWORD *)(*(_QWORD *)v60 + 40LL);
            v86 = HIDWORD(current[1].klass);
            treasureDeviceIds = (int32_t)v69->fields.treasureDeviceIds;
            v74 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B0D974(
                                                                          FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                          v83,
                                                                          v84);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v74, v86, treasureDeviceIds, v85, 0LL);
            if ( !v28 )
              sub_B0D97C(v88);
            goto LABEL_59;
          }
        }
      }
      if ( !*(_QWORD *)v60 )
        sub_B0D97C(USFGOActorBattleActionEventConditional_OverwriteParamCondition);
      v71 = *(_DWORD *)(*(_QWORD *)v60 + 40LL);
      v72 = HIDWORD(current[1].klass);
      v73 = (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds;
      v74 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B0D974(
                                                                    FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                    v70,
                                                                    v68);
      FortificationAutomaticDialogComponent_DetailInfo___ctor(v74, v72, v73, v71, 0LL);
      if ( !v28 )
        sub_B0D97C(v75);
LABEL_59:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
      goto LABEL_35;
    }
  }
  *(_DWORD *)&v96[4 * v95 + 24] = 579;
  v90 = ++v97;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v103,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  if ( v90 && *(_DWORD *)&v96[4 * v90 + 20] == 579 )
    v97 = v90 - 1;
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v28;
}


void __fastcall FortificationAutomaticDialogComponent__SerializeFieldNotNullCheck(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationAutomaticDialogComponent___Close_b__23_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  FortificationAutomaticDialogComponent__Init(this, this->fields.eventId, v3);
}


void __fastcall FortificationAutomaticDialogComponent___Open_b__16_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationAutomaticDialogComponent__get_closeBtnObject(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_42175E1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42175E1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent_DetailInfo___ctor(
        FortificationAutomaticDialogComponent_DetailInfo_o *this,
        int32_t idx,
        int32_t position,
        int32_t classId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.classId = classId;
}


void __fastcall FortificationAutomaticDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4210F57 & 1) == 0 )
  {
    sub_B0D8A4(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4210F57 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall FortificationAutomaticDialogComponent___c___ctor(
        FortificationAutomaticDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_1(
        FortificationAutomaticDialogComponent___c_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.lv;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4210F58 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_B0D8A4(&StringLiteral_16488/*"ar200"*/, v6);
    byte_4210F58 = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B0D8AC();
    v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16488/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_B0D97C(this);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_B0D97C(this);
  classId = x->fields.classId;
  if ( classId == this->fields.typeAll )
    return -1;
  if ( classId == this->fields.typeExtra )
    return 0;
  return x->fields.classId;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___AutoSet_b__3(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *v4; // x20
  __int64 v5; // x1
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v11; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4210F59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_B0D8A4(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4210F59 = 1;
  }
  detail = v4->fields.detail;
  if ( !detail )
    goto LABEL_21;
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  classId = detail->fields.classId;
  if ( classId != CS___8__locals1->fields.typeAll )
  {
    if ( !x )
      goto LABEL_21;
    svtClassMst = CS___8__locals2->fields.svtClassMst;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0LL);
    if ( !svtClassMst )
      goto LABEL_21;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0LL);
    if ( classId != (_DWORD)this )
      return 0;
    CS___8__locals2 = v4->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_21;
  }
  v11 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  _4__this = v11->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_21;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v15 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_21:
    sub_B0D97C(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ReferenceDetailList_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *detail; // x8

  if ( !info || (detail = this->fields.detail) == 0LL )
    sub_B0D97C(this);
  return info->fields.position == detail->fields.position;
}