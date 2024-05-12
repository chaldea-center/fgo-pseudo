void __fastcall WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject **v29; // x20
  __int64 v30; // x8
  _DWORD *monitor; // x8
  _DWORD *v32; // x8
  _DWORD *v33; // x8
  _DWORD *v34; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Il2CppObject *v49; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v55; // x0
  Il2CppObject *v56; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v58; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  struct System_Int32_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v68; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  struct System_Int32_array *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  WarBoardSquareData___c_c *v77; // x0
  struct WarBoardSquareData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_4; // x22
  Il2CppObject *v80; // x23
  struct WarBoardSquareData___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  Il2CppObject *v89; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v91; // x21
  WarBoardSquareData___c_c *v92; // x0
  struct WarBoardSquareData___c_StaticFields *v93; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__29_6; // x22
  Il2CppObject *v95; // x23
  struct WarBoardSquareData___c_StaticFields *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7

  if ( (byte_438D28E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
    sub_B775C4(&Method_System_Func_WarBoardRoadEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardRoadEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardRoadEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardRoadEntity__int__TypeInfo);
    sub_B775C4(&Method_WarBoardSquareData___c___ctor_b__29_4__);
    sub_B775C4(&Method_WarBoardSquareData___c___ctor_b__29_6__);
    sub_B775C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__);
    sub_B775C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__);
    sub_B775C4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__);
    sub_B775C4(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
    sub_B775C4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__);
    sub_B775C4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__);
    sub_B775C4(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
    sub_B775C4(&WarBoardSquareData___c_TypeInfo);
    byte_438D28E = 1;
  }
  *(_QWORD *)&this->fields.squareFuncId = -1LL;
  v7 = sub_B77694(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  WarBoardSquareData___c__DisplayClass29_0___ctor((WarBoardSquareData___c__DisplayClass29_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 24) = layoutEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)layoutEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = sub_B77694(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  WarBoardSquareData___c__DisplayClass29_1___ctor((WarBoardSquareData___c__DisplayClass29_1_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_35;
  *(_QWORD *)(v22 + 32) = v7;
  v29 = (Il2CppObject **)(v22 + 32);
  sub_B77560((BattleServantConfConponent_o *)(v22 + 32), (System_Int32_array **)v7, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v22 + 32) )
    goto LABEL_35;
  v30 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 24LL);
  if ( !v30 )
    goto LABEL_35;
  this->fields._squareIndex_k__BackingField = *(_DWORD *)(v30 + 20);
  if ( !*v29
    || (monitor = (*v29)[1].monitor) == 0LL
    || (this->fields._effectId_k__BackingField = monitor[7], !*v29)
    || (v32 = (*v29)[1].monitor) == 0LL
    || (this->fields._type_k__BackingField = v32[6], !*v29)
    || (v33 = (*v29)[1].monitor) == 0LL
    || (this->fields._evalValue_k__BackingField = v33[16], !*v29)
    || (v34 = (*v29)[1].monitor) == 0LL )
  {
LABEL_35:
    sub_B7769C(v8, v9);
  }
  this->fields._imageId_k__BackingField = v34[17];
  this->fields.flag = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v22 + 24) = Master_WarQuestSelectionMaster;
  sub_B77560((BattleServantConfConponent_o *)(v22 + 24), Master_WarQuestSelectionMaster, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v22 + 16) = v42;
  sub_B77560((BattleServantConfConponent_o *)(v22 + 16), v42, v43, v44, v45, v46, v47, v48);
  v49 = *(Il2CppObject **)(v22 + 32);
  v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v50,
    v49,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v51 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v51,
                                                               (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
  v54 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v52,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v55 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v54,
          (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v56 = *(Il2CppObject **)(v22 + 32);
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
  v58 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v58,
    v56,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__,
    (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v57,
                                                               (System_Func_TSource__TResult__o *)v58,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v60 = System_Linq_Enumerable__ToArray_int_(
          v59,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v60;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v68 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v68,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
  v69 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v68,
          (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  v70 = System_Linq_Enumerable__ToArray_int_(
          v69,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v70;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v77 = WarBoardSquareData___c_TypeInfo;
  }
  static_fields = v77->static_fields;
  _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v80 = (Il2CppObject *)static_fields->__9;
    _9__29_4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_4,
      v80,
      Method_WarBoardSquareData___c___ctor_b__29_4__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardRoadEntity__bool___ctor__);
    v81 = WarBoardSquareData___c_TypeInfo->static_fields;
    v81->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_B77560(
      (BattleServantConfConponent_o *)&v81->__9__29_4,
      (System_Int32_array **)_9__29_4,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  v88 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v57,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v89 = *v29;
  v90 = v88;
  v91 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v91,
    v89,
    Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__,
    (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
  v92 = WarBoardSquareData___c_TypeInfo;
  if ( (BYTE3(WarBoardSquareData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v92 = WarBoardSquareData___c_TypeInfo;
  }
  v93 = v92->static_fields;
  _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v93->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v93 = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v95 = (Il2CppObject *)v93->__9;
    _9__29_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__29_6,
      v95,
      Method_WarBoardSquareData___c___ctor_b__29_6__,
      (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardRoadEntity__int___ctor__);
    v96 = WarBoardSquareData___c_TypeInfo->static_fields;
    v96->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_B77560(
      (BattleServantConfConponent_o *)&v96->__9__29_6,
      (System_Int32_array **)_9__29_6,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  v103 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                                                       v90,
                                                                       (System_Func_TSource__TKey__o *)v91,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_1D3D98C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v103;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquareMobilityLimitations,
    (System_Int32_array **)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, method);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B7769C(0LL, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, method);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_B7769C(0LL, method);
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

  if ( (byte_438D294 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_438D294 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B7769C(0LL, *(_QWORD *)&destination);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2FEA980 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  if ( (byte_438D297 & 1) == 0 )
  {
    this = (WarBoardSquareData_o *)sub_B775C4(&int___TypeInfo);
    byte_438D297 = 1;
  }
  p_myAndLinkedSquareIndecies = &v2->fields.myAndLinkedSquareIndecies;
  if ( !v2->fields.myAndLinkedSquareIndecies )
  {
    linkedSquares = v2->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_15;
    v5 = (System_Int32_array **)sub_B775DC(int___TypeInfo, linkedSquares->max_length + 1);
    v2->fields.myAndLinkedSquareIndecies = (struct System_Int32_array *)v5;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.myAndLinkedSquareIndecies, v5, v6, v7, v8, v9, v10, v11);
    myAndLinkedSquareIndecies = v2->fields.myAndLinkedSquareIndecies;
    if ( !myAndLinkedSquareIndecies )
      goto LABEL_15;
    if ( !myAndLinkedSquareIndecies->max_length )
      goto LABEL_17;
    myAndLinkedSquareIndecies->m_Items[1] = v2->fields._squareIndex_k__BackingField;
    v13 = v2->fields.linkedSquares;
    if ( !v13 )
LABEL_15:
      sub_B7769C(this, method);
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
      v18 = sub_B776C8(this);
      sub_B77668(v18, 0LL);
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

  if ( (byte_438D293 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_438D293 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_B7769C(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_2FEA980 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_B7769C(0LL, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, method);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  const MethodInfo *v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_438D291 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D291 = 1;
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
      sub_B7769C(0LL, v4);
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
    sub_B7769C(0LL, method);
  WarBoardSquareComponent__OnSelect(squareComponent, method);
}


void __fastcall WarBoardSquareData__Selectable(
        WarBoardSquareData_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_22695252; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_438D290 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D290 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B7769C(Instance, v6);
  Piece_22695252 = WarBoardData__GetPiece_22695252(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22695252 )
  {
    Instance = Piece_22695252->fields.pieceComponent;
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
  sub_B77560(
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
    sub_B7769C(0LL, cost);
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
  WarBoardPieceData_o *Piece_22695252; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_438D296 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D296 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent
    || (WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, method),
        (squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
  {
    sub_B7769C(squareComponent, enable);
  }
  Piece_22695252 = WarBoardData__GetPiece_22695252(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22695252 )
    WarBoardPieceData__SetPieceEnable(Piece_22695252, enable, 0LL);
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
  WarBoardPieceData_o *Piece_22695252; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_438D295 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D295 = 1;
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
  squareComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent || (v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 54)) == 0LL )
LABEL_18:
    sub_B7769C(squareComponent, enable);
  Piece_22695252 = WarBoardData__GetPiece_22695252(
                     *((WarBoardData_o **)squareComponent + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22695252 )
    WarBoardPieceData__SetTouchEnable(Piece_22695252, enable, 0LL);
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
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_22695252; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_438D292 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D292 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 54)) == 0LL )
LABEL_27:
    sub_B7769C(Instance, v6);
  Piece_22695252 = WarBoardData__GetPiece_22695252(
                     *((WarBoardData_o **)Instance + 54),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_22695252 )
  {
    Instance = Piece_22695252->fields.pieceComponent;
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


void __fastcall WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1

  if ( (byte_438D28F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438D28F = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v6,
    linkedSquares,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    sub_B7769C(v7, v8);
  System_Collections_Generic_List_int___Add(
    v6,
    addSquareIdx,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  v9 = System_Collections_Generic_List_int___ToArray(
         v6,
         (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.linkedSquares,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v16, v17, v18, v19, v20, v21);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v22);
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


void __fastcall WarBoardSquareData_SaveData___ctor_21675636(
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardSquareData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_B7769C(0LL, v11);
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.flag = v18->fields.flag;
  v18->fields.localSaveData = this;
  sub_B77560(
    (BattleServantConfConponent_o *)&v18->fields.localSaveData,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_B7769C(this, method);
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
    sub_B7769C(this, 0LL);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_B77560(
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
    sub_B77560(
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389289 & 1) == 0 )
  {
    sub_B775C4(&WarBoardSquareData___c_TypeInfo);
    byte_4389289 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0LL);
}