void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_48E59D3 & 1) == 0 )
  {
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_48E59D3 = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_B71790;
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
        sub_1B00F30(this, a);
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
    sub_1B00F28(this, a);
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

  if ( (byte_48E59CC & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_48E59CC = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v18 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v36.fields._current )
      sub_1B00F28(v21, v22);
    if ( !v18 )
      sub_1B00F28(v21, v22);
    klass_high = HIDWORD(v36.fields._current[1].klass);
    items = v18->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1B00F28(v21, klass_high);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_high,
        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
              (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1B00F28(v19, v20);
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
          (const MethodInfo_2D9B3E0 *)Method_System_Linq_Enumerable_Union_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v32;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.arrayForSort, (int32_t)v32, v33, v34);
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
  if ( (byte_48E59CE & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B00CCC(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_48E59CE = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v9 )
  {
    sub_1B00F28(this, obj);
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

  if ( (byte_48E59D0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_1B00CCC(&DataManager_TypeInfo, v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_1B00CCC(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v14);
    sub_1B00CCC(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      v15);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo, v16);
    byte_48E59D0 = 1;
  }
  v17 = sub_1B00F18(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *)v17,
    0LL);
  if ( !v17 )
    sub_1B00F28(v18, v19);
  *(_DWORD *)(v17 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v17 + 16) = Master_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Master_object, v21, v22);
  if ( openedSquareIdArray )
  {
    v23 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v23,
      (Il2CppObject *)v17,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v23,
                                                           (const MethodInfo_2D8DC18 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v25 = BasicHelper__ExcludeNull_object_(
            v24,
            (const MethodInfo_2D4F0D4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_Collections_Generic_List_object__o *v80; // x29
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x22
  __int64 v87; // x1
  System_Collections_Generic_List_object__o *v88; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v90; // x19
  System_Collections_Generic_List_object__o *v91; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v92; // x20
  __int64 v93; // x0
  __int64 v94; // x1
  int32_t v95; // w2
  int32_t v96; // w3
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v111; // x22
  __int64 v112; // x0
  __int64 v113; // x1
  int32_t v114; // w2
  int32_t v115; // w3
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  System_String_o *v124; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v126; // w19
  int32_t v127; // w23
  int32_t v128; // w24
  int32_t v129; // w25
  System_String_o *v130; // x26
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  System_Collections_Generic_List_object__o *v135; // x0
  _BOOL8 v136; // x0
  __int64 v137; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  _DWORD *v144; // x8
  __int64 v145; // x1
  Il2CppObject *v146; // x0
  __int64 v147; // x1
  Il2CppObject *v148; // x0
  __int64 v149; // x1
  Il2CppClass *v150; // x8
  __int64 v151; // x25
  int32_t v152; // w24
  Il2CppObject *v153; // x19
  __int64 v154; // x0
  __int64 v155; // x1
  _DWORD *v156; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v158; // x8
  __int64 v159; // x10
  unsigned __int64 v160; // x9
  __int64 v161; // x10
  unsigned __int64 v162; // x12
  int v163; // w13
  _DWORD *v164; // x8
  int32_t v165; // w8
  Il2CppObject *v166; // x0
  __int64 v167; // x1
  const MethodInfo *v168; // x2
  Il2CppClass *v169; // x8
  System_String_o *data; // x19
  System_String_o *v171; // x25
  Il2CppObject *v172; // x0
  __int64 v173; // x1
  _DWORD *v174; // x8
  int32_t v175; // w26
  Il2CppObject *v176; // x0
  __int64 v177; // x1
  _DWORD *v178; // x8
  int32_t v179; // w20
  Il2CppObject *v180; // x0
  __int64 v181; // x1
  _DWORD *v182; // x8
  int32_t v183; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v184; // x22
  __int64 v185; // x0
  __int64 v186; // x1
  int32_t v187; // w2
  int32_t v188; // w3
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v193; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v195; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v199; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v200; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v201; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v203; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v204; // x0
  int32_t v205; // w2
  int32_t v206; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v207; // x0
  int32_t v210; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v211; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v213; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v214; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v215; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v216; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v217; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v218; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v219; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v220; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v221; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v223; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v225; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_48E59D1 & 1) == 0 )
  {
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1B00CCC(&DataManager_TypeInfo, v11);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_1B00CCC(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v21);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v24);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v27);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v28);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v29);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v30);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_1B00CCC(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_1B00CCC(&int___TypeInfo, v33);
    sub_1B00CCC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v35);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v41);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v42);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v44);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_1B00CCC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v47);
    sub_1B00CCC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_1B00CCC(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_1B00CCC(&Method_System_String_Join_int___, v52);
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__, v53);
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__, v54);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v55);
    sub_1B00CCC(&StringLiteral_865/*","*/, v56);
    sub_1B00CCC(&StringLiteral_1/*""*/, v57);
    byte_48E59D1 = 1;
  }
  v225 = 0LL;
  entity = 0LL;
  v223 = 0LL;
  entitys = 0LL;
  memset(&v222, 0, sizeof(v222));
  v221 = 0LL;
  v219 = 0LL;
  memset(&v220, 0, sizeof(v220));
  memset(&v218, 0, sizeof(v218));
  v58 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v58;
  v215 = v58;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v211 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v214 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v214,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    v216 = (FuncDispMaster_o *)v62;
    v210 = v4;
    v213 = openedSquareArray;
    do
    {
      if ( v64 >= (unsigned int)max_length )
        sub_1B00F30(IsPassive, v60);
      v65 = openedSquareArray->m_Items[v64];
      v66 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v66,
        (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v66;
      if ( !v65 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v65, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v65, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v211;
          if ( !v211 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v211,
                                        &entitys,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v80 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v80,
              (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v217,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v222.fields._list = *(_OWORD *)&v217.fields._dictionary;
            v222.fields._current = v217.fields._current.fields.key;
            while ( 1 )
            {
              v81 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v222,
                      (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v62 = (Il2CppObject *)v216;
              if ( !v81 )
                break;
              current = v222.fields._current;
              if ( !v222.fields._current )
                sub_1B00F28(v81, v82);
              if ( !v216 )
                sub_1B00F28(v81, v82);
              if ( FuncDispMaster__IsContainFuncIds(
                     v216,
                     &v221,
                     (System_Int32_array *)v222.fields._current[3].klass,
                     0LL) )
              {
                v84 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_865/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2DF38A4 *)Method_System_String_Join_int___);
                if ( !v80 )
                  sub_1B00F28(v84, v85);
                v86 = v84;
                if ( !System_Collections_Generic_List_object___Contains(
                        v80,
                        v84,
                        (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v214 )
                    sub_1B00F28(0LL, v87);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v214,
                          v86,
                          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v88 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v88,
                      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v214,
                      v86,
                      (Il2CppObject *)v88,
                      (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v214,
                           v86,
                           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v90 = v221;
                  v91 = (System_Collections_Generic_List_object__o *)Item;
                  v92 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v92,
                    v90,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v65,
                    0LL);
                  if ( !v91 )
                    sub_1B00F28(v93, v94);
                  items = v91->fields._items;
                  v98 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v91->fields._version;
                  if ( !items )
                    sub_1B00F28(v93, v94);
                  size = v91->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v91,
                      (Il2CppObject *)v92,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v100 = &items->obj.klass + size;
                    v91->fields._size = size + 1;
                    v100[4] = (Il2CppClass *)v92;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v92, v95, v96);
                  }
                  v120 = v80->fields._items;
                  v121 = Method_System_Collections_Generic_List_string__Add__;
                  ++v80->fields._version;
                  if ( !v120 )
                    sub_1B00F28(v101, v102);
                  v122 = v80->fields._size;
                  if ( (unsigned int)v122 >= v120->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v80,
                      v86,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v123 = &v120->obj.klass + v122;
                    v80->fields._size = v122 + 1;
                    v123[4] = (Il2CppClass *)v86;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v123 + 4), (int32_t)v86, v103, v104);
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
                v111 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v111,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v215 )
                  sub_1B00F28(v112, v113);
                v116 = v215->fields._items;
                v117 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v215->fields._version;
                if ( !v116 )
                  sub_1B00F28(v112, v113);
                v118 = v215->fields._size;
                if ( (unsigned int)v118 >= v116->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v215,
                    (Il2CppObject *)v111,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                }
                else
                {
                  v119 = &v116->obj.klass + v118;
                  v215->fields._size = v118 + 1;
                  v119[4] = (Il2CppClass *)v111;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v119 + 4), (int32_t)v111, v114, v115);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v222,
              (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v210;
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
                                      (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v61,
                                        &v225,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v225;
            if ( !v225 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v225, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v225 || !v62 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v62,
                                            &v223,
                                            v225->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v225 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_865/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v225->fields.funcId,
                                              (const MethodInfo_2DF38A4 *)Method_System_String_Join_int___);
                if ( !v214 )
                  goto LABEL_159;
                v67 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v214,
                        IsPassive,
                        (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v68 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v68,
                    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v214,
                    v67,
                    (Il2CppObject *)v68,
                    (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v69 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v214,
                        v67,
                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v70 = v223;
                v71 = v225;
                v72 = (System_Collections_Generic_List_object__o *)v69;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v73, v70, v71, 0LL, v65, 0LL);
                if ( !v72 )
                  goto LABEL_159;
                v76 = v72->fields._items;
                v77 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v72->fields._version;
                if ( !v76 )
                  goto LABEL_159;
                v78 = v72->fields._size;
                if ( (unsigned int)v78 >= v76->max_length )
                {
                  v134 = v77[4];
                  v135 = v72;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v135,
                    (Il2CppObject *)v73,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v134 + 192) + 112LL));
                  goto LABEL_61;
                }
                v79 = &v76->obj.klass + v78;
                v72->fields._size = v78 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v124 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v126 = v65->fields.priority;
                v127 = v65->fields.id;
                v128 = v65->fields.iconId;
                v129 = v65->fields.skillType;
                v130 = EffectExplanation;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v73,
                  v124,
                  v130,
                  v127,
                  v126,
                  v128,
                  v129,
                  0LL);
                if ( !v215 )
                  goto LABEL_159;
                v131 = v215->fields._items;
                v132 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v215->fields._version;
                if ( !v131 )
                  goto LABEL_159;
                v133 = v215->fields._size;
                v62 = (Il2CppObject *)v216;
                if ( (unsigned int)v133 >= v131->max_length )
                {
                  v134 = v132[4];
                  v135 = v215;
                  goto LABEL_72;
                }
                v79 = &v131->obj.klass + v133;
                v215->fields._size = v133 + 1;
              }
              v79[4] = (Il2CppClass *)v73;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v213;
      ++v64;
      max_length = v213->max_length;
    }
    while ( v64 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v214;
  if ( !v214 )
LABEL_159:
    sub_1B00F28(IsPassive, v60);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v217,
    v214,
    (const MethodInfo_308DE78 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v220 = v217;
  while ( 1 )
  {
    v136 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v220,
             (const MethodInfo_318E0BC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v136 )
      break;
    value = v220.fields._current.fields.value;
    if ( !v220.fields._current.fields.value )
      sub_1B00F28(v136, v137);
    if ( SLODWORD(v220.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v140 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v220.fields._current.fields.value,
               0,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v140 )
        sub_1B00F28(0LL, v141);
      if ( v140[1].monitor )
      {
        v142 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v142 )
          sub_1B00F28(0LL, v143);
        v144 = v142[1].monitor;
        if ( !v144 )
          sub_1B00F28(v142, v143);
        if ( !Master_object )
          sub_1B00F28(0LL, v143);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v219,
               v144[4],
               (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v219 )
            sub_1B00F28(0LL, v145);
          Name = SkillEntity__getName((SkillEntity_o *)v219, 0LL);
        }
      }
      else
      {
        v146 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v146 )
          sub_1B00F28(0LL, v147);
        if ( v146[2].klass )
        {
          v148 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v148 )
            sub_1B00F28(0LL, v149);
          v150 = v148[2].klass;
          if ( !v150 )
            sub_1B00F28(v148, v149);
          Name = (System_String_o *)v150->_1.byval_arg.data;
        }
      }
      v151 = sub_1B00D74(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v217,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v152 = 0;
      *(_OWORD *)&v218.fields._list = *(_OWORD *)&v217.fields._dictionary;
      v218.fields._current = v217.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v218,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v218,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v166 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v166 )
          sub_1B00F28(0LL, v167);
        v169 = v166[1].klass;
        if ( !v169 )
          sub_1B00F28(v166, v167);
        data = (System_String_o *)v169->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v171 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v151,
                 v168);
        v172 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v172 )
          sub_1B00F28(0LL, v173);
        v174 = v172[2].monitor;
        if ( !v174 )
          sub_1B00F28(v172, v173);
        v175 = v174[5];
        v176 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v176 )
          sub_1B00F28(0LL, v177);
        v178 = v176[2].monitor;
        if ( !v178 )
          sub_1B00F28(v176, v177);
        v179 = v178[6];
        v180 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v180 )
          sub_1B00F28(0LL, v181);
        v182 = v180[2].monitor;
        if ( !v182 )
          sub_1B00F28(v180, v181);
        v183 = v182[14];
        v184 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v184, Name, v171, v175, v152, v179, v183, 0LL);
        if ( !v215 )
          sub_1B00F28(v185, v186);
        v189 = v215->fields._items;
        v190 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v215->fields._version;
        if ( !v189 )
          sub_1B00F28(v185, v186);
        v191 = v215->fields._size;
        if ( (unsigned int)v191 >= v189->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v215,
            (Il2CppObject *)v184,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
        }
        else
        {
          v192 = &v189->obj.klass + v191;
          v215->fields._size = v191 + 1;
          v192[4] = (Il2CppClass *)v184;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v192 + 4), (int32_t)v184, v187, v188);
        }
        continue;
      }
      v153 = v218.fields._current;
      v154 = sub_1B00D74(int___TypeInfo, 0LL);
      if ( !v153 )
        sub_1B00F28(v154, v155);
      v156 = v153[1].monitor;
      if ( v156 )
      {
        if ( !v61 )
          sub_1B00F28(v154, v155);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v61,
                                                               v156[4],
                                                               v156[5],
                                                               0LL);
