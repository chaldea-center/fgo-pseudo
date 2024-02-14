void __fastcall WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
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
  __int64 v31; // x23
  __int64 v32; // x0
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
  __int64 v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  Il2CppObject **v54; // x20
  __int64 v55; // x8
  _DWORD *monitor; // x8
  _DWORD *v57; // x8
  _DWORD *v58; // x8
  _DWORD *v59; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x23
  __int64 v75; // x1
  __int64 v76; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v84; // x0
  Il2CppObject *v85; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v89; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  struct System_Int32_array *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  __int64 v99; // x1
  __int64 v100; // x2
  System_Func_int__bool__o *v101; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  struct System_Int32_array *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  __int64 v110; // x1
  __int64 v111; // x2
  WarBoardSquareData___c_c *v112; // x0
  struct WarBoardSquareData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_4; // x22
  Il2CppObject *v115; // x23
  struct WarBoardSquareData___c_StaticFields *v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  Il2CppObject *v124; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x20
  __int64 v126; // x1
  __int64 v127; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v128; // x21
  __int64 v129; // x1
  __int64 v130; // x2
  WarBoardSquareData___c_c *v131; // x0
  struct WarBoardSquareData___c_StaticFields *v132; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_6; // x22
  Il2CppObject *v134; // x23
  struct WarBoardSquareData___c_StaticFields *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7

  if ( (byte_42165B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v14);
    sub_B0D8A4(&Method_System_Func_WarBoardRoadEntity__int___ctor__, v15);
    sub_B0D8A4(&Method_System_Func_WarBoardRoadEntity__bool___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v19);
    sub_B0D8A4(&System_Func_WarBoardRoadEntity__int__TypeInfo, v20);
    sub_B0D8A4(&Method_WarBoardSquareData___c___ctor_b__29_4__, v21);
    sub_B0D8A4(&Method_WarBoardSquareData___c___ctor_b__29_6__, v22);
    sub_B0D8A4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v23);
    sub_B0D8A4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v24);
    sub_B0D8A4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v25);
    sub_B0D8A4(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v26);
    sub_B0D8A4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v27);
    sub_B0D8A4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v28);
    sub_B0D8A4(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v29);
    sub_B0D8A4(&WarBoardSquareData___c_TypeInfo, v30);
    byte_42165B5 = 1;
  }
  *(_QWORD *)&this->fields.squareFuncId = -1LL;
  v31 = sub_B0D974(WarBoardSquareData___c__DisplayClass29_0_TypeInfo, layoutEntity, roadEntities);
  WarBoardSquareData___c__DisplayClass29_0___ctor((WarBoardSquareData___c__DisplayClass29_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_35;
  *(_QWORD *)(v31 + 24) = layoutEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)layoutEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v31 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  v47 = sub_B0D974(WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v45, v46);
  WarBoardSquareData___c__DisplayClass29_1___ctor((WarBoardSquareData___c__DisplayClass29_1_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_35;
  *(_QWORD *)(v47 + 32) = v31;
  v54 = (Il2CppObject **)(v47 + 32);
  sub_B0D840((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v31, v48, v49, v50, v51, v52, v53);
  if ( !*(_QWORD *)(v47 + 32) )
    goto LABEL_35;
  v55 = *(_QWORD *)(*(_QWORD *)(v47 + 32) + 24LL);
  if ( !v55 )
    goto LABEL_35;
  this->fields._squareIndex_k__BackingField = *(_DWORD *)(v55 + 20);
  if ( !*v54
    || (monitor = (*v54)[1].monitor) == 0LL
    || (this->fields._effectId_k__BackingField = monitor[7], !*v54)
    || (v57 = (*v54)[1].monitor) == 0LL
    || (this->fields._type_k__BackingField = v57[6], !*v54)
    || (v58 = (*v54)[1].monitor) == 0LL
    || (this->fields._evalValue_k__BackingField = v58[16], !*v54)
    || (v59 = (*v54)[1].monitor) == 0LL )
  {
LABEL_35:
    sub_B0D97C(v32);
  }
  this->fields._imageId_k__BackingField = v59[17];
  this->fields.flag = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v47 + 24) = Master_WarQuestSelectionMaster;
  sub_B0D840((BattleServantConfConponent_o *)(v47 + 24), Master_WarQuestSelectionMaster, v61, v62, v63, v64, v65, v66);
  v67 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v47 + 16) = v67;
  sub_B0D840((BattleServantConfConponent_o *)(v47 + 16), v67, v68, v69, v70, v71, v72, v73);
  v74 = *(Il2CppObject **)(v47 + 32);
  v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                             v75,
                                                                             v76);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v77,
    v74,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v78 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v77,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v78,
                                                               (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                             v80,
                                                                             v81);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v82,
    (Il2CppObject *)v47,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v83 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v79,
          (System_Func_TSource__bool__o *)v82,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v84 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v83,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v85 = *(Il2CppObject **)(v47 + 32);
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)v84;
  v89 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                          System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                          v87,
                                                                          v88);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v89,
    v85,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__,
    (const MethodInfo_2619564 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v86,
                                                               (System_Func_TSource__TResult__o *)v89,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v91 = System_Linq_Enumerable__ToArray_int_(
          v90,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v91;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v101 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v99, v100);
  System_Func_int__bool____ctor(
    v101,
    (Il2CppObject *)v47,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v102 = System_Linq_Enumerable__Where_int_(
           linkedSquares,
           (System_Func_TSource__bool__o *)v101,
           (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  v103 = System_Linq_Enumerable__ToArray_int_(
           v102,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v103;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v112 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v112 = WarBoardSquareData___c_TypeInfo;
  }
  static_fields = v112->static_fields;
  _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v112);
      static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v115 = (Il2CppObject *)static_fields->__9;
    _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                                                    v110,
                                                                                    v111);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_4,
      v115,
      Method_WarBoardSquareData___c___ctor_b__29_4__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
    v116 = WarBoardSquareData___c_TypeInfo->static_fields;
    v116->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v116->__9__29_4,
      (System_Int32_array **)_9__29_4,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
  }
  v123 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v86,
           (System_Func_TSource__bool__o *)_9__29_4,
           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v124 = *v54;
  v125 = v123;
  v128 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                           System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                           v126,
                                                                           v127);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v128,
    v124,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__,
    (const MethodInfo_2619564 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v131 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v131 = WarBoardSquareData___c_TypeInfo;
  }
  v132 = v131->static_fields;
  _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v132->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( (BYTE3(v131->vtable._0_Equals.methodPtr) & 4) != 0 && !v131->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v131);
      v132 = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v134 = (Il2CppObject *)v132->__9;
    _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_WarBoardRoadEntity__int__TypeInfo,
                                                                                 v129,
                                                                                 v130);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__29_6,
      v134,
      Method_WarBoardSquareData___c___ctor_b__29_6__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
    v135 = WarBoardSquareData___c_TypeInfo->static_fields;
    v135->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v135->__9__29_6,
      (System_Int32_array **)_9__29_6,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141);
  }
  v142 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                                                       v125,
                                                                       (System_Func_TSource__TKey__o *)v128,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_1B5663C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v142;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkedSquareMobilityLimitations,
    (System_Int32_array **)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, method);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B0D97C(0LL);
  WarBoardSquareComponent__OnDeselect(squareComponent, method);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B0D97C(0LL);
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

  if ( (byte_42165BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_42165BB = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  WarBoardSquareData_o *v2; // x19
  System_Int32_array **p_myAndLinkedSquareIndecies; // x20
  struct System_Int32_array *linkedSquares; // x8
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *myAndLinkedSquareIndecies; // x8
  struct System_Int32_array *v13; // x8
  __int64 v14; // x9
  unsigned __int64 v15; // x10
  System_Int32_array *v16; // x12
  __int64 v18; // x0

  v2 = this;
  if ( (byte_42165BE & 1) == 0 )
  {
    this = (WarBoardSquareData_o *)sub_B0D8A4(&int___TypeInfo, method);
    byte_42165BE = 1;
  }
  p_myAndLinkedSquareIndecies = &v2->fields.myAndLinkedSquareIndecies;
  if ( !v2->fields.myAndLinkedSquareIndecies )
  {
    linkedSquares = v2->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_15;
    v5 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, linkedSquares->max_length + 1);
    v2->fields.myAndLinkedSquareIndecies = (struct System_Int32_array *)v5;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.myAndLinkedSquareIndecies, v5, v6, v7, v8, v9, v10, v11);
    myAndLinkedSquareIndecies = v2->fields.myAndLinkedSquareIndecies;
    if ( !myAndLinkedSquareIndecies )
      goto LABEL_15;
    if ( !myAndLinkedSquareIndecies->max_length )
      goto LABEL_17;
    myAndLinkedSquareIndecies->m_Items[1] = v2->fields._squareIndex_k__BackingField;
    v13 = v2->fields.linkedSquares;
    if ( !v13 )
LABEL_15:
      sub_B0D97C(this);
    v14 = *(_QWORD *)&v13->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      while ( v15 < v13->max_length )
      {
        v16 = *p_myAndLinkedSquareIndecies;
        if ( !*p_myAndLinkedSquareIndecies )
          goto LABEL_15;
        if ( v15 + 1 >= v16->max_length )
          break;
        v16->m_Items[v15 + 2] = v13->m_Items[v15 + 1];
        if ( (__int64)(v15 + 1) >= (int)v14 )
          return *p_myAndLinkedSquareIndecies;
        v13 = v2->fields.linkedSquares;
        ++v15;
        if ( !v13 )
          goto LABEL_15;
      }
LABEL_17:
      v18 = sub_B0D9A8(this);
      sub_B0D948(v18, 0LL);
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

  if ( (byte_42165BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_42165BA = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B0D97C(0LL);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_B0D97C(0LL);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  const MethodInfo *v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_42165B8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42165B8 = 1;
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
      sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_22073600; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42165B7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isOnActionPiece);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_42165B7 = 1;
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
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B0D97C(Instance);
  Piece_22073600 = WarBoardData__GetPiece_22073600(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22073600 )
  {
    Instance = Piece_22073600->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v9, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, method);
}


void __fastcall WarBoardSquareData__SetFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag |= flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__SetSquareEnable(WarBoardSquareData_o *this, bool enable, const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v6; // x21
  WarBoardPieceData_o *Piece_22073600; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42165BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_42165BD = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent
    || (WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, method),
        (squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
  {
    sub_B0D97C(squareComponent);
  }
  Piece_22073600 = WarBoardData__GetPiece_22073600(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22073600 )
    WarBoardPieceData__SetPieceEnable(Piece_22073600, enable, 0LL);
  Item = WarBoardData__GetItem(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
    WarBoardItemData__SetItemEnable(Item, enable, 0LL);
  Effect = WarBoardData__GetEffect(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
    WarBoardEffectData__SetEffectEnable(Effect, enable, 0LL);
  Treasure = WarBoardData__GetTreasure(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
    WarBoardTreasureData__SetTreasureEnable(Treasure, enable, 0LL);
  Wall = WarBoardData__GetWall(v6, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
  WarBoardPieceData_o *Piece_22073600; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42165BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_42165BC = 1;
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
  squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent || (v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
LABEL_18:
    sub_B0D97C(squareComponent);
  Piece_22073600 = WarBoardData__GetPiece_22073600(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22073600 )
    WarBoardPieceData__SetTouchEnable(Piece_22073600, enable, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Unselectable(
        WarBoardSquareData_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *squareComponent; // x21
  const MethodInfo *v7; // x2
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_22073600; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_42165B9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDispCostLabel);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_42165B9 = 1;
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
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B0D97C(Instance);
  Piece_22073600 = WarBoardData__GetPiece_22073600(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22073600 )
  {
    Instance = Piece_22073600->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_27;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v9, this->fields._squareIndex_k__BackingField, 0, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  __int64 v10; // x0
  struct System_Int32_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1

  if ( (byte_42165B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_42165B6 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&addSquareIdx,
                                                   method);
  System_Collections_Generic_List_int____ctor_50000796(
    v9,
    linkedSquares,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v9 )
    sub_B0D97C(v10);
  System_Collections_Generic_List_int___Add(
    v9,
    addSquareIdx,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  v11 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v18, v19, v20, v21, v22, v23);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v24);
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


void __fastcall WarBoardSquareData_SaveData___ctor_22744980(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  v17 = this->fields.owner;
  if ( !v17 )
    sub_B0D97C(0LL);
  this->fields.squareIndex = v17->fields._squareIndex_k__BackingField;
  this->fields.flag = v17->fields.flag;
  v17->fields.localSaveData = this;
  sub_B0D840(
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_B0D840(
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
    sub_B0D840(
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138A1 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSquareData___c_TypeInfo, v1);
    byte_42138A1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardSquareData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( !x )
    goto LABEL_6;
  activeCondId = x->fields.activeCondId;
  if ( activeCondId )
  {
    this = (WarBoardSquareData___c__DisplayClass29_1_o *)this->fields.commonReleaseMaster;
    if ( this )
      return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, activeCondId, 0LL);
LABEL_6:
    sub_B0D97C(this);
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
  WarBoardSquareData___c__DisplayClass29_1_o *v5; // x19
  int32_t throughCondId; // w1
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
  throughCondId = entity->fields.throughCondId;
  if ( !throughCondId )
    return 1;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)v5->fields.commonReleaseMaster;
  if ( !this )
LABEL_12:
    sub_B0D97C(this);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, throughCondId, 0LL);
}