void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_49FF7A7 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_49FF7A7 = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BA3BC0;
  static_fields->DISABLED_COLOR.fields.a = 1.0;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___ctor(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.classIconSpaceOffsetY = 20.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__CompareClassId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  struct System_Int32_array *arrayForSort; // x13
  unsigned __int64 max_length; // x9
  int v6; // w10
  int v7; // w8
  unsigned __int64 v8; // x11
  int32_t *v9; // x13
  int32_t v10; // w14

  arrayForSort = this->fields.arrayForSort;
  if ( !arrayForSort )
    goto LABEL_15;
  max_length = arrayForSort->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = &arrayForSort->m_Items[1];
    while ( a )
    {
      if ( v8 >= max_length )
        sub_1B6432C(this, a);
      if ( !b )
        break;
      v10 = v9[v8];
      if ( a->fields.classId == v10 )
        v7 = v8;
      if ( b->fields.classId == v10 )
        v6 = v8;
      if ( (__int64)++v8 >= (int)max_length )
        return v7 - v6;
    }
LABEL_15:
    sub_1B64324(this);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
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
  System_Collections_Generic_List_int__o *v18; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v19; // x0
  _BOOL8 v20; // x0
  int32_t klass_high; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Int32_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FF7A0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_49FF7A0 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    entityList);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v20 )
      break;
    if ( !v34.fields._current )
      sub_1B64324(v20);
    if ( !v18 )
      sub_1B64324(v20);
    klass_high = HIDWORD(v34.fields._current[1].klass);
    items = v18->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1B64324(v20);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_high,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v19->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v28->static_fields->Extra2SortOrderClassIds;
      goto LABEL_24;
    }
    if ( v18 )
    {
      v30 = System_Collections_Generic_List_int___ToArray(
              v18,
              (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1B64324(v19);
  }
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v26->static_fields->Extra1SortOrderClassIds;
LABEL_24:
  v29 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_2E75428 *)Method_System_Linq_Enumerable_Union_int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.arrayForSort, (int32_t)v30, v31, v32);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__GetBaseId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


