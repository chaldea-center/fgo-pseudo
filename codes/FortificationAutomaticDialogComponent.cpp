void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA764 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA764 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x20
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  const MethodInfo *v69; // x3
  __int64 v70; // x4
  __int64 v71; // x24
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Collections_Generic_HashSet_int__o *v82; // x19
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  const MethodInfo *v89; // x3
  FortificationAutomaticDialogComponent___c_c **v90; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v95; // x25
  FortificationAutomaticDialogComponent___c_c *v96; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_1; // x26
  Il2CppObject *v99; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v107; // x0
  Il2CppObject *v108; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v109; // x21
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v114; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v115; // x23
  UserServantMaster_o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Int32_array **v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  unsigned __int64 v126; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v129; // x27
  FortificationAutomaticDialogComponent_o *v130; // x26
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  int32_t v136; // w19
  int32_t klass_high; // w21
  EnterUserSvtInfo_o *v138; // x22
  FortificationAutomaticDialogComponent_o *v139; // x21
  Il2CppObject *v140; // x25
  __int64 v141; // x23
  System_Collections_IEnumerator_c **v142; // x21
  __int64 v143; // x8
  System_Collections_IEnumerator_c *v144; // x1
  unsigned __int64 v145; // x10
  int *v146; // x11
  __int64 v147; // x0
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  __int64 v152; // x27
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  __int64 v159; // x8
  unsigned __int64 v160; // x10
  int *v161; // x11
  __int64 v162; // x0
  System_Int32_array **v163; // x0
  __int64 *v164; // x26
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v175; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v176; // x0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v181; // x27
  FortificationAutomaticDialogComponent___c_c *v182; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v183; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_4; // x28
  Il2CppObject *v185; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v186; // x0
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v193; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v194; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v195; // x27
  FortificationAutomaticDialogComponent___c_c **v196; // x20
  System_Collections_IEnumerator_c **v197; // x22
  __int64 v198; // x19
  __int64 v199; // x21
  System_Collections_Generic_HashSet_int__o *v200; // x28
  int32_t v201; // w1
  __int64 v202; // x8
  __int128 v203; // q0
  __int128 v204; // q1
  int32_t v205; // w26
  int32_t v206; // w27
  int64_t v207; // x19
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x3
  __int64 v211; // x4
  EnterUserSvtInfo_o *v212; // x28
  __int64 v213; // x8
  unsigned __int64 v214; // x10
  int *v215; // x11
  __int64 v216; // x0
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x3
  __int64 v220; // x4
  NetworkManager_ResultCallbackFunc_o *v221; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w21
  EventFortificationRequest_o *v224; // x19
  EnterUserSvtInfo_array *v225; // x0
  Il2CppObject *v226; // [xsp+0h] [xbp-E0h]
  FortificationAutomaticDialogComponent_o *v227; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v228; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v230; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v231; // [xsp+40h] [xbp-A0h] BYREF
  int v232; // [xsp+60h] [xbp-80h]
  int v233; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v234; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16

  if ( (byte_40FA75F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&EnterUserSvtInfo_TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v13);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v19);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v20);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v21);
    sub_B16FFC(&Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__, v22);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v23);
    sub_B16FFC(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v24);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v25);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v28);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v29);
    sub_B16FFC(&System_IDisposable_TypeInfo, v30);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v31);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v32);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v34);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v37);
    sub_B16FFC(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v38);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventFortificationRequest___, v39);
    sub_B16FFC(&NetworkManager_TypeInfo, v40);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v43);
    sub_B16FFC(&SoundManager_TypeInfo, v44);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v45);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v46);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v47);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v48);
    sub_B16FFC(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v49);
    sub_B16FFC(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v50);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v51);
    sub_B16FFC(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v52);
    sub_B16FFC(&FortificationAutomaticDialogComponent___c_TypeInfo, v53);
    byte_40FA75F = 1;
  }
  entities = 0LL;
  memset(&v234, 0, sizeof(v234));
  v233 = 0;
  v54 = sub_B170CC(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, isSet, method, v3, v4);
  FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
    (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v54,
    0LL);
  if ( !v54 )
    goto LABEL_100;
  *(_QWORD *)(v54 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 24), (System_Int32_array **)this, v55, v56, v57, v58, v59, v60);
  *(_BYTE *)(v54 + 32) = isSet;
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                                                                  v61,
                                                                                                  v62,
                                                                                                  v63,
                                                                                                  v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v54 + 16) = 0x800000000LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  if ( !EventFortificationMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entities, this->fields.eventId, 0LL) )
    return;
  v228 = v65;
  if ( *(_BYTE *)(v54 + 32) )
  {
    v71 = sub_B170CC(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v67, v68, v69, v70);
    FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
      (FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *)v71,
      0LL);
    if ( v71 )
    {
      *(_QWORD *)(v71 + 24) = v54;
      v226 = (Il2CppObject *)v54;
      sub_B16F98((BattleServantConfConponent_o *)(v71 + 24), (System_Int32_array **)v54, v72, v73, v74, v75, v76, v77);
      v82 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v78,
                                                           v79,
                                                           v80,
                                                           v81);
      System_Collections_Generic_HashSet_int____ctor(
        v82,
        (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
      this->fields.setSvtIdList = v82;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.setSvtIdList,
        (System_Int32_array **)v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      v227 = this;
      v90 = &FortificationAutomaticDialogComponent___c_TypeInfo;
      v95 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v89);
      v96 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( (BYTE3(FortificationAutomaticDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v96 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v96->static_fields;
      _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v99 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                                                     v91,
                                                                                     v92,
                                                                                     v93,
                                                                                     v94);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__18_1,
          v99,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
        v100 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v100->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v100->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
      }
      v107 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v95,
               (System_Func_TSource__TKey__o *)_9__18_1,
               (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v108 = *(Il2CppObject **)(v71 + 24);
      v109 = v107;
      v114 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                               System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                                               v110,
                                                                               v111,
                                                                               v112,
                                                                               v113);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        v114,
        v108,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
      v115 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
               v109,
               (System_Func_TSource__TKey__o *)v114,
               (const MethodInfo_19C46C4 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v116 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( v116 )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  v116,
                                                                                  0LL);
        v118 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v71 + 16) = v118;
        sub_B16F98((BattleServantConfConponent_o *)(v71 + 16), v118, v119, v120, v121, v122, v123, v124);
        if ( v115 )
        {
          klass = v115->klass;
          if ( *(_WORD *)&v115->klass->_2.bitflags1 )
          {
            v126 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              ++v126;
              p_offset += 4;
              if ( v126 >= *(unsigned __int16 *)&v115->klass->_2.bitflags1 )
                goto LABEL_28;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_28:
            p_method = sub_AAFEF8(
                         v115,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v141 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v115,
                   *(_QWORD *)(p_method + 8));
          if ( !v141 )
            sub_B170D4();
          v142 = &System_Collections_IEnumerator_TypeInfo;
          while ( 1 )
          {
            v143 = *(_QWORD *)v141;
            v144 = *v142;
            if ( *(_WORD *)(*(_QWORD *)v141 + 298LL) )
            {
              v145 = 0LL;
              v146 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v146 - 1) != v144 )
              {
                ++v145;
                v146 += 4;
                if ( v145 >= *(unsigned __int16 *)(*(_QWORD *)v141 + 298LL) )
                  goto LABEL_43;
              }
              v147 = v143 + 16LL * *v146 + 312;
            }
            else
            {
LABEL_43:
              v147 = sub_AAFEF8(v141, v144, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v147)(v141, *(_QWORD *)(v147 + 8)) & 1) == 0 )
              break;
            v152 = sub_B170CC(
                     FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo,
                     v148,
                     v149,
                     v150,
                     v151);
            FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
              (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)v152,
              0LL);
            if ( !v152 )
              sub_B170D4();
            *(_QWORD *)(v152 + 24) = v71;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v152 + 24),
              (System_Int32_array **)v71,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158);
            v159 = *(_QWORD *)v141;
            if ( *(_WORD *)(*(_QWORD *)v141 + 298LL) )
            {
              v160 = 0LL;
              v161 = (int *)(*(_QWORD *)(v159 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v161
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                ++v160;
                v161 += 4;
                if ( v160 >= *(unsigned __int16 *)(*(_QWORD *)v141 + 298LL) )
                  goto LABEL_51;
              }
              v162 = v159 + 16LL * *v161 + 312;
            }
            else
            {
LABEL_51:
              v162 = sub_AAFEF8(
                       v141,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v163 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v162)(v141, *(_QWORD *)(v162 + 8));
            *(_QWORD *)(v152 + 16) = v163;
            v164 = (__int64 *)(v152 + 16);
            sub_B16F98((BattleServantConfConponent_o *)(v152 + 16), v163, v165, v166, v167, v168, v169, v170);
            v175 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_UserServantEntity__bool__TypeInfo,
                                                                                        v171,
                                                                                        v172,
                                                                                        v173,
                                                                                        v174);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v175,
              (Il2CppObject *)v152,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v176 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v175,
                     (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v181 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v176,
                                                                          (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v182 = *v90;
            if ( (BYTE3((*v90)->vtable._0_Equals.methodPtr) & 4) != 0 && !v182->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v182);
              v182 = *v90;
            }
            v183 = v182->static_fields;
            _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v183->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( (BYTE3(v182->vtable._0_Equals.methodPtr) & 4) != 0 && !v182->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v182);
                v183 = (*v90)->static_fields;
              }
              v185 = (Il2CppObject *)v183->__9;
              _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                           System_Func_UserServantEntity__int__TypeInfo,
                                                                                           v177,
                                                                                           v178,
                                                                                           v179,
                                                                                           v180);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__18_4,
                v185,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
              v186 = (*v90)->static_fields;
              v186->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v186->__9__18_4,
                (System_Int32_array **)_9__18_4,
                v187,
                v188,
                v189,
                v190,
                v191,
                v192);
            }
            v193 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                          v181,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v194 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                     v193,
                     (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v195 = v194;
            if ( v194 )
            {
              v196 = v90;
              v197 = v142;
              v199 = *(_QWORD *)&v194[1].fields.freeStoneNum;
              v198 = *(_QWORD *)&v194[1].fields.isCommitedAlready;
              v200 = *p_setSvtIdList;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v236.fields.currentCryptoKey = v199;
              *(_QWORD *)&v236.fields.fakeValue = v198;
              v201 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v236, 0LL);
              if ( !v200 )
                sub_B170D4();
              v142 = v197;
              System_Collections_Generic_HashSet_int___Add(
                v200,
                v201,
                (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
              v202 = *v164;
              if ( !*v164 )
                sub_B170D4();
              v203 = *(_OWORD *)&v195->fields.purchasedBankShopId;
              v204 = *(_OWORD *)&v195->fields.freeStoneNum;
              v206 = *(_DWORD *)(v202 + 16);
              v205 = *(_DWORD *)(v202 + 20);
              v90 = v196;
              *(_OWORD *)&v231.fields.currentCryptoKey = v203;
              *(_OWORD *)&v231.fields.fakeValue = v204;
              v65 = v228;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v230 = v231;
              v207 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v230, 0LL);
              v212 = (EnterUserSvtInfo_o *)sub_B170CC(EnterUserSvtInfo_TypeInfo, v208, v209, v210, v211);
              EnterUserSvtInfo___ctor(v212, v206, v205, v207, 0LL);
              if ( !v228 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v228,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v212,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
            }
          }
          v140 = v226;
          v139 = v227;
          v232 = 399;
          v233 = 1;
          v213 = *(_QWORD *)v141;
          if ( *(_WORD *)(*(_QWORD *)v141 + 298LL) )
          {
            v214 = 0LL;
            v215 = (int *)(*(_QWORD *)(v213 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v215 - 1) != System_IDisposable_TypeInfo )
            {
              ++v214;
              v215 += 4;
              if ( v214 >= *(unsigned __int16 *)(*(_QWORD *)v141 + 298LL) )
                goto LABEL_77;
            }
            v216 = v213 + 16LL * *v215 + 312;
          }
          else
          {
LABEL_77:
            v216 = sub_AAFEF8(v141, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v216)(v141, *(_QWORD *)(v216 + 8));
          if ( v232 == 399 )
            v233 = 0;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              *p_setSvtIdList,
              (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_100:
    sub_B170D4();
  }
  v129 = (Il2CppObject *)v54;
  v130 = this;
  v131 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 0, v69);
  if ( !v131 )
    goto LABEL_100;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v231,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v131,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v234.fields.current = (Il2CppObject *)v231.fields.fakeValue;
  *(_OWORD *)&v234.fields.list = *(_OWORD *)&v231.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v234,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__) )
  {
    if ( !v234.fields.current )
      sub_B170D4();
    v136 = (int32_t)v234.fields.current[1].klass;
    klass_high = HIDWORD(v234.fields.current[1].klass);
    v138 = (EnterUserSvtInfo_o *)sub_B170CC(EnterUserSvtInfo_TypeInfo, v132, v133, v134, v135);
    EnterUserSvtInfo___ctor(v138, v136, klass_high, 0LL, 0LL);
    if ( !v65 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v65,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v138,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  }
  v232 = 494;
  v233 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v234,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
  v233 = 0;
  v139 = v130;
  v140 = v129;
LABEL_84:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v221 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  v217,
                                                  v218,
                                                  v219,
                                                  v220);
  NetworkManager_ResultCallbackFunc___ctor(
    v221,
    v140,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v221,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v65 )
    goto LABEL_100;
  eventId = v139->fields.eventId;
  v224 = (EventFortificationRequest_o *)Request_WarBoardWallAttackRequest;
  v225 = (EnterUserSvtInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v224 )
    goto LABEL_100;
  EventFortificationRequest__beginRequest(v224, eventId, v225, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FA762 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v6);
    byte_40FA762 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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

  if ( (byte_40FA761 & 1) == 0 )
  {
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_40FA761 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  System_String_o *v27; // x0
  UILabel_o *setButtonLb; // x20
  System_String_o *v29; // x0
  UILabel_o *removeButtonLb; // x20
  System_String_o *v31; // x0
  UILabel_o *cancelButtonLb; // x20
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x20

  if ( (byte_40FA75E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, onDecide);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_6396/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v13);
    sub_B16FFC(&StringLiteral_6397/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v14);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_B16FFC(&StringLiteral_6398/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v16);
    sub_B16FFC(&StringLiteral_6399/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v17);
    byte_40FA75E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)closeCallBack,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_B16F98(
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6399/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v25, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v27, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_6398/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v29, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v31, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B170D4();
    }
    UILabel__set_text(cancelButtonLb, v33, 0LL);
    this->fields.state = 1;
    v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v4; // x4
  _BOOL4 v5; // w20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  EventFortificationDetailMaster_o *v30; // x23
  WarQuestSelectionMaster_o *v31; // x0
  EventFortificationSvtMaster_o *v32; // x24
  int v33; // w10
  Il2CppObject *current; // x21
  int64_t UserId; // x2
  int v36; // w9
  Il2CppObject *v37; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t klass_high; // w26
  int32_t monitor; // w27
  int32_t v44; // w28
  FortificationAutomaticDialogComponent_DetailInfo_o *v45; // x25
  int v46; // w26
  int v47; // w8
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x26
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v60; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  struct SetSvtInfo_array *setSvtInfos; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v66; // x28
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v72; // x26
  __int64 v73; // x1
  int32_t v74; // w28
  int32_t v75; // w27
  int32_t v76; // w26
  FortificationAutomaticDialogComponent_DetailInfo_o *v77; // x25
  __int64 v78; // x8
  int32_t v79; // w27
  int32_t v80; // w28
  int32_t v81; // w26
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int32_t v87; // w28
  int32_t v88; // w27
  int32_t treasureDeviceIds; // w26
  int v90; // w26
  int v91; // w21
  int v93; // [xsp+Ch] [xbp-F4h]
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-F0h]
  int v96; // [xsp+20h] [xbp-E0h]
  _BYTE v97[36]; // [xsp+28h] [xbp-D8h] BYREF
  int v98; // [xsp+4Ch] [xbp-B4h]
  EventFortificationSvtEntity_o *v99; // [xsp+50h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v100; // [xsp+58h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+60h] [xbp-A0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+90h] [xbp-70h] BYREF

  v5 = isSet;
  if ( (byte_40FA760 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v17);
    sub_B16FFC(&Method_System_Func_SetSvtInfo__bool___ctor__, v18);
    sub_B16FFC(&System_Func_SetSvtInfo__bool__TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v25);
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v27);
    sub_B16FFC(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v28);
    byte_40FA760 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  entities = 0LL;
  entity = 0LL;
  memset(&v101, 0, sizeof(v101));
  v99 = 0LL;
  v100 = 0LL;
  v98 = 0;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                                                                                                  teamList,
                                                                                                  isSet,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v30 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v31 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_B170D4();
  v32 = (EventFortificationSvtMaster_o *)v31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v97,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)teamList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v33 = 0;
  v104 = *(System_Collections_Generic_List_Enumerator_T__o *)v97;
