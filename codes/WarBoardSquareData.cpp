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
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject **v38; // x20
  int32x2_t *v39; // x8
  Il2CppObject *Master_object; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x23
  System_Func_object__bool__o *v47; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  System_Func_object__bool__o *v50; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Object_array *v52; // x0
  Il2CppObject *v53; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  System_Func_object__int__o *v55; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  struct System_Int32_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v61; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  struct System_Int32_array *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  WarBoardSquareData___c_c *v66; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v68; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  Il2CppObject *v73; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x20
  System_Func_object__int__o *v75; // x21
  WarBoardSquareData___c_c *v76; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v78; // x23
  struct WarBoardSquareData___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Collections_Generic_Dictionary_int__int__o *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3

  if ( (byte_48E06EF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, layoutEntity);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___, v9);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___, v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___, v12);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___, v14);
    sub_1B00CCC(&System_Func_WarBoardRoadEntity__int__TypeInfo, v15);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v16);
    sub_1B00CCC(&System_Func_WarBoardRoadEntity__bool__TypeInfo, v17);
    sub_1B00CCC(&Method_WarBoardSquareData___c___ctor_b__29_4__, v18);
    sub_1B00CCC(&Method_WarBoardSquareData___c___ctor_b__29_6__, v19);
    sub_1B00CCC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, v20);
    sub_1B00CCC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, v21);
    sub_1B00CCC(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, v22);
    sub_1B00CCC(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo, v23);
    sub_1B00CCC(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__, v24);
    sub_1B00CCC(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__, v25);
    sub_1B00CCC(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo, v26);
    sub_1B00CCC(&WarBoardSquareData___c_TypeInfo, v27);
    byte_48E06EF = 1;
  }
  v28 = sub_1B00F18(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_22;
  *(_QWORD *)(v28 + 24) = layoutEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)layoutEntity, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v28 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v33, v34);
  v35 = sub_1B00F18(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35
    || (*(_QWORD *)(v35 + 32) = v28,
        v38 = (Il2CppObject **)(v35 + 32),
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 32), v28, v36, v37),
        !*(_QWORD *)(v35 + 32))
    || (v39 = *(int32x2_t **)(*(_QWORD *)(v35 + 32) + 24LL)) == 0LL )
  {
LABEL_22:
    sub_1B00F28(v29, v30);
  }
  this->fields._squareIndex_k__BackingField = v39[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v39[3]);
  this->fields._evalValue_k__BackingField = v39[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v39[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v35 + 24) = Master_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)Master_object, v41, v42);
  v43 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v35 + 16) = v43;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 16), (int32_t)v43, v44, v45);
  v46 = *(Il2CppObject **)(v35 + 32);
  v47 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v47, v46, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0LL);
  v48 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v48,
                                                               (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v50 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v35,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0LL);
  v51 = System_Linq_Enumerable__Where_object_(
          v49,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v52 = System_Linq_Enumerable__ToArray_object_(
          v51,
          (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v53 = *(Il2CppObject **)(v35 + 32);
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
  v55 = (System_Func_object__int__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v55, v53, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0LL);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v54,
                                                               (System_Func_TSource__TResult__o *)v55,
                                                               (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v57 = System_Linq_Enumerable__ToArray_int_(
          v56,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v57;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v57, v58, v59);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v61 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v61,
    (Il2CppObject *)v35,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0LL);
  v62 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v61,
          (const MethodInfo_2D9CD80 *)Method_System_Linq_Enumerable_Where_int___);
  v63 = System_Linq_Enumerable__ToArray_int_(
          v62,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v63;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v63, v64, v65);
  v66 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v66 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v66->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = WarBoardSquareData___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v66->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_4, v68, Method_WarBoardSquareData___c___ctor_b__29_4__, 0LL);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_4, (int32_t)_9__29_4, v70, v71);
  }
  v72 = System_Linq_Enumerable__Where_object_(
          v54,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v73 = *v38;
  v74 = v72;
  v75 = (System_Func_object__int__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v75, v73, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0LL);
  v76 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v76 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v76->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = WarBoardSquareData___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v76->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1B00F18(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__29_6, v78, Method_WarBoardSquareData___c___ctor_b__29_6__, 0LL);
    v79 = WarBoardSquareData___c_TypeInfo->static_fields;
    v79->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v79->__9__29_6, (int32_t)_9__29_6, v80, v81);
  }
  v82 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                      v74,
                                                                      (System_Func_TSource__TKey__o *)v75,
                                                                      (System_Func_TSource__TElement__o *)_9__29_6,
                                                                      (const MethodInfo_2D97CEC *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v82;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.linkedSquareMobilityLimitations,
    (int32_t)v82,
    v83,
    v84);
}


void __fastcall WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(0LL, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B00F28(0LL, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0LL);
}