float __fastcall ClassBoardEffectListDialogSkillListComponent__GetListItemHeight(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *skillDispDataList; // x8
  ClassBoardEffectListDialogSkillDetailComponent_o *v9; // x20
  const MethodInfo *v10; // x2

  v6 = this;
  if ( (byte_49FF7A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B640C8(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_49FF7A2 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v9 )
  {
    sub_1B64324(this);
  }
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           v9,
           (System_String_o *)this->fields.m_CancellationTokenSource,
           v10);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x0
  Il2CppObject *Master_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_T__TResult__o *v24; // x22
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v28; // x3
  ClassBoardSquareEntity_array *v29; // x21

  if ( (byte_49FF7A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_1B640C8(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v14);
    sub_1B640C8(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      v15);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo, v16);
    byte_49FF7A4 = 1;
  }
  v17 = sub_1B64314(
          ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo,
          *(_QWORD *)&dispType,
          ignoreTurnOrCountPassive);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B64324(v18);
  *(_DWORD *)(v17 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v17 + 16) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Master_object, v20, v21);
  if ( openedSquareIdArray )
  {
    v24 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__ClassBoardSquareEntity__TypeInfo, v22, v23);
    System_Func_int__object____ctor(
      v24,
      (Il2CppObject *)v17,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v24,
                                                           (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v26 = BasicHelper__ExcludeNull_object_(
            v25,
            (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v17 + 24), 0LL);
  }
  v29 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v29,
           dispType,
           ignoreTurnOrCountPassive,
           v28);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  int32_t v4; // w29
  __int64 v6; // x1
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  System_Collections_Generic_List_object__o *v58; // x19
  Il2CppObject *IsPassive; // x0
  Il2CppObject *v60; // x21
  Il2CppObject *v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  signed int max_length; // w8
  signed int v67; // w27
  ClassBoardSquareEntity_o *v68; // x28
  System_Collections_Generic_List_object__o *v69; // x19
  Il2CppObject *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  System_Collections_Generic_List_object__o *v73; // x19
  Il2CppObject *v74; // x0
  FuncDispEntity_o *v75; // x19
  SkillLvEntity_o *v76; // x23
  System_Collections_Generic_List_object__o *v77; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v80; // x20
  const MethodInfo *v81; // x5
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Collections_Generic_List_object__o *v88; // x29
  _BOOL8 v89; // x0
  Il2CppObject *current; // x26
  __int64 v91; // x1
  __int64 v92; // x2
  Il2CppObject *v93; // x0
  Il2CppObject *v94; // x22
  __int64 v95; // x1
  __int64 v96; // x2
  System_Collections_Generic_List_object__o *v97; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v99; // x19
  System_Collections_Generic_List_object__o *v100; // x23
  __int64 v101; // x1
  __int64 v102; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v103; // x20
  const MethodInfo *v104; // x5
  __int64 v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v121; // x22
  const MethodInfo *v122; // x7
  __int64 v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  System_String_o *v134; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v136; // w19
  int32_t v137; // w23
  int32_t v138; // w24
  int32_t v139; // w25
  System_String_o *v140; // x26
  __int64 v141; // x1
  __int64 v142; // x2
  const MethodInfo *v143; // x7
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x8
  System_Collections_Generic_List_object__o *v148; // x0
  _BOOL8 v149; // x0
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v152; // x0
  Il2CppObject *v153; // x0
  _DWORD *v154; // x8
  Il2CppObject *v155; // x0
  Il2CppObject *v156; // x0
  Il2CppClass *v157; // x8
  __int64 v158; // x25
  int32_t v159; // w24
  Il2CppObject *v160; // x19
  __int64 v161; // x0
  __int64 v162; // x1
  _DWORD *v163; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v165; // x8
  __int64 v166; // x10
  unsigned __int64 v167; // x9
  __int64 v168; // x10
  unsigned __int64 v169; // x12
  int v170; // w13
  _DWORD *v171; // x8
  int32_t v172; // w8
  Il2CppObject *v173; // x0
  const MethodInfo *v174; // x2
  Il2CppClass *v175; // x8
  System_String_o *data; // x19
  System_String_o *v177; // x25
  Il2CppObject *v178; // x0
  _DWORD *v179; // x8
  int32_t v180; // w26
  Il2CppObject *v181; // x0
  _DWORD *v182; // x8
  int32_t v183; // w20
  Il2CppObject *v184; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  _DWORD *v187; // x8
  int32_t v188; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v189; // x22
  const MethodInfo *v190; // x7
  __int64 v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  __int64 v198; // x1
  __int64 v199; // x2
  ClassBoardEffectListDialogSkillListComponent___c_c *v200; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v202; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v204; // w2
  int32_t v205; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v206; // x0
  __int64 v207; // x1
  __int64 v208; // x2
  ClassBoardEffectListDialogSkillListComponent___c_c *v209; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v210; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v212; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v213; // x0
  int32_t v214; // w2
  int32_t v215; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v216; // x0
  int32_t v219; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v220; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v222; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v223; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v224; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v225; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v226; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v227; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v228; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v229; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v230; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v231; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v232; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v234; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_49FF7A5 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v21);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v24);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v27);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v29);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v30);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_1B640C8(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_1B640C8(&int___TypeInfo, v33);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v35);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v41);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v44);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_1B640C8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v47);
    sub_1B640C8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_1B640C8(&Method_System_String_Join_int___, v52);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__, v53);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__, v54);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v55);
    sub_1B640C8(&StringLiteral_869/*","*/, v56);
    sub_1B640C8(&StringLiteral_1/*""*/, v57);
    byte_49FF7A5 = 1;
  }
  v234 = 0LL;
  entity = 0LL;
  v232 = 0LL;
  entitys = 0LL;
  memset(&v231, 0, sizeof(v231));
  v230 = 0LL;
  v228 = 0LL;
  memset(&v229, 0, sizeof(v229));
  memset(&v227, 0, sizeof(v227));
  v58 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                       *(_QWORD *)&dispType,
                                                       ignoreTurnOrCountPassive);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v58;
  v224 = v58;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v220 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v223 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                      v62,
                                                                      v63);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v223,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    v225 = (FuncDispMaster_o *)v61;
    v219 = v4;
    v222 = openedSquareArray;
    do
    {
      if ( v67 >= (unsigned int)max_length )
        sub_1B6432C(IsPassive, v64);
      v68 = openedSquareArray->m_Items[v67];
      v69 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo,
                                                           v64,
                                                           v65);
      System_Collections_Generic_List_object____ctor(
        v69,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v69;
      if ( !v68 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v68, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v68, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v220;
          if ( !v220 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v220,
                                        &entitys,
                                        v68->fields.targetId,
                                        v68->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v88 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                 v64,
                                                                 v65);
            System_Collections_Generic_List_object____ctor(
              v88,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v226,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v231.fields._list = *(_OWORD *)&v226.fields._dictionary;
            v231.fields._current = v226.fields._current.fields.key;
            while ( 1 )
            {
              v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v231,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v61 = (Il2CppObject *)v225;
              if ( !v89 )
                break;
              current = v231.fields._current;
              if ( !v231.fields._current )
                sub_1B64324(v89);
              if ( !v225 )
                sub_1B64324(v89);
              if ( FuncDispMaster__IsContainFuncIds(
                     v225,
                     &v230,
                     (System_Int32_array *)v231.fields._current[3].klass,
                     0LL) )
              {
                v93 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_869/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
                if ( !v88 )
                  sub_1B64324(v93);
                v94 = v93;
                if ( !System_Collections_Generic_List_object___Contains(
                        v88,
                        v93,
                        (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v223 )
                    sub_1B64324(0LL);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v223,
                          v94,
                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v97 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                         System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                         v95,
                                                                         v96);
                    System_Collections_Generic_List_object____ctor(
                      v97,
                      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v223,
                      v94,
                      (Il2CppObject *)v97,
                      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v223,
                           v94,
                           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v99 = v230;
                  v100 = (System_Collections_Generic_List_object__o *)Item;
                  v103 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v101,
                                                                                                v102);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v103,
                    v99,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v68,
                    v104);
                  if ( !v100 )
                    sub_1B64324(v105);
                  items = v100->fields._items;
                  v109 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v100->fields._version;
                  if ( !items )
                    sub_1B64324(v105);
                  size = v100->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v100,
                      (Il2CppObject *)v103,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v111 = &items->obj.klass + size;
                    v100->fields._size = size + 1;
                    v111[4] = (Il2CppClass *)v103;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v111 + 4), (int32_t)v103, v106, v107);
                  }
                  v130 = v88->fields._items;
                  v131 = Method_System_Collections_Generic_List_string__Add__;
                  ++v88->fields._version;
                  if ( !v130 )
                    sub_1B64324(v112);
                  v132 = v88->fields._size;
                  if ( (unsigned int)v132 >= v130->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v88,
                      v94,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v133 = &v130->obj.klass + v132;
                    v88->fields._size = v132 + 1;
                    v133[4] = (Il2CppClass *)v94;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v133 + 4), (int32_t)v94, v113, v114);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v68->fields.priority;
                id = v68->fields.id;
                iconId = v68->fields.iconId;
                skillType = v68->fields.skillType;
                v121 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B64314(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v91,
                                                                                         v92);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v121,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v122);
                if ( !v224 )
                  sub_1B64324(v123);
                v126 = v224->fields._items;
                v127 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v224->fields._version;
                if ( !v126 )
                  sub_1B64324(v123);
                v128 = v224->fields._size;
                if ( (unsigned int)v128 >= v126->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v224,
                    (Il2CppObject *)v121,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                }
                else
                {
                  v129 = &v126->obj.klass + v128;
                  v224->fields._size = v128 + 1;
                  v129[4] = (Il2CppClass *)v121;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 4), (int32_t)v121, v124, v125);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v231,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v219;
          }
        }
        goto LABEL_61;
      }
      if ( v4 != 2 )
      {
        IsPassive = (Il2CppObject *)Master_object;
        if ( !Master_object )
          goto LABEL_159;
        IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      Master_object,
                                      &entity,
                                      v68->fields.targetId,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v60,
                                        &v234,
                                        v68->fields.targetId,
                                        v68->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v234;
            if ( !v234 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v234, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v234 || !v61 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v61,
                                            &v232,
                                            v234->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v234 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_869/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v234->fields.funcId,
                                              (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
                if ( !v223 )
                  goto LABEL_159;
                v70 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v223,
                        IsPassive,
                        (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v73 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                       v71,
                                                                       v72);
                  System_Collections_Generic_List_object____ctor(
                    v73,
                    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v223,
                    v70,
                    (Il2CppObject *)v73,
                    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v74 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v223,
                        v70,
                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v75 = v232;
                v76 = v234;
                v77 = (System_Collections_Generic_List_object__o *)v74;
                v80 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                             ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                             v78,
                                                                                             v79);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v80, v75, v76, 0LL, v68, v81);
                if ( !v77 )
                  goto LABEL_159;
                v84 = v77->fields._items;
                v85 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v77->fields._version;
                if ( !v84 )
                  goto LABEL_159;
                v86 = v77->fields._size;
                if ( (unsigned int)v86 >= v84->max_length )
                {
                  v147 = v85[4];
                  v148 = v77;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v148,
                    (Il2CppObject *)v80,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v147 + 192) + 112LL));
                  goto LABEL_61;
                }
                v87 = &v84->obj.klass + v86;
                v77->fields._size = v86 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v134 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v136 = v68->fields.priority;
                v137 = v68->fields.id;
                v138 = v68->fields.iconId;
                v139 = v68->fields.skillType;
                v140 = EffectExplanation;
                v80 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                             ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                             v141,
                                                                                             v142);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v80,
                  v134,
                  v140,
                  v137,
                  v136,
                  v138,
                  v139,
                  v143);
                if ( !v224 )
                  goto LABEL_159;
                v144 = v224->fields._items;
                v145 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v224->fields._version;
                if ( !v144 )
                  goto LABEL_159;
                v146 = v224->fields._size;
                v61 = (Il2CppObject *)v225;
                if ( (unsigned int)v146 >= v144->max_length )
                {
                  v147 = v145[4];
                  v148 = v224;
                  goto LABEL_72;
                }
                v87 = &v144->obj.klass + v146;
                v224->fields._size = v146 + 1;
              }
              v87[4] = (Il2CppClass *)v80;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v80, v82, v83);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v222;
      ++v67;
      max_length = v222->max_length;
    }
    while ( v67 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v223;
  if ( !v223 )
LABEL_159:
    sub_1B64324(IsPassive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v226,
    v223,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v229 = v226;
  while ( 1 )
  {
    v149 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v229,
             (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v149 )
      break;
    value = v229.fields._current.fields.value;
    if ( !v229.fields._current.fields.value )
      sub_1B64324(v149);
    if ( SLODWORD(v229.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v152 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v229.fields._current.fields.value,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v152 )
        sub_1B64324(0LL);
      if ( v152[1].monitor )
      {
        v153 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v153 )
          sub_1B64324(0LL);
        v154 = v153[1].monitor;
        if ( !v154 )
          sub_1B64324(v153);
        if ( !Master_object )
          sub_1B64324(0LL);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v228,
               v154[4],
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v228 )
            sub_1B64324(0LL);
          Name = SkillEntity__getName((SkillEntity_o *)v228, 0LL);
        }
      }
      else
      {
        v155 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v155 )
          sub_1B64324(0LL);
        if ( v155[2].klass )
        {
          v156 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v156 )
            sub_1B64324(0LL);
          v157 = v156[2].klass;
          if ( !v157 )
            sub_1B64324(v156);
          Name = (System_String_o *)v157->_1.byval_arg.data;
        }
      }
      v158 = sub_1B64170(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v226,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v159 = 0;
      *(_OWORD *)&v227.fields._list = *(_OWORD *)&v226.fields._dictionary;
      v227.fields._current = v226.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v227,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v227,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v173 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v173 )
          sub_1B64324(0LL);
        v175 = v173[1].klass;
        if ( !v175 )
          sub_1B64324(v173);
        data = (System_String_o *)v175->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v177 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v158,
                 v174);
        v178 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v178 )
          sub_1B64324(0LL);
        v179 = v178[2].monitor;
        if ( !v179 )
          sub_1B64324(v178);
        v180 = v179[5];
        v181 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v181 )
          sub_1B64324(0LL);
        v182 = v181[2].monitor;
        if ( !v182 )
          sub_1B64324(v181);
        v183 = v182[6];
        v184 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v184 )
          sub_1B64324(0LL);
        v187 = v184[2].monitor;
        if ( !v187 )
          sub_1B64324(v184);
        v188 = v187[14];
        v189 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B64314(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v185,
                                                                                 v186);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v189,
          Name,
          v177,
          v180,
          v159,
          v183,
          v188,
          v190);
        if ( !v224 )
          sub_1B64324(v191);
        v194 = v224->fields._items;
        v195 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v224->fields._version;
        if ( !v194 )
          sub_1B64324(v191);
        v196 = v224->fields._size;
        if ( (unsigned int)v196 >= v194->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v224,
            (Il2CppObject *)v189,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
        }
        else
        {
          v197 = &v194->obj.klass + v196;
          v224->fields._size = v196 + 1;
          v197[4] = (Il2CppClass *)v189;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 4), (int32_t)v189, v192, v193);
        }
        continue;
      }
      v160 = v227.fields._current;
      v161 = sub_1B64170(int___TypeInfo, 0LL);
      if ( !v160 )
        sub_1B64324(v161);
      v163 = v160[1].monitor;
      if ( v163 )
      {
        if ( !v60 )
          sub_1B64324(v161);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v60,
                                                               v163[4],
                                                               v163[5],
                                                               0LL);