LABEL_110:
        v158 = (__int64)DispValFromSkill;
      }
      else
      {
        v158 = v154;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v153[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v151 )
        sub_1B00F28(DispValFromSkill, v155);
      v159 = *(_QWORD *)(v151 + 24);
      if ( v159 )
      {
        if ( (int)v159 >= 1 )
        {
          v160 = 0LL;
          v161 = (unsigned int)*(_QWORD *)(v151 + 24);
          do
          {
            if ( !v158 )
              sub_1B00F28(DispValFromSkill, v155);
            if ( v160 >= *(unsigned int *)(v158 + 24) )
              sub_1B00F30(DispValFromSkill, v155);
            v162 = v151 + 4 * v160;
            v163 = *(_DWORD *)(v158 + 32 + 4 * v160++);
            *(_DWORD *)(v162 + 32) += v163;
          }
          while ( v161 != v160 );
        }
      }
      else
      {
        v151 = v158;
      }
      v164 = v153[2].monitor;
      if ( !v164 )
        sub_1B00F28(DispValFromSkill, v155);
      v165 = v164[20];
      if ( v165 > v152 )
        v152 = v165;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v220,
    (const MethodInfo_318E1DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v193 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v193 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v193->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v193->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v193);
      v193 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v195 = (Il2CppObject *)v193->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_0,
      v195,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v197, v198);
  }
  v199 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v215,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2D8A1D0 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v201 = v199;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v200->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v200->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v200);
      v200 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v203 = (Il2CppObject *)v200->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_1,
      v203,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v204 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v204->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v204->__9__32_1, (int32_t)_9__32_1, v205, v206);
  }
  v207 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v201,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2D96D70 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v207, (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1B00F28(gameObject, v6);
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

  if ( (byte_48E59D2 & 1) == 0 )
  {
    sub_1B00CCC(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_1B00CCC(&StringLiteral_24762/*"{x"*/, v5);
    sub_1B00CCC(&StringLiteral_24550/*"{"*/, v6);
    sub_1B00CCC(&StringLiteral_24481/*"xx}"*/, v7);
    sub_1B00CCC(&StringLiteral_24480/*"xxx}"*/, v8);
    sub_1B00CCC(&StringLiteral_24784/*"}"*/, v9);
    sub_1B00CCC(&StringLiteral_24765/*"{xxxx"*/, v10);
    sub_1B00CCC(&StringLiteral_24763/*"{xx"*/, v11);
    sub_1B00CCC(&StringLiteral_24479/*"xxxx}"*/, v12);
    sub_1B00CCC(&StringLiteral_24482/*"x}"*/, v13);
    sub_1B00CCC(&StringLiteral_24764/*"{xxx"*/, v14);
    byte_48E59D2 = 1;
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
          v17 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24550/*"{"*/,
                  v16,
                  (System_String_o *)StringLiteral_24479/*"xxxx}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v52, 0LL);
          v19 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24550/*"{"*/,
                  v18,
                  (System_String_o *)StringLiteral_24480/*"xxx}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v52, 0LL);
          v21 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24550/*"{"*/,
                  v20,
                  (System_String_o *)StringLiteral_24481/*"xx}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v52, 0LL);
          v23 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24550/*"{"*/,
                  v22,
                  (System_String_o *)StringLiteral_24482/*"x}"*/,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v52, 0LL);
          v25 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24550/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_24784/*"}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v52, 0LL);
          v27 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24762/*"{x"*/,
                  v26,
                  (System_String_o *)StringLiteral_24784/*"}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v52, 0LL);
          v29 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24763/*"{xx"*/,
                  v28,
                  (System_String_o *)StringLiteral_24784/*"}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v52, 0LL);
          v31 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24764/*"{xxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_24784/*"}"*/,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v52, 0LL);
          v33 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_24765/*"{xxxx"*/,
                  v32,
                  (System_String_o *)StringLiteral_24784/*"}"*/,
                  0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v35 = v33;
          v51 = 10000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !text )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(text, v17, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v38 = v33;
          v51 = 1000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v38 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v38, v19, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v39 = v33;
          v51 = 100 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v39 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v39, v21, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v40 = v33;
          v51 = 10 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v40 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v40, v23, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v41 = v33;
          v36 = System_Int32__ToString((unsigned int)funcVals + 4 * v52 + 32, 0LL);
          if ( !v41 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v41, v25, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v42 = v33;
          v43 = 1717986919LL * funcVals->m_Items[v52 + 1];
          v51 = (v43 >> 63) + (SHIDWORD(v43) >> 2);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v42 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v42, v27, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v44 = v33;
          v45 = 1374389535LL * funcVals->m_Items[v52 + 1];
          v51 = (v45 >> 63) + (SHIDWORD(v45) >> 5);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v44 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v44, v29, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v46 = v33;
          v47 = 274877907LL * funcVals->m_Items[v52 + 1];
          v51 = (v47 >> 63) + (SHIDWORD(v47) >> 6);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v46 )
            goto LABEL_30;
          v33 = System_String__Replace_60345368(v46, v31, v36, 0LL);
          if ( v52 >= funcVals->max_length )
LABEL_29:
            sub_1B00F30(v33, v34);
          v48 = v33;
          v49 = 1759218605LL * funcVals->m_Items[v52 + 1];
          v51 = (v49 >> 63) + (SHIDWORD(v49) >> 12);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v48 )