LABEL_8:
  v96 = v33;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v104,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    current = v104.fields.current;
    if ( !v104.fields.current )
      sub_B170D4();
    if ( !v30 )
      sub_B170D4();
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v30,
           &entities,
           (int32_t)v104.fields.current[1].klass,
           HIDWORD(v104.fields.current[1].klass),
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( !UserEventFortificationMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL) )
        goto LABEL_21;
      if ( !entity )
        sub_B170D4();
      if ( entity->fields.setSvtInfos )
      {
        v36 = v96;
      }
      else
      {
LABEL_21:
        if ( !entities )
          sub_B170D4();
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v97,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
        v101 = *(System_Collections_Generic_List_Enumerator_T__o *)v97;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v101,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          v37 = v101.fields.current;
          if ( !v101.fields.current )
            sub_B170D4();
          if ( !v32 )
            sub_B170D4();
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v32,
                  &v100,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)v101.fields.current[1].monitor,
                  0LL)
            && v5 )
          {
            klass_high = HIDWORD(current[1].klass);
            monitor = (int32_t)v37[1].monitor;
            v44 = (int32_t)v37[2].monitor;
            v45 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B170CC(
                                                                          FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                          v38,
                                                                          v39,
                                                                          v40,
                                                                          v41);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v45, klass_high, monitor, v44, 0LL);
            if ( !v29 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
          }
        }
        *(_DWORD *)&v97[4 * v96 + 24] = 551;
        v46 = ++v98;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v101,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
        if ( v46 )
        {
          v47 = v46 - 1;
          v36 = v46;
          if ( *(_DWORD *)&v97[4 * v46 + 20] == 551 )
            goto LABEL_62;
        }
        else
        {
          v36 = 0;
        }
      }
      v93 = v36;
      if ( !entities )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v97,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v101 = *(System_Collections_Generic_List_Enumerator_T__o *)v97;
      while ( 1 )
      {
LABEL_35:
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v101,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          *(_DWORD *)&v97[4 * v93 + 24] = 551;
          v90 = ++v98;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v101,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
          v33 = 0;
          if ( v90 )
          {
            v47 = v90 - 1;
            v33 = v90;
            if ( *(_DWORD *)&v97[4 * v90 + 20] == 551 )
            {
LABEL_62:
              v33 = v47;
              v98 = v47;
            }
          }
          goto LABEL_8;
        }
        v52 = sub_B170CC(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v48, v49, v50, v51);
        FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
          (FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *)v52,
          0LL);
        if ( !v52 )
          sub_B170D4();
        v59 = (System_Int32_array **)v101.fields.current;
        *(_QWORD *)(v52 + 16) = v101.fields.current;
        v60 = v52 + 16;
        sub_B16F98((BattleServantConfConponent_o *)(v52 + 16), v59, v53, v54, v55, v56, v57, v58);
        if ( !entity )
          sub_B170D4();
        setSvtInfos = entity->fields.setSvtInfos;
        v66 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_SetSvtInfo__bool__TypeInfo,
                                                                                   v61,
                                                                                   v62,
                                                                                   v63,
                                                                                   v64);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v66,
          (Il2CppObject *)v52,
          Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_SetSvtInfo__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)setSvtInfos,
                                                                           (System_Func_T__bool__o *)v66,
                                                                           (const MethodInfo_18B650C *)Method_BasicHelper_Find_SetSvtInfo___);
        v72 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          if ( !v5 )
            continue;
          v78 = *(_QWORD *)v60;
          if ( !*(_QWORD *)v60 )
            sub_B170D4();
          v79 = *(_DWORD *)(v78 + 24);
          v80 = *(_DWORD *)(v78 + 40);
          v81 = HIDWORD(current[1].klass);
          v77 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B170CC(
                                                                        FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                        v68,
                                                                        v69,
                                                                        v70,
                                                                        v71);
          FortificationAutomaticDialogComponent_DetailInfo___ctor(v77, v81, v79, v80, 0LL);
          if ( !v29 )
            sub_B170D4();
          goto LABEL_59;
        }
        v73 = *(unsigned int *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
        if ( !(_DWORD)v73 && v5 )
          break;
        if ( (_DWORD)v73
          && !HIDWORD(USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds)
          && v5 )
        {
          setSvtIdList = this->fields.setSvtIdList;
          if ( !setSvtIdList )
            sub_B170D4();
          System_Collections_Generic_HashSet_int___Add(
            setSvtIdList,
            v73,
            (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        else if ( (_DWORD)v73 && !v5 )
        {
          if ( !v32 )
            sub_B170D4();
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v32,
                  &v99,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds,
                  0LL) )
          {
            if ( !*(_QWORD *)v60 )
              sub_B170D4();
            v87 = *(_DWORD *)(*(_QWORD *)v60 + 40LL);
            v88 = HIDWORD(current[1].klass);
            treasureDeviceIds = (int32_t)v72->fields.treasureDeviceIds;
            v77 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B170CC(
                                                                          FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                          v83,
                                                                          v84,
                                                                          v85,
                                                                          v86);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v77, v88, treasureDeviceIds, v87, 0LL);
            if ( !v29 )
              sub_B170D4();
            goto LABEL_59;
          }
        }
      }
      if ( !*(_QWORD *)v60 )
        sub_B170D4();
      v74 = *(_DWORD *)(*(_QWORD *)v60 + 40LL);
      v75 = HIDWORD(current[1].klass);
      v76 = (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds;
      v77 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B170CC(
                                                                    FortificationAutomaticDialogComponent_DetailInfo_TypeInfo,
                                                                    v73,
                                                                    v69,
                                                                    v70,
                                                                    v71);
      FortificationAutomaticDialogComponent_DetailInfo___ctor(v77, v75, v76, v74, 0LL);
      if ( !v29 )
        sub_B170D4();
LABEL_59:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
      goto LABEL_35;
    }
  }
  *(_DWORD *)&v97[4 * v96 + 24] = 579;
  v91 = ++v98;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v104,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  if ( v91 && *(_DWORD *)&v97[4 * v91 + 20] == 579 )
    v98 = v91 - 1;
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v29;
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

  if ( (byte_40FA763 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA763 = 1;
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68C5 & 1) == 0 )
  {
    sub_B16FFC(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_40F68C5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  FortificationAutomaticDialogComponent_o *v10; // x0

  if ( (byte_40F68C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v5);
    sub_B16FFC(&StringLiteral_16375/*"ar200"*/, v6);
    byte_40F68C6 = 1;
  }
  if ( this->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    OverwriteAssetSoundName__PlaySe(v8, (System_String_o *)StringLiteral_16375/*"ar200"*/, 0LL);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    return;
  v10 = this->fields.__4__this;
  if ( !v10 )
LABEL_12:
    sub_B170D4();
  FortificationAutomaticDialogComponent__Close(v10, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_B170D4();
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
  __int64 v5; // x1
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  int32_t SvtClassId; // w0
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v12; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  int32_t v17; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F68C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40F68C7 = 1;
  }
  detail = this->fields.detail;
  if ( !detail )
    goto LABEL_21;
  CS___8__locals2 = this->fields.CS___8__locals2;
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
    SvtClassId = UserServantEntity__getSvtClassId(x, 0LL);
    if ( !svtClassMst )
      goto LABEL_21;
    if ( classId != ServantClassMaster__getSupportGroupType(svtClassMst, SvtClassId, 0LL) )
      return 0;
    CS___8__locals2 = this->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_21;
  }
  v12 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_21;
  _4__this = v12->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_21;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v16 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !setSvtIdList )
LABEL_21:
    sub_B170D4();
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            v17,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B170D4();
  return info->fields.position == detail->fields.position;
}