LABEL_110:
        v165 = (__int64)DispValFromSkill;
      }
      else
      {
        v165 = v161;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v160[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v158 )
        sub_1B64324(DispValFromSkill);
      v166 = *(_QWORD *)(v158 + 24);
      if ( v166 )
      {
        if ( (int)v166 >= 1 )
        {
          v167 = 0LL;
          v168 = (unsigned int)*(_QWORD *)(v158 + 24);
          do
          {
            if ( !v165 )
              sub_1B64324(DispValFromSkill);
            if ( v167 >= *(unsigned int *)(v165 + 24) )
              sub_1B6432C(DispValFromSkill, v162);
            v169 = v158 + 4 * v167;
            v170 = *(_DWORD *)(v165 + 32 + 4 * v167++);
            *(_DWORD *)(v169 + 32) += v170;
          }
          while ( v168 != v167 );
        }
      }
      else
      {
        v158 = v165;
      }
      v171 = v160[2].monitor;
      if ( !v171 )
        sub_1B64324(DispValFromSkill);
      v172 = v171[20];
      if ( v172 > v159 )
        v159 = v172;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v229,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v200->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v200->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v200);
      v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v202 = (Il2CppObject *)v200->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v198,
                                               v199);
    System_Func_object__int____ctor(
      _9__32_0,
      v202,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v204, v205);
  }
  v206 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v224,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v209 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v210 = v206;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v209 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v209->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v209->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v209);
      v209 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v212 = (Il2CppObject *)v209->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v207,
                                               v208);
    System_Func_object__int____ctor(
      _9__32_1,
      v212,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v213 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v213->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v213->__9__32_1, (int32_t)_9__32_1, v214, v215);
  }
  v216 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v210,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v216, (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent__IsSupport(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


System_String_o *__fastcall ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x29
  System_String_o *v18; // x0
  System_String_o *v19; // x28
  System_String_o *v20; // x0
  System_String_o *v21; // x27
  System_String_o *v22; // x0
  System_String_o *v23; // x26
  System_String_o *v24; // x0
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  System_String_o *v27; // x24
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x20
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  System_String_o *v41; // x20
  unsigned __int64 v42; // x8
  System_String_o *v43; // x20
  unsigned __int64 v44; // x8
  System_String_o *v45; // x20
  unsigned __int64 v46; // x8
  System_String_o *v47; // x20
  unsigned __int64 v48; // x8
  int v50; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v51; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FF7A6 & 1) == 0 )
  {
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_1B640C8(&StringLiteral_25028/*"{x"*/, v5);
    sub_1B640C8(&StringLiteral_24815/*"{"*/, v6);
    sub_1B640C8(&StringLiteral_24746/*"xx}"*/, v7);
    sub_1B640C8(&StringLiteral_24745/*"xxx}"*/, v8);
    sub_1B640C8(&StringLiteral_25052/*"}"*/, v9);
    sub_1B640C8(&StringLiteral_25031/*"{xxxx"*/, v10);
    sub_1B640C8(&StringLiteral_25029/*"{xx"*/, v11);
    sub_1B640C8(&StringLiteral_24744/*"xxxx}"*/, v12);
    sub_1B640C8(&StringLiteral_24747/*"x}"*/, v13);
    sub_1B640C8(&StringLiteral_25030/*"{xxx"*/, v14);
    byte_49FF7A6 = 1;
  }
  v50 = 0;
  if ( funcVals )
  {
    v15 = *(_QWORD *)&funcVals->max_length;
    if ( v15 )
    {
      v51 = 0;
      if ( (int)v15 >= 1 )
      {
        do
        {
          v16 = System_Int32__ToString((int32_t)&v51, 0LL);
          v17 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v16,
                  (System_String_o *)StringLiteral_24744/*"xxxx}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v51, 0LL);
          v19 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v18,
                  (System_String_o *)StringLiteral_24745/*"xxx}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v51, 0LL);
          v21 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v20,
                  (System_String_o *)StringLiteral_24746/*"xx}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v51, 0LL);
          v23 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v22,
                  (System_String_o *)StringLiteral_24747/*"x}"*/,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v51, 0LL);
          v25 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v51, 0LL);
          v27 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25028/*"{x"*/,
                  v26,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v51, 0LL);
          v29 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25029/*"{xx"*/,
                  v28,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v51, 0LL);
          v31 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25030/*"{xxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v51, 0LL);
          v33 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25031/*"{xxxx"*/,
                  v32,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v35 = v33;
          v50 = 10000 * funcVals->m_Items[v51 + 1];
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(text, v17, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v37 = v33;
          v50 = 1000 * funcVals->m_Items[v51 + 1];
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v37, v19, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v38 = v33;
          v50 = 100 * funcVals->m_Items[v51 + 1];
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v38 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v38, v21, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v39 = v33;
          v50 = 10 * funcVals->m_Items[v51 + 1];
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v39, v23, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v40 = v33;
          v36 = System_Int32__ToString((unsigned int)funcVals + 4 * v51 + 32, 0LL);
          if ( !v40 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v40, v25, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v41 = v33;
          v42 = 1717986919LL * funcVals->m_Items[v51 + 1];
          v50 = (v42 >> 63) + (SHIDWORD(v42) >> 2);
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v41, v27, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v43 = v33;
          v44 = 1374389535LL * funcVals->m_Items[v51 + 1];
          v50 = (v44 >> 63) + (SHIDWORD(v44) >> 5);
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v43, v29, v36, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_29;
          v45 = v33;
          v46 = 274877907LL * funcVals->m_Items[v51 + 1];
          v50 = (v46 >> 63) + (SHIDWORD(v46) >> 6);
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
            goto LABEL_30;
          v33 = System_String__Replace_61395016(v45, v31, v36, 0LL);
          if ( v51 >= funcVals->max_length )
LABEL_29:
            sub_1B6432C(v33, v34);
          v47 = v33;
          v48 = 1759218605LL * funcVals->m_Items[v51 + 1];
          v50 = (v48 >> 63) + (SHIDWORD(v48) >> 12);
          v36 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v47 )
LABEL_30:
            sub_1B64324(v36);
          text = System_String__Replace_61395016(v47, v35, v36, 0LL);
          ++v51;
        }
        while ( (signed int)v51 < (signed int)funcVals->max_length );
      }
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      return SkillDetailParamFormatResolver__ApplyGivenValues(text, funcVals, 0LL);
    }
  }
  return text;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
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
  ClassBoardClassMaster_o *Master_object; // x0
  const MethodInfo *v26; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v30; // w23
  System_Collections_Generic_List_object__o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Comparison_T__o *v34; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v36; // x22
  float v37; // s8
  BalanceConfig_c *v38; // x0
  ClassBoardClassEntity_o *current; // x23
  BalanceConfig_c *v40; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v42; // x22
  Il2CppObject *Component_object; // x24
  _BOOL8 v44; // x0
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v46; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v49; // x0
  struct UIGrid_o *v50; // x8
  UnityEngine_Object_o *v51; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v53; // s8
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x20
  UnityEngine_GameObject_o *v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF79F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, classBoardBaseEntity);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, v9);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v10);
    sub_1B640C8(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_3473/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v24);
    byte_49FF79F = 1;
  }
  entitys = 0LL;
  memset(&v60, 0, sizeof(v60));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_69;
  if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v28->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_17;
  v30 = classBoardBaseEntity->fields.id;
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v30 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_17:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v26);
    v31 = (System_Collections_Generic_List_object__o *)entitys;
    v34 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ClassBoardClassEntity__TypeInfo, v32, v33);
    System_Comparison_object____ctor(
      v34,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v31 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_55243320(
      v31,
      v34,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v36 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3473/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
    if ( !v36 )
      goto LABEL_69;
    UILabel__set_text(v36, (System_String_o *)Master_object, 0LL);
  }
  Master_object = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_69;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v37 = 0.0;
  v60 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v38 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v60.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1B64324(v38);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->AvailableValidIds,
           current->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v40 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      if ( v40->static_fields->AvailableValidBaseId != current->fields.classId )
        continue;
    }
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v42 = Object;
    if ( !Object )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v44 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v44 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1B64324(v44);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, current->fields.classId, 0LL);
    if ( !supportClassBoard )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
