void __fastcall WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  __int64 v79; // x23
  __int64 v80; // x0
  __int64 v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  Il2CppObject **v101; // x20
  __int64 v102; // x8
  _DWORD *monitor; // x8
  _DWORD *v104; // x8
  _DWORD *v105; // x8
  _DWORD *v106; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  Il2CppObject *v121; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v122; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v125; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v127; // x0
  Il2CppObject *v128; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x21
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v130; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  struct System_Int32_array *v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v140; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x0
  struct System_Int32_array *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  WarBoardSquareData___c_c *v149; // x0
  struct WarBoardSquareData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_4; // x22
  Il2CppObject *v152; // x23
  struct WarBoardSquareData___c_StaticFields *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  Il2CppObject *v161; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v162; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v163; // x21
  WarBoardSquareData___c_c *v164; // x0
  struct WarBoardSquareData___c_StaticFields *v165; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_6; // x22
  Il2CppObject *v167; // x23
  struct WarBoardSquareData___c_StaticFields *v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7

  if ( (byte_42EABAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___,
      (_DWORD)layoutEntity,
      (_DWORD)roadEntities,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Func_WarBoardRoadEntity__int___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_WarBoardRoadEntity__bool___ctor__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Func_WarBoardRoadEntity__int__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_WarBoardSquareData___c___ctor_b__29_4__, v49, v50, v51);
    sub_B5D5C4(&Method_WarBoardSquareData___c___ctor_b__29_6__, v52, v53, v54);
    sub_B5D5C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v55, v56, v57);
    sub_B5D5C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v58, v59, v60);
    sub_B5D5C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v61, v62, v63);
    sub_B5D5C4(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v67, v68, v69);
    sub_B5D5C4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v70, v71, v72);
    sub_B5D5C4(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&WarBoardSquareData___c_TypeInfo, v76, v77, v78);
    byte_42EABAC = 1;
  }
  *(_QWORD *)&this->fields.squareFuncId = -1LL;
  v79 = sub_B5D694(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  WarBoardSquareData___c__DisplayClass29_0___ctor((WarBoardSquareData___c__DisplayClass29_0_o *)v79, 0LL);
  if ( !v79 )
    goto LABEL_35;
  *(_QWORD *)(v79 + 24) = layoutEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v79 + 24),
    (System_Int32_array **)layoutEntity,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v79 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v79 + 16), (System_Int32_array **)this, v88, v89, v90, v91, v92, v93);
  v94 = sub_B5D694(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  WarBoardSquareData___c__DisplayClass29_1___ctor((WarBoardSquareData___c__DisplayClass29_1_o *)v94, 0LL);
  if ( !v94 )
    goto LABEL_35;
  *(_QWORD *)(v94 + 32) = v79;
  v101 = (Il2CppObject **)(v94 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v94 + 32), (System_Int32_array **)v79, v95, v96, v97, v98, v99, v100);
  if ( !*(_QWORD *)(v94 + 32) )
    goto LABEL_35;
  v102 = *(_QWORD *)(*(_QWORD *)(v94 + 32) + 24LL);
  if ( !v102 )
    goto LABEL_35;
  this->fields._squareIndex_k__BackingField = *(_DWORD *)(v102 + 20);
  if ( !*v101
    || (monitor = (*v101)[1].monitor) == 0LL
    || (this->fields._effectId_k__BackingField = monitor[7], !*v101)
    || (v104 = (*v101)[1].monitor) == 0LL
    || (this->fields._type_k__BackingField = v104[6], !*v101)
    || (v105 = (*v101)[1].monitor) == 0LL
    || (this->fields._evalValue_k__BackingField = v105[16], !*v101)
    || (v106 = (*v101)[1].monitor) == 0LL )
  {
LABEL_35:
    sub_B5D69C(v80, v81);
  }
  this->fields._imageId_k__BackingField = v106[17];
  this->fields.flag = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v94 + 24) = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v94 + 24),
    Master_WarQuestSelectionMaster,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v114 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v94 + 16) = v114;
  sub_B5D560((BattleServantConfConponent_o *)(v94 + 16), v114, v115, v116, v117, v118, v119, v120);
  v121 = *(Il2CppObject **)(v94 + 32);
  v122 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v122,
    v121,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v123 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
           (System_Func_TSource__bool__o *)v122,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                v123,
                                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v125 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v125,
    (Il2CppObject *)v94,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v126 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v124,
           (System_Func_TSource__bool__o *)v125,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v127 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v126,
           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v128 = *(Il2CppObject **)(v94 + 32);
  v129 = (System_Collections_Generic_IEnumerable_TSource__o *)v127;
  v130 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v130,
    v128,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__,
    (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v131 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                v129,
                                                                (System_Func_TSource__TResult__o *)v130,
                                                                (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v132 = System_Linq_Enumerable__ToArray_int_(
           v131,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v132;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v140 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v140,
    (Il2CppObject *)v94,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v141 = System_Linq_Enumerable__Where_int_(
           linkedSquares,
           (System_Func_TSource__bool__o *)v140,
           (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v142 = System_Linq_Enumerable__ToArray_int_(
           v141,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v142;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v149 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v149 = WarBoardSquareData___c_TypeInfo;
  }
  static_fields = v149->static_fields;
  _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( (BYTE3(v149->vtable._0_Equals.methodPtr) & 4) != 0 && !v149->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v149);
      static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v152 = (Il2CppObject *)static_fields->__9;
    _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_4,
      v152,
      Method_WarBoardSquareData___c___ctor_b__29_4__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
    v153 = WarBoardSquareData___c_TypeInfo->static_fields;
    v153->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v153->__9__29_4,
      (System_Int32_array **)_9__29_4,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
  }
  v160 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v129,
           (System_Func_TSource__bool__o *)_9__29_4,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v161 = *v101;
  v162 = v160;
  v163 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v163,
    v161,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__,
    (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v164 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v164 = WarBoardSquareData___c_TypeInfo;
  }
  v165 = v164->static_fields;
  _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v165->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v164);
      v165 = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v167 = (Il2CppObject *)v165->__9;
    _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__29_6,
      v167,
      Method_WarBoardSquareData___c___ctor_b__29_6__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
    v168 = WarBoardSquareData___c_TypeInfo->static_fields;
    v168->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v168->__9__29_6,
      (System_Int32_array **)_9__29_6,
      v169,
      v170,
      v171,
      v172,
      v173,
      v174);
  }
  v175 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                                                       v162,
                                                                       (System_Func_TSource__TKey__o *)v163,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_1CB7C08 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v175;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquareMobilityLimitations,
    (System_Int32_array **)v175,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__ActiveEditPointArrow(squareComponent, method);
}


