void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBC47 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC47 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  char v57; // w1
  int v58; // w2
  __int64 v59; // x3
  char v60; // w1
  int v61; // w2
  __int64 v62; // x3
  char v63; // w1
  int v64; // w2
  __int64 v65; // x3
  char v66; // w1
  int v67; // w2
  __int64 v68; // x3
  char v69; // w1
  int v70; // w2
  __int64 v71; // x3
  char v72; // w1
  int v73; // w2
  __int64 v74; // x3
  char v75; // w1
  int v76; // w2
  __int64 v77; // x3
  char v78; // w1
  int v79; // w2
  __int64 v80; // x3
  char v81; // w1
  int v82; // w2
  __int64 v83; // x3
  char v84; // w1
  int v85; // w2
  __int64 v86; // x3
  char v87; // w1
  int v88; // w2
  __int64 v89; // x3
  char v90; // w1
  int v91; // w2
  __int64 v92; // x3
  char v93; // w1
  int v94; // w2
  __int64 v95; // x3
  char v96; // w1
  int v97; // w2
  __int64 v98; // x3
  char v99; // w1
  int v100; // w2
  __int64 v101; // x3
  char v102; // w1
  int v103; // w2
  __int64 v104; // x3
  char v105; // w1
  int v106; // w2
  __int64 v107; // x3
  char v108; // w1
  int v109; // w2
  __int64 v110; // x3
  char v111; // w1
  int v112; // w2
  __int64 v113; // x3
  char v114; // w1
  int v115; // w2
  __int64 v116; // x3
  char v117; // w1
  int v118; // w2
  __int64 v119; // x3
  char v120; // w1
  int v121; // w2
  __int64 v122; // x3
  char v123; // w1
  int v124; // w2
  __int64 v125; // x3
  char v126; // w1
  int v127; // w2
  __int64 v128; // x3
  char v129; // w1
  int v130; // w2
  __int64 v131; // x3
  char v132; // w1
  int v133; // w2
  __int64 v134; // x3
  char v135; // w1
  int v136; // w2
  __int64 v137; // x3
  char v138; // w1
  int v139; // w2
  __int64 v140; // x3
  char v141; // w1
  int v142; // w2
  __int64 v143; // x3
  char v144; // w1
  int v145; // w2
  __int64 v146; // x3
  __int64 v147; // x22
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v149; // x1
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v156; // x20
  const MethodInfo *v157; // x3
  __int64 v158; // x24
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Collections_Generic_HashSet_int__o *v165; // x19
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  const MethodInfo *v172; // x3
  FortificationAutomaticDialogComponent___c_c **v173; // x22
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v174; // x25
  FortificationAutomaticDialogComponent___c_c *v175; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_1; // x26
  Il2CppObject *v178; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v179; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v186; // x0
  Il2CppObject *v187; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v188; // x21
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v189; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v190; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Int32_array **v192; // x0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  __int64 v199; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  unsigned __int64 v201; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v204; // x27
  FortificationAutomaticDialogComponent_o *v205; // x26
  _BOOL8 v206; // x0
  __int64 v207; // x1
  int32_t v208; // w19
  int32_t klass_high; // w21
  EnterUserSvtInfo_o *v210; // x22
  __int64 v211; // x0
  __int64 v212; // x1
  FortificationAutomaticDialogComponent_o *v213; // x21
  Il2CppObject *v214; // x25
  __int64 v215; // x1
  __int64 v216; // x3
  __int64 v217; // x23
  System_Collections_IEnumerator_c **v218; // x21
  __int64 v219; // x8
  System_Collections_IEnumerator_c *v220; // x1
  unsigned __int64 v221; // x10
  int *v222; // x11
  __int64 v223; // x0
  __int64 v224; // x3
  __int64 v225; // x27
  __int64 v226; // x0
  __int64 v227; // x1
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  __int64 v234; // x3
  __int64 v235; // x8
  unsigned __int64 v236; // x10
  int *v237; // x11
  __int64 v238; // x0
  System_Int32_array **v239; // x0
  __int64 *v240; // x26
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v247; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v248; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v249; // x27
  FortificationAutomaticDialogComponent___c_c *v250; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v251; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_4; // x28
  Il2CppObject *v253; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v254; // x0
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v261; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v262; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v263; // x27
  FortificationAutomaticDialogComponent___c_c **v264; // x20
  System_Collections_IEnumerator_c **v265; // x22
  __int64 v266; // x19
  __int64 v267; // x21
  System_Collections_Generic_HashSet_int__o *v268; // x28
  __int64 v269; // x0
  _BOOL8 v270; // x0
  __int64 v271; // x1
  __int64 v272; // x8
  __int128 v273; // q0
  __int128 v274; // q1
  int32_t v275; // w26
  int32_t v276; // w27
  int64_t v277; // x19
  EnterUserSvtInfo_o *v278; // x28
  __int64 v279; // x0
  __int64 v280; // x1
  __int64 v281; // x8
  unsigned __int64 v282; // x10
  int *v283; // x11
  __int64 v284; // x0
  NetworkManager_ResultCallbackFunc_o *v285; // x22
  int32_t eventId; // w21
  EventFortificationRequest_o *v287; // x19
  Il2CppObject *v288; // [xsp+0h] [xbp-E0h]
  FortificationAutomaticDialogComponent_o *v289; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v290; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+40h] [xbp-A0h] BYREF
  int v294; // [xsp+60h] [xbp-80h]
  int v295; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v296; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16

  if ( (byte_42EBC42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EnterUserSvtInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v21, v22, v23);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v33, v34, v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__, v51, v52, v53);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v57, v58, v59);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v69, v70, v71);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v75, v76, v77);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
      v78,
      v79,
      v80);
    sub_B5D5C4(
      &System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
      v81,
      v82,
      v83);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v87, v88, v89);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v90,
      v91,
      v92);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v93, v94, v95);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v96, v97, v98);
    sub_B5D5C4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v99, v100, v101);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v102, v103, v104);
    sub_B5D5C4(&NetworkManager_TypeInfo, v105, v106, v107);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v108, v109, v110);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v111, v112, v113);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v114, v115, v116);
    sub_B5D5C4(&SoundManager_TypeInfo, v117, v118, v119);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v120, v121, v122);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v123, v124, v125);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v126, v127, v128);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v129, v130, v131);
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v132, v133, v134);
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v135, v136, v137);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v138, v139, v140);
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v141, v142, v143);
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c_TypeInfo, v144, v145, v146);
    byte_42EBC42 = 1;
  }
  entities = 0LL;
  memset(&v296, 0, sizeof(v296));
  v295 = 0;
  v147 = sub_B5D694(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
    (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v147,
    0LL);
  if ( !v147 )
    goto LABEL_100;
  *(_QWORD *)(v147 + 24) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v147 + 24),
    (System_Int32_array **)this,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  *(_BYTE *)(v147 + 32) = isSet;
  v156 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v156,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v147 + 16) = 0x800000000LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  if ( !EventFortificationMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entities, this->fields.eventId, 0LL) )
    return;
  v290 = v156;
  if ( *(_BYTE *)(v147 + 32) )
  {
    v158 = sub_B5D694(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
      (FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *)v158,
      0LL);
    if ( v158 )
    {
      *(_QWORD *)(v158 + 24) = v147;
      v288 = (Il2CppObject *)v147;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v158 + 24),
        (System_Int32_array **)v147,
        v159,
        v160,
        v161,
        v162,
        v163,
        v164);
      v165 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v165,
        (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
      this->fields.setSvtIdList = v165;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.setSvtIdList,
        (System_Int32_array **)v165,
        v166,
        v167,
        v168,
        v169,
        v170,
        v171);
      v289 = this;
      v173 = &FortificationAutomaticDialogComponent___c_TypeInfo;
      v174 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v172);
      v175 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( (BYTE3(FortificationAutomaticDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v175 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v175->static_fields;
      _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (BYTE3(v175->vtable._0_Equals.methodPtr) & 4) != 0 && !v175->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v175);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v178 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__18_1,
          v178,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          (const MethodInfo_2C2F87C *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
        v179 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v179->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v179->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185);
      }
      v186 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v174,
               (System_Func_TSource__TKey__o *)_9__18_1,
               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v187 = *(Il2CppObject **)(v158 + 24);
      v188 = v186;
      v189 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        v189,
        v187,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        (const MethodInfo_2C2F87C *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
      v190 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
               v188,
               (System_Func_TSource__TKey__o *)v189,
               (const MethodInfo_1CB72CC *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                                  0LL);
        v192 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v158 + 16) = v192;
        sub_B5D560((BattleServantConfConponent_o *)(v158 + 16), v192, v193, v194, v195, v196, v197, v198);
        if ( v190 )
        {
          klass = v190->klass;
          if ( *(_WORD *)&v190->klass->_2.bitflags1 )
          {
            v201 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              ++v201;
              p_offset += 4;
              if ( v201 >= *(unsigned __int16 *)&v190->klass->_2.bitflags1 )
                goto LABEL_28;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_28:
            p_method = sub_AF54C0(
                         v190,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL,
                         v199);
          }
          v217 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v190,
                   *(_QWORD *)(p_method + 8));
          if ( !v217 )
            sub_B5D69C(0LL, v215);
          v218 = &System_Collections_IEnumerator_TypeInfo;
          while ( 1 )
          {
            v219 = *(_QWORD *)v217;
            v220 = *v218;
            if ( *(_WORD *)(*(_QWORD *)v217 + 298LL) )
            {
              v221 = 0LL;
              v222 = (int *)(*(_QWORD *)(v219 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v222 - 1) != v220 )
              {
                ++v221;
                v222 += 4;
                if ( v221 >= *(unsigned __int16 *)(*(_QWORD *)v217 + 298LL) )
                  goto LABEL_43;
              }
              v223 = v219 + 16LL * *v222 + 312;
            }
            else
            {
LABEL_43:
              v223 = sub_AF54C0(v217, v220, 0LL, v216);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v223)(v217, *(_QWORD *)(v223 + 8)) & 1) == 0 )
              break;
            v225 = sub_B5D694(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
              (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)v225,
              0LL);
            if ( !v225 )
              sub_B5D69C(v226, v227);
            *(_QWORD *)(v225 + 24) = v158;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v225 + 24),
              (System_Int32_array **)v158,
              v228,
              v229,
              v230,
              v231,
              v232,
              v233);
            v235 = *(_QWORD *)v217;
            if ( *(_WORD *)(*(_QWORD *)v217 + 298LL) )
            {
              v236 = 0LL;
              v237 = (int *)(*(_QWORD *)(v235 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v237
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                ++v236;
                v237 += 4;
                if ( v236 >= *(unsigned __int16 *)(*(_QWORD *)v217 + 298LL) )
                  goto LABEL_51;
              }
              v238 = v235 + 16LL * *v237 + 312;
            }
            else
            {
LABEL_51:
              v238 = sub_AF54C0(
                       v217,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL,
                       v234);
            }
            v239 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v238)(v217, *(_QWORD *)(v238 + 8));
            *(_QWORD *)(v225 + 16) = v239;
            v240 = (__int64 *)(v225 + 16);
            sub_B5D560((BattleServantConfConponent_o *)(v225 + 16), v239, v241, v242, v243, v244, v245, v246);
            v247 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v247,
              (Il2CppObject *)v225,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v248 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v247,
                     (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v249 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v248,
                                                                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v250 = *v173;
            if ( (BYTE3((*v173)->vtable._0_Equals.methodPtr) & 4) != 0 && !v250->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v250);
              v250 = *v173;
            }
            v251 = v250->static_fields;
            _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v251->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( (BYTE3(v250->vtable._0_Equals.methodPtr) & 4) != 0 && !v250->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v250);
                v251 = (*v173)->static_fields;
              }
              v253 = (Il2CppObject *)v251->__9;
              _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__18_4,
                v253,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
              v254 = (*v173)->static_fields;
              v254->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v254->__9__18_4,
                (System_Int32_array **)_9__18_4,
                v255,
                v256,
                v257,
                v258,
                v259,
                v260);
            }
            v261 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                          v249,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v262 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                     v261,
                     (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v263 = v262;
            if ( v262 )
            {
              v264 = v173;
              v265 = v218;
              v267 = *(_QWORD *)&v262[1].fields.freeStoneNum;
              v266 = *(_QWORD *)&v262[1].fields.isCommitedAlready;
              v268 = *p_setSvtIdList;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v298.fields.currentCryptoKey = v267;
              *(_QWORD *)&v298.fields.fakeValue = v266;
              v269 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v298, 0LL);
              if ( !v268 )
                sub_B5D69C(v269, (unsigned int)v269);
              v218 = v265;
              v270 = System_Collections_Generic_HashSet_int___Add(
                       v268,
                       v269,
                       (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v272 = *v240;
              if ( !*v240 )
                sub_B5D69C(v270, v271);
              v273 = *(_OWORD *)&v263->fields.purchasedBankShopId;
              v274 = *(_OWORD *)&v263->fields.freeStoneNum;
              v276 = *(_DWORD *)(v272 + 16);
              v275 = *(_DWORD *)(v272 + 20);
              v173 = v264;
              *(_OWORD *)&v293.fields.currentCryptoKey = v273;
              *(_OWORD *)&v293.fields.fakeValue = v274;
              v156 = v290;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v292 = v293;
              v277 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v292, 0LL);
              v278 = (EnterUserSvtInfo_o *)sub_B5D694(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v278, v276, v275, v277, 0LL);
              if ( !v290 )
                sub_B5D69C(v279, v280);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v290,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v278,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
            }
          }
          v214 = v288;
          v213 = v289;
          v294 = 399;
          v295 = 1;
          v281 = *(_QWORD *)v217;
          if ( *(_WORD *)(*(_QWORD *)v217 + 298LL) )
          {
            v282 = 0LL;
            v283 = (int *)(*(_QWORD *)(v281 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v283 - 1) != System_IDisposable_TypeInfo )
            {
              ++v282;
              v283 += 4;
              if ( v282 >= *(unsigned __int16 *)(*(_QWORD *)v217 + 298LL) )
                goto LABEL_77;
            }
            v284 = v281 + 16LL * *v283 + 312;
          }
          else
          {
LABEL_77:
            v284 = sub_AF54C0(v217, System_IDisposable_TypeInfo, 0LL, v224);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v284)(v217, *(_QWORD *)(v284 + 8));
          if ( v294 == 399 )
            v295 = 0;
          Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
              (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_100:
    sub_B5D69C(Master_WarQuestSelectionMaster, v149);
  }
  v204 = (Il2CppObject *)v147;
  v205 = this;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                                   this,
                                                                   entities,
                                                                   0,
                                                                   v157);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v293,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v296.fields.current = (Il2CppObject *)v293.fields.fakeValue;
  *(_OWORD *)&v296.fields.list = *(_OWORD *)&v293.fields.currentCryptoKey;
  while ( 1 )
  {
    v206 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v296,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v206 )
      break;
    if ( !v296.fields.current )
      sub_B5D69C(v206, v207);
    v208 = (int32_t)v296.fields.current[1].klass;
    klass_high = HIDWORD(v296.fields.current[1].klass);
    v210 = (EnterUserSvtInfo_o *)sub_B5D694(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v210, v208, klass_high, 0LL, 0LL);
    if ( !v156 )
      sub_B5D69C(v211, v212);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v156,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v210,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  }
  v294 = 494;
  v295 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v296,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
  v295 = 0;
  v213 = v205;
  v214 = v204;