LABEL_45:
      if ( IsOpen )
        goto LABEL_49;
      goto LABEL_46;
    }
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
            0LL) )
    {
      IsOpen = System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                 current->fields.classId,
                 (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_45;
    }
LABEL_46:
    v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_object,
      v46->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v42, 0LL);
    if ( !classIconGrid )
      sub_1B64324(transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v42, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v42, 1, 0LL);
    v50 = this->fields.classIconGrid;
    if ( !v50 )
      sub_1B64324(v49);
    v37 = v37 + (float)(v50->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v51 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
    if ( !Master_object )
      goto LABEL_69;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    v53 = -v37;
    GameObjectExtensions__AddLocalPositionX(gameObject, v53, 0LL);
    Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_object )
      goto LABEL_69;
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__AddLocalPositionX(v54, v53, 0LL);
    if ( !isAll
      && System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( Master_object )
      {
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        v56 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v57 = v55;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v56 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        GameObjectExtensions__AddLocalPositionX(v57, v56->static_fields->classIconOneDispFixPosY, 0LL);
        Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
        if ( Master_object )
        {
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          GameObjectExtensions__AddLocalPositionX(
            v58,
            ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
            0LL);
          goto LABEL_64;
        }
      }
LABEL_69:
      sub_1B64324(Master_object);
    }
  }
