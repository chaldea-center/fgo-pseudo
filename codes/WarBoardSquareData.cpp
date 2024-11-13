void __fastcall WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  int64_t v49; // x23
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject **v74; // x20
  int32x2_t *v75; // x8
  Il2CppObject *Master_object; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  Il2CppObject *v90; // x23
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Func_object__bool__o *v94; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x21
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Func_object__bool__o *v100; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x0
  System_Object_array *v102; // x0
  Il2CppObject *v103; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  System_Func_object__int__o *v108; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x0
  struct System_Int32_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  System_Func_int__bool__o *v121; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  struct System_Int32_array *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  WarBoardSquareData___c_c *v133; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v135; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x0
  Il2CppObject *v144; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x20
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  System_Func_object__int__o *v149; // x21
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  WarBoardSquareData___c_c *v153; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v155; // x23
  struct WarBoardSquareData___c_StaticFields *v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v163; // x0
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7

  if ( (byte_4B13FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity, roadEntities);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v21, v22);
    sub_1BCA7E0(&System_Func_WarBoardRoadEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_WarBoardSquareData___c___ctor_b__29_4__, v29, v30);
    sub_1BCA7E0(&Method_WarBoardSquareData___c___ctor_b__29_6__, v31, v32);
    sub_1BCA7E0(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v33, v34);
    sub_1BCA7E0(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v35, v36);
    sub_1BCA7E0(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v37, v38);
    sub_1BCA7E0(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v41, v42);
    sub_1BCA7E0(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v43, v44);
    sub_1BCA7E0(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v45, v46);
    sub_1BCA7E0(&WarBoardSquareData___c_TypeInfo, v47, v48);
    byte_4B13FA0 = 1;
  }
  v49 = sub_1BCAA2C(WarBoardSquareData___c__DisplayClass29_0_TypeInfo, layoutEntity, roadEntities, method);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_22;
  *(_QWORD *)(v49 + 24) = layoutEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)layoutEntity, v52, v53, v54, v55, v56, v57);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v49 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)this, v58, v59, v60, v61, v62, v63);
  v67 = sub_1BCAA2C(WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v64, v65, v66);
  System_Object___ctor((Il2CppObject *)v67, 0LL);
  if ( !v67
    || (*(_QWORD *)(v67 + 32) = v49,
        v74 = (Il2CppObject **)(v67 + 32),
        sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 32), v49, v68, v69, v70, v71, v72, v73),
        !*(_QWORD *)(v67 + 32))
    || (v75 = *(int32x2_t **)(*(_QWORD *)(v67 + 32) + 24LL)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(v50, v51);
  }
  this->fields._squareIndex_k__BackingField = v75[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v75[3]);
  this->fields._evalValue_k__BackingField = v75[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v75[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v67 + 24) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 24), (int64_t)Master_object, v77, v78, v79, v80, v81, v82);
  v83 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v67 + 16) = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 16), (int64_t)v83, v84, v85, v86, v87, v88, v89);
  v90 = *(Il2CppObject **)(v67 + 32);
  v94 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardRoadEntity__bool__TypeInfo, v91, v92, v93);
  System_Func_object__bool____ctor(v94, v90, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0LL);
  v95 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v94,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v95,
                                                               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v100 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardRoadEntity__bool__TypeInfo, v97, v98, v99);
  System_Func_object__bool____ctor(
    v100,
    (Il2CppObject *)v67,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0LL);
  v101 = System_Linq_Enumerable__Where_object_(
           v96,
           (System_Func_TSource__bool__o *)v100,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v102 = System_Linq_Enumerable__ToArray_object_(
           v101,
           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v103 = *(Il2CppObject **)(v67 + 32);
  v104 = (System_Collections_Generic_IEnumerable_TSource__o *)v102;
  v108 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardRoadEntity__int__TypeInfo, v105, v106, v107);
  System_Func_object__int____ctor(v108, v103, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0LL);
  v109 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v104,
                                                                (System_Func_TSource__TResult__o *)v108,
                                                                (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v110 = System_Linq_Enumerable__ToArray_int_(
           v109,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v110;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.linkedSquares,
    (int64_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v121 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v118, v119, v120);
  System_Func_int__bool____ctor(
    v121,
    (Il2CppObject *)v67,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0LL);
  v122 = System_Linq_Enumerable__Where_int_(
           linkedSquares,
           (System_Func_TSource__bool__o *)v121,
           (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v123 = System_Linq_Enumerable__ToArray_int_(
           v122,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v123;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.linkedSquares,
    (int64_t)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v133 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo, v130);
    v133 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v133->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v133->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v133, v130);
      v133 = WarBoardSquareData___c_TypeInfo;
    }
    v135 = (Il2CppObject *)v133->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_WarBoardRoadEntity__bool__TypeInfo,
                                                v130,
                                                v131,
                                                v132);
    System_Func_object__bool____ctor(_9__29_4, v135, Method_WarBoardSquareData___c___ctor_b__29_4__, 0LL);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_4,
      (int64_t)_9__29_4,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
  }
  v143 = System_Linq_Enumerable__Where_object_(
           v104,
           (System_Func_TSource__bool__o *)_9__29_4,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v144 = *v74;
  v145 = v143;
  v149 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardRoadEntity__int__TypeInfo, v146, v147, v148);
  System_Func_object__int____ctor(v149, v144, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0LL);
  v153 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo, v150);
    v153 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v153->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153, v150);
      v153 = WarBoardSquareData___c_TypeInfo;
    }
    v155 = (Il2CppObject *)v153->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_WarBoardRoadEntity__int__TypeInfo,
                                               v150,
                                               v151,
                                               v152);
    System_Func_object__int____ctor(_9__29_6, v155, Method_WarBoardSquareData___c___ctor_b__29_6__, 0LL);
    v156 = WarBoardSquareData___c_TypeInfo->static_fields;
    v156->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1BCA784((PartyOrganizationUtility_o *)&v156->__9__29_6, (int64_t)_9__29_6, v157, v158, v159, v160, v161, v162);
  }
  v163 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                       v145,
                                                                       (System_Func_TSource__TKey__o *)v149,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_2F4C08C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v163;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.linkedSquareMobilityLimitations,
    (int64_t)v163,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__ActiveEditPointArrow(squareComponent, 0LL);
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
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__DispBattleRange(
        WarBoardSquareData_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__EnableEditPosition(squareComponent, 0LL);
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
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13FA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination, method);
    byte_4B13FA6 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1BCAA3C(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  if ( v6 && value > 0 )
    return value;
  else
    return 0;
}


