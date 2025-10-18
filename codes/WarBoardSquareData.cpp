void WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject **v16; // x20
  int32x2_t *v17; // x8
  Il2CppObject *Master_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x23
  System_Func_object__bool__o *v25; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__bool__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  Il2CppObject *v31; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__int__o *v33; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v39; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  struct System_Int32_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  WarBoardSquareData___c_c *v44; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v46; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  Il2CppObject *v51; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x20
  System_Func_object__int__o *v53; // x21
  WarBoardSquareData___c_c *v54; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v56; // x23
  struct WarBoardSquareData___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3

  if ( (byte_4C40B66 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
    sub_1C37058(&System_Func_WarBoardRoadEntity__int__TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_Func_WarBoardRoadEntity__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardSquareData___c___ctor_b__29_4__);
    sub_1C37058(&Method_WarBoardSquareData___c___ctor_b__29_6__);
    sub_1C37058(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__);
    sub_1C37058(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__);
    sub_1C37058(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__);
    sub_1C37058(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
    sub_1C37058(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__);
    sub_1C37058(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__);
    sub_1C37058(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
    sub_1C37058(&WarBoardSquareData___c_TypeInfo);
    byte_4C40B66 = 1;
  }
  v7 = sub_1C372A4(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 24) = layoutEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)layoutEntity, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v11, v12);
  v13 = sub_1C372A4(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13
    || (*(_QWORD *)(v13 + 32) = v7,
        v16 = (Il2CppObject **)(v13 + 32),
        sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), v7, v14, v15),
        !*(_QWORD *)(v13 + 32))
    || (v17 = *(int32x2_t **)(*(_QWORD *)(v13 + 32) + 24LL)) == 0 )
  {
LABEL_22:
    sub_1C372B4(v8);
  }
  this->fields._squareIndex_k__BackingField = v17[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v17[3]);
  this->fields._evalValue_k__BackingField = v17[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v17[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v13 + 24) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)Master_object, v19, v20);
  v21 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v13 + 16) = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v21, v22, v23);
  v24 = *(Il2CppObject **)(v13 + 32);
  v25 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v25, v24, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0);
  v26 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v26,
                                                               (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v28 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v31 = *(Il2CppObject **)(v13 + 32);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  v33 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v33, v31, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v35 = System_Linq_Enumerable__ToArray_int_(
          v34,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkedSquares, (int32_t)v35, v36, v37);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v39 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v39,
    (Il2CppObject *)v13,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0);
  v40 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
  v41 = System_Linq_Enumerable__ToArray_int_(
          v40,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkedSquares, (int32_t)v41, v42, v43);
  v44 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v44 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v44->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = WarBoardSquareData___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_4, v46, Method_WarBoardSquareData___c___ctor_b__29_4__, 0);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__29_4, (int32_t)_9__29_4, v48, v49);
  }
  v50 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v51 = *v16;
  v52 = v50;
  v53 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v53, v51, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0);
  v54 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v54 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v54->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = WarBoardSquareData___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__29_6, v56, Method_WarBoardSquareData___c___ctor_b__29_6__, 0);
    v57 = WarBoardSquareData___c_TypeInfo->static_fields;
    v57->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v57->__9__29_6, (int32_t)_9__29_6, v58, v59);
  }
  v60 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                      v52,
                                                                      (System_Func_TSource__TKey__o *)v53,
                                                                      (System_Func_TSource__TElement__o *)_9__29_6,
                                                                      (const MethodInfo_3127BB8 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v60;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkedSquareMobilityLimitations, (int32_t)v60, v61, v62);
}


void WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0);
}


void WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0);
}


void WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, 0);
}


void WarBoardSquareData__DispBattleRange(WarBoardSquareData_o *this, bool isPlayerForce, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
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


int32_t WarBoardSquareData__GetMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40B6C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4C40B6C = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C372B4(0);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_33F3164 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  if ( v6 && value > 0 )
    return value;
  else
    return 0;
}


