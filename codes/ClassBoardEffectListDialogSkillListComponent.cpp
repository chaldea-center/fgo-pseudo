void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_4A0C022 & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_4A0C022 = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BA7050;
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
        sub_1B68938(this, a);
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
    sub_1B68930(this, a);
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
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A0C01B & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B686D4(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4A0C01B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v18 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v36.fields._current )
      sub_1B68930(v21, v22);
    if ( !v18 )
      sub_1B68930(v21, v22);
    klass_high = HIDWORD(v36.fields._current[1].klass);
    items = v18->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1B68930(v21, klass_high);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_high,
        *(const MethodInfo_349F254 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v30->static_fields->Extra2SortOrderClassIds;
      goto LABEL_24;
    }
    if ( v18 )
    {
      v32 = System_Collections_Generic_List_int___ToArray(
              v18,
              (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1B68930(v19, v20);
  }
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v28->static_fields->Extra1SortOrderClassIds;
LABEL_24:
  v31 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_2E85EA0 *)Method_System_Linq_Enumerable_Union_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v32;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.arrayForSort, (int32_t)v32, v33, v34);
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
  if ( (byte_4A0C01D & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B686D4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4A0C01D = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v9 )
  {
    sub_1B68930(this, obj);
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
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Func_T__TResult__o *v23; // x22
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v27; // x3
  ClassBoardSquareEntity_array *v28; // x21

  if ( (byte_4A0C01F & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_1B686D4(&DataManager_TypeInfo, v11);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_1B686D4(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v14);
    sub_1B686D4(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      v15);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo, v16);
    byte_4A0C01F = 1;
  }
  v17 = sub_1B68920(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B68930(v18, v19);
  *(_DWORD *)(v17 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v17 + 16) = Master_object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Master_object, v21, v22);
  if ( openedSquareIdArray )
  {
    v23 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v23,
      (Il2CppObject *)v17,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v23,
                                                           (const MethodInfo_2E77C5C *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v25 = BasicHelper__ExcludeNull_object_(
            v24,
            (const MethodInfo_2E35AA4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v17 + 24), 0LL);
  }
  v28 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v28,
           dispType,
           ignoreTurnOrCountPassive,
           v27);
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
  __int64 v60; // x1
  Il2CppObject *v61; // x21
  Il2CppObject *v62; // x24
  signed int max_length; // w8
  signed int v64; // w27
  ClassBoardSquareEntity_o *v65; // x28
  System_Collections_Generic_List_object__o *v66; // x19
  Il2CppObject *v67; // x20
  System_Collections_Generic_List_object__o *v68; // x19
  Il2CppObject *v69; // x0
  FuncDispEntity_o *v70; // x19
  SkillLvEntity_o *v71; // x23
  System_Collections_Generic_List_object__o *v72; // x22
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v73; // x20
  const MethodInfo *v74; // x5
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_Collections_Generic_List_object__o *v81; // x29
  _BOOL8 v82; // x0
  __int64 v83; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  Il2CppObject *v87; // x22
  __int64 v88; // x1
  System_Collections_Generic_List_object__o *v89; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v91; // x19
  System_Collections_Generic_List_object__o *v92; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v93; // x20
  const MethodInfo *v94; // x5
  __int64 v95; // x0
  __int64 v96; // x1
  int32_t v97; // w2
  int32_t v98; // w3
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  Il2CppClass **v102; // x0
  __int64 v103; // x0
  __int64 v104; // x1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v113; // x22
  const MethodInfo *v114; // x7
  __int64 v115; // x0
  __int64 v116; // x1
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  System_String_o *v127; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v129; // w19
  int32_t v130; // w23
  int32_t v131; // w24
  int32_t v132; // w25
  System_String_o *v133; // x26
  const MethodInfo *v134; // x7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  System_Collections_Generic_List_object__o *v139; // x0
  _BOOL8 v140; // x0
  __int64 v141; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  Il2CppObject *v146; // x0
  __int64 v147; // x1
  _DWORD *v148; // x8
  __int64 v149; // x1
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  Il2CppClass *v154; // x8
  __int64 v155; // x25
  int32_t v156; // w24
  Il2CppObject *v157; // x19
  __int64 v158; // x0
  __int64 v159; // x1
  _DWORD *v160; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v162; // x8
  __int64 v163; // x10
  unsigned __int64 v164; // x9
  __int64 v165; // x10
  unsigned __int64 v166; // x12
  int v167; // w13
  _DWORD *v168; // x8
  int32_t v169; // w8
  Il2CppObject *v170; // x0
  __int64 v171; // x1
  const MethodInfo *v172; // x2
  Il2CppClass *v173; // x8
  System_String_o *data; // x19
  System_String_o *v175; // x25
  Il2CppObject *v176; // x0
  __int64 v177; // x1
  _DWORD *v178; // x8
  int32_t v179; // w26
  Il2CppObject *v180; // x0
  __int64 v181; // x1
  _DWORD *v182; // x8
  int32_t v183; // w20
  Il2CppObject *v184; // x0
  __int64 v185; // x1
  _DWORD *v186; // x8
  int32_t v187; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v188; // x22
  const MethodInfo *v189; // x7
  __int64 v190; // x0
  __int64 v191; // x1
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v198; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v200; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v204; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v205; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v206; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v208; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v212; // x0
  int32_t v215; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v216; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v218; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v219; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v220; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v221; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v222; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v224; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v225; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v226; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v227; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v228; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v230; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4A0C020 & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_1B686D4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1B686D4(&DataManager_TypeInfo, v11);
    sub_1B686D4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_1B686D4(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_1B686D4(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B686D4(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1B686D4(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v21);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v24);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v27);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v28);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v29);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v30);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_1B686D4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_1B686D4(&int___TypeInfo, v33);
    sub_1B686D4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v35);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v41);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v42);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v44);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_1B686D4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v47);
    sub_1B686D4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_1B686D4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_1B686D4(&Method_System_String_Join_int___, v52);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__, v53);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__, v54);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v55);
    sub_1B686D4(&StringLiteral_868/*","*/, v56);
    sub_1B686D4(&StringLiteral_1/*""*/, v57);
    byte_4A0C020 = 1;
  }
  v230 = 0LL;
  entity = 0LL;
  v228 = 0LL;
  entitys = 0LL;
  memset(&v227, 0, sizeof(v227));
  v226 = 0LL;
  v224 = 0LL;
  memset(&v225, 0, sizeof(v225));
  memset(&v223, 0, sizeof(v223));
  v58 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v58;
  v220 = v58;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SkillMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v216 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v219 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v219,
    (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    v221 = (FuncDispMaster_o *)v62;
    v215 = v4;
    v218 = openedSquareArray;
    do
    {
      if ( v64 >= (unsigned int)max_length )
        sub_1B68938(IsPassive, v60);
      v65 = openedSquareArray->m_Items[v64];
      v66 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v66,
        (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v66;
      if ( !v65 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v65, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v65, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v216;
          if ( !v216 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v216,
                                        &entitys,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v81 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v81,
              (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v222,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v227.fields._list = *(_OWORD *)&v222.fields._dictionary;
            v227.fields._current = v222.fields._current.fields.key;
            while ( 1 )
            {
              v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v227,
                      (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v62 = (Il2CppObject *)v221;
              if ( !v82 )
                break;
              current = v227.fields._current;
              if ( !v227.fields._current )
                sub_1B68930(v82, v83);
              if ( !v221 )
                sub_1B68930(v82, v83);
              if ( FuncDispMaster__IsContainFuncIds(
                     v221,
                     &v226,
                     (System_Int32_array *)v227.fields._current[3].klass,
                     0LL) )
              {
                v85 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_868/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2EEB378 *)Method_System_String_Join_int___);
                if ( !v81 )
                  sub_1B68930(v85, v86);
                v87 = v85;
                if ( !System_Collections_Generic_List_object___Contains(
                        v81,
                        v85,
                        (const MethodInfo_34BC608 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v219 )
                    sub_1B68930(0LL, v88);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v219,
                          v87,
                          (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v89 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v89,
                      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v219,
                      v87,
                      (Il2CppObject *)v89,
                      (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v219,
                           v87,
                           (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v91 = v226;
                  v92 = (System_Collections_Generic_List_object__o *)Item;
                  v93 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v93,
                    v91,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v65,
                    v94);
                  if ( !v92 )
                    sub_1B68930(v95, v96);
                  items = v92->fields._items;
                  v100 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v92->fields._version;
                  if ( !items )
                    sub_1B68930(v95, v96);
                  size = v92->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v92,
                      (Il2CppObject *)v93,
                      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v102 = &items->obj.klass + size;
                    v92->fields._size = size + 1;
                    v102[4] = (Il2CppClass *)v93;
                    sub_1B68678((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)v93, v97, v98);
                  }
                  v123 = v81->fields._items;
                  v124 = Method_System_Collections_Generic_List_string__Add__;
                  ++v81->fields._version;
                  if ( !v123 )
                    sub_1B68930(v103, v104);
                  v125 = v81->fields._size;
                  if ( (unsigned int)v125 >= v123->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v81,
                      v87,
                      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v126 = &v123->obj.klass + v125;
                    v81->fields._size = v125 + 1;
                    v126[4] = (Il2CppClass *)v87;
                    sub_1B68678((ServantStatusBattleListViewItem_o *)(v126 + 4), (int32_t)v87, v105, v106);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v65->fields.priority;
                id = v65->fields.id;
                iconId = v65->fields.iconId;
                skillType = v65->fields.skillType;
                v113 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v113,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v114);
                if ( !v220 )
                  sub_1B68930(v115, v116);
                v119 = v220->fields._items;
                v120 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v220->fields._version;
                if ( !v119 )
                  sub_1B68930(v115, v116);
                v121 = v220->fields._size;
                if ( (unsigned int)v121 >= v119->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v220,
                    (Il2CppObject *)v113,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
                }
                else
                {
                  v122 = &v119->obj.klass + v121;
                  v220->fields._size = v121 + 1;
                  v122[4] = (Il2CppClass *)v113;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v113, v117, v118);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v227,
              (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v215;
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
                                      v65->fields.targetId,
                                      (const MethodInfo_30E4514 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v61,
                                        &v230,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v230;
            if ( !v230 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v230, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v230 || !v62 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v62,
                                            &v228,
                                            v230->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v230 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_868/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v230->fields.funcId,
                                              (const MethodInfo_2EEB378 *)Method_System_String_Join_int___);
                if ( !v219 )
                  goto LABEL_159;
                v67 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v219,
                        IsPassive,
                        (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v68 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v68,
                    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v219,
                    v67,
                    (Il2CppObject *)v68,
                    (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v69 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v219,
                        v67,
                        (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v70 = v228;
                v71 = v230;
                v72 = (System_Collections_Generic_List_object__o *)v69;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v73, v70, v71, 0LL, v65, v74);
                if ( !v72 )
                  goto LABEL_159;
                v77 = v72->fields._items;
                v78 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v72->fields._version;
                if ( !v77 )
                  goto LABEL_159;
                v79 = v72->fields._size;
                if ( (unsigned int)v79 >= v77->max_length )
                {
                  v138 = v78[4];
                  v139 = v72;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v139,
                    (Il2CppObject *)v73,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v138 + 192) + 112LL));
                  goto LABEL_61;
                }
                v80 = &v77->obj.klass + v79;
                v72->fields._size = v79 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v127 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v129 = v65->fields.priority;
                v130 = v65->fields.id;
                v131 = v65->fields.iconId;
                v132 = v65->fields.skillType;
                v133 = EffectExplanation;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v73,
                  v127,
                  v133,
                  v130,
                  v129,
                  v131,
                  v132,
                  v134);
                if ( !v220 )
                  goto LABEL_159;
                v135 = v220->fields._items;
                v136 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v220->fields._version;
                if ( !v135 )
                  goto LABEL_159;
                v137 = v220->fields._size;
                v62 = (Il2CppObject *)v221;
                if ( (unsigned int)v137 >= v135->max_length )
                {
                  v138 = v136[4];
                  v139 = v220;
                  goto LABEL_72;
                }
                v80 = &v135->obj.klass + v137;
                v220->fields._size = v137 + 1;
              }
              v80[4] = (Il2CppClass *)v73;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v73, v75, v76);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v218;
      ++v64;
      max_length = v218->max_length;
    }
    while ( v64 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v219;
  if ( !v219 )
LABEL_159:
    sub_1B68930(IsPassive, v60);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v222,
    v219,
    (const MethodInfo_3189F98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v225 = v222;
  while ( 1 )
  {
    v140 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v225,
             (const MethodInfo_32871D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v140 )
      break;
    value = v225.fields._current.fields.value;
    if ( !v225.fields._current.fields.value )
      sub_1B68930(v140, v141);
    if ( SLODWORD(v225.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v144 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v225.fields._current.fields.value,
               0,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v144 )
        sub_1B68930(0LL, v145);
      if ( v144[1].monitor )
      {
        v146 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v146 )
          sub_1B68930(0LL, v147);
        v148 = v146[1].monitor;
        if ( !v148 )
          sub_1B68930(v146, v147);
        if ( !Master_object )
          sub_1B68930(0LL, v147);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v224,
               v148[4],
               (const MethodInfo_30E4514 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v224 )
            sub_1B68930(0LL, v149);
          Name = SkillEntity__getName((SkillEntity_o *)v224, 0LL);
        }
      }
      else
      {
        v150 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v150 )
          sub_1B68930(0LL, v151);
        if ( v150[2].klass )
        {
          v152 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v152 )
            sub_1B68930(0LL, v153);
          v154 = v152[2].klass;
          if ( !v154 )
            sub_1B68930(v152, v153);
          Name = (System_String_o *)v154->_1.byval_arg.data;
        }
      }
      v155 = sub_1B6877C(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v222,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v156 = 0;
      *(_OWORD *)&v223.fields._list = *(_OWORD *)&v222.fields._dictionary;
      v223.fields._current = v222.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v223,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v223,
          (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v170 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v170 )
          sub_1B68930(0LL, v171);
        v173 = v170[1].klass;
        if ( !v173 )
          sub_1B68930(v170, v171);
        data = (System_String_o *)v173->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v175 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v155,
                 v172);
        v176 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v176 )
          sub_1B68930(0LL, v177);
        v178 = v176[2].monitor;
        if ( !v178 )
          sub_1B68930(v176, v177);
        v179 = v178[5];
        v180 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v180 )
          sub_1B68930(0LL, v181);
        v182 = v180[2].monitor;
        if ( !v182 )
          sub_1B68930(v180, v181);
        v183 = v182[6];
        v184 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v184 )
          sub_1B68930(0LL, v185);
        v186 = v184[2].monitor;
        if ( !v186 )
          sub_1B68930(v184, v185);
        v187 = v186[14];
        v188 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v188,
          Name,
          v175,
          v179,
          v156,
          v183,
          v187,
          v189);
        if ( !v220 )
          sub_1B68930(v190, v191);
        v194 = v220->fields._items;
        v195 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v220->fields._version;
        if ( !v194 )
          sub_1B68930(v190, v191);
        v196 = v220->fields._size;
        if ( (unsigned int)v196 >= v194->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v220,
            (Il2CppObject *)v188,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
        }
        else
        {
          v197 = &v194->obj.klass + v196;
          v220->fields._size = v196 + 1;
          v197[4] = (Il2CppClass *)v188;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v197 + 4), (int32_t)v188, v192, v193);
        }
        continue;
      }
      v157 = v223.fields._current;
      v158 = sub_1B6877C(int___TypeInfo, 0LL);
      if ( !v157 )
        sub_1B68930(v158, v159);
      v160 = v157[1].monitor;
      if ( v160 )
      {
        if ( !v61 )
          sub_1B68930(v158, v159);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v61,
                                                               v160[4],
                                                               v160[5],
                                                               0LL);
