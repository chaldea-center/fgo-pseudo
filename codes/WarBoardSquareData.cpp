void WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject **v29; // x20
  __int64 v30; // x2
  int32x2_t *v31; // x8
  DataManager_c *v32; // x0
  unsigned __int32 v33; // w8
  int32_t v34; // w9
  int v35; // w9
  Il2CppObject *Master_object; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x23
  System_Func_object__bool__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__bool__o *v54; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Object_array *v56; // x0
  Il2CppObject *v57; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  System_Func_object__int__o *v59; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  struct System_Int32_array *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v69; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  struct System_Int32_array *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x1
  __int64 v79; // x2
  WarBoardSquareData___c_c *v80; // x0
  struct WarBoardSquareData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v83; // x23
  struct WarBoardSquareData___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  Il2CppObject *v92; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x20
  System_Func_object__int__o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  WarBoardSquareData___c_c *v97; // x0
  struct WarBoardSquareData___c_StaticFields *v98; // x8
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v100; // x23
  struct WarBoardSquareData___c_StaticFields *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Collections_Generic_Dictionary_int__int__o *v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7

  if ( (byte_5936172 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
    sub_21FFC50(&System_Func_WarBoardRoadEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardRoadEntity__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardSquareData___c___ctor_b__29_4__);
    sub_21FFC50(&Method_WarBoardSquareData___c___ctor_b__29_6__);
    sub_21FFC50(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__);
    sub_21FFC50(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__);
    sub_21FFC50(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__);
    sub_21FFC50(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__);
    sub_21FFC50(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__);
    sub_21FFC50(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
    sub_21FFC50(&WarBoardSquareData___c_TypeInfo);
    byte_5936172 = 1;
  }
  v7 = sub_21FFEBC(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 24) = layoutEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)layoutEntity, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = sub_21FFEBC(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  if ( !v22
    || (*(_QWORD *)(v22 + 32) = v7,
        v29 = (Il2CppObject **)(v22 + 32),
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), v7, v23, v24, v25, v26, v27, v28),
        !*(_QWORD *)(v22 + 32))
    || (v31 = *(int32x2_t **)(*(_QWORD *)(v22 + 32) + 24LL)) == 0 )
  {
LABEL_22:
    sub_21FFECC(v8, v9);
  }
  this->fields._squareIndex_k__BackingField = v31[2].n64_i32[1];
  v32 = DataManager_TypeInfo;
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v31[3]);
  v34 = v31[8].n64_i32[0];
  v33 = v31[8].n64_u32[1];
  this->fields._evalValue_k__BackingField = v34;
  v35 = *(&v32->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields._imageId_k__BackingField = v33;
  if ( !v35 )
    j_il2cpp_runtime_class_init_0(v32, v9, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v22 + 24) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 24), (int32_t)Master_object, v37, v38, v39, v40, v41, v42);
  v43 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v22 + 16) = v43;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 16), (int32_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = *(Il2CppObject **)(v22 + 32);
  v51 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v51, v50, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0);
  v52 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v51,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v52,
                                                               (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v54 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v54,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0);
  v55 = System_Linq_Enumerable__Where_object_(
          v53,
          (System_Func_TSource__bool__o *)v54,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v56 = System_Linq_Enumerable__ToArray_object_(
          v55,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v57 = *(Il2CppObject **)(v22 + 32);
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  v59 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v59, v57, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0);
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v58,
                                                               (System_Func_TSource__TResult__o *)v59,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v61 = System_Linq_Enumerable__ToArray_int_(
          v60,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v61;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedSquares,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v69 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v69,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0);
  v70 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v69,
          (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
  v71 = System_Linq_Enumerable__ToArray_int_(
          v70,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v71;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedSquares,
    (int32_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v80 = WarBoardSquareData___c_TypeInfo;
  if ( !*(&WarBoardSquareData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo, v78, v79);
    v80 = WarBoardSquareData___c_TypeInfo;
  }
  static_fields = v80->static_fields;
  _9__29_4 = (System_Func_object__bool__o *)static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !*(&v80->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v80, v78, v79);
      static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_4, v83, Method_WarBoardSquareData___c___ctor_b__29_4__, 0);
    v84 = WarBoardSquareData___c_TypeInfo->static_fields;
    v84->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->__9__29_4, (int32_t)_9__29_4, v85, v86, v87, v88, v89, v90);
  }
  v91 = System_Linq_Enumerable__Where_object_(
          v58,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v92 = *v29;
  v93 = v91;
  v94 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v94, v92, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0);
  v97 = WarBoardSquareData___c_TypeInfo;
  if ( !*(&WarBoardSquareData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo, v95, v96);
    v97 = WarBoardSquareData___c_TypeInfo;
  }
  v98 = v97->static_fields;
  _9__29_6 = (System_Func_object__int__o *)v98->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !*(&v97->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v97, v95, v96);
      v98 = WarBoardSquareData___c_TypeInfo->static_fields;
    }
    v100 = (Il2CppObject *)v98->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__29_6, v100, Method_WarBoardSquareData___c___ctor_b__29_6__, 0);
    v101 = WarBoardSquareData___c_TypeInfo->static_fields;
    v101->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v101->__9__29_6,
      (int32_t)_9__29_6,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
  }
  v108 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                       v93,
                                                                       (System_Func_TSource__TKey__o *)v94,
                                                                       (System_Func_TSource__TElement__o *)_9__29_6,
                                                                       (const MethodInfo_3868FB0 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v108;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedSquareMobilityLimitations,
    (int32_t)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
}


void WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__ActiveEditPointArrow(squareComponent, 0);
}


bool WarBoardSquareData__CheckMobilityLimitation(
        WarBoardSquareData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  return 1;
}


void WarBoardSquareData__DeactiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0);
}


void WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0);
}


void WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__DispBattleRange(WarBoardSquareData_o *this, bool isPlayerForce, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__EnableEditPosition(squareComponent, 0);
}


int32_t WarBoardSquareData__GetCost(WarBoardSquareData_o *this, int32_t linkedSquare, const MethodInfo *method)
{
  return 5;
}


int32_t WarBoardSquareData__GetHeuristicCost(
        WarBoardSquareData_o *this,
        WarBoardPieceData_o *piece,
        int32_t linkedSquare,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardSquareData__GetMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5936178 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_5936178 = 1;
  }
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  value = 0;
  if ( !linkedSquareMobilityLimitations )
    sub_21FFECC(0, *(_QWORD *)&destination);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_3F60DE4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value & ~(value >> 31);
  }
  else
  {
    return 0;
  }
}


System_Int32_array *WarBoardSquareData__GetMyAndLinkedSquareIndecies(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  struct System_Int32_array *linkedSquares; // x8
  struct System_Int32_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *v13; // x10
  unsigned __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x11
  int32_t *m_Items; // x10
  int32_t v18; // w12
  char *v19; // x13

  if ( (byte_593617B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593617B = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_21FFD10(
                                        int___TypeInfo,
                                        (unsigned int)(LODWORD(linkedSquares->max_length) + 1));
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.myAndLinkedSquareIndecies,
      (int32_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    max_length = result->max_length;
    if ( !(_DWORD)max_length )
      goto LABEL_13;
    v13 = this->fields.linkedSquares;
    result->m_Items[0] = this->fields._squareIndex_k__BackingField;
    if ( !v13 )
LABEL_14:
      sub_21FFECC(result, method);
    if ( (int)v13->max_length >= 1 )
    {
      v14 = 0;
      v15 = 4LL * (unsigned int)(max_length - 1);
      v16 = 4LL * (unsigned int)v13->max_length;
      m_Items = v13->m_Items;
      while ( v15 != v14 )
      {
        v18 = m_Items[v14 / 4];
        v19 = (char *)result + v14;
        v14 += 4LL;
        *((_DWORD *)v19 + 9) = v18;
        if ( v16 == v14 )
          return result;
      }
LABEL_13:
      sub_21FFED4(result);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardSquareData__HasMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5936177 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_5936177 = 1;
  }
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  value = 0;
  if ( !linkedSquareMobilityLimitations )
    sub_21FFECC(0, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_3F60DE4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  return v6 && value > 0;
}


bool WarBoardSquareData__IsFlag(WarBoardSquareData_o *this, int32_t checkFlag, const MethodInfo *method)
{
  return (checkFlag & ~this->fields.flag) == 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__NondispBattleRange(WarBoardSquareData_o *this, bool isPlayerForce, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *squareComponent; // x20
  __int64 v5; // x1
  WarBoardSquareComponent_o *v6; // x0

  if ( (byte_5936175 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936175 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    v6 = this->fields.squareComponent;
    if ( !v6 )
      sub_21FFECC(0, v5);
    WarBoardSquareComponent__PlayUnDispCostAnim(v6, 0);
  }
}


void WarBoardSquareData__RemoveFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag &= ~flag;
}


void WarBoardSquareData__ResetFlag(WarBoardSquareData_o *this, const MethodInfo *method)
{
  this->fields.flag = 0;
}


void WarBoardSquareData__Select(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, method);
  WarBoardSquareComponent__OnSelect(squareComponent, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__Selectable(WarBoardSquareData_o *this, bool isOnActionPiece, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_5936174 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936174 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOnActionPiece, method);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_21FFECC(Instance, v6);
  Piece_44763860 = WarBoardData__GetPiece_44763860(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_44763860 )
  {
    Instance = Piece_44763860->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0);
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


void WarBoardSquareData__SetComponent(
        WarBoardSquareData_o *this,
        WarBoardSquareComponent_o *component,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.squareComponent = component;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareComponent,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__SetCostLabel(
        WarBoardSquareData_o *this,
        int32_t cost,
        UnityEngine_Color_o gradientTop,
        UnityEngine_Color_o gradientBottom,
        const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_21FFECC(0, *(_QWORD *)&cost);
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, 0);
}


void WarBoardSquareData__SetFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag |= flag;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__SetSquareEnable(WarBoardSquareData_o *this, bool enable, const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v6; // x21
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_593617A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593617A = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_44763860 = WarBoardData__GetPiece_44763860(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_44763860 )
  {
    squareComponent = Piece_44763860->fields.pieceComponent;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardPieceBaseComponent__SetColliderEnable((WarBoardPieceBaseComponent_o *)squareComponent, enable, 0);
  }
  Item = WarBoardData__GetItem(v6, this->fields._squareIndex_k__BackingField, 0);
  if ( Item )
  {
    squareComponent = Item->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardItemComponent__SetColliderEnable((WarBoardItemComponent_o *)squareComponent, enable, 0);
  }
  Effect = WarBoardData__GetEffect(v6, this->fields._squareIndex_k__BackingField, 0);
  if ( Effect )
  {
    squareComponent = Effect->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardEffectComponent__SetColliderEnable((WarBoardEffectComponent_o *)squareComponent, enable, 0);
  }
  Treasure = WarBoardData__GetTreasure(v6, this->fields._squareIndex_k__BackingField, 0);
  if ( Treasure )
  {
    squareComponent = Treasure->fields.component;
    if ( !squareComponent )
      goto LABEL_22;
    WarBoardTreasureComponent__SetColliderEnable((WarBoardTreasureComponent_o *)squareComponent, enable, 0);
  }
  Wall = WarBoardData__GetWall(v6, this->fields._squareIndex_k__BackingField, 0, 0);
  if ( Wall )
  {
    squareComponent = Wall->fields.component;
    if ( squareComponent )
    {
      WarBoardWallComponent__SetColliderEnable((WarBoardWallComponent_o *)squareComponent, enable, 0);
      return;
    }
LABEL_22:
    sub_21FFECC(squareComponent, enable);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__SetTouchEnable(
        WarBoardSquareData_o *this,
        bool enable,
        bool withOnObject,
        const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v8; // x21
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_5936179 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936179 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_44763860 = WarBoardData__GetPiece_44763860(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0);
    if ( Piece_44763860 )
    {
      squareComponent = Piece_44763860->fields.pieceComponent;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardPieceBaseComponent__SetTouchEnable((WarBoardPieceBaseComponent_o *)squareComponent, enable, 0);
    }
    Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0);
    if ( Item )
    {
      squareComponent = Item->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardItemComponent__SetTouchEnable((WarBoardItemComponent_o *)squareComponent, enable, 0);
    }
    Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0);
    if ( Effect )
    {
      squareComponent = Effect->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardEffectComponent__SetTouchEnable((WarBoardEffectComponent_o *)squareComponent, enable, 0);
    }
    Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0);
    if ( Treasure )
    {
      squareComponent = Treasure->fields.component;
      if ( !squareComponent )
        goto LABEL_23;
      WarBoardTreasureComponent__SetTouchEnable((WarBoardTreasureComponent_o *)squareComponent, enable, 0);
    }
    Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0);
    if ( Wall )
    {
      squareComponent = Wall->fields.component;
      if ( squareComponent )
      {
        WarBoardWallComponent__SetTouchEnable((WarBoardWallComponent_o *)squareComponent, enable, 0);
        return;
      }
LABEL_23:
      sub_21FFECC(squareComponent, enable);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareData__Unselectable(WarBoardSquareData_o *this, bool isDispCostLabel, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_5936176 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936176 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDispCostLabel, method);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_21FFECC(Instance, v6);
  Piece_44763860 = WarBoardData__GetPiece_44763860(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_44763860 )
  {
    Instance = Piece_44763860->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v8, this->fields._squareIndex_k__BackingField, 0);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v8, this->fields._squareIndex_k__BackingField, 0, 0);
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


void WarBoardSquareData__UpdateLinkedSquareList(
        WarBoardSquareData_o *this,
        int32_t addSquareIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *linkedSquares; // x23
  System_Collections_Generic_List_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1

  if ( (byte_5936173 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5936173 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71510500(
    v6,
    linkedSquares,
    (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  if ( !v6
    || (items = v6->fields._items, v10 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v6->fields._version,
                                   !items) )
  {
    sub_21FFECC(v7, v8);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      addSquareIdx,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size] = addSquareIdx;
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          v6,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedSquares,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.myAndLinkedSquareIndecies = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myAndLinkedSquareIndecies,
    0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v25);
}


WarBoardSquareComponent_o *WarBoardSquareData__get_Component(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields.squareComponent;
}


System_Int32_array *WarBoardSquareData__get_LinkedSquares(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields.linkedSquares;
}


int32_t WarBoardSquareData__get_effectId(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._effectId_k__BackingField;
}


int32_t WarBoardSquareData__get_evalValue(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._evalValue_k__BackingField;
}


int32_t WarBoardSquareData__get_imageId(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._imageId_k__BackingField;
}


int32_t WarBoardSquareData__get_squareIndex(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardSquareData__get_type(WarBoardSquareData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField;
}


void WarBoardSquareData__set_effectId(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._effectId_k__BackingField = value;
}


void WarBoardSquareData__set_evalValue(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._evalValue_k__BackingField = value;
}


void WarBoardSquareData__set_imageId(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._imageId_k__BackingField = value;
}


void WarBoardSquareData__set_squareIndex(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void WarBoardSquareData__set_type(WarBoardSquareData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type_k__BackingField = value;
}


void WarBoardSquareData_SaveData___ctor(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.squareIndex = 0xFFFFFFFFLL;
}


void WarBoardSquareData_SaveData___ctor_45001112(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct WarBoardSquareData_o *v18; // x0
  MissionNaviTransitionBoardItem_o *p_localSaveData; // x0
  int32_t v20; // w9

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_21FFECC(0, v11);
  v18->fields.localSaveData = this;
  p_localSaveData = (MissionNaviTransitionBoardItem_o *)&v18->fields.localSaveData;
  v20 = *(&p_localSaveData[-1].fields._BoardType_k__BackingField + 1);
  this->fields.squareIndex = (int32_t)p_localSaveData[-1].fields._IconName_k__BackingField;
  this->fields.flag = v20;
  sub_21FFBF4(p_localSaveData, (int32_t)this, v12, v13, v14, v15, v16, v17);
}


void WarBoardSquareData_SaveData__Load(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardSquareData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    owner->fields.flag = this->fields.flag;
}


void WarBoardSquareData_SaveData__Save(WarBoardSquareData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardSquareData_o *owner; // x8
  int32_t squareIndex_k__BackingField; // w9
  int32_t flag; // w8

  owner = this->fields.owner;
  if ( !owner )
    sub_21FFECC(this, method);
  squareIndex_k__BackingField = owner->fields._squareIndex_k__BackingField;
  flag = owner->fields.flag;
  this->fields.squareIndex = squareIndex_k__BackingField;
  this->fields.flag = flag;
}


void WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *Square; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_21FFECC(this, 0);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0);
  this->fields.owner = Square;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)Square, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&owner->fields.localSaveData,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593617C & 1) == 0 )
  {
    sub_21FFC50(&WarBoardSquareData___c_TypeInfo);
    byte_593617C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardSquareData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardSquareData___c___ctor(WarBoardSquareData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardSquareData___c____ctor_b__29_4(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.mobilityLimitId > 0;
}


int32_t WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.mobilityLimitId;
}


void WarBoardSquareData___c__DisplayClass29_0___ctor(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardSquareData___c__DisplayClass29_0____ctor_b__0(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  int32_t squareIndex_k__BackingField; // w8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_21FFECC(this, x);
  squareIndex_k__BackingField = _4__this->fields._squareIndex_k__BackingField;
  return x->fields.squareIndex1 == squareIndex_k__BackingField || x->fields.squareIndex2 == squareIndex_k__BackingField;
}


int32_t WarBoardSquareData___c__DisplayClass29_0____ctor_b__2(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  bool v4; // zf
  __int64 v5; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_21FFECC(this, x);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 20;
  if ( v4 )
    v5 = 24;
  return *(_DWORD *)((char *)&x->klass + v5);
}


int32_t WarBoardSquareData___c__DisplayClass29_0____ctor_b__5(
        WarBoardSquareData___c__DisplayClass29_0_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *_4__this; // x8
  bool v4; // zf
  __int64 v5; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_21FFECC(this, x);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 20;
  if ( v4 )
    v5 = 24;
  return *(_DWORD *)((char *)&x->klass + v5);
}


void WarBoardSquareData___c__DisplayClass29_1___ctor(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardSquareData___c__DisplayClass29_1____ctor_b__1(
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
      return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, (int32_t)x, 0);
LABEL_6:
    sub_21FFECC(this, x);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardSquareData___c__DisplayClass29_1____ctor_b__3(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData___c__DisplayClass29_0_o *CS___8__locals1; // x8
  struct WarBoardStageLayoutEntity_o *layoutEntity; // x8
  WarBoardSquareData___c__DisplayClass29_1_o *v5; // x19
  WarBoardStageLayoutEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  CS___8__locals1 = this->fields.CS___8__locals1;
  entity = 0;
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
                                                         0);
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
    sub_21FFECC(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0);
}