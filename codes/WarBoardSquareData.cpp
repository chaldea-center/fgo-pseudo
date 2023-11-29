void __fastcall WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject **v56; // x20
  __int64 v57; // x8
  _DWORD *monitor; // x8
  _DWORD *v59; // x8
  _DWORD *v60; // x8
  _DWORD *v61; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  Il2CppObject *v76; // x23
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v81; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v88; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v90; // x0
  Il2CppObject *v91; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v97; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  struct System_Int32_array *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  System_Func_int__bool__o *v111; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  struct System_Int32_array *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  WarBoardSquareData___c_c *v124; // x0
  struct WarBoardSquareData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_4; // x22
  Il2CppObject *v127; // x23
  struct WarBoardSquareData___c_StaticFields *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x0
  Il2CppObject *v136; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x20
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v142; // x21
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  WarBoardSquareData___c_c *v147; // x0
  struct WarBoardSquareData___c_StaticFields *v148; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_6; // x22
  Il2CppObject *v150; // x23
  struct WarBoardSquareData___c_StaticFields *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7

  if ( (byte_40FBADF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v15);
    sub_B16FFC(&Method_System_Func_WarBoardRoadEntity__int___ctor__, v16);
    sub_B16FFC(&Method_System_Func_WarBoardRoadEntity__bool___ctor__, v17);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v18);
    sub_B16FFC(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v19);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v20);
    sub_B16FFC(&System_Func_WarBoardRoadEntity__int__TypeInfo, v21);
    sub_B16FFC(&Method_WarBoardSquareData___c___ctor_b__29_4__, v22);
    sub_B16FFC(&Method_WarBoardSquareData___c___ctor_b__29_6__, v23);
    sub_B16FFC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v24);
    sub_B16FFC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v25);
    sub_B16FFC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v26);
    sub_B16FFC(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v27);
    sub_B16FFC(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v28);
    sub_B16FFC(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v29);
    sub_B16FFC(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v30);
    sub_B16FFC(&WarBoardSquareData___c_TypeInfo, v31);
    byte_40FBADF = 1;
  }
  *(_QWORD *)&this->fields.squareFuncId = -1LL;
  v32 = sub_B170CC(WarBoardSquareData___c__DisplayClass29_0_TypeInfo, layoutEntity, roadEntities, method, v4);
  WarBoardSquareData___c__DisplayClass29_0___ctor((WarBoardSquareData___c__DisplayClass29_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_35;
  *(_QWORD *)(v32 + 24) = layoutEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v32 + 24),
    (System_Int32_array **)layoutEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v32 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  v49 = sub_B170CC(WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v45, v46, v47, v48);
  WarBoardSquareData___c__DisplayClass29_1___ctor((WarBoardSquareData___c__DisplayClass29_1_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_35;
  *(_QWORD *)(v49 + 32) = v32;
  v56 = (Il2CppObject **)(v49 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v32, v50, v51, v52, v53, v54, v55);
  if ( !*(_QWORD *)(v49 + 32) )
    goto LABEL_35;
  v57 = *(_QWORD *)(*(_QWORD *)(v49 + 32) + 24LL);
  if ( !v57 )
    goto LABEL_35;
  this->fields._squareIndex_k__BackingField = *(_DWORD *)(v57 + 20);
  if ( !*v56
    || (monitor = (*v56)[1].monitor) == 0LL
    || (this->fields._effectId_k__BackingField = monitor[7], !*v56)
    || (v59 = (*v56)[1].monitor) == 0LL
    || (this->fields._type_k__BackingField = v59[6], !*v56)
    || (v60 = (*v56)[1].monitor) == 0LL
    || (this->fields._evalValue_k__BackingField = v60[16], !*v56)
    || (v61 = (*v56)[1].monitor) == 0LL )
  {
LABEL_35:
    sub_B170D4();
  }
  this->fields._imageId_k__BackingField = v61[17];
  this->fields.flag = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v49 + 24) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v49 + 24), Master_WarQuestSelectionMaster, v63, v64, v65, v66, v67, v68);
  v69 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v49 + 16) = v69;
  sub_B16F98((BattleServantConfConponent_o *)(v49 + 16), v69, v70, v71, v72, v73, v74, v75);
  v76 = *(Il2CppObject **)(v49 + 32);
  v81 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                             v77,
                                                                             v78,
                                                                             v79,
                                                                             v80);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v81,
    v76,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v82 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v81,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v82,
                                                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v88 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                             v84,
                                                                             v85,
                                                                             v86,
                                                                             v87);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v88,
    (Il2CppObject *)v49,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v89 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v83,
          (System_Func_TSource__bool__o *)v88,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v90 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v89,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v91 = *(Il2CppObject **)(v49 + 32);
  v92 = (System_Collections_Generic_IEnumerable_TSource__o *)v90;
  v97 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                          v93,
                                                                          v94,
                                                                          v95,
                                                                          v96);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v97,
    v91,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v92,
                                                               (System_Func_TSource__TResult__o *)v97,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v99 = System_Linq_Enumerable__ToArray_int_(
          v98,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v99;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v111 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v107, v108, v109, v110);
  System_Func_int__bool____ctor(
    v111,
    (Il2CppObject *)v49,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v112 = System_Linq_Enumerable__Where_int_(
           linkedSquares,
           (System_Func_TSource__bool__o *)v111,
           (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v113 = System_Linq_Enumerable__ToArray_int_(
           v112,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v113;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v124 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v124 = WarBoardSquareData___c_TypeInfo;
  }
  static_fields = v124->static_fields;
  _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( (BYTE3(v124->vtable._0_Equals.methodPtr) & 4) != 0 && !v124->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v124);
      static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v127 = (Il2CppObject *)static_fields->__9;
    _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                                    v120,
                                                                                    v121,
                                                                                    v122,
                                                                                    v123);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_4,
      v127,
      Method_WarBoardSquareData___c___ctor_b__29_4__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
    v128 = WarBoardSquareData___c_TypeInfo->static_fields;
    v128->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v128->__9__29_4,
      (System_Int32_array **)_9__29_4,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
  }
  v135 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v92,
           (System_Func_TSource__bool__o *)_9__29_4,
           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v136 = *v56;
  v137 = v135;
  v142 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                           System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                           v138,
                                                                           v139,
                                                                           v140,
                                                                           v141);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v142,
    v136,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v147 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v147 = WarBoardSquareData___c_TypeInfo;
  }
  v148 = v147->static_fields;
  _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v148->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( (BYTE3(v147->vtable._0_Equals.methodPtr) & 4) != 0 && !v147->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v147);
      v148 = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v150 = (Il2CppObject *)v148->__9;
    _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                                 v143,
                                                                                 v144,
                                                                                 v145,
                                                                                 v146);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__29_6,
      v150,
      Method_WarBoardSquareData___c___ctor_b__29_6__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
    v151 = WarBoardSquareData___c_TypeInfo->static_fields;
    v151->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v151->__9__29_6,
      (System_Int32_array **)_9__29_6,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
  }
  v158 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                                                       v137,
                                                                       (System_Func_TSource__TKey__o *)v142,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_19C4F74 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v158;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedSquareMobilityLimitations,
    (System_Int32_array **)v158,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B170D4();
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
    sub_B170D4();
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, method);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B170D4();
  WarBoardSquareComponent__OnDeselect(squareComponent, method);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B170D4();
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
    sub_B170D4();
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B170D4();
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
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBAE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_40FBAE5 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  __int64 v2; // x2
  System_Int32_array **p_myAndLinkedSquareIndecies; // x20
  struct System_Int32_array *linkedSquares; // x8
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *myAndLinkedSquareIndecies; // x8
  struct System_Int32_array *v17; // x8
  __int64 v18; // x9
  unsigned __int64 v19; // x10
  System_Int32_array *v20; // x12

  if ( (byte_40FBAE8 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FBAE8 = 1;
  }
  p_myAndLinkedSquareIndecies = &this->fields.myAndLinkedSquareIndecies;
  if ( !this->fields.myAndLinkedSquareIndecies )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_15;
    v6 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, linkedSquares->max_length + 1, v2);
    this->fields.myAndLinkedSquareIndecies = v6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.myAndLinkedSquareIndecies,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    myAndLinkedSquareIndecies = this->fields.myAndLinkedSquareIndecies;
    if ( !myAndLinkedSquareIndecies )
      goto LABEL_15;
    if ( !myAndLinkedSquareIndecies->max_length )
      goto LABEL_17;
    myAndLinkedSquareIndecies->m_Items[1] = this->fields._squareIndex_k__BackingField;
    v17 = this->fields.linkedSquares;
    if ( !v17 )