LABEL_84:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v285 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v285,
    v214,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v285,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v156 )
    goto LABEL_100;
  eventId = v213->fields.eventId;
  v287 = (EventFortificationRequest_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v156,
                                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v287 )
    goto LABEL_100;
  EventFortificationRequest__beginRequest(v287, eventId, (EnterUserSvtInfo_array *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EBC45 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v5, v6, v7);
    byte_42EBC45 = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EBC44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42EBC44 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    FortificationAutomaticDialogComponent__Close(this, v7);
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v39; // x0
  __int64 v40; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v45; // x20

  if ( (byte_42EBC41 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)onDecide, (_DWORD)closeCallBack, method);
    sub_B5D5C4(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6493/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6494/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6495/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6496/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v29, v30, v31);
    byte_42EBC41 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)closeCallBack,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closeCallBack,
      (System_Int32_array **)closeCallBack,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6496/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v39, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6493/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v39, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6495/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v39, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6494/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v39, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B5D69C(v39, v40);
    }
    UILabel__set_text(cancelButtonLb, v39, 0LL);
    this->fields.state = 1;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x19
  EventFortificationDetailMaster_o *v73; // x23
  WarQuestSelectionMaster_o *v74; // x0
  __int64 v75; // x1
  EventFortificationSvtMaster_o *v76; // x24
  int v77; // w10
  _BOOL8 v78; // x0
  __int64 v79; // x1
  Il2CppObject *current; // x21
  __int64 v81; // x1
  int64_t UserId; // x2
  _BOOL8 v83; // x0
  __int64 v84; // x1
  int v85; // w9
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *v88; // x25
  int32_t klass_high; // w26
  int32_t monitor; // w27
  int32_t v91; // w28
  FortificationAutomaticDialogComponent_DetailInfo_o *v92; // x25
  __int64 v93; // x0
  __int64 v94; // x1
  int v95; // w26
  int v96; // w8
  __int64 v97; // x26
  __int64 v98; // x0
  __int64 v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  __int64 v107; // x25
  __int64 v108; // x0
  __int64 v109; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v111; // x28
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v113; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v114; // x26
  __int64 v115; // x1
  int32_t v116; // w28
  int32_t v117; // w27
  int32_t v118; // w26
  FortificationAutomaticDialogComponent_DetailInfo_o *v119; // x25
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x8
  int32_t v123; // w27
  int32_t v124; // w28
  int32_t v125; // w26
  __int64 v126; // x0
  __int64 v127; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v129; // x0
  __int64 v130; // x1
  int32_t v131; // w28
  int32_t v132; // w27
  int32_t treasureDeviceIds; // w26
  __int64 v134; // x0
  __int64 v135; // x1
  int v136; // w26
  int v137; // w21
  int v139; // [xsp+Ch] [xbp-F4h]
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-F0h]
  int v142; // [xsp+20h] [xbp-E0h]
  _BYTE v143[36]; // [xsp+28h] [xbp-D8h] BYREF
  int v144; // [xsp+4Ch] [xbp-B4h]
  EventFortificationSvtEntity_o *v145; // [xsp+50h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v146; // [xsp+58h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+60h] [xbp-A0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+90h] [xbp-70h] BYREF

  v4 = isSet;
  if ( (byte_42EBC43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_SetSvtInfo___, (_DWORD)teamList, isSet, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__,
      v36,
      v37,
      v38);
    sub_B5D5C4(&Method_System_Func_SetSvtInfo__bool___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Func_SetSvtInfo__bool__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v45, v46, v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v54, v55, v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__,
      v57,
      v58,
      v59);
    sub_B5D5C4(
      &System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
      v60,
      v61,
      v62);
    sub_B5D5C4(&NetworkManager_TypeInfo, v63, v64, v65);
    sub_B5D5C4(
      &Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
      v66,
      v67,
      v68);
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v69, v70, v71);
    byte_42EBC43 = 1;
  }
  memset(&v150, 0, sizeof(v150));
  entities = 0LL;
  entity = 0LL;
  memset(&v147, 0, sizeof(v147));
  v145 = 0LL;
  v146 = 0LL;
  v144 = 0;
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v73 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v74 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_B5D69C(v74, v75);
  v76 = (EventFortificationSvtMaster_o *)v74;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v143,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)teamList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v77 = 0;
  v150 = *(System_Collections_Generic_List_Enumerator_T__o *)v143;
