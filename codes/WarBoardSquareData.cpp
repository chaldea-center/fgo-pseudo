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
  int64_t v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject **v50; // x20
  int32x2_t *v51; // x8
  Il2CppObject *Master_object; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x23
  System_Func_object__bool__o *v67; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x21
  System_Func_object__bool__o *v70; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Object_array *v72; // x0
  Il2CppObject *v73; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x21
  System_Func_object__int__o *v75; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  struct System_Int32_array *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v85; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  struct System_Int32_array *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  WarBoardSquareData___c_c *v94; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v96; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  Il2CppObject *v105; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x20
  System_Func_object__int__o *v107; // x21
  WarBoardSquareData___c_c *v108; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v110; // x23
  struct WarBoardSquareData___c_StaticFields *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7

  if ( (byte_4BC5803 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity);
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v12);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v14);
    sub_1C1ABD4(&System_Func_WarBoardRoadEntity__int__TypeInfo, v15);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v16);
    sub_1C1ABD4(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v17);
    sub_1C1ABD4(&Method_WarBoardSquareData___c___ctor_b__29_4__, v18);
    sub_1C1ABD4(&Method_WarBoardSquareData___c___ctor_b__29_6__, v19);
    sub_1C1ABD4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v20);
    sub_1C1ABD4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v21);
    sub_1C1ABD4(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v22);
    sub_1C1ABD4(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v23);
    sub_1C1ABD4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v24);
    sub_1C1ABD4(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v25);
    sub_1C1ABD4(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v26);
    sub_1C1ABD4(&WarBoardSquareData___c_TypeInfo, v27);
    byte_4BC5803 = 1;
  }
  v28 = sub_1C1AE20(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_22;
  *(_QWORD *)(v28 + 24) = layoutEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)layoutEntity, v31, v32, v33, v34, v35, v36);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v28 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
  v43 = sub_1C1AE20(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43
    || (*(_QWORD *)(v43 + 32) = v28,
        v50 = (Il2CppObject **)(v43 + 32),
        sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 32), v28, v44, v45, v46, v47, v48, v49),
        !*(_QWORD *)(v43 + 32))
    || (v51 = *(int32x2_t **)(*(_QWORD *)(v43 + 32) + 24LL)) == 0LL )
  {
LABEL_22:
    sub_1C1AE30(v29, v30);
  }
  this->fields._squareIndex_k__BackingField = v51[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v51[3]);
  this->fields._evalValue_k__BackingField = v51[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v51[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v43 + 24) = Master_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)Master_object, v53, v54, v55, v56, v57, v58);
  v59 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v43 + 16) = v59;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = *(Il2CppObject **)(v43 + 32);
  v67 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v67, v66, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0LL);
  v68 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v68,
                                                               (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v70 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v70,
    (Il2CppObject *)v43,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0LL);
  v71 = System_Linq_Enumerable__Where_object_(
          v69,
          (System_Func_TSource__bool__o *)v70,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v72 = System_Linq_Enumerable__ToArray_object_(
          v71,
          (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v73 = *(Il2CppObject **)(v43 + 32);
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)v72;
  v75 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v75, v73, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0LL);
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v74,
                                                               (System_Func_TSource__TResult__o *)v75,
                                                               (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v77 = System_Linq_Enumerable__ToArray_int_(
          v76,
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v77;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.linkedSquares, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v85 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v85,
    (Il2CppObject *)v43,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0LL);
  v86 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v85,
          (const MethodInfo_2FDEAB0 *)Method_System_Linq_Enumerable_Where_int___);
  v87 = System_Linq_Enumerable__ToArray_int_(
          v86,
          (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v87;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.linkedSquares, (int64_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v94 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v94->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = WarBoardSquareData___c_TypeInfo;
    }
    v96 = (Il2CppObject *)v94->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_4, v96, Method_WarBoardSquareData___c___ctor_b__29_4__, 0LL);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_4,
      (int64_t)_9__29_4,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  v104 = System_Linq_Enumerable__Where_object_(
           v74,
           (System_Func_TSource__bool__o *)_9__29_4,
           (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v105 = *v50;
  v106 = v104;
  v107 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v107, v105, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0LL);
  v108 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v108 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v108->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v108 = WarBoardSquareData___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v108->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__29_6, v110, Method_WarBoardSquareData___c___ctor_b__29_6__, 0LL);
    v111 = WarBoardSquareData___c_TypeInfo->static_fields;
    v111->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v111->__9__29_6, (int64_t)_9__29_6, v112, v113, v114, v115, v116, v117);
  }
  v118 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                       v106,
                                                                       (System_Func_TSource__TKey__o *)v107,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_2FD957C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v118;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.linkedSquareMobilityLimitations,
    (int64_t)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C1AE30(0LL, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C1AE30(0LL, method);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__DispBattleRange(
        WarBoardSquareData_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C1AE30(0LL, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C1AE30(0LL, method);
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

  if ( (byte_4BC5809 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_4BC5809 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C1AE30(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_329AEC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  if ( v6 && value > 0 )
    return value;
  else
    return 0;
}


System_Int32_array *__fastcall WarBoardSquareData__GetMyAndLinkedSquareIndecies(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  struct System_Int32_array *linkedSquares; // x8
  struct System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x9
  struct System_Int32_array *v13; // x10
  __int64 v14; // x11
  __int64 v15; // x12
  unsigned __int64 v16; // x8
  int32_t *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x11
  int32_t v20; // w12
  char *v21; // x13

  if ( (byte_4BC580C & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    byte_4BC580C = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, linkedSquares->max_length + 1);
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.myAndLinkedSquareIndecies,
      (int64_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    v12 = *(_QWORD *)&result->max_length;
    if ( !(_DWORD)v12 )
      goto LABEL_13;
    result->m_Items[1] = this->fields._squareIndex_k__BackingField;
    v13 = this->fields.linkedSquares;
    if ( !v13 )
LABEL_14:
      sub_1C1AE30(result, method);
    v14 = *(_QWORD *)&v13->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (unsigned int)(v12 - 1);
      v16 = 0LL;
      v17 = &v13->m_Items[1];
      v18 = 4 * v15;
      v19 = 4LL * (unsigned int)v14;
      while ( v18 != v16 )
      {
        v20 = v17[v16 / 4];
        v21 = (char *)result + v16;
        v16 += 4LL;
        *((_DWORD *)v21 + 9) = v20;
        if ( v19 == v16 )
          return result;
      }
LABEL_13:
      sub_1C1AE38(result, method);
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

  if ( (byte_4BC5808 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_4BC5808 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C1AE30(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_329AEC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_1C1AE30(0LL, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  __int64 v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_4BC5806 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC5806 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v5 = this->fields.squareComponent;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    WarBoardSquareComponent__PlayUnDispCostAnim(v5, 0LL);
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
    sub_1C1AE30(0LL, method);
  WarBoardSquareComponent__OnSelect(squareComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareData__Selectable(
        WarBoardSquareData_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v7; // x1
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_36443868; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4BC5805 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isOnActionPiece);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_4BC5805 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1C1AE30(Instance, v7);
  Piece_36443868 = WarBoardData__GetPiece_36443868(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36443868 )
  {
    Instance = Piece_36443868->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
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
  sub_1C1AB78(
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
    sub_1C1AE30(0LL, cost);
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
  WarBoardPieceData_o *Piece_36443868; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4BC580B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_4BC580B = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_36443868 = WarBoardData__GetPiece_36443868(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36443868 )
  {
    squareComponent = Piece_36443868->fields.pieceComponent;
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
    sub_1C1AE30(squareComponent, enable);
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
  WarBoardPieceData_o *Piece_36443868; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4BC580A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_4BC580A = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_36443868 = WarBoardData__GetPiece_36443868(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0LL);
    if ( Piece_36443868 )
    {
      squareComponent = Piece_36443868->fields.pieceComponent;
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
      sub_1C1AE30(squareComponent, enable);
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
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v7; // x1
  void *Instance; // x0
  WarBoardData_o *v9; // x20
  WarBoardPieceData_o *Piece_36443868; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4BC5807 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isDispCostLabel);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_4BC5807 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1C1AE30(Instance, v7);
  Piece_36443868 = WarBoardData__GetPiece_36443868(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_36443868 )
  {
    Instance = Piece_36443868->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v9, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
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
    goto LABEL_26;
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
  __int64 v11; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct System_Int32_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4BC5804 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor___77494032, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BC5804 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56750400(
    v9,
    linkedSquares,
    (const MethodInfo_361F140 *)Method_System_Collections_Generic_List_int___ctor___77494032);
  if ( !v9
    || (items = v9->fields._items, v13 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v9->fields._version,
                                   !items) )
  {
    sub_1C1AE30(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      addSquareIdx,
      *(const MethodInfo_361F86C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = addSquareIdx;
  }
  v15 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.linkedSquares, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.myAndLinkedSquareIndecies, 0LL, v22, v23, v24, v25, v26, v27);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v28);
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


void __fastcall WarBoardSquareData_SaveData___ctor_36682808(
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_1C1AE30(0LL, v11);
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.flag = v18->fields.flag;
  v18->fields.localSaveData = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v18->fields.localSaveData, (int64_t)this, v12, v13, v14, v15, v16, v17);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, 0LL);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)Square, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C1AB78((PartyOrganizationUtility_o *)&owner->fields.localSaveData, (int64_t)this, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC580D & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardSquareData___c_TypeInfo, v1);
    byte_4BC580D = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarBoardSquareData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, x);
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
    sub_1C1AE30(this, x);
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
    sub_1C1AE30(this, x);
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
    sub_1C1AE30(this, x);
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
    sub_1C1AE30(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0LL);
}