System_Int32_array *WarBoardSquareData__GetMyAndLinkedSquareIndecies(
        WarBoardSquareData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  struct System_Int32_array *linkedSquares; // x8
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *v9; // x10
  il2cpp_array_size_t v10; // x11
  __int64 v11; // x12
  unsigned __int64 v12; // x8
  int32_t *m_Items; // x9
  __int64 v14; // x10
  __int64 v15; // x11
  int32_t v16; // w12
  char *v17; // x13

  if ( (byte_4C40B6F & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C40B6F = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_1C37100(
                                        int___TypeInfo,
                                        (unsigned int)(LODWORD(linkedSquares->max_length) + 1));
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.myAndLinkedSquareIndecies, (int32_t)v5, v6, v7);
    result = this->fields.myAndLinkedSquareIndecies;
    if ( !result )
      goto LABEL_14;
    max_length = result->max_length;
    if ( !(_DWORD)max_length )
      goto LABEL_13;
    result->m_Items[0] = this->fields._squareIndex_k__BackingField;
    v9 = this->fields.linkedSquares;
    if ( !v9 )
LABEL_14:
      sub_1C372B4(result);
    v10 = v9->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = (unsigned int)(max_length - 1);
      v12 = 0;
      m_Items = v9->m_Items;
      v14 = 4 * v11;
      v15 = 4LL * (unsigned int)v10;
      while ( v14 != v12 )
      {
        v16 = m_Items[v12 / 4];
        v17 = (char *)result + v12;
        v12 += 4LL;
        *((_DWORD *)v17 + 9) = v16;
        if ( v15 == v12 )
          return result;
      }
LABEL_13:
      sub_1C372BC(result);
    }
  }
  return result;
}


bool WarBoardSquareData__HasMobilityLimitation(
        WarBoardSquareData_o *this,
        int32_t destination,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *linkedSquareMobilityLimitations; // x0
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40B6B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4C40B6B = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C372B4(0);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_33F3164 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  return v6 && value > 0;
}


bool WarBoardSquareData__IsFlag(WarBoardSquareData_o *this, int32_t checkFlag, const MethodInfo *method)
{
  return (checkFlag & ~this->fields.flag) == 0;
}


void WarBoardSquareData__NondispBattleRange(WarBoardSquareData_o *this, bool isPlayerForce, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C372B4(0);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  WarBoardSquareComponent_o *v4; // x0

  if ( (byte_4C40B69 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40B69 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    v4 = this->fields.squareComponent;
    if ( !v4 )
      sub_1C372B4(0);
    WarBoardSquareComponent__PlayUnDispCostAnim(v4, 0);
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
    sub_1C372B4(0);
  WarBoardSquareComponent__OnSelect(squareComponent, 0);
}


void WarBoardSquareData__Selectable(WarBoardSquareData_o *this, bool isOnActionPiece, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  void *Instance; // x0
  WarBoardData_o *v7; // x20
  WarBoardPieceData_o *Piece_37884744; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4C40B68 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40B68 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Selectable((WarBoardSquareComponent_o *)Instance, isOnActionPiece, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v7 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_1C372B4(Instance);
  Piece_37884744 = WarBoardData__GetPiece_37884744(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_37884744 )
  {
    Instance = Piece_37884744->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 600LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 608LL));
  }
  Item = WarBoardData__GetItem(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Effect = WarBoardData__GetEffect(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Treasure = WarBoardData__GetTreasure(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  }
  Wall = WarBoardData__GetWall(v7, this->fields._squareIndex_k__BackingField, 0, 0);
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
  const MethodInfo *v3; // x3

  this->fields.squareComponent = component;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.squareComponent, (int32_t)component, (int32_t)method, v3);
}


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
    sub_1C372B4(0);
  WarBoardSquareComponent__SetCost(squareComponent, cost, gradientTop, gradientBottom, 0);
}


void WarBoardSquareData__SetFlag(WarBoardSquareData_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.flag |= flag;
}


void WarBoardSquareData__SetSquareEnable(WarBoardSquareData_o *this, bool enable, const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v6; // x21
  WarBoardPieceData_o *Piece_37884744; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4C40B6E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40B6E = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_37884744 = WarBoardData__GetPiece_37884744(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_37884744 )
  {
    squareComponent = Piece_37884744->fields.pieceComponent;
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
    sub_1C372B4(squareComponent);
  }
}


void WarBoardSquareData__SetTouchEnable(
        WarBoardSquareData_o *this,
        bool enable,
        bool withOnObject,
        const MethodInfo *method)
{
  void *squareComponent; // x0
  WarBoardData_o *v8; // x21
  WarBoardPieceData_o *Piece_37884744; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4C40B6D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40B6D = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_37884744 = WarBoardData__GetPiece_37884744(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0);
    if ( Piece_37884744 )
    {
      squareComponent = Piece_37884744->fields.pieceComponent;
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
      sub_1C372B4(squareComponent);
    }
  }
}