LABEL_8:
  v142 = v77;
  while ( 1 )
  {
    v78 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v150,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v78 )
      break;
    current = v150.fields.current;
    if ( !v150.fields.current )
      sub_B5D69C(v78, v79);
    if ( !v73 )
      sub_B5D69C(v78, v79);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v73,
           &entities,
           (int32_t)v150.fields.current[1].klass,
           HIDWORD(v150.fields.current[1].klass),
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(0LL, v81);
      v83 = UserEventFortificationMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( !v83 )
        goto LABEL_21;
      if ( !entity )
        sub_B5D69C(v83, v84);
      if ( entity->fields.setSvtInfos )
      {
        v85 = v142;
      }
      else
      {
LABEL_21:
        if ( !entities )
          sub_B5D69C(0LL, v84);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v143,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
        v147 = *(System_Collections_Generic_List_Enumerator_T__o *)v143;
        while ( 1 )
        {
          v86 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v147,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
          if ( !v86 )
            break;
          v88 = v147.fields.current;
          if ( !v147.fields.current )
            sub_B5D69C(v86, v87);
          if ( !v76 )
            sub_B5D69C(v86, v87);
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v76,
                  &v146,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)v147.fields.current[1].monitor,
                  0LL)
            && v4 )
          {
            klass_high = HIDWORD(current[1].klass);
            monitor = (int32_t)v88[1].monitor;
            v91 = (int32_t)v88[2].monitor;
            v92 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B5D694(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v92, klass_high, monitor, v91, 0LL);
            if ( !v72 )
              sub_B5D69C(v93, v94);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v72,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
          }
        }
        *(_DWORD *)&v143[4 * v142 + 24] = 551;
        v95 = ++v144;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v147,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
        if ( v95 )
        {
          v96 = v95 - 1;
          v85 = v95;
          if ( *(_DWORD *)&v143[4 * v95 + 20] == 551 )
            goto LABEL_62;
        }
        else
        {
          v85 = 0;
        }
      }
      v139 = v85;
      if ( !entities )
        sub_B5D69C(0LL, v84);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v143,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v147 = *(System_Collections_Generic_List_Enumerator_T__o *)v143;
      while ( 1 )
      {
LABEL_35:
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v147,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          *(_DWORD *)&v143[4 * v139 + 24] = 551;
          v136 = ++v144;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v147,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
          v77 = 0;
          if ( v136 )
          {
            v96 = v136 - 1;
            v77 = v136;
            if ( *(_DWORD *)&v143[4 * v136 + 20] == 551 )
            {
LABEL_62:
              v77 = v96;
              v144 = v96;
            }
          }
          goto LABEL_8;
        }
        v97 = sub_B5D694(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
        FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
          (FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *)v97,
          0LL);
        if ( !v97 )
          sub_B5D69C(v98, v99);
        v106 = (System_Int32_array **)v147.fields.current;
        *(_QWORD *)(v97 + 16) = v147.fields.current;
        v107 = v97 + 16;
        sub_B5D560((BattleServantConfConponent_o *)(v97 + 16), v106, v100, v101, v102, v103, v104, v105);
        if ( !entity )
          sub_B5D69C(v108, v109);
        setSvtInfos = entity->fields.setSvtInfos;
        v111 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SetSvtInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v111,
          (Il2CppObject *)v97,
          Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_SetSvtInfo__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)setSvtInfos,
                                                                           (System_Func_T__bool__o *)v111,
                                                                           (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_SetSvtInfo___);
        v114 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          if ( !v4 )
            continue;
          v122 = *(_QWORD *)v107;
          if ( !*(_QWORD *)v107 )
            sub_B5D69C(0LL, v113);
          v123 = *(_DWORD *)(v122 + 24);
          v124 = *(_DWORD *)(v122 + 40);
          v125 = HIDWORD(current[1].klass);
          v119 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B5D694(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          FortificationAutomaticDialogComponent_DetailInfo___ctor(v119, v125, v123, v124, 0LL);
          if ( !v72 )
            sub_B5D69C(v126, v127);
          goto LABEL_59;
        }
        v115 = *(unsigned int *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
        if ( !(_DWORD)v115 && v4 )
          break;
        if ( (_DWORD)v115
          && !HIDWORD(USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds)
          && v4 )
        {
          setSvtIdList = this->fields.setSvtIdList;
          if ( !setSvtIdList )
            sub_B5D69C(0LL, v115);
          System_Collections_Generic_HashSet_int___Add(
            setSvtIdList,
            v115,
            (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        else if ( (_DWORD)v115 && !v4 )
        {
          if ( !v76 )
            sub_B5D69C(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v115);
          v129 = EventFortificationSvtMaster__TryGetEntity(
                   v76,
                   &v145,
                   (int32_t)current[1].klass,
                   HIDWORD(current[1].klass),
                   (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds,
                   0LL);
          if ( !v129 )
          {
            if ( !*(_QWORD *)v107 )
              sub_B5D69C(v129, v130);
            v131 = *(_DWORD *)(*(_QWORD *)v107 + 40LL);
            v132 = HIDWORD(current[1].klass);
            treasureDeviceIds = (int32_t)v114->fields.treasureDeviceIds;
            v119 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B5D694(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v119, v132, treasureDeviceIds, v131, 0LL);
            if ( !v72 )
              sub_B5D69C(v134, v135);
            goto LABEL_59;
          }
        }
      }
      if ( !*(_QWORD *)v107 )
        sub_B5D69C(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v115);
      v116 = *(_DWORD *)(*(_QWORD *)v107 + 40LL);
      v117 = HIDWORD(current[1].klass);
      v118 = (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds;
      v119 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B5D694(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
      FortificationAutomaticDialogComponent_DetailInfo___ctor(v119, v117, v118, v116, 0LL);
      if ( !v72 )
        sub_B5D69C(v120, v121);
LABEL_59:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v72,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
      goto LABEL_35;
    }
  }
  *(_DWORD *)&v143[4 * v142 + 24] = 579;
  v137 = ++v144;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v150,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  if ( v137 && *(_DWORD *)&v143[4 * v137 + 20] == 579 )
    v144 = v137 - 1;
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v72;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EBC46 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC46 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E56DB & 1) == 0 )
  {
    sub_B5D5C4(&FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2, v3);
    byte_42E56DB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v5 = this;
  if ( (byte_42E56DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v6, v7, v8);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_B5D5C4(
                                                                              &StringLiteral_16637/*"ar200"*/,
                                                                              v9,
                                                                              v10,
                                                                              v11);
    byte_42E56DC = 1;
  }
  if ( v5->fields.isSet )
  {
    v12 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B5D5CC(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v12, v12[3]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v13,
                                                                              (System_String_o *)StringLiteral_16637/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, result);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v14; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v17; // x19
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v5 = this;
  if ( (byte_42E56DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, (_DWORD)x, (_DWORD)method, v3);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_B5D5C4(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v6,
                                                                              v7,
                                                                              v8);
    byte_42E56DD = 1;
  }
  detail = v5->fields.detail;
  if ( !detail )
    goto LABEL_21;
  CS___8__locals2 = v5->fields.CS___8__locals2;
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
    CS___8__locals2 = v5->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_21;
  }
  v14 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_21;
  _4__this = v14->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_21;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v18 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                            v21,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_21:
    sub_B5D69C(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B5D69C(this, info);
  return info->fields.position == detail->fields.position;
}