bool __fastcall WarBoardSquareData__CheckMobilityLimitation(
        WarBoardSquareData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardSquareData__DeactiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, method);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, method);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, method);
}


void __fastcall WarBoardSquareData__DispBattleRange(
        WarBoardSquareData_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__EnableEditPosition(squareComponent, method);
}


int32_t __fastcall WarBoardSquareData__GetCost(
        WarBoardSquareData_o *this,
        int32_t linkedSquare,
        const MethodInfo *method)
{
  return 5;
}


int32_t __fastcall WarBoardSquareData__GetHeuristicCost(
        WarBoardSquareData_o *this,
        WarBoardPieceData_o *piece,
        int32_t linkedSquare,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardSquareData__GetMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EABB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, destination, (_DWORD)method, v3);
    byte_42EABB2 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B5D69C(0LL, *(_QWORD *)&destination);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value & ~(value >> 31);
  }
  else
  {
    return 0;
  }
}


System_Int32_array *__fastcall WarBoardSquareData__GetMyAndLinkedSquareIndecies(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardSquareData_o *v4; // x19
  System_Int32_array **p_myAndLinkedSquareIndecies; // x20
  struct System_Int32_array *linkedSquares; // x8
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *myAndLinkedSquareIndecies; // x8
  struct System_Int32_array *v15; // x8
  __int64 v16; // x9
  unsigned __int64 v17; // x10
  System_Int32_array *v18; // x12
  __int64 v20; // x0

  v4 = this;
  if ( (byte_42EABB5 & 1) == 0 )
  {
    this = (WarBoardSquareData_o *)sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EABB5 = 1;
  }
  p_myAndLinkedSquareIndecies = &v4->fields.myAndLinkedSquareIndecies;
  if ( !v4->fields.myAndLinkedSquareIndecies )
  {
    linkedSquares = v4->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_15;
    v7 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, linkedSquares->max_length + 1);
    v4->fields.myAndLinkedSquareIndecies = (struct System_Int32_array *)v7;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.myAndLinkedSquareIndecies, v7, v8, v9, v10, v11, v12, v13);
    myAndLinkedSquareIndecies = v4->fields.myAndLinkedSquareIndecies;
    if ( !myAndLinkedSquareIndecies )
      goto LABEL_15;
    if ( !myAndLinkedSquareIndecies->max_length )
      goto LABEL_17;
    myAndLinkedSquareIndecies->m_Items[1] = v4->fields._squareIndex_k__BackingField;
    v15 = v4->fields.linkedSquares;
    if ( !v15 )