LABEL_30:
            sub_1B00F28(v36, v37);
          text = System_String__Replace_60345368(v48, v35, v36, 0LL);
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
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v30; // w23
  System_Collections_Generic_List_object__o *v31; // x22
  System_Comparison_T__o *v32; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v34; // x22
  float i; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  __int64 v38; // x1
  UnityEngine_GameObject_o *v39; // x22
  Il2CppObject *Component_object; // x23
  _BOOL8 v41; // x0
  __int64 v42; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v44; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  struct UIGrid_o *v49; // x8
  UnityEngine_Object_o *v50; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x20
  UnityEngine_GameObject_o *v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E59CB & 1) == 0 )
  {
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, classBoardBaseEntity);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1B00CCC(&System_Comparison_ClassBoardClassEntity__TypeInfo, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v11);
    sub_1B00CCC(&DataManager_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v20);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v21);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v22);
    sub_1B00CCC(&StringLiteral_3455/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v23);
    byte_48E59CB = 1;
  }
  entitys = 0LL;
  memset(&v59, 0, sizeof(v59));
  if ( classBoardBaseEntity && (supportClassBoard || !isAll || ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL)) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object )
      goto LABEL_67;
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
      v32 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(
        v32,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
        0LL);
      if ( !v31 )
        goto LABEL_67;
      System_Collections_Generic_List_object___Sort_54277268(
        v31,
        v32,
        (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    }
    subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
    {
      v34 = this->fields.subjectClassLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3455/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
      if ( !v34 )
        goto LABEL_67;
      UILabel__set_text(v34, (System_String_o *)Master_object, 0LL);
    }
    Master_object = (ClassBoardClassMaster_o *)entitys;
    if ( !entitys )
      goto LABEL_67;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    v59 = v58;
    for ( i = 0.0; ; i = i + (float)(v49->fields.cellWidth * 0.5) )
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
        v50 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
          goto LABEL_58;
        Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
        if ( Master_object )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          v52 = -i;
          GameObjectExtensions__AddLocalPositionX(gameObject, v52, 0LL);
          Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
          if ( Master_object )
          {
            v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
            GameObjectExtensions__AddLocalPositionX(v53, v52, 0LL);
            if ( isAll
              || System_Linq_Enumerable__Count_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                   (const MethodInfo_2D7D628 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) < 2 )
            {
              goto LABEL_58;
            }
            Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
            if ( Master_object )
            {
              v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
              v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
              v56 = v54;
              if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
                v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
              }
              GameObjectExtensions__AddLocalPositionX(v56, v55->static_fields->classIconOneDispFixPosY, 0LL);
              Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
              if ( Master_object )
              {
                v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                GameObjectExtensions__AddLocalPositionX(
                  v57,
                  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
                  0LL);
LABEL_58:
                Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                if ( Master_object )
                {
                  ((void (__fastcall *)(ClassBoardClassMaster_o *, void *))Master_object->klass->vtable._8_OnListChangedImplementation.method)(
                    Master_object,
                    Master_object->klass[1]._1.image);
                  return;
                }
              }
            }
          }
        }
