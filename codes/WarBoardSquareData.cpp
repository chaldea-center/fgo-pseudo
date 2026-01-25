void WarBoardSquareData___ctor(
        WarBoardSquareData_o *this,
        WarBoardStageLayoutEntity_o *layoutEntity,
        WarBoardRoadEntity_array *roadEntities,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject **v29; // x20
  int32x2_t *v30; // x8
  Il2CppObject *Master_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  Il2CppObject *v45; // x23
  System_Func_object__bool__o *v46; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__bool__o *v49; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Object_array *v51; // x0
  Il2CppObject *v52; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__int__o *v54; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  struct System_Int32_array *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x24
  System_Func_int__bool__o *v64; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  struct System_Int32_array *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  WarBoardSquareData___c_c *v73; // x0
  System_Func_object__bool__o *_9__29_4; // x22
  Il2CppObject *v75; // x23
  struct WarBoardSquareData___c_StaticFields *static_fields; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  Il2CppObject *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x20
  System_Func_object__int__o *v86; // x21
  WarBoardSquareData___c_c *v87; // x0
  System_Func_object__int__o *_9__29_6; // x22
  Il2CppObject *v89; // x23
  struct WarBoardSquareData___c_StaticFields *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7

  if ( (byte_4CEC17D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
    sub_1C7BAE8(&System_Func_WarBoardRoadEntity__int__TypeInfo);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_WarBoardRoadEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_WarBoardSquareData___c___ctor_b__29_4__);
    sub_1C7BAE8(&Method_WarBoardSquareData___c___ctor_b__29_6__);
    sub_1C7BAE8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__);
    sub_1C7BAE8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__);
    sub_1C7BAE8(&Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__);
    sub_1C7BAE8(&WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
    sub_1C7BAE8(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__);
    sub_1C7BAE8(&Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__);
    sub_1C7BAE8(&WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
    sub_1C7BAE8(&WarBoardSquareData___c_TypeInfo);
    byte_4CEC17D = 1;
  }
  v7 = sub_1C7BD34(WarBoardSquareData___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 24) = layoutEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)layoutEntity, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = sub_1C7BD34(WarBoardSquareData___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  if ( !v22
    || (*(_QWORD *)(v22 + 32) = v7,
        v29 = (Il2CppObject **)(v22 + 32),
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 32), v7, v23, v24, v25, v26, v27, v28),
        !*(_QWORD *)(v22 + 32))
    || (v30 = *(int32x2_t **)(*(_QWORD *)(v22 + 32) + 24LL)) == 0 )
  {
LABEL_22:
    sub_1C7BD40(v8, v9);
  }
  this->fields._squareIndex_k__BackingField = v30[2].n64_i32[1];
  *(int32x2_t *)&this->fields._effectId_k__BackingField = vrev64_s32(v30[3]);
  this->fields._evalValue_k__BackingField = v30[8].n64_i32[0];
  this->fields._imageId_k__BackingField = v30[8].n64_i32[1];
  this->fields.flag = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarBoardStageLayoutMaster___);
  *(_QWORD *)(v22 + 24) = Master_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 24), (int32_t)Master_object, v32, v33, v34, v35, v36, v37);
  v38 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  *(_QWORD *)(v22 + 16) = v38;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 16), (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = *(Il2CppObject **)(v22 + 32);
  v46 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v46, v45, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__0__, 0);
  v47 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)roadEntities,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v47,
                                                               (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v49 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__1__,
    0);
  v50 = System_Linq_Enumerable__Where_object_(
          v48,
          (System_Func_TSource__bool__o *)v49,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v51 = System_Linq_Enumerable__ToArray_object_(
          v50,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardRoadEntity___);
  v52 = *(Il2CppObject **)(v22 + 32);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v51;
  v54 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v54, v52, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__2__, 0);
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v53,
                                                               (System_Func_TSource__TResult__o *)v54,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_WarBoardRoadEntity__int___);
  v56 = System_Linq_Enumerable__ToArray_int_(
          v55,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v56;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkedSquares, (int32_t)v56, v57, v58, v59, v60, v61, v62);
  linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.linkedSquares;
  v64 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v64,
    (Il2CppObject *)v22,
    Method_WarBoardSquareData___c__DisplayClass29_1___ctor_b__3__,
    0);
  v65 = System_Linq_Enumerable__Where_int_(
          linkedSquares,
          (System_Func_TSource__bool__o *)v64,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  v66 = System_Linq_Enumerable__ToArray_int_(
          v65,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.linkedSquares = v66;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkedSquares, (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v73 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_4 = (System_Func_object__bool__o *)v73->static_fields->__9__29_4;
  if ( !_9__29_4 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = WarBoardSquareData___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__29_4 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_4, v75, Method_WarBoardSquareData___c___ctor_b__29_4__, 0);
    static_fields = WarBoardSquareData___c_TypeInfo->static_fields;
    static_fields->__9__29_4 = (struct System_Func_WarBoardRoadEntity__bool__o *)_9__29_4;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_4,
      (int32_t)_9__29_4,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  v83 = System_Linq_Enumerable__Where_object_(
          v53,
          (System_Func_TSource__bool__o *)_9__29_4,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_WarBoardRoadEntity___);
  v84 = *v29;
  v85 = v83;
  v86 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__int__TypeInfo);
  System_Func_object__int____ctor(v86, v84, Method_WarBoardSquareData___c__DisplayClass29_0___ctor_b__5__, 0);
  v87 = WarBoardSquareData___c_TypeInfo;
  if ( !WarBoardSquareData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSquareData___c_TypeInfo);
    v87 = WarBoardSquareData___c_TypeInfo;
  }
  _9__29_6 = (System_Func_object__int__o *)v87->static_fields->__9__29_6;
  if ( !_9__29_6 )
  {
    if ( !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      v87 = WarBoardSquareData___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v87->static_fields->__9;
    _9__29_6 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardRoadEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__29_6, v89, Method_WarBoardSquareData___c___ctor_b__29_6__, 0);
    v90 = WarBoardSquareData___c_TypeInfo->static_fields;
    v90->__9__29_6 = (struct System_Func_WarBoardRoadEntity__int__o *)_9__29_6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v90->__9__29_6, (int32_t)_9__29_6, v91, v92, v93, v94, v95, v96);
  }
  v97 = (struct System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                                      v85,
                                                                      (System_Func_TSource__TKey__o *)v86,
                                                                      (System_Func_TSource__TElement__o *)_9__29_6,
                                                                      (const MethodInfo_31AFAA8 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardRoadEntity__int__int___);
  this->fields.linkedSquareMobilityLimitations = v97;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkedSquareMobilityLimitations,
    (int32_t)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
}