LABEL_15:
      sub_B5D69C(this, method);
    v16 = *(_QWORD *)&v15->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      while ( v17 < v15->max_length )
      {
        v18 = *p_myAndLinkedSquareIndecies;
        if ( !*p_myAndLinkedSquareIndecies )
          goto LABEL_15;
        if ( v17 + 1 >= v18->max_length )
          break;
        v18->m_Items[v17 + 2] = v15->m_Items[v17 + 1];
        if ( (__int64)(v17 + 1) >= (int)v16 )
          return *p_myAndLinkedSquareIndecies;
        v15 = v4->fields.linkedSquares;
        ++v17;
        if ( !v15 )
          goto LABEL_15;
      }
LABEL_17:
      v20 = sub_B5D6C8(this);
      sub_B5D668(v20, 0LL);
    }
  }
  return *p_myAndLinkedSquareIndecies;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareData__HasMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v7; // w0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EABB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, destination, (_DWORD)method, v3);
    byte_42EABB1 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B5D69C(0LL, *(_QWORD *)&destination);
  v7 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  return v7 && value > 0;
}


bool __fastcall WarBoardSquareData__IsFlag(WarBoardSquareData_o *this, int32_t checkFlag, const MethodInfo *method)
{
  return (checkFlag & ~this->fields.flag) == 0;
}


void __fastcall WarBoardSquareData__NondispBattleRange(
        WarBoardSquareData_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *squareComponent; // x20
  const MethodInfo *v6; // x1
  WarBoardSquareComponent_o *v7; // x0

  if ( (byte_42EABAF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EABAF = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v7 = this->fields.squareComponent;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    WarBoardSquareComponent__PlayUnDispCostAnim(v7, v6);
  }
}


void __fastcall WarBoardSquareData__RemoveFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag &= ~flag;
}


void __fastcall WarBoardSquareData__ResetFlag(WarBoardSquareData_o *this, const MethodInfo *method)
{
  this->fields.flag = 0;
}


void __fastcall WarBoardSquareData__Select(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, method);
  WarBoardSquareComponent__OnSelect(squareComponent, method);
}


void __fastcall WarBoardSquareData__Selectable(
        WarBoardSquareData_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  void *Instance; // x0
  WarBoardData_o *v13; // x20
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42EABAE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isOnActionPiece, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    byte_42EABAE = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_27;
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, v11);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v13 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B5D69C(Instance, v10);
  Piece_23181536 = WarBoardData__GetPiece_23181536(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_23181536 )
  {
    Instance = Piece_23181536->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v13, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
  {
    Instance = Wall->fields.component;
    if ( Instance )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 384LL));
      return;
    }
    goto LABEL_27;
  }
}


void __fastcall WarBoardSquareData__SetComponent(
        WarBoardSquareData_o *this,
        WarBoardSquareComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.squareComponent = component;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareComponent,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__SetCostLabel(
        WarBoardSquareData_o *this,
        int32_t cost,
        UnityEngine_Color_o gradientTop,
        UnityEngine_Color_o gradientBottom,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B5D69C(0LL, cost);
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, method);
}