LABEL_15:
      sub_B170D4();
    v18 = *(_QWORD *)&v17->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( v19 < v17->max_length )
      {
        v20 = *p_myAndLinkedSquareIndecies;
        if ( !*p_myAndLinkedSquareIndecies )
          goto LABEL_15;
        if ( v19 + 1 >= v20->max_length )
          break;
        v20->m_Items[v19 + 2] = v17->m_Items[v19 + 1];
        if ( (__int64)(v19 + 1) >= (int)v18 )
          return *p_myAndLinkedSquareIndecies;
        v17 = this->fields.linkedSquares;
        ++v19;
        if ( !v17 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B17100(v13, v14, v15);
      sub_B170A0();
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
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBAE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_40FBAE4 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B170D4();
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  return v6 && value > 0;
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
    sub_B170D4();
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  const MethodInfo *v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_40FBAE2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBAE2 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v5 = this->fields.squareComponent;
    if ( !v5 )
      sub_B170D4();
    WarBoardSquareComponent__PlayUnDispCostAnim(v5, v4);
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
    sub_B170D4();
  WarBoardSquareComponent__OnSelect(squareComponent, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Selectable(
        WarBoardSquareData_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *squareComponent; // x21
  const MethodInfo *v7; // x2
  WarBoardSquareComponent_o *v8; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardItemData_o *Item; // x0
  struct WarBoardItemComponent_o *component; // x0
  WarBoardEffectData_o *Effect; // x0
  struct WarBoardEffectComponent_o *v16; // x0
  WarBoardTreasureData_o *Treasure; // x0
  struct WarBoardTreasureComponent_o *v18; // x0
  WarBoardWallData_o *Wall; // x0
  struct WarBoardWallComponent_o *v20; // x0

  if ( (byte_40FBAE1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isOnActionPiece);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_40FBAE1 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v8 = this->fields.squareComponent;
    if ( !v8 )
      goto LABEL_27;
    WarBoardSquareComponent__Selectable(v8, isOnActionPiece, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
LABEL_27:
    sub_B170D4();
  Piece_22604968 = WarBoardData__GetPiece_22604968(
                     (WarBoardData_o *)Instance[4].monitor,
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22604968 )
  {
    pieceComponent = Piece_22604968->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._18_Selectable.method)(
      pieceComponent,
      pieceComponent->klass->vtable._19_Unselectable.methodPtr);
  }
  Item = WarBoardData__GetItem(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    component = Item->fields.component;
    if ( !component )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardItemComponent_o *, Il2CppMethodPointer))component->klass->vtable._4_Selectable.method)(
      component,
      component->klass->vtable._5_Unselectable.methodPtr);
  }
  Effect = WarBoardData__GetEffect(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    v16 = Effect->fields.component;
    if ( !v16 )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardEffectComponent_o *, Il2CppMethodPointer))v16->klass->vtable._4_Selectable.method)(
      v16,
      v16->klass->vtable._5_Unselectable.methodPtr);
  }
  Treasure = WarBoardData__GetTreasure(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    v18 = Treasure->fields.component;
    if ( !v18 )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardTreasureComponent_o *, Il2CppMethodPointer))v18->klass->vtable._4_Selectable.method)(
      v18,
      v18->klass->vtable._5_Unselectable.methodPtr);
  }
  Wall = WarBoardData__GetWall(monitor, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
  {
    v20 = Wall->fields.component;
    if ( v20 )
    {
      ((void (__fastcall *)(struct WarBoardWallComponent_o *, Il2CppMethodPointer))v20->klass->vtable._4_Selectable.method)(
        v20,
        v20->klass->vtable._5_Unselectable.methodPtr);
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
  sub_B16F98(
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
    sub_B170D4();
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, method);
}


void __fastcall WarBoardSquareData__SetFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag |= flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__SetSquareEnable(WarBoardSquareData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x21
  WarBoardPieceData_o *Piece_22604968; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_40FBAE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_40FBAE7 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent
    || (WarBoardSquareComponent__SetButtonEnable(squareComponent, enable, method),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
  {
    sub_B170D4();
  }
  Piece_22604968 = WarBoardData__GetPiece_22604968(
                     (WarBoardData_o *)Instance[4].monitor,
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22604968 )
    WarBoardPieceData__SetPieceEnable(Piece_22604968, enable, 0LL);
  Item = WarBoardData__GetItem(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
    WarBoardItemData__SetItemEnable(Item, enable, 0LL);
  Effect = WarBoardData__GetEffect(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
    WarBoardEffectData__SetEffectEnable(Effect, enable, 0LL);
  Treasure = WarBoardData__GetTreasure(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
    WarBoardTreasureData__SetTreasureEnable(Treasure, enable, 0LL);
  Wall = WarBoardData__GetWall(monitor, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
  WarBoardSquareComponent_o *squareComponent; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x21
  WarBoardPieceData_o *Piece_22604968; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_40FBAE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_40FBAE6 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_18;
  WarBoardSquareComponent__SetTouchEnable(squareComponent, enable, (const MethodInfo *)withOnObject);
  if ( !withOnObject )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
LABEL_18:
    sub_B170D4();
  Piece_22604968 = WarBoardData__GetPiece_22604968(
                     (WarBoardData_o *)Instance[4].monitor,
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22604968 )
    WarBoardPieceData__SetTouchEnable(Piece_22604968, enable, 0LL);
  Item = WarBoardData__GetItem(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
    WarBoardItemData__SetTouchEnable(Item, enable, 0LL);
  Effect = WarBoardData__GetEffect(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
    WarBoardEffectData__SetTouchEnable(Effect, enable, 0LL);
  Treasure = WarBoardData__GetTreasure(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
    WarBoardTreasureData__SetTouchEnable(Treasure, enable, 0LL);
  Wall = WarBoardData__GetWall(monitor, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
    WarBoardWallData__SetTouchEnable(Wall, enable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Unselectable(
        WarBoardSquareData_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *squareComponent; // x21
  const MethodInfo *v7; // x2
  WarBoardSquareComponent_o *v8; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardItemData_o *Item; // x0
  struct WarBoardItemComponent_o *component; // x0
  WarBoardEffectData_o *Effect; // x0
  struct WarBoardEffectComponent_o *v16; // x0
  WarBoardTreasureData_o *Treasure; // x0
  struct WarBoardTreasureComponent_o *v18; // x0
  WarBoardWallData_o *Wall; // x0
  struct WarBoardWallComponent_o *v20; // x0

  if ( (byte_40FBAE3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDispCostLabel);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_40FBAE3 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v8 = this->fields.squareComponent;
    if ( !v8 )
      goto LABEL_27;
    WarBoardSquareComponent__Unselectable(v8, isDispCostLabel, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
LABEL_27:
    sub_B170D4();
  Piece_22604968 = WarBoardData__GetPiece_22604968(
                     (WarBoardData_o *)Instance[4].monitor,
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22604968 )
  {
    pieceComponent = Piece_22604968->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._19_Unselectable.method)(
      pieceComponent,
      pieceComponent->klass->vtable._20_ShowActionTarget.methodPtr);
  }
  Item = WarBoardData__GetItem(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    component = Item->fields.component;
    if ( !component )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardItemComponent_o *, void *))component->klass->vtable._5_Unselectable.method)(
      component,
      component->klass[1]._1.image);
  }
  Effect = WarBoardData__GetEffect(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    v16 = Effect->fields.component;
    if ( !v16 )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardEffectComponent_o *, void *))v16->klass->vtable._5_Unselectable.method)(
      v16,
      v16->klass[1]._1.image);
  }
  Treasure = WarBoardData__GetTreasure(monitor, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    v18 = Treasure->fields.component;
    if ( !v18 )
      goto LABEL_27;
    ((void (__fastcall *)(struct WarBoardTreasureComponent_o *, void *))v18->klass->vtable._5_Unselectable.method)(
      v18,
      v18->klass[1]._1.image);
  }
  Wall = WarBoardData__GetWall(monitor, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
  {
    v20 = Wall->fields.component;
    if ( v20 )
    {
      ((void (__fastcall *)(struct WarBoardWallComponent_o *, void *))v20->klass->vtable._5_Unselectable.method)(
        v20,
        v20->klass[1]._1.image);
      return;
    }
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v11; // x22
  struct System_Int32_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1

  if ( (byte_40FBAE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40FBAE0 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&addSquareIdx,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor_49346956(
    v11,
    linkedSquares,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v11 )
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    v11,
    addSquareIdx,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v12 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v19, v20, v21, v22, v23, v24);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v25);
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


void __fastcall WarBoardSquareData_SaveData___ctor_20445916(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardSquareData_o *v17; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  v17 = this->fields.owner;
  if ( !v17 )
    sub_B170D4();
  this->fields.squareIndex = v17->fields._squareIndex_k__BackingField;
  this->fields.flag = v17->fields.flag;
  v17->fields.localSaveData = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v17->fields.localSaveData,
    (System_Int32_array **)this,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
    sub_B170D4();
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.flag = owner->fields.flag;
}


void __fastcall WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *Square; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_B170D4();
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.owner,
    (System_Int32_array **)Square,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&owner->fields.localSaveData,
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F787A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSquareData___c_TypeInfo, v1);
    byte_40F787A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardSquareData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  int32_t activeCondId; // w1
  WarBoardCommonReleaseMaster_o *commonReleaseMaster; // x0

  if ( !x )
    goto LABEL_6;
  activeCondId = x->fields.activeCondId;
  if ( activeCondId )
  {
    commonReleaseMaster = this->fields.commonReleaseMaster;
    if ( commonReleaseMaster )
      return WarBoardCommonReleaseMaster__IsOpen(commonReleaseMaster, activeCondId, 0LL);
LABEL_6:
    sub_B170D4();
  }
  return 1;
}


bool __fastcall WarBoardSquareData___c__DisplayClass29_1____ctor_b__3(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData___c__DisplayClass29_0_o *CS___8__locals1; // x8
  struct WarBoardStageLayoutEntity_o *layoutEntity; // x8
  WarBoardStageLayoutMaster_o *layoutMaster; // x0
  int32_t throughCondId; // w1
  WarBoardCommonReleaseMaster_o *commonReleaseMaster; // x0
  WarBoardStageLayoutEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  layoutEntity = CS___8__locals1->fields.layoutEntity;
  if ( !layoutEntity )
    goto LABEL_12;
  layoutMaster = this->fields.layoutMaster;
  if ( !layoutMaster )
    goto LABEL_12;
  if ( !WarBoardStageLayoutMaster__TryGetEntity(layoutMaster, &entity, layoutEntity->fields.stageId, x, 0LL) )
    return 0;
  if ( !entity )
    goto LABEL_12;
  throughCondId = entity->fields.throughCondId;
  if ( !throughCondId )
    return 1;
  commonReleaseMaster = this->fields.commonReleaseMaster;
  if ( !commonReleaseMaster )
LABEL_12:
    sub_B170D4();
  return WarBoardCommonReleaseMaster__IsOpen(commonReleaseMaster, throughCondId, 0LL);
}