System_Int32_array *__fastcall WarBoardSquareData__GetMyAndLinkedSquareIndecies(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  struct System_Int32_array *linkedSquares; // x8
  struct System_Int32_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x9
  struct System_Int32_array *v14; // x10
  __int64 v15; // x11
  __int64 v16; // x12
  unsigned __int64 v17; // x8
  int32_t *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x11
  int32_t v21; // w12
  char *v22; // x13

  if ( (byte_4B13FA9 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B13FA9 = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, linkedSquares->max_length + 1);
    this->fields.myAndLinkedSquareIndecies = v6;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.myAndLinkedSquareIndecies,
      (int64_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    v13 = *(_QWORD *)&result->max_length;
    if ( !(_DWORD)v13 )
      goto LABEL_13;
    result->m_Items[1] = this->fields._squareIndex_k__BackingField;
    v14 = this->fields.linkedSquares;
    if ( !v14 )
LABEL_14:
      sub_1BCAA3C(result, method);
    v15 = *(_QWORD *)&v14->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = (unsigned int)(v13 - 1);
      v17 = 0LL;
      v18 = &v14->m_Items[1];
      v19 = 4 * v16;
      v20 = 4LL * (unsigned int)v15;
      while ( v19 != v17 )
      {
        v21 = v18[v17 / 4];
        v22 = (char *)result + v17;
        v17 += 4LL;
        *((_DWORD *)v22 + 9) = v21;
        if ( v20 == v17 )
          return result;
      }
LABEL_13:
      sub_1BCAA44(result, method);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareData__HasMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13FA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination, method);
    byte_4B13FA5 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1BCAA3C(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  return v6 && value > 0;
}


bool __fastcall WarBoardSquareData__IsFlag(WarBoardSquareData_o *this, int32_t checkFlag, const MethodInfo *method)
{
  return (checkFlag & ~this->fields.flag) == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__NondispBattleRange(
        WarBoardSquareData_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1BCAA3C(0LL, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *squareComponent; // x20
  __int64 v5; // x1
  WarBoardSquareComponent_o *v6; // x0

  if ( (byte_4B13FA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13FA3 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v6 = this->fields.squareComponent;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    WarBoardSquareComponent__PlayUnDispCostAnim(v6, 0LL);
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
    sub_1BCAA3C(0LL, method);
  WarBoardSquareComponent__OnSelect(squareComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Selectable(
        WarBoardSquareData_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v8; // x1
  void *Instance; // x0
  WarBoardData_o *v10; // x20
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4B13FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isOnActionPiece, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6);
    byte_4B13FA2 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOnActionPiece);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v10 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1BCAA3C(Instance, v8);
  Piece_36054544 = WarBoardData__GetPiece_36054544(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36054544 )
  {
    Instance = Piece_36054544->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v10, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
    goto LABEL_26;
  }
}


void __fastcall WarBoardSquareData__SetComponent(
        WarBoardSquareData_o *this,
        WarBoardSquareComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.squareComponent = component;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.squareComponent,
    (int64_t)component,
    (int64_t)method,
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
    sub_1BCAA3C(0LL, *(_QWORD *)&cost);
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, 0LL);
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
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4B13FA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable, method);
    byte_4B13FA8 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_36054544 = WarBoardData__GetPiece_36054544(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36054544 )
  {
    squareComponent = Piece_36054544->fields.pieceComponent;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardPieceBaseComponent__SetColliderEnable((WarBoardPieceBaseComponent_o *)squareComponent, enable, 0LL);
  }
  Item = WarBoardData__GetItem(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    squareComponent = Item->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardItemComponent__SetColliderEnable((WarBoardItemComponent_o *)squareComponent, enable, 0LL);
  }
  Effect = WarBoardData__GetEffect(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    squareComponent = Effect->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardEffectComponent__SetColliderEnable((WarBoardEffectComponent_o *)squareComponent, enable, 0LL);
  }
  Treasure = WarBoardData__GetTreasure(v6, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    squareComponent = Treasure->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardTreasureComponent__SetColliderEnable((WarBoardTreasureComponent_o *)squareComponent, enable, 0LL);
  }
  Wall = WarBoardData__GetWall(v6, this->fields._squareIndex_k__BackingField, 0, 0LL);
  if ( Wall )
  {
    squareComponent = Wall->fields.component;
    if ( squareComponent )
    {
      WarBoardWallComponent__SetColliderEnable((WarBoardWallComponent_o *)squareComponent, enable, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(squareComponent, enable);
  }
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
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4B13FA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable, withOnObject);
    byte_4B13FA7 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_36054544 = WarBoardData__GetPiece_36054544(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0LL);
    if ( Piece_36054544 )
    {
      squareComponent = Piece_36054544->fields.pieceComponent;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardPieceBaseComponent__SetTouchEnable((WarBoardPieceBaseComponent_o *)squareComponent, enable, 0LL);
    }
    Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0LL);
    if ( Item )
    {
      squareComponent = Item->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardItemComponent__SetTouchEnable((WarBoardItemComponent_o *)squareComponent, enable, 0LL);
    }
    Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0LL);
    if ( Effect )
    {
      squareComponent = Effect->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardEffectComponent__SetTouchEnable((WarBoardEffectComponent_o *)squareComponent, enable, 0LL);
    }
    Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0LL);
    if ( Treasure )
    {
      squareComponent = Treasure->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardTreasureComponent__SetTouchEnable((WarBoardTreasureComponent_o *)squareComponent, enable, 0LL);
    }
    Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0LL);
    if ( Wall )
    {
      squareComponent = Wall->fields.component;
      if ( squareComponent )
      {
        WarBoardWallComponent__SetTouchEnable((WarBoardWallComponent_o *)squareComponent, enable, 0LL);
        return;
      }
LABEL_23:
      sub_1BCAA3C(squareComponent, enable);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Unselectable(
        WarBoardSquareData_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v8; // x1
  void *Instance; // x0
  WarBoardData_o *v10; // x20
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4B13FA4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDispCostLabel, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6);
    byte_4B13FA4 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDispCostLabel);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v10 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1BCAA3C(Instance, v8);
  Piece_36054544 = WarBoardData__GetPiece_36054544(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36054544 )
  {
    Instance = Piece_36054544->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v10, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v10, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x0
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
  const MethodInfo *v32; // x1

  if ( (byte_4B13FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B13FA1 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&addSquareIdx,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor_56116492(
    v13,
    linkedSquares,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v13
    || (items = v13->fields._items,
        v17 = Method_System_Collections_Generic_List_int__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1BCAA3C(v14, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      addSquareIdx,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    items->m_Items[size + 1] = addSquareIdx;
  }
  v19 = System_Collections_Generic_List_int___ToArray(
          v13,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkedSquares, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v26, v27, v28, v29, v30, v31);
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


void __fastcall WarBoardSquareData_SaveData___ctor_36235080(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct WarBoardSquareData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_1BCAA3C(0LL, v11);
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.flag = v18->fields.flag;
  v18->fields.localSaveData = this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v18->fields.localSaveData, (int64_t)this, v12, v13, v14, v15, v16, v17);
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
    sub_1BCAA3C(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.flag = owner->fields.flag;
}


void __fastcall WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *Square; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_1BCAA3C(this, 0LL);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)Square, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1BCA784((PartyOrganizationUtility_o *)&owner->fields.localSaveData, (int64_t)this, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13FAA & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSquareData___c_TypeInfo, v1, v2);
    byte_4B13FAA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardSquareData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardSquareData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  squareIndex_k__BackingField = _4__this->fields._squareIndex_k__BackingField;
  return x->fields.squareIndex1 == squareIndex_k__BackingField || x->fields.squareIndex2 == squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardSquareData___c__DisplayClass29_0____ctor_b__2(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  bool v4; // zf
  __int64 v5; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, x);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 24LL;
  if ( !v4 )
    v5 = 20LL;
  return *(_DWORD *)((char *)&x->klass + v5);
}


int32_t __fastcall WarBoardSquareData___c__DisplayClass29_0____ctor_b__5(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  bool v4; // zf
  __int64 v5; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, x);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 24LL;
  if ( !v4 )
    v5 = 20LL;
  return *(_DWORD *)((char *)&x->klass + v5);
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
    sub_1BCAA3C(this, x);
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
  WarBoardStageLayoutEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

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
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0LL);
}