void WarBoardSquareData__ActiveEditPointArrow(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
  WarBoardSquareComponent__DeactiveEditPointArrow(squareComponent, 0);
}


void WarBoardSquareData__Deselect(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C7BD40(0, method);
  WarBoardSquareComponent__OnDeselect(squareComponent, 0);
}


void WarBoardSquareData__DisableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C7BD40(0, method);
  WarBoardSquareComponent__DisableEditPosition(squareComponent, 0);
}


void WarBoardSquareData__DispBattleRange(WarBoardSquareData_o *this, bool isPlayerForce, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C7BD40(0, isPlayerForce);
  WarBoardSquareComponent__DispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__EnableEditPosition(WarBoardSquareData_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *squareComponent; // x0

  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    sub_1C7BD40(0, method);
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
  bool v6; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEC183 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4CEC183 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C7BD40(0, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_34802F0 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *v13; // x10
  il2cpp_array_size_t v14; // x11
  __int64 v15; // x12
  unsigned __int64 v16; // x8
  int32_t *m_Items; // x9
  __int64 v18; // x10
  __int64 v19; // x11
  int32_t v20; // w12
  char *v21; // x13

  if ( (byte_4CEC186 & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEC186 = 1;
  }
  result = this->fields.myAndLinkedSquareIndecies;
  if ( !result )
  {
    linkedSquares = this->fields.linkedSquares;
    if ( !linkedSquares )
      goto LABEL_14;
    v5 = (struct System_Int32_array *)sub_1C7BB90(
                                        int___TypeInfo,
                                        (unsigned int)(LODWORD(linkedSquares->max_length) + 1));
    this->fields.myAndLinkedSquareIndecies = v5;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.myAndLinkedSquareIndecies,
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
    result->m_Items[0] = this->fields._squareIndex_k__BackingField;
    v13 = this->fields.linkedSquares;
    if ( !v13 )
LABEL_14:
      sub_1C7BD40(result, method);
    v14 = v13->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (unsigned int)(max_length - 1);
      v16 = 0;
      m_Items = v13->m_Items;
      v18 = 4 * v15;
      v19 = 4LL * (unsigned int)v14;
      while ( v18 != v16 )
      {
        v20 = m_Items[v16 / 4];
        v21 = (char *)result + v16;
        v16 += 4LL;
        *((_DWORD *)v21 + 9) = v20;
        if ( v19 == v16 )
          return result;
      }
LABEL_13:
      sub_1C7BD48(result);
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

  if ( (byte_4CEC182 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4CEC182 = 1;
  }
  value = 0;
  linkedSquareMobilityLimitations = this->fields.linkedSquareMobilityLimitations;
  if ( !linkedSquareMobilityLimitations )
    sub_1C7BD40(0, *(_QWORD *)&destination);
  v6 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
         linkedSquareMobilityLimitations,
         destination,
         &value,
         (const MethodInfo_34802F0 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
    sub_1C7BD40(0, isPlayerForce);
  WarBoardSquareComponent__NondispBattleRange(squareComponent, isPlayerForce, 0);
}


void WarBoardSquareData__PlayUnDispCostAnim(WarBoardSquareData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x20
  __int64 v4; // x1
  WarBoardSquareComponent_o *v5; // x0

  if ( (byte_4CEC180 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC180 = 1;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    v5 = this->fields.squareComponent;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    WarBoardSquareComponent__PlayUnDispCostAnim(v5, 0);
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
    sub_1C7BD40(0, method);
  WarBoardSquareComponent__OnSelect(squareComponent, 0);
}


void WarBoardSquareData__Selectable(WarBoardSquareData_o *this, bool isOnActionPiece, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_38350852; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4CEC17F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC17F = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_1C7BD40(Instance, v6);
  Piece_38350852 = WarBoardData__GetPiece_38350852(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_38350852 )
  {
    Instance = Piece_38350852->fields.pieceComponent;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.squareComponent = component;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.squareComponent,
    (int32_t)component,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(0, cost);
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
  WarBoardPieceData_o *Piece_38350852; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4CEC185 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC185 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_22;
  WarBoardSquareComponent__SetButtonEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !squareComponent )
    goto LABEL_22;
  v6 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
  if ( !v6 )
    goto LABEL_22;
  Piece_38350852 = WarBoardData__GetPiece_38350852(
                     *((WarBoardData_o **)squareComponent + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_38350852 )
  {
    squareComponent = Piece_38350852->fields.pieceComponent;
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
    sub_1C7BD40(squareComponent, enable);
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
  WarBoardPieceData_o *Piece_38350852; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4CEC184 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC184 = 1;
  }
  squareComponent = this->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_23;
  WarBoardSquareComponent__SetTouchEnable((WarBoardSquareComponent_o *)squareComponent, enable, 0);
  if ( withOnObject )
  {
    squareComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !squareComponent )
      goto LABEL_23;
    v8 = (WarBoardData_o *)*((_QWORD *)squareComponent + 55);
    if ( !v8 )
      goto LABEL_23;
    Piece_38350852 = WarBoardData__GetPiece_38350852(
                       *((WarBoardData_o **)squareComponent + 55),
                       this->fields._squareIndex_k__BackingField,
                       0);
    if ( Piece_38350852 )
    {
      squareComponent = Piece_38350852->fields.pieceComponent;
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
      sub_1C7BD40(squareComponent, enable);
    }
  }
}


void WarBoardSquareData__Unselectable(WarBoardSquareData_o *this, bool isDispCostLabel, const MethodInfo *method)
{
  UnityEngine_Object_o *squareComponent; // x21
  __int64 v6; // x1
  void *Instance; // x0
  WarBoardData_o *v8; // x20
  WarBoardPieceData_o *Piece_38350852; // x0
  WarBoardItemData_o *Item; // x0
  WarBoardEffectData_o *Effect; // x0
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardWallData_o *Wall; // x0

  if ( (byte_4CEC181 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC181 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55)) == 0 )
LABEL_26:
    sub_1C7BD40(Instance, v6);
  Piece_38350852 = WarBoardData__GetPiece_38350852(
                     *((WarBoardData_o **)Instance + 55),
                     this->fields._squareIndex_k__BackingField,
                     0);
  if ( Piece_38350852 )
  {
    Instance = Piece_38350852->fields.pieceComponent;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1

  if ( (byte_4CEC17E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEC17E = 1;
  }
  linkedSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.linkedSquares;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58857132(
    v6,
    linkedSquares,
    (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
  if ( !v6
    || (items = v6->fields._items, v10 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v6->fields._version,
                                   !items) )
  {
    sub_1C7BD40(v7, v8);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      addSquareIdx,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size] = addSquareIdx;
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          v6,
          (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.linkedSquares = v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkedSquares, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  this->fields.myAndLinkedSquareIndecies = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.myAndLinkedSquareIndecies, 0, v19, v20, v21, v22, v23, v24);
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


void WarBoardSquareData_SaveData___ctor_38590164(
        WarBoardSquareData_SaveData_o *this,
        WarBoardSquareData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct WarBoardSquareData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_1C7BD40(0, v11);
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.flag = v18->fields.flag;
  v18->fields.localSaveData = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->fields.localSaveData, (int32_t)this, v12, v13, v14, v15, v16, v17);
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
    sub_1C7BD40(this, method);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardSquareData_o *owner; // x0

  if ( !data )
    sub_1C7BD40(this, 0);
  Square = WarBoardData__GetSquare(data, this->fields.squareIndex, 0);
  this->fields.owner = Square;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)Square, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&owner->fields.localSaveData,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEC187 & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardSquareData___c_TypeInfo);
    byte_4CEC187 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(WarBoardSquareData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSquareData___c_TypeInfo->static_fields->__9 = (struct WarBoardSquareData___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarBoardSquareData___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return x->fields.mobilityLimitId > 0;
}


int32_t WarBoardSquareData___c____ctor_b__29_6(
        WarBoardSquareData___c_o *this,
        WarBoardRoadEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, x);
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
    sub_1C7BD40(this, x);
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
    sub_1C7BD40(this, x);
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
  if ( !x )
    goto LABEL_6;
  x = (WarBoardRoadEntity_o *)(unsigned int)x->fields.activeCondId;
  if ( (_DWORD)x )
  {
    this = (WarBoardSquareData___c__DisplayClass29_1_o *)this->fields.commonReleaseMaster;
    if ( this )
      return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, (int32_t)x, 0);
LABEL_6:
    sub_1C7BD40(this, x);
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
  *(_QWORD *)&x = (unsigned int)entity->fields.throughCondId;
  if ( !x )
    return 1;
  this = (WarBoardSquareData___c__DisplayClass29_1_o *)v5->fields.commonReleaseMaster;
  if ( !this )
LABEL_12:
    sub_1C7BD40(this, *(_QWORD *)&x);
  return WarBoardCommonReleaseMaster__IsOpen((WarBoardCommonReleaseMaster_o *)this, x, 0);
}