LABEL_67:
        sub_1B00F28(Master_object, v25);
      }
      current = (ClassBoardClassEntity_o *)v59.fields._current;
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
      v39 = Object;
      if ( !Object )
        sub_1B00F28(0LL, v38);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v41 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
        return;
      }
      if ( !current )
        sub_1B00F28(v41, v42);
      if ( !Component_object )
        sub_1B00F28(v41, v42);
      ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, current->fields.classId, 0LL);
      if ( !supportClassBoard )
        break;
      if ( !BasicHelper__IsNullOrEmpty(
              (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
              0LL) )
      {
        IsOpen = System_Linq_Enumerable__Contains_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                   current->fields.classId,
                   (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
        goto LABEL_39;
      }
LABEL_40:
      v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      ServantClassIconComponent__SetColor(
        (ServantClassIconComponent_o *)Component_object,
        v44->static_fields->DISABLED_COLOR,
        0LL);
LABEL_43:
      classIconGrid = this->fields.classIconGrid;
      transform = UnityEngine_GameObject__get_transform(v39, 0LL);
      if ( !classIconGrid )
        sub_1B00F28(transform, transform);
      UIGrid__AddChild(classIconGrid, transform, 0LL);
      LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
      GameObjectExtensions__SetLocalScale(v39, LocalScale, 0LL);
      UnityEngine_GameObject__SetActive(v39, 1, 0LL);
      v49 = this->fields.classIconGrid;
      if ( !v49 )
        sub_1B00F28(v47, v48);
    }
    IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
LABEL_39:
    if ( IsOpen )
      goto LABEL_43;
    goto LABEL_40;
  }
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
    sub_1B00F28(0LL, v5);
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
    sub_1B00F28(0LL, sprite);
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
  if ( (byte_48E59CF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_GameObject__int__TypeInfo, *(_QWORD *)&baseId);
    sub_1B00CCC(&Method_System_Array_Empty_int___, v11);
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v12);
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v13);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v14);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15);
    sub_1B00CCC(&DataManager_TypeInfo, v16);
    sub_1B00CCC(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v17);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v18);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v19);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v20);
    sub_1B00CCC(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v21);
    sub_1B00CCC(&System_Func_GameObject__int__float__TypeInfo, v22);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v23);
    sub_1B00CCC(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v24);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v25);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v26);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v27);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v28);
    sub_1B00CCC(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__, v29);
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v30);
    sub_1B00CCC(&StringLiteral_3454/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v31);
    sub_1B00CCC(&StringLiteral_3453/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v32);
    byte_48E59CF = 1;
  }
  entitys = 0LL;
  memset(&v92, 0, sizeof(v92));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      _9__30_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__30_0,
        v39,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v41, v42);
    }
    v43 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2D6C9F0 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
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
        sub_1B52C04(Method_System_Array_Empty_int___);
        v52 = v51[7];
      }
      v53 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1B52BA8(v53);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = *(_QWORD *)(v51[7] + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1B52BA8(v54);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v58, v59);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1B00F28(Master_object, v34);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
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
        v90 = System_String__Concat_60325748((System_String_o *)StringLiteral_3454/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v89, 0LL);
      }
      else
      {
        v90 = (System_String_o *)StringLiteral_3453/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
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
                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        v66 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v66,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v67 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1B00F18(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v67, (System_Func_GameObject__int__float__o *)v66, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v70 = this->fields.recycler;
          v71 = (System_Action_T1__T2__o *)sub_1B00F18(System_Action_GameObject__int__TypeInfo);
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
        (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v74 = 0.0;
      v92 = v91;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v92,
                (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v92.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v62, 0LL, 0LL, 0LL);
        v78 = Object;
        if ( !Object )
          sub_1B00F28(0LL, v77);
        v79 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v83 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v79;
        if ( !v79 )
          sub_1B00F28(0LL, v80);
        v79[5].monitor = this;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v79[5].monitor, (int32_t)this, v81, v82);
        if ( !current )
          sub_1B00F28(v84, v85);
        v87 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v83,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v86);
        GameObjectExtensions__SetParent_32541180(v78, this->fields.skillListParent, 0LL);
        if ( !byte_48DD9F6 )
        {
          sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v88);
          byte_48DD9F6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_32535568(v78, 0.0, -v74, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v78, 1, 0LL);
        v74 = v74 + v87;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v92,
        (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( (byte_48E59CD & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B00CCC(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_48E59CD = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v10 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillListParent, (int32_t)v6, v8, v9),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1B00F28(this, obj);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v15,
    v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1B00C70(
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v14, (int32_t)detail, v17, v18);
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

  if ( (byte_48E59D6 & 1) == 0 )
  {
    sub_1B00CCC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_48E59D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v2;
  sub_1B00C70(
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
    sub_1B00F28(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}