void __fastcall WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(0LL, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1B00F28(0LL, method);
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

  if ( (byte_48E06F5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_48E06F5 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1B00F28(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_302F0F4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
  __int64 v8; // x9
  struct System_Int32_array *v9; // x10
  __int64 v10; // x11
  __int64 v11; // x12
  unsigned __int64 v12; // x8
  int32_t *v13; // x9
  __int64 v14; // x10
  __int64 v15; // x11
  int32_t v16; // w12
  char *v17; // x13

  if ( (byte_48E06F8 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    byte_48E06F8 = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, linkedSquares->max_length + 1);
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.myAndLinkedSquareIndecies, (int32_t)v5, v6, v7);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    v8 = *(_QWORD *)&result->max_length;
    if ( !(_DWORD)v8 )
      goto LABEL_13;
    result->m_Items[1] = this->fields._squareIndex_k__BackingField;
    v9 = this->fields.linkedSquares;
    if ( !v9 )
LABEL_14:
      sub_1B00F28(result, method);
    v10 = *(_QWORD *)&v9->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = (unsigned int)(v8 - 1);
      v12 = 0LL;
      v13 = &v9->m_Items[1];
      v14 = 4 * v11;
      v15 = 4LL * (unsigned int)v10;
      while ( v14 != v12 )
      {
        v16 = v13[v12 / 4];
        v17 = (char *)result + v12;
        v12 += 4LL;
        *((_DWORD *)v17 + 9) = v16;
        if ( v15 == v12 )
          return result;
      }
LABEL_13:
      sub_1B00F30(result, method);
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

  if ( (byte_48E06F4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&destination);
    byte_48E06F4 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1B00F28(0LL, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_302F0F4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_1B00F28(0LL, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0LL);
}


void __fastcall WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  __int64 v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_48E06F2 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E06F2 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v5 = this->fields.squareComponent;
    if ( !v5 )
      sub_1B00F28(0LL, v4);
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
    sub_1B00F28(0LL, method);
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
  WarBoardPieceData_o *Piece_34206296; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_48E06F1 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, isOnActionPiece);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_48E06F1 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1B00F28(Instance, v7);
  Piece_34206296 = WarBoardData__GetPiece_34206296(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_34206296 )
  {
    Instance = Piece_34206296->fields.pieceComponent;
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

  this->fields.squareComponent = component;
  sub_1B00C70(
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
    sub_1B00F28(0LL, cost);
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
  WarBoardPieceData_o *Piece_34206296; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_48E06F7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_48E06F7 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_34206296 = WarBoardData__GetPiece_34206296(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_34206296 )
  {
    squareComponent = Piece_34206296->fields.pieceComponent;
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
    sub_1B00F28(squareComponent, enable);
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
  WarBoardPieceData_o *Piece_34206296; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_48E06F6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, enable);
    byte_48E06F6 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0LL);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_34206296 = WarBoardData__GetPiece_34206296(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0LL);
    if ( Piece_34206296 )
    {
      squareComponent = Piece_34206296->fields.pieceComponent;
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
      sub_1B00F28(squareComponent, enable);
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
  WarBoardPieceData_o *Piece_34206296; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_48E06F3 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, isDispCostLabel);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_48E06F3 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0LL )
LABEL_26:
    sub_1B00F28(Instance, v7);
  Piece_34206296 = WarBoardData__GetPiece_34206296(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0LL);
  if ( Piece_34206296 )
  {
    Instance = Piece_34206296->fields.pieceComponent;
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_48E06F0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&addSquareIdx);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor___74529920, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_48E06F0 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_54149760(
    v9,
    linkedSquares,
    (const MethodInfo_33A4280 *)Method_System_Collections_Generic_List_int___ctor___74529920);
  if ( !v9
    || (items = v9->fields._items, v13 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v9->fields._version,
                                   !items) )
  {
    sub_1B00F28(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      addSquareIdx,
      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = addSquareIdx;
  }
  v15 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.linkedSquares, (int32_t)v15, v16, v17);
  this->fields.myAndLinkedSquareIndecies = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.myAndLinkedSquareIndecies, 0, v18, v19);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v20);
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


void __fastcall WarBoardSquareData_SaveData___ctor_34386572(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct WarBoardSquareData_o *v10; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  v10 = this->fields.owner;
  if ( !v10 )
    sub_1B00F28(0LL, v7);
  this->fields.squareIndex = v10->fields._squareIndex_k__BackingField;
  this->fields.flag = v10->fields.flag;
  v10->fields.localSaveData = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v10->fields.localSaveData, (int32_t)this, v8, v9);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, 0LL);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Square;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Square, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void __fastcall WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E06F9 & 1) == 0 )
  {
    sub_1B00CCC(&WarBoardSquareData___c_TypeInfo, v1);
    byte_48E06F9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)WarBoardSquareData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, 0LL);
  return x->fields.mobilityLimitId > 0;
}


int32_t __fastcall WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, x);
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
    sub_1B00F28(this, x);
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
    sub_1B00F28(this, x);
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
    sub_1B00F28(this, x);
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
    sub_1B00F28(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0LL);
}