void WarBoardSquareData__Unselectable(WarBoardSquareData_o *this, bool isDispCostLabel, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  void *Instance; // x0
  WarBoardData_o *v7; // x20
  WarBoardPieceData_o *Piece_37884744; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4C40B6A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40B6A = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    Instance = this->fields.squareComponent;
    if ( !Instance )
      goto LABEL_26;
    WarBoardSquareComponent__Unselectable((WarBoardSquareComponent_o *)Instance, isDispCostLabel, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v7 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_1C372B4(Instance);
  Piece_37884744 = WarBoardData__GetPiece_37884744(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_37884744 )
  {
    Instance = Piece_37884744->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 616LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 624LL));
  }
  Item = WarBoardData__GetItem(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Item )
  {
    Instance = Item->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Effect = WarBoardData__GetEffect(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Effect )
  {
    Instance = Effect->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Treasure = WarBoardData__GetTreasure(v7, this->fields._squareIndex_k__BackingField, 0);
  if ( Treasure )
  {
    Instance = Treasure->fields.component;
    if ( !Instance )
      goto LABEL_26;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 392LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  }
  Wall = WarBoardData__GetWall(v7, this->fields._squareIndex_k__BackingField, 0, 0);
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
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  struct System_Int32_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4C40B67 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C40B67 = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v6,
    linkedSquares,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  if ( !v6
    || (items = v6->fields._items, v9 = Method_System_Collections_Generic_List_int__Add__, ++v6->fields._version, !items) )
  {
    sub_1C372B4(v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      addSquareIdx,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size] = addSquareIdx;
  }
  v11 = System_Collections_Generic_List_int___ToArray(
          v6,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkedSquares, (int32_t)v11, v12, v13);
  this->fields.myAndLinkedSquareIndecies = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.myAndLinkedSquareIndecies, 0, v14, v15);
  WarBoardSquareData__GetMyAndLinkedSquareIndecies(this, v16);
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


void WarBoardSquareData_SaveData___ctor_38124036(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarBoardSquareData_o *v9; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  v9 = this->fields.owner;
  if ( !v9 )
    sub_1C372B4(0);
  this->fields.squareIndex = v9->fields._squareIndex_k__BackingField;
  this->fields.flag = v9->fields.flag;
  v9->fields.localSaveData = this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.localSaveData, (int32_t)this, v7, v8);
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

  owner = this->fields.owner;
  if ( !owner )
    sub_1C372B4(this);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.flag = owner->fields.flag;
}


void WarBoardSquareData_SaveData__SetOwner(
        WarBoardSquareData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *Square; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_1C372B4(this);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0);
  this->fields.owner = Square;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)Square, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C36FFC((CGThumbnailListItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void WarBoardSquareData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C40B70 & 1) == 0 )
  {
    sub_1C37058(&WarBoardSquareData___c_TypeInfo);
    byte_4C40B70 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardSquareData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return x->fields.mobilityLimitId > 0;
}


int32_t WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 24;
  if ( !v4 )
    v5 = 20;
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
    sub_1C372B4(this);
  v4 = x->fields.squareIndex1 == _4__this->fields._squareIndex_k__BackingField;
  v5 = 24;
  if ( !v4 )
    v5 = 20;
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
  int32_t activeCondId; // w1

  if ( !x )
    goto LABEL_6;
  activeCondId = x->fields.activeCondId;
  if ( activeCondId )
  {
    this = (WarBoardSquareData___c__DisplayClass29_1_o *)this->fields.commonReleaseMaster;
    if ( this )
      return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, activeCondId, 0);
LABEL_6:
    sub_1C372B4(this);
  }
  return 1;
}


bool WarBoardSquareData___c__DisplayClass29_1____ctor_b__3(
        WarBoardSquareData___c__DisplayClass29_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardSquareData___c__DisplayClass29_0_o *CS___8__locals1; // x8
  struct WarBoardStageLayoutEntity_o *layoutEntity; // x8
  WarBoardSquareData___c__DisplayClass29_1_o *v5; // x19
  int32_t throughCondId; // w1
  WarBoardStageLayoutEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
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
                                                         0);
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
    sub_1C372B4(this);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, throughCondId, 0);
}