LABEL_64:
  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
  if ( !Master_object )
    goto LABEL_69;
  ((void (__fastcall *)(ClassBoardClassMaster_o *, void *))Master_object->klass->vtable._8_OnListChangedImplementation.method)(
    Master_object,
    Master_object->klass[1]._1.image);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetDisp(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetIcon(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  ClassBoardEffectListDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1B64324(0LL);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__SetList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  int32_t v9; // w23
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
  __int64 v32; // x1
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v37; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v38; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v40; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  bool v44; // w0
  int v45; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v46; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v47; // x8
  int32_t v48; // w23
  int v49; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v52; // x22
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  int32_t v56; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v63; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  struct ScrollItemRecycler_o *v68; // x8
  System_Func_T1__T2__TResult__o *v69; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  ScrollItemRecycler_HeightCalculatorVarious_o *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v77; // x22
  System_Action_T1__T2__o *v78; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v80; // x21
  float v81; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v84; // x22
  Il2CppObject *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  ClassBoardEffectListDialogSkillDetailComponent_o *v88; // x23
  __int64 v89; // x0
  const MethodInfo *v90; // x6
  float v91; // s8
  __int64 v92; // x1
  System_String_o *v93; // x0
  System_String_o *v94; // x22
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_49FF7A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__int__TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&Method_System_Array_Empty_int___, v11);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v12);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v13);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15);
    sub_1B640C8(&DataManager_TypeInfo, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v17);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v19);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v20);
    sub_1B640C8(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v21);
    sub_1B640C8(&System_Func_GameObject__int__float__TypeInfo, v22);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v23);
    sub_1B640C8(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v24);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v25);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v26);
    sub_1B640C8(&LocalizationManager_TypeInfo, v27);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B640C8(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__, v29);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v30);
    sub_1B640C8(&StringLiteral_3472/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v31);
    sub_1B640C8(&StringLiteral_3471/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v32);
    byte_49FF7A3 = 1;
  }
  entitys = 0LL;
  memset(&v96, 0, sizeof(v96));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v9, 0LL) )
  {
    v37 = entitys;
    v38 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v38 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__bool__o *)v38->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__30_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardClassEntity__bool__TypeInfo, v34, v35);
      System_Func_object__bool____ctor(
        _9__30_0,
        v40,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v42, v43);
    }
    v44 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v37,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v45 = v44;
  }
  else
  {
    v45 = 1;
  }
  v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v47 = v46->static_fields;
  if ( v9 == v47->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v48 = baseIda;
  if ( !v46->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v46);
    v47 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v48 == v47->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v49 = 1;
  }
  else
  {
    classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classInfoObject, 0LL, 0LL) )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
      if ( !Master_object )
        goto LABEL_98;
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   0LL);
      if ( !Master_object )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    v49 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v52 = Method_System_Array_Empty_int___;
      v53 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v53 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v53 = v52[7];
      }
      v54 = *(_QWORD *)(v53 + 16);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1BB5FA4(v54);
      if ( !*(_DWORD *)(v54 + 224) )
        j_il2cpp_runtime_class_init_0(v54);
      v55 = *(_QWORD *)(v52[7] + 16LL);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1BB5FA4(v55);
      squareIds = **(System_Int32_array ***)(v55 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v56 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v56, dispType, 0, squareIds, v36);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v59, v60);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1B64324(Master_object);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3471/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v80 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
      {
        Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
        if ( !Master_object )
          goto LABEL_98;
        Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)Master_object,
                                                     0LL);
        if ( !Master_object )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      }
    }
    else
    {
      if ( (v49 & v45) != 0 )
      {
        v93 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v94 = System_String__Concat_61375396((System_String_o *)StringLiteral_3472/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v93, 0LL);
      }
      else
      {
        v94 = (System_String_o *)StringLiteral_3471/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v94, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
    }
    Master_object = (ClassBoardClassMaster_o *)this->fields.allClosedLabel;
    if ( !Master_object )
      goto LABEL_98;
    Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    if ( !v7 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.scrollView;
      if ( !Master_object )
        goto LABEL_98;
      UIScrollView__UpdatePosition((UIScrollView_o *)Master_object, 0LL);
    }
  }
  else
  {
    if ( !v7 )
      goto LABEL_50;
    p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
    skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
LABEL_50:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v63 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      recycler = (UnityEngine_Object_o *)this->fields.recycler;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(recycler, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( (v7 & v49) != 0 )
        {
          v68 = this->fields.recycler;
          if ( !v68 )
            goto LABEL_98;
          v68->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v69 = (System_Func_T1__T2__TResult__o *)sub_1B64314(System_Func_GameObject__int__float__TypeInfo, v66, v67);
        System_Func_object__int__float____ctor(
          v69,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v72 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1B64314(
                                                                ScrollItemRecycler_HeightCalculatorVarious_TypeInfo,
                                                                v70,
                                                                v71);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v72, (System_Func_GameObject__int__float__o *)v69, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v77 = this->fields.recycler;
          v78 = (System_Action_T1__T2__o *)sub_1B64314(System_Action_GameObject__int__TypeInfo, v73, v74);
          System_Action_object__int____ctor(
            v78,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v77 )
          {
            ScrollItemRecycler__Init(
              v77,
              size,
              v63,
              (System_Action_GameObject__int__o *)v78,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v72,
              0LL);
            Master_object = (ClassBoardClassMaster_o *)this->fields.recycler;
            if ( Master_object )
            {
              ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_object, 0LL);
              return;
            }
          }
        }
        goto LABEL_98;
      }
      Master_object = (ClassBoardClassMaster_o *)*p_skillDispDataList;
      if ( !*p_skillDispDataList )
        goto LABEL_98;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v95,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v81 = 0.0;
      v96 = v95;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v96,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v96.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v63, 0LL, 0LL, 0LL);
        v84 = Object;
        if ( !Object )
          sub_1B64324(0LL);
        v85 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v88 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v85;
        if ( !v85 )
          sub_1B64324(0LL);
        v85[5].monitor = this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85[5].monitor, (int32_t)this, v86, v87);
        if ( !current )
          sub_1B64324(v89);
        v91 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v88,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v90);
        GameObjectExtensions__SetParent_33381176(v84, this->fields.skillListParent, 0LL);
        if ( !byte_49F7116 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v92);
          byte_49F7116 = 1;
        }
        GameObjectExtensions__SetLocalScale(v84, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_33375564(v84, 0.0, -v81, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v84, 1, 0LL);
        v81 = v81 + v91;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v96,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ClassBoardEffectListDialogSkillDetailComponent_o *v10; // x21
  const MethodInfo *v11; // x6

  v6 = this;
  if ( (byte_49FF7A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B640C8(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_49FF7A1 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v10 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillListParent, (int32_t)v6, v8, v9),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1B64324(this);
  }
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v10,
    *(System_String_o **)&this->fields.m_CachedPtr,
    (System_String_o *)this->fields.m_CancellationTokenSource,
    (int32_t)this->fields.classIconGrid,
    HIDWORD(this->fields.classIconGrid),
    0,
    v11);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v15,
    v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquareEntity,
    (int32_t)classBoardSquareEntity,
    v17,
    v18);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t squareId,
        int32_t priority,
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v14, (int32_t)detail, v17, v18);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF7A8 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_49FF7A8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___ctor(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return !ClassBoardClassEntity__IsOpen(entity, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardSquareEntity_o *__fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1B64324(0LL);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}