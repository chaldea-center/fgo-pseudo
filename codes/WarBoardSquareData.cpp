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
  __int64 v28; // x23
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject **v39; // x20
  int32x2_t *v40; // x8
  Il2CppObject *Master_object; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  System_Func_object__bool__o *v50; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_object__bool__o *v55; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Object_array *v57; // x0
  Il2CppObject *v58; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  System_Func_object__int__o *v62; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  struct System_Int32_array *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  System_Func_int__bool__o *v70; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  struct System_Int32_array *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  __int64 v76; // x2
  WarBoardSquareData___c_c *v77; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v79; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  Il2CppObject *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  System_Func_object__int__o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  WarBoardSquareData___c_c *v91; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v93; // x23
  struct WarBoardSquareData___c_StaticFields *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  struct System_Collections_Generic_Dictionary_int__int__o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3

  if ( (byte_49FA257 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v14);
    sub_1B640C8(&System_Func_WarBoardRoadEntity__int__TypeInfo, v15);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v16);
    sub_1B640C8(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v17);
    sub_1B640C8(&Method_WarBoardSquareData___c___ctor_b__29_4__, v18);
    sub_1B640C8(&Method_WarBoardSquareData___c___ctor_b__29_6__, v19);
    sub_1B640C8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v20);
    sub_1B640C8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v21);
    sub_1B640C8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v22);
    sub_1B640C8(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v23);
    sub_1B640C8(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v24);
    sub_1B640C8(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v25);
    sub_1B640C8(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v26);
    sub_1B640C8(&WarBoardSquareData___c_TypeInfo, v27);
    byte_49FA257 = 1;
  }
  v28 = sub_1B64314(WarBoardSquareData___c__DisplayClass29_0_TypeInfo, layoutEntity, roadEntities);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_22;
  *(_QWORD *)(v28 + 24) = layoutEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)layoutEntity, v30, v31);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v32, v33);
  v36 = sub_1B64314(WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v34, v35);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36
    || (*(_QWORD *)(v36 + 32) = v28,
        v39 = (Il2CppObject **)(v36 + 32),
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), v28, v37, v38),
        !*(_QWORD *)(v36 + 32))
    || (v40 = *(int32x2_t **)(*(_QWORD *)(v36 + 32) + 24LL)) == 0LL )
  {
LABEL_22:
    sub_1B64324(v29);
  }
  this->fields._squareIndex_k__BackingField = v40[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v40[3]);
  this->fields._evalValue_k__BackingField = v40[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v40[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v36 + 24) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)Master_object, v42, v43);
  v44 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v36 + 16) = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)v44, v45, v46);
  v47 = *(Il2CppObject **)(v36 + 32);
  v50 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardRoadEntity__bool__TypeInfo, v48, v49);
  System_Func_object__bool____ctor(v50, v47, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0LL);
  v51 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v51,
                                                               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v55 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardRoadEntity__bool__TypeInfo, v53, v54);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)v36,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0LL);
  v56 = System_Linq_Enumerable__Where_object_(
          v52,
          (System_Func_TSource__bool__o *)v55,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v57 = System_Linq_Enumerable__ToArray_object_(
          v56,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v58 = *(Il2CppObject **)(v36 + 32);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
  v62 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardRoadEntity__int__TypeInfo, v60, v61);
  System_Func_object__int____ctor(v62, v58, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0LL);
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v59,
                                                               (System_Func_TSource__TResult__o *)v62,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v64 = System_Linq_Enumerable__ToArray_int_(
          v63,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v64, v65, v66);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v70 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v68, v69);
  System_Func_int__bool____ctor(
    v70,
    (Il2CppObject *)v36,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0LL);
  v71 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v70,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v72 = System_Linq_Enumerable__ToArray_int_(
          v71,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v72, v73, v74);
  v77 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v77 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v77->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      v77 = WarBoardSquareData___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v77->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardRoadEntity__bool__TypeInfo, v75, v76);
    System_Func_object__bool____ctor(_9__29_4, v79, Method_WarBoardSquareData___c___ctor_b__29_4__, 0LL);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_4, (int32_t)_9__29_4, v81, v82);
  }
  v83 = System_Linq_Enumerable__Where_object_(
          v59,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v84 = *v39;
  v85 = v83;
  v88 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardRoadEntity__int__TypeInfo, v86, v87);
  System_Func_object__int____ctor(v88, v84, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0LL);
  v91 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v91 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v91->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = WarBoardSquareData___c_TypeInfo;
    }
    v93 = (Il2CppObject *)v91->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardRoadEntity__int__TypeInfo, v89, v90);
    System_Func_object__int____ctor(_9__29_6, v93, Method_WarBoardSquareData___c___ctor_b__29_6__, 0LL);
    v94 = WarBoardSquareData___c_TypeInfo->static_fields;
    v94->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v94->__9__29_6, (int32_t)_9__29_6, v95, v96);
  }
  v97 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                      v85,
                                                                      (System_Func_TSource__TKey__o *)v88,
                                                                      (System_Func_TSource__TElement__o *)_9__29_6,
                                                                      (const MethodInfo_2E719F4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v97;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.linkedSquareMobilityLimitations,
    (int32_t)v97,
    v98,
    v99);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B64324(0LL);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B64324(0LL);
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

  if ( (byte_49FA25D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_49FA25D = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1B64324(0LL);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x9
  struct System_Int32_array *v10; // x10
  __int64 v11; // x11
  __int64 v12; // x12
  unsigned __int64 v13; // x8
  int32_t *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x11
  int32_t v17; // w12
  char *v18; // x13

  if ( (byte_49FA260 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FA260 = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, linkedSquares->max_length + 1);
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.myAndLinkedSquareIndecies, (int32_t)v5, v6, v7);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    v9 = *(_QWORD *)&result->max_length;
    if ( !(_DWORD)v9 )
      goto LABEL_13;
    result->m_Items[1] = this->fields._squareIndex_k__BackingField;
    v10 = this->fields.linkedSquares;
    if ( !v10 )
LABEL_14:
      sub_1B64324(result);
    v11 = *(_QWORD *)&v10->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = (unsigned int)(v9 - 1);
      v13 = 0LL;
      v14 = &v10->m_Items[1];
      v15 = 4 * v12;
      v16 = 4LL * (unsigned int)v11;
      while ( v15 != v13 )
      {
        v17 = v14[v13 / 4];
        v18 = (char *)result + v13;
        v13 += 4LL;
        *((_DWORD *)v18 + 9) = v17;
        if ( v16 == v13 )
          return result;
      }
LABEL_13:
      sub_1B6432C(result, v8);
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

  if ( (byte_49FA25C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_49FA25C = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1B64324(0LL);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_1B64324(0LL);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  WarBoardSquareComponent_o *v4; // x0

  if ( (byte_49FA25A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA25A = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v4 = this->fields.squareComponent;
    if ( !v4 )
      sub_1B64324(0LL);
    WarBoardSquareComponent__PlayUnDispCostAnim(v4, 0LL);
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
    sub_1B64324(0LL);
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
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_49FA259 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isOnActionPiece);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_49FA259 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1B64324(Instance);
  Piece_35061152 = WarBoardData__GetPiece_35061152(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_35061152 )
  {
    Instance = Piece_35061152->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0LL);
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

  this->fields.squareComponent = component;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.squareComponent,
    (int32_t)component,
    (int32_t)method,
    v3);
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
    sub_1B64324(0LL);
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
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_49FA25F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_49FA25F = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_35061152 = WarBoardData__GetPiece_35061152(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_35061152 )
  {
    squareComponent = Piece_35061152->fields.pieceComponent;
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
    sub_1B64324(squareComponent);
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
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_49FA25E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_49FA25E = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_35061152 = WarBoardData__GetPiece_35061152(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0LL);
    if ( Piece_35061152 )
    {
      squareComponent = Piece_35061152->fields.pieceComponent;
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
      sub_1B64324(squareComponent);
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
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_49FA25B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDispCostLabel);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_49FA25B = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1B64324(Instance);
  Piece_35061152 = WarBoardData__GetPiece_35061152(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_35061152 )
  {
    Instance = Piece_35061152->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0LL);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0LL);
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
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  struct System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1

  if ( (byte_49FA258 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49FA258 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&addSquareIdx,
                                                   method);
  System_Collections_Generic_List_int____ctor_55113648(
    v9,
    linkedSquares,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v9
    || (items = v9->fields._items, v12 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v9->fields._version,
                                   !items) )
  {
    sub_1B64324(v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      addSquareIdx,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = addSquareIdx;
  }
  v14 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v14, v15, v16);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.myAndLinkedSquareIndecies, 0, v17, v18);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v19);
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


void __fastcall WarBoardSquareData_SaveData___ctor_35241524(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardSquareData_o *v9; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  v9 = this->fields.owner;
  if ( !v9 )
    sub_1B64324(0LL);
  this->fields.squareIndex = v9->fields._squareIndex_k__BackingField;
  this->fields.flag = v9->fields.flag;
  v9->fields.localSaveData = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.localSaveData, (int32_t)this, v7, v8);
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
    sub_1B64324(this);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.flag = owner->fields.flag;
}


void __fastcall WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *Square; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_1B64324(this);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Square, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA261 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSquareData___c_TypeInfo, v1);
    byte_49FA261 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardSquareData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardSquareData___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  throughCondId = entity->fields.throughCondId;
  if ( !throughCondId )
    return 1;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)v5->fields.commonReleaseMaster;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, throughCondId, 0LL);
}