void __fastcall WarBoardSquareData__SetFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag |= flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__SetSquareEnable(WarBoardSquareData_o *this, bool enable, const MethodInfo *method)
{
  __int64 v3; // x3
  void *squareComponent; // x0
  WarBoardData_o *v7; // x21
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42EABB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable, (_DWORD)method, v3);
    byte_42EABB4 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent
    || (WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, method),
        (squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v7 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
  {
    sub_B5D69C(squareComponent, enable);
  }
  Piece_23181536 = WarBoardData__GetPiece_23181536(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_23181536 )
    WarBoardPieceData__SetPieceEnable(Piece_23181536, enable, 0LL);
  Item = WarBoardData__GetItem(v7, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
    WarBoardItemData__SetItemEnable(Item, enable, 0LL);
  Effect = WarBoardData__GetEffect(v7, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
    WarBoardEffectData__SetEffectEnable(Effect, enable, 0LL);
  Treasure = WarBoardData__GetTreasure(v7, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
    WarBoardTreasureData__SetTreasureEnable(Treasure, enable, 0LL);
  Wall = WarBoardData__GetWall(v7, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
    WarBoardWallData__SetWallEnable(Wall, enable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__SetTouchEnable(
        WarBoardSquareData_o *this,
        bool enable,
        bool withOnObject,
        const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v8; // x21
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42EABB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable, withOnObject, method);
    byte_42EABB3 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_18;
  WarBoardSquareComponent__SetTouchEnable(
    (WarBoardSquareComponent_o *)squareComponent,
    enable,
    (const MethodInfo *)withOnObject);
  if ( !withOnObject )
    return;
  squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent || (v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
LABEL_18:
    sub_B5D69C(squareComponent, enable);
  Piece_23181536 = WarBoardData__GetPiece_23181536(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_23181536 )
    WarBoardPieceData__SetTouchEnable(Piece_23181536, enable, 0LL);
  Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
    WarBoardItemData__SetTouchEnable(Item, enable, 0LL);
  Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
    WarBoardEffectData__SetTouchEnable(Effect, enable, 0LL);
  Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
    WarBoardTreasureData__SetTouchEnable(Treasure, enable, 0LL);
  Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
    WarBoardWallData__SetTouchEnable(Wall, enable, 0LL);
}


void __fastcall WarBoardSquareData__Unselectable(
        WarBoardSquareData_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  void *Instance; // x0
  WarBoardData_o *v13; // x20
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42EABB0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDispCostLabel, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    byte_42EABB0 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_27;
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, v11);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v13 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B5D69C(Instance, v10);
  Piece_23181536 = WarBoardData__GetPiece_23181536(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_23181536 )
  {
    Instance = Piece_23181536->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v13, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v13, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
  {
    Instance = Wall->fields.component;
    if ( Instance )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      return;
    }
    goto LABEL_27;
  }
}


void __fastcall WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Int32_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_42EABAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, addSquareIdx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42EABAD = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v16 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v16,
    linkedSquares,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  System_Collections_Generic_List_int___Add(
    v16,
    addSquareIdx,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  v19 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v26, v27, v28, v29, v30, v31);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v32);
}


WarBoardSquareComponent_o *__fastcall WarBoardSquareData__get_Component(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  return this->fields.squareComponent;
}


System_Int32_array *__fastcall WarBoardSquareData__get_LinkedSquares(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  return this->fields.linkedSquares;
}


int32_t __fastcall WarBoardSquareData__get_effectId(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._effectId_k__BackingField;
}


int32_t __fastcall WarBoardSquareData__get_evalValue(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._evalValue_k__BackingField;
}


int32_t __fastcall WarBoardSquareData__get_imageId(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._imageId_k__BackingField;
}


int32_t __fastcall WarBoardSquareData__get_squareIndex(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardSquareData__get_type(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField;
}


void __fastcall WarBoardSquareData__set_effectId(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._effectId_k__BackingField = value;
}


void __fastcall WarBoardSquareData__set_evalValue(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._evalValue_k__BackingField = value;
}


void __fastcall WarBoardSquareData__set_imageId(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._imageId_k__BackingField = value;
}


void __fastcall WarBoardSquareData__set_squareIndex(
        WarBoardSquareData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardSquareData__set_type(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type_k__BackingField = value;
}


void __fastcall WarBoardSquareData_SaveData___ctor(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.squareIndex = 0xFFFFFFFFLL;
}


void __fastcall WarBoardSquareData_SaveData___ctor_20366008(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarBoardSquareData_o *v6; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B5D560(&this->fields.owner);
  v6 = this->fields.owner;
  if ( !v6 )
    sub_B5D69C(0LL, v5);
  this->fields.squareIndex = v6->fields._squareIndex_k__BackingField;
  this->fields.flag = v6->fields.flag;
  v6->fields.localSaveData = this;
  sub_B5D560(&v6->fields.localSaveData);
}


void __fastcall WarBoardSquareData_SaveData__Load(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardSquareData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    owner->fields.flag = this->fields.flag;
}


void __fastcall WarBoardSquareData_SaveData__Save(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardSquareData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B5D69C(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.flag = owner->fields.flag;
}


void __fastcall WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_B5D69C(this, 0LL);
  this->fields.owner = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  sub_B5D560(&this->fields.owner);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B5D560(&owner->fields.localSaveData);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FD5 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSquareData___c_TypeInfo, v1, v2, v3);
    byte_42E5FD5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardSquareData___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarBoardSquareData___c___ctor(WarBoardSquareData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardSquareData___c____ctor_b__29_4(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.mobilityLimitId;
}


void __fastcall WarBoardSquareData___c__DisplayClass29_0___ctor(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardSquareData___c__DisplayClass29_0____ctor_b__0(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  int32_t squareIndex_k__BackingField; // w8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_B5D69C(this, x);
  squareIndex_k__BackingField = _4__this->fields._squareIndex_k__BackingField;
  return x->fields.squareIndex1 == squareIndex_k__BackingField || x->fields.squareIndex2 == squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardSquareData___c__DisplayClass29_0____ctor_b__2(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  int32_t result; // w0

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_B5D69C(this, x);
  result = x->fields.squareIndex1;
  if ( result == _4__this->fields._squareIndex_k__BackingField )
    return x->fields.squareIndex2;
  return result;
}


int32_t __fastcall WarBoardSquareData___c__DisplayClass29_0____ctor_b__5(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  int32_t result; // w0

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_B5D69C(this, x);
  result = x->fields.squareIndex1;
  if ( result == _4__this->fields._squareIndex_k__BackingField )
    return x->fields.squareIndex2;
  return result;
}


void __fastcall WarBoardSquareData___c__DisplayClass29_1___ctor(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardSquareData___c__DisplayClass29_1____ctor_b__1(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    goto LABEL_6;
  x = (WarBoardRoadEntity_o *)(unsigned int)x->fields.activeCondId;
  if ( (_DWORD)x )
  {
    this = (WarBoardSquareData___c__DisplayClass29_1_o *)this->fields.commonReleaseMaster;
    if ( this )
      return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, (int32_t)x, 0LL);
LABEL_6:
    sub_B5D69C(this, x);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareData___c__DisplayClass29_1____ctor_b__3(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData___c__DisplayClass29_0_o *CS___8__locals1; // x8
  struct WarBoardStageLayoutEntity_o *layoutEntity; // x8
  WarBoardSquareData___c__DisplayClass29_1_o *v5; // x19
  WarBoardStageLayoutEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  layoutEntity = CS___8__locals1->fields.layoutEntity;
  if ( !layoutEntity )
    goto LABEL_12;
  v5 = this;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)this->fields.layoutMaster;
  if ( !this )
    goto LABEL_12;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)WarBoardStageLayoutMaster__TryGetEntity(
                                                         (WarBoardStageLayoutMaster_o *)this,
                                                         &entity,
                                                         layoutEntity->fields.stageId,
                                                         x,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_12;
  *(_QWORD *)&x = (unsigned int)entity->fields.throughCondId;
  if ( !x )
    return 1;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)v5->fields.commonReleaseMaster;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0LL);
}