LABEL_110:
        v162 = (__int64)DispValFromSkill;
      }
      else
      {
        v162 = v158;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v157[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v155 )
        sub_1B68930(DispValFromSkill, v159);
      v163 = *(_QWORD *)(v155 + 24);
      if ( v163 )
      {
        if ( (int)v163 >= 1 )
        {
          v164 = 0LL;
          v165 = (unsigned int)*(_QWORD *)(v155 + 24);
          do
          {
            if ( !v162 )
              sub_1B68930(DispValFromSkill, v159);
            if ( v164 >= *(unsigned int *)(v162 + 24) )
              sub_1B68938(DispValFromSkill, v159);
            v166 = v155 + 4 * v164;
            v167 = *(_DWORD *)(v162 + 32 + 4 * v164++);
            *(_DWORD *)(v166 + 32) += v167;
          }
          while ( v165 != v164 );
        }
      }
      else
      {
        v155 = v162;
      }
      v168 = v157[2].monitor;
      if ( !v168 )
        sub_1B68930(DispValFromSkill, v159);
      v169 = v168[20];
      if ( v169 > v156 )
        v156 = v169;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v225,
    (const MethodInfo_32872F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v198 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v198 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v198->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v198->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v198);
      v198 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v200 = (Il2CppObject *)v198->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1B68920(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_0,
      v200,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v202, v203);
  }
  v204 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v220,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2E74214 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v205 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v206 = v204;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v205 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v205->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v205->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v205);
      v205 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v208 = (Il2CppObject *)v205->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1B68920(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_1,
      v208,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v209 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v209->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v209->__9__32_1, (int32_t)_9__32_1, v210, v211);
  }
  v212 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v206,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2E81468 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v212, (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1B68930(gameObject, v6);
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
  __int64 v37; // x1
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  System_String_o *v41; // x20
  System_String_o *v42; // x20
  unsigned __int64 v43; // x8
  System_String_o *v44; // x20
  unsigned __int64 v45; // x8
  System_String_o *v46; // x20
  unsigned __int64 v47; // x8
  System_String_o *v48; // x20
  unsigned __int64 v49; // x8
  int v51; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v52; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A0C021 & 1) == 0 )
  {
    sub_1B686D4(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_1B686D4(&StringLiteral_25046/*"{x"*/, v5);
    sub_1B686D4(&StringLiteral_24831/*"{"*/, v6);
    sub_1B686D4(&StringLiteral_24762/*"xx}"*/, v7);
    sub_1B686D4(&StringLiteral_24761/*"xxx}"*/, v8);
    sub_1B686D4(&StringLiteral_25070/*"}"*/, v9);
    sub_1B686D4(&StringLiteral_25049/*"{xxxx"*/, v10);
    sub_1B686D4(&StringLiteral_25047/*"{xx"*/, v11);
    sub_1B686D4(&StringLiteral_24760/*"xxxx}"*/, v12);
    sub_1B686D4(&StringLiteral_24763/*"x}"*/, v13);
    sub_1B686D4(&StringLiteral_25048/*"{xxx"*/, v14);
    byte_4A0C021 = 1;
  }
  v51 = 0;
  if ( funcVals )
  {
    v15 = *(_QWORD *)&funcVals->max_length;
    if ( v15 )
    {
      v52 = 0;
      if ( (int)v15 >= 1 )
      {
        do
        {
          v16 = System_Int32__ToString((int32_t)&v52, 0LL);
          v17 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_24831/*"{"*/,
                  v16,
                  (System_String_o *)StringLiteral_24760/*"xxxx}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v52, 0LL);
          v19 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_24831/*"{"*/,
                  v18,
                  (System_String_o *)StringLiteral_24761/*"xxx}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v52, 0LL);
          v21 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_24831/*"{"*/,
                  v20,
                  (System_String_o *)StringLiteral_24762/*"xx}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v52, 0LL);
          v23 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_24831/*"{"*/,
                  v22,
                  (System_String_o *)StringLiteral_24763/*"x}"*/,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v52, 0LL);
          v25 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_24831/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_25070/*"}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v52, 0LL);
          v27 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_25046/*"{x"*/,
                  v26,
                  (System_String_o *)StringLiteral_25070/*"}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v52, 0LL);
          v29 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_25047/*"{xx"*/,
                  v28,
                  (System_String_o *)StringLiteral_25070/*"}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v52, 0LL);
          v31 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_25048/*"{xxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_25070/*"}"*/,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v52, 0LL);
          v33 = System_String__Concat_61430728(
                  (System_String_o *)StringLiteral_25049/*"{xxxx"*/,
                  v32,
                  (System_String_o *)StringLiteral_25070/*"}"*/,
                  0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v35 = v33;
          v51 = 10000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !text )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(text, v17, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v38 = v33;
          v51 = 1000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v38 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v38, v19, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v39 = v33;
          v51 = 100 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v39 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v39, v21, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v40 = v33;
          v51 = 10 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v40 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v40, v23, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v41 = v33;
          v36 = System_Int32__ToString((unsigned int)funcVals + 4 * v52 + 32, 0LL);
          if ( !v41 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v41, v25, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v42 = v33;
          v43 = 1717986919LL * funcVals->m_Items[v52 + 1];
          v51 = (v43 >> 63) + (SHIDWORD(v43) >> 2);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v42 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v42, v27, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v44 = v33;
          v45 = 1374389535LL * funcVals->m_Items[v52 + 1];
          v51 = (v45 >> 63) + (SHIDWORD(v45) >> 5);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v44 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v44, v29, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v46 = v33;
          v47 = 274877907LL * funcVals->m_Items[v52 + 1];
          v51 = (v47 >> 63) + (SHIDWORD(v47) >> 6);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v46 )
            goto LABEL_30;
          v33 = System_String__Replace_61439096(v46, v31, v36, 0LL);
          if ( v52 >= funcVals->max_length )
LABEL_29:
            sub_1B68938(v33, v34);
          v48 = v33;
          v49 = 1759218605LL * funcVals->m_Items[v52 + 1];
          v51 = (v49 >> 63) + (SHIDWORD(v49) >> 12);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v48 )
LABEL_30:
            sub_1B68930(v36, v37);
          text = System_String__Replace_61439096(v48, v35, v36, 0LL);
          ++v52;
        }
        while ( (signed int)v52 < (signed int)funcVals->max_length );
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
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v29; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v31; // w23
  System_Collections_Generic_List_object__o *v32; // x22
  System_Comparison_T__o *v33; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v35; // x22
  float v36; // s8
  __int64 v37; // x1
  BalanceConfig_c *v38; // x0
  ClassBoardClassEntity_o *current; // x23
  BalanceConfig_c *v40; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *v43; // x22
  Il2CppObject *Component_object; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v48; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  struct UIGrid_o *v53; // x8
  UnityEngine_Object_o *v54; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v56; // s8
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v59; // x8
  UnityEngine_GameObject_o *v60; // x20
  UnityEngine_GameObject_o *v61; // x0
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0C01A & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, classBoardBaseEntity);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, v9);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v10);
    sub_1B686D4(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_1B686D4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_1B686D4(&DataManager_TypeInfo, v13);
    sub_1B686D4(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1B686D4(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v18);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v20);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v21);
    sub_1B686D4(&LocalizationManager_TypeInfo, v22);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v23);
    sub_1B686D4(&StringLiteral_3471/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v24);
    byte_4A0C01A = 1;
  }
  entitys = 0LL;
  memset(&v63, 0, sizeof(v63));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_69;
  if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v29->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_17;
  v31 = classBoardBaseEntity->fields.id;
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v31 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_17:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v27);
    v32 = (System_Collections_Generic_List_object__o *)entitys;
    v33 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(
      v33,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v32 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_55303484(
      v32,
      v33,
      (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v35 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3471/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
    if ( !v35 )
      goto LABEL_69;
    UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
  }
  Master_object = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_69;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v36 = 0.0;
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v38 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v63.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1B68930(v38, v37);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->AvailableValidIds,
           current->fields.classId,
           (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___) )
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
    v43 = Object;
    if ( !Object )
      sub_1B68930(0LL, v42);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v45 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v45 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1B68930(v45, v46);
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
                 (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_45;
    }
LABEL_46:
    v48 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v48 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_object,
      v48->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !classIconGrid )
      sub_1B68930(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v43, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v43, 1, 0LL);
    v53 = this->fields.classIconGrid;
    if ( !v53 )
      sub_1B68930(v51, v52);
    v36 = v36 + (float)(v53->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v54 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
    if ( !Master_object )
      goto LABEL_69;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    v56 = -v36;
    GameObjectExtensions__AddLocalPositionX(gameObject, v56, 0LL);
    Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_object )
      goto LABEL_69;
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__AddLocalPositionX(v57, v56, 0LL);
    if ( !isAll
      && System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
           (const MethodInfo_2E66944 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( Master_object )
      {
        v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        v59 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v60 = v58;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v59 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        GameObjectExtensions__AddLocalPositionX(v60, v59->static_fields->classIconOneDispFixPosY, 0LL);
        Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
        if ( Master_object )
        {
          v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          GameObjectExtensions__AddLocalPositionX(
            v61,
            ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
            0LL);
          goto LABEL_64;
        }
      }
LABEL_69:
      sub_1B68930(Master_object, v26);
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
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v5);
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
    sub_1B68930(0LL, sprite);
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
  const MethodInfo *v35; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v36; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v37; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v39; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  bool v43; // w0
  int v44; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v45; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v46; // x8
  int32_t v47; // w23
  int v48; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t v55; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v62; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v65; // x8
  System_Func_T1__T2__TResult__o *v66; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v67; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v70; // x22
  System_Action_T1__T2__o *v71; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v73; // x21
  float v74; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v77; // x1
  UnityEngine_GameObject_o *v78; // x22
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  ClassBoardEffectListDialogSkillDetailComponent_o *v83; // x23
  __int64 v84; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x6
  float v87; // s8
  __int64 v88; // x1
  System_String_o *v89; // x0
  System_String_o *v90; // x22
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_4A0C01E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_GameObject__int__TypeInfo, *(_QWORD *)&baseId);
    sub_1B686D4(&Method_System_Array_Empty_int___, v11);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v12);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v13);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v14);
    sub_1B686D4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15);
    sub_1B686D4(&DataManager_TypeInfo, v16);
    sub_1B686D4(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v17);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v18);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v19);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v20);
    sub_1B686D4(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v21);
    sub_1B686D4(&System_Func_GameObject__int__float__TypeInfo, v22);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v23);
    sub_1B686D4(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v24);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v25);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v26);
    sub_1B686D4(&LocalizationManager_TypeInfo, v27);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v28);
    sub_1B686D4(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__, v29);
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v30);
    sub_1B686D4(&StringLiteral_3470/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v31);
    sub_1B686D4(&StringLiteral_3469/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v32);
    byte_4A0C01E = 1;
  }
  entitys = 0LL;
  memset(&v92, 0, sizeof(v92));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v9, 0LL) )
  {
    v36 = entitys;
    v37 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v37 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__bool__o *)v37->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__30_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__30_0,
        v39,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v41, v42);
    }
    v43 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2E562F4 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v44 = v43;
  }
  else
  {
    v44 = 1;
  }
  v45 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v45 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v46 = v45->static_fields;
  if ( v9 == v46->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v47 = baseIda;
  if ( !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v47 == v46->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v48 = 1;
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
    v48 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v51 = Method_System_Array_Empty_int___;
      v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v52 )
      {
        sub_1BBA60C(Method_System_Array_Empty_int___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1BBA5B0(v53);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1BBA5B0(v54);
      squareIds = **(System_Int32_array ***)(v54 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v55 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v55, dispType, 0, squareIds, v35);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v58, v59);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1B68930(Master_object, v34);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3469/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v73 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
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
      if ( (v48 & v44) != 0 )
      {
        v89 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v90 = System_String__Concat_61419468((System_String_o *)StringLiteral_3470/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v89, 0LL);
      }
      else
      {
        v90 = (System_String_o *)StringLiteral_3469/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v90, 0LL);
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
    v62 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v7 & v48) != 0 )
        {
          v65 = this->fields.recycler;
          if ( !v65 )
            goto LABEL_98;
          v65->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v66 = (System_Func_T1__T2__TResult__o *)sub_1B68920(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v66,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v67 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1B68920(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v67, (System_Func_GameObject__int__float__o *)v66, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v70 = this->fields.recycler;
          v71 = (System_Action_T1__T2__o *)sub_1B68920(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v71,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v70 )
          {
            ScrollItemRecycler__Init(
              v70,
              size,
              v62,
              (System_Action_GameObject__int__o *)v71,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v67,
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v91,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v74 = 0.0;
      v92 = v91;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v92,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v92.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v62, 0LL, 0LL, 0LL);
        v78 = Object;
        if ( !Object )
          sub_1B68930(0LL, v77);
        v79 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v83 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v79;
        if ( !v79 )
          sub_1B68930(0LL, v80);
        v79[5].monitor = this;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v79[5].monitor, (int32_t)this, v81, v82);
        if ( !current )
          sub_1B68930(v84, v85);
        v87 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v83,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v86);
        GameObjectExtensions__SetParent_33421108(v78, this->fields.skillListParent, 0LL);
        if ( !byte_4A03906 )
        {
          sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v88);
          byte_4A03906 = 1;
        }
        GameObjectExtensions__SetLocalScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_33415496(v78, 0.0, -v74, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v78, 1, 0LL);
        v74 = v74 + v87;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v92,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( (byte_4A0C01C & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B686D4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4A0C01C = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v10 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.skillListParent, (int32_t)v6, v8, v9),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1B68930(this, obj);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v15,
    v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1B68678(
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1B68678((ServantStatusBattleListViewItem_o *)v14, (int32_t)detail, v17, v18);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0C023 & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_4A0C023 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}