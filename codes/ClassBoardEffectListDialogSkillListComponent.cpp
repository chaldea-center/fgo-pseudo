void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_4B196BC & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1, v2);
    byte_4B196BC = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BD3580;
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
        sub_1BCAA44(this, a);
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
    sub_1BCAA3C(this, a);
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
  System_Collections_Generic_List_int__o *v29; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct System_Int32_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B196B5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&id, entityList);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Union_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    byte_4B196B5 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    entityList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v32 )
      break;
    if ( !v51.fields._current )
      sub_1BCAA3C(v32, v33);
    if ( !v29 )
      sub_1BCAA3C(v32, v33);
    klass_high = HIDWORD(v51.fields._current[1].klass);
    items = v29->fields._items;
    v36 = Method_System_Collections_Generic_List_int__Add__;
    ++v29->fields._version;
    if ( !items )
      sub_1BCAA3C(v32, klass_high);
    size = v29->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v29,
        klass_high,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v29->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v30 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v31);
    v30 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v30->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v31);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v41 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
        v41 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v41->static_fields->Extra2SortOrderClassIds;
      goto LABEL_24;
    }
    if ( v29 )
    {
      v43 = System_Collections_Generic_List_int___ToArray(
              v29,
              (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1BCAA3C(v30, v31);
  }
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
    v39 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v39->static_fields->Extra1SortOrderClassIds;
LABEL_24:
  v42 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_2F4FC20 *)Method_System_Linq_Enumerable_Union_int___);
  v43 = System_Linq_Enumerable__ToArray_int_(
          v42,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.arrayForSort, (int64_t)v43, v44, v45, v46, v47, v48, v49);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__GetBaseId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ClassBoardEffectListDialogSkillListComponent__GetListItemHeight(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *skillDispDataList; // x8
  ClassBoardEffectListDialogSkillDetailComponent_o *v10; // x20
  const MethodInfo *v11; // x2

  v6 = this;
  if ( (byte_4B196B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      obj,
      *(_QWORD *)&index);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7,
                                                               v8);
    byte_4B196B7 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v10 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v10 )
  {
    sub_1BCAA3C(this, obj);
  }
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           v10,
           (System_String_o *)this->fields.m_CancellationTokenSource,
           v11);
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
  __int64 v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Master_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Func_T__TResult__o *v38; // x22
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  ClassBoardSquareEntity_array *v44; // x21

  if ( (byte_4B196B9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___,
      *(_QWORD *)&dispType,
      ignoreTurnOrCountPassive);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v17, v18);
    sub_1BCA7E0(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      v21,
      v22);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo, v23, v24);
    byte_4B196B9 = 1;
  }
  v25 = sub_1BCAA2C(
          ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo,
          *(_QWORD *)&dispType,
          ignoreTurnOrCountPassive,
          openedSquareIdArray);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    sub_1BCAA3C(v26, v27);
  *(_DWORD *)(v25 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v25 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)Master_object, v29, v30, v31, v32, v33, v34);
  if ( openedSquareIdArray )
  {
    v38 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__ClassBoardSquareEntity__TypeInfo, v35, v36, v37);
    System_Func_int__object____ctor(
      v38,
      (Il2CppObject *)v25,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v38,
                                                           (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v40 = BasicHelper__ExcludeNull_object_(
            v39,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                                                (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v25 + 24), 0LL);
  }
  v44 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v42);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v44,
           dispType,
           ignoreTurnOrCountPassive,
           v43);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  System_Collections_Generic_List_object__o *v110; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v112; // x1
  Il2CppObject *v113; // x21
  Il2CppObject *v114; // x24
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x2
  __int64 v119; // x3
  signed int max_length; // w8
  signed int v121; // w27
  ClassBoardSquareEntity_o *v122; // x28
  System_Collections_Generic_List_object__o *v123; // x19
  Il2CppObject *v124; // x20
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_List_object__o *v128; // x19
  Il2CppObject *v129; // x0
  FuncDispEntity_o *v130; // x19
  SkillLvEntity_o *v131; // x23
  System_Collections_Generic_List_object__o *v132; // x22
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v136; // x20
  const MethodInfo *v137; // x5
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  System_Collections_Generic_List_object__o *v148; // x29
  _BOOL8 v149; // x0
  __int64 v150; // x1
  Il2CppObject *current; // x26
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  Il2CppObject *v155; // x0
  __int64 v156; // x1
  Il2CppObject *v157; // x22
  __int64 v158; // x1
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  System_Collections_Generic_List_object__o *v162; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v164; // x19
  System_Collections_Generic_List_object__o *v165; // x23
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v169; // x20
  const MethodInfo *v170; // x5
  __int64 v171; // x0
  __int64 v172; // x1
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  struct System_Object_array *items; // x8
  _QWORD *v180; // x9
  __int64 size; // x10
  Il2CppClass **v182; // x0
  __int64 v183; // x0
  __int64 v184; // x1
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v197; // x22
  const MethodInfo *v198; // x7
  __int64 v199; // x0
  __int64 v200; // x1
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  Il2CppClass **v210; // x0
  struct System_Object_array *v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  Il2CppClass **v214; // x0
  System_String_o *v215; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v217; // w19
  int32_t v218; // w23
  int32_t v219; // w24
  int32_t v220; // w25
  System_String_o *v221; // x26
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  const MethodInfo *v225; // x7
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x8
  System_Collections_Generic_List_object__o *v230; // x0
  _BOOL8 v231; // x0
  __int64 v232; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v235; // x0
  __int64 v236; // x1
  Il2CppObject *v237; // x0
  __int64 v238; // x1
  _DWORD *v239; // x8
  __int64 v240; // x1
  Il2CppObject *v241; // x0
  __int64 v242; // x1
  Il2CppObject *v243; // x0
  __int64 v244; // x1
  Il2CppClass *v245; // x8
  __int64 v246; // x25
  int32_t v247; // w24
  Il2CppObject *v248; // x19
  __int64 v249; // x0
  __int64 v250; // x1
  _DWORD *v251; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v253; // x8
  __int64 v254; // x10
  unsigned __int64 v255; // x9
  __int64 v256; // x10
  unsigned __int64 v257; // x12
  int v258; // w13
  _DWORD *v259; // x8
  int32_t v260; // w8
  Il2CppObject *v261; // x0
  __int64 v262; // x1
  const MethodInfo *v263; // x2
  Il2CppClass *v264; // x8
  System_String_o *data; // x19
  System_String_o *v266; // x25
  Il2CppObject *v267; // x0
  __int64 v268; // x1
  _DWORD *v269; // x8
  int32_t v270; // w26
  Il2CppObject *v271; // x0
  __int64 v272; // x1
  _DWORD *v273; // x8
  int32_t v274; // w20
  Il2CppObject *v275; // x0
  __int64 v276; // x1
  __int64 v277; // x2
  __int64 v278; // x3
  _DWORD *v279; // x8
  int32_t v280; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v281; // x22
  const MethodInfo *v282; // x7
  __int64 v283; // x0
  __int64 v284; // x1
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  struct System_Object_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  Il2CppClass **v294; // x0
  __int64 v295; // x1
  __int64 v296; // x2
  __int64 v297; // x3
  ClassBoardEffectListDialogSkillListComponent___c_c *v298; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v300; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v308; // x0
  __int64 v309; // x1
  __int64 v310; // x2
  __int64 v311; // x3
  ClassBoardEffectListDialogSkillListComponent___c_c *v312; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v313; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v315; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v316; // x0
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v323; // x0
  int32_t v326; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v327; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v329; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v330; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v331; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v332; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v333; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v334; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v335; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v336; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v337; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v338; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v339; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v341; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4B196BA & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType, ignoreTurnOrCountPassive);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FuncDispMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v26,
      v27);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v28,
      v29);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v30,
      v31);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v32,
      v33);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v36,
      v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v38,
      v39);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v40,
      v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v42, v43);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v44,
      v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v46, v47);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v48,
      v49);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v50,
      v51);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v52,
      v53);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v54,
      v55);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v56, v57);
    sub_1BCA7E0(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v58, v59);
    sub_1BCA7E0(&int___TypeInfo, v60, v61);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v62,
      v63);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v64,
      v65);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v66,
      v67);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v68, v69);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v70, v71);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v72, v73);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v74,
      v75);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v76,
      v77);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v78,
      v79);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v80, v81);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v82, v83);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v84,
      v85);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v86,
      v87);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v88,
      v89);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v90,
      v91);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v92, v93);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v94, v95);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v96, v97);
    sub_1BCA7E0(&Method_System_String_Join_int___, v98, v99);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__, v100, v101);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__, v102, v103);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v104, v105);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v106, v107);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v108, v109);
    byte_4B196BA = 1;
  }
  v341 = 0LL;
  entity = 0LL;
  v339 = 0LL;
  entitys = 0LL;
  memset(&v338, 0, sizeof(v338));
  v337 = 0LL;
  v335 = 0LL;
  memset(&v336, 0, sizeof(v336));
  memset(&v334, 0, sizeof(v334));
  v110 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                        *(_QWORD *)&dispType,
                                                        ignoreTurnOrCountPassive,
                                                        method);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v110;
  v331 = v110;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v112);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v113 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v327 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v114 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FuncDispMaster___);
  v330 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                      v115,
                                                                      v116,
                                                                      v117);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v330,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v121 = 0;
    v332 = (FuncDispMaster_o *)v114;
    v326 = v4;
    v329 = openedSquareArray;
    do
    {
      if ( v121 >= (unsigned int)max_length )
        sub_1BCAA44(IsPassive, v112);
      v122 = openedSquareArray->m_Items[v121];
      v123 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo,
                                                            v112,
                                                            v118,
                                                            v119);
      System_Collections_Generic_List_object____ctor(
        v123,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v123;
      if ( !v122 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v122, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v122, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v327;
          if ( !v327 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v327,
                                        &entitys,
                                        v122->fields.targetId,
                                        v122->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v148 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                  v112,
                                                                  v118,
                                                                  v119);
            System_Collections_Generic_List_object____ctor(
              v148,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v333,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v338.fields._list = *(_OWORD *)&v333.fields._dictionary;
            v338.fields._current = v333.fields._current.fields.key;
            while ( 1 )
            {
              v149 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v338,
                       (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v114 = (Il2CppObject *)v332;
              if ( !v149 )
                break;
              current = v338.fields._current;
              if ( !v338.fields._current )
                sub_1BCAA3C(v149, v150);
              if ( !v332 )
                sub_1BCAA3C(v149, v150);
              if ( FuncDispMaster__IsContainFuncIds(
                     v332,
                     &v337,
                     (System_Int32_array *)v338.fields._current[3].klass,
                     0LL) )
              {
                v155 = (Il2CppObject *)System_String__Join_int_(
                                         (System_String_o *)StringLiteral_863/*","*/,
                                         (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                         (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
                if ( !v148 )
                  sub_1BCAA3C(v155, v156);
                v157 = v155;
                if ( !System_Collections_Generic_List_object___Contains(
                        v148,
                        v155,
                        (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v330 )
                    sub_1BCAA3C(0LL, v158);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v330,
                          v157,
                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v162 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                          System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                          v159,
                                                                          v160,
                                                                          v161);
                    System_Collections_Generic_List_object____ctor(
                      v162,
                      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v330,
                      v157,
                      (Il2CppObject *)v162,
                      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v330,
                           v157,
                           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v164 = v337;
                  v165 = (System_Collections_Generic_List_object__o *)Item;
                  v169 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v166,
                                                                                                v167,
                                                                                                v168);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v169,
                    v164,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v122,
                    v170);
                  if ( !v165 )
                    sub_1BCAA3C(v171, v172);
                  items = v165->fields._items;
                  v180 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v165->fields._version;
                  if ( !items )
                    sub_1BCAA3C(v171, v172);
                  size = v165->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v165,
                      (Il2CppObject *)v169,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v182 = &items->obj.klass + size;
                    v165->fields._size = size + 1;
                    v182[4] = (Il2CppClass *)v169;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v182 + 4),
                      (int64_t)v169,
                      v173,
                      v174,
                      v175,
                      v176,
                      v177,
                      v178);
                  }
                  v211 = v148->fields._items;
                  v212 = Method_System_Collections_Generic_List_string__Add__;
                  ++v148->fields._version;
                  if ( !v211 )
                    sub_1BCAA3C(v183, v184);
                  v213 = v148->fields._size;
                  if ( (unsigned int)v213 >= v211->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v148,
                      v157,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v214 = &v211->obj.klass + v213;
                    v148->fields._size = v213 + 1;
                    v214[4] = (Il2CppClass *)v157;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v214 + 4),
                      (int64_t)v157,
                      v185,
                      v186,
                      v187,
                      v188,
                      v189,
                      v190);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v122->fields.priority;
                id = v122->fields.id;
                iconId = v122->fields.iconId;
                skillType = v122->fields.skillType;
                v197 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCAA2C(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v152,
                                                                                         v153,
                                                                                         v154);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v197,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v198);
                if ( !v331 )
                  sub_1BCAA3C(v199, v200);
                v207 = v331->fields._items;
                v208 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v331->fields._version;
                if ( !v207 )
                  sub_1BCAA3C(v199, v200);
                v209 = v331->fields._size;
                if ( (unsigned int)v209 >= v207->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v331,
                    (Il2CppObject *)v197,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
                }
                else
                {
                  v210 = &v207->obj.klass + v209;
                  v331->fields._size = v209 + 1;
                  v210[4] = (Il2CppClass *)v197;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v210 + 4),
                    (int64_t)v197,
                    v201,
                    v202,
                    v203,
                    v204,
                    v205,
                    v206);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v338,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v326;
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
                                      v122->fields.targetId,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v113 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v113,
                                        &v341,
                                        v122->fields.targetId,
                                        v122->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v341;
            if ( !v341 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v341, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v341 || !v114 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v114,
                                            &v339,
                                            v341->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v341 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_863/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v341->fields.funcId,
                                              (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
                if ( !v330 )
                  goto LABEL_159;
                v124 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v330,
                        IsPassive,
                        (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v128 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                        System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                        v125,
                                                                        v126,
                                                                        v127);
                  System_Collections_Generic_List_object____ctor(
                    v128,
                    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v330,
                    v124,
                    (Il2CppObject *)v128,
                    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v129 = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v330,
                         v124,
                         (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v130 = v339;
                v131 = v341;
                v132 = (System_Collections_Generic_List_object__o *)v129;
                v136 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                              ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                              v133,
                                                                                              v134,
                                                                                              v135);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                  v136,
                  v130,
                  v131,
                  0LL,
                  v122,
                  v137);
                if ( !v132 )
                  goto LABEL_159;
                v144 = v132->fields._items;
                v145 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v132->fields._version;
                if ( !v144 )
                  goto LABEL_159;
                v146 = v132->fields._size;
                if ( (unsigned int)v146 >= v144->max_length )
                {
                  v229 = v145[4];
                  v230 = v132;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v230,
                    (Il2CppObject *)v136,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v229 + 192) + 112LL));
                  goto LABEL_61;
                }
                v147 = &v144->obj.klass + v146;
                v132->fields._size = v146 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v215 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v217 = v122->fields.priority;
                v218 = v122->fields.id;
                v219 = v122->fields.iconId;
                v220 = v122->fields.skillType;
                v221 = EffectExplanation;
                v136 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                              ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                              v222,
                                                                                              v223,
                                                                                              v224);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v136,
                  v215,
                  v221,
                  v218,
                  v217,
                  v219,
                  v220,
                  v225);
                if ( !v331 )
                  goto LABEL_159;
                v226 = v331->fields._items;
                v227 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v331->fields._version;
                if ( !v226 )
                  goto LABEL_159;
                v228 = v331->fields._size;
                v114 = (Il2CppObject *)v332;
                if ( (unsigned int)v228 >= v226->max_length )
                {
                  v229 = v227[4];
                  v230 = v331;
                  goto LABEL_72;
                }
                v147 = &v226->obj.klass + v228;
                v331->fields._size = v228 + 1;
              }
              v147[4] = (Il2CppClass *)v136;
              sub_1BCA784((PartyOrganizationUtility_o *)(v147 + 4), (int64_t)v136, v138, v139, v140, v141, v142, v143);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v329;
      ++v121;
      max_length = v329->max_length;
    }
    while ( v121 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v112);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v330;
  if ( !v330 )
LABEL_159:
    sub_1BCAA3C(IsPassive, v112);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v333,
    v330,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v336 = v333;
  while ( 1 )
  {
    v231 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v336,
             (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v231 )
      break;
    value = v336.fields._current.fields.value;
    if ( !v336.fields._current.fields.value )
      sub_1BCAA3C(v231, v232);
    if ( SLODWORD(v336.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v235 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v336.fields._current.fields.value,
               0,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v235 )
        sub_1BCAA3C(0LL, v236);
      if ( v235[1].monitor )
      {
        v237 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v237 )
          sub_1BCAA3C(0LL, v238);
        v239 = v237[1].monitor;
        if ( !v239 )
          sub_1BCAA3C(v237, v238);
        if ( !Master_object )
          sub_1BCAA3C(0LL, v238);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v335,
               v239[4],
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v335 )
            sub_1BCAA3C(0LL, v240);
          Name = SkillEntity__getName((SkillEntity_o *)v335, 0LL);
        }
      }
      else
      {
        v241 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v241 )
          sub_1BCAA3C(0LL, v242);
        if ( v241[2].klass )
        {
          v243 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v243 )
            sub_1BCAA3C(0LL, v244);
          v245 = v243[2].klass;
          if ( !v245 )
            sub_1BCAA3C(v243, v244);
          Name = (System_String_o *)v245->_1.byval_arg.data;
        }
      }
      v246 = sub_1BCA888(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v333,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v247 = 0;
      *(_OWORD *)&v334.fields._list = *(_OWORD *)&v333.fields._dictionary;
      v334.fields._current = v333.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v334,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v334,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v261 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v261 )
          sub_1BCAA3C(0LL, v262);
        v264 = v261[1].klass;
        if ( !v264 )
          sub_1BCAA3C(v261, v262);
        data = (System_String_o *)v264->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v262);
        v266 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v246,
                 v263);
        v267 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v267 )
          sub_1BCAA3C(0LL, v268);
        v269 = v267[2].monitor;
        if ( !v269 )
          sub_1BCAA3C(v267, v268);
        v270 = v269[5];
        v271 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v271 )
          sub_1BCAA3C(0LL, v272);
        v273 = v271[2].monitor;
        if ( !v273 )
          sub_1BCAA3C(v271, v272);
        v274 = v273[6];
        v275 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v275 )
          sub_1BCAA3C(0LL, v276);
        v279 = v275[2].monitor;
        if ( !v279 )
          sub_1BCAA3C(v275, v276);
        v280 = v279[14];
        v281 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCAA2C(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v276,
                                                                                 v277,
                                                                                 v278);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v281,
          Name,
          v266,
          v270,
          v247,
          v274,
          v280,
          v282);
        if ( !v331 )
          sub_1BCAA3C(v283, v284);
        v291 = v331->fields._items;
        v292 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v331->fields._version;
        if ( !v291 )
          sub_1BCAA3C(v283, v284);
        v293 = v331->fields._size;
        if ( (unsigned int)v293 >= v291->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v331,
            (Il2CppObject *)v281,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
        }
        else
        {
          v294 = &v291->obj.klass + v293;
          v331->fields._size = v293 + 1;
          v294[4] = (Il2CppClass *)v281;
          sub_1BCA784((PartyOrganizationUtility_o *)(v294 + 4), (int64_t)v281, v285, v286, v287, v288, v289, v290);
        }
        continue;
      }
      v248 = v334.fields._current;
      v249 = sub_1BCA888(int___TypeInfo, 0LL);
      if ( !v248 )
        sub_1BCAA3C(v249, v250);
      v251 = v248[1].monitor;
      if ( v251 )
      {
        if ( !v113 )
          sub_1BCAA3C(v249, v250);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v113,
                                                               v251[4],
                                                               v251[5],
                                                               0LL);
LABEL_110:
        v253 = (__int64)DispValFromSkill;
      }
      else
      {
        v253 = v249;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v248[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v246 )
        sub_1BCAA3C(DispValFromSkill, v250);
      v254 = *(_QWORD *)(v246 + 24);
      if ( v254 )
      {
        if ( (int)v254 >= 1 )
        {
          v255 = 0LL;
          v256 = (unsigned int)*(_QWORD *)(v246 + 24);
          do
          {
            if ( !v253 )
              sub_1BCAA3C(DispValFromSkill, v250);
            if ( v255 >= *(unsigned int *)(v253 + 24) )
              sub_1BCAA44(DispValFromSkill, v250);
            v257 = v246 + 4 * v255;
            v258 = *(_DWORD *)(v253 + 32 + 4 * v255++);
            *(_DWORD *)(v257 + 32) += v258;
          }
          while ( v256 != v255 );
        }
      }
      else
      {
        v246 = v253;
      }
      v259 = v248[2].monitor;
      if ( !v259 )
        sub_1BCAA3C(DispValFromSkill, v250);
      v260 = v259[20];
      if ( v260 > v247 )
        v247 = v260;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v336,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v298 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v295);
    v298 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v298->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v298->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v298, v295);
      v298 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v300 = (Il2CppObject *)v298->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v295,
                                               v296,
                                               v297);
    System_Func_object__int____ctor(
      _9__32_0,
      v300,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
      (int64_t)_9__32_0,
      v302,
      v303,
      v304,
      v305,
      v306,
      v307);
  }
  v308 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v331,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v312 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v313 = v308;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v309);
    v312 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v312->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v312->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v312, v309);
      v312 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v315 = (Il2CppObject *)v312->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v309,
                                               v310,
                                               v311);
    System_Func_object__int____ctor(
      _9__32_1,
      v315,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v316 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v316->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v316->__9__32_1, (int64_t)_9__32_1, v317, v318, v319, v320, v321, v322);
  }
  v323 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v313,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v323, (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dialog, (int64_t)method, v3, v4, v5, v6, v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v10);
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
  __int64 v6; // x2
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
  __int64 v25; // x8
  System_String_o *v26; // x0
  System_String_o *v27; // x29
  System_String_o *v28; // x0
  System_String_o *v29; // x28
  System_String_o *v30; // x0
  System_String_o *v31; // x27
  System_String_o *v32; // x0
  System_String_o *v33; // x26
  System_String_o *v34; // x0
  System_String_o *v35; // x25
  System_String_o *v36; // x0
  System_String_o *v37; // x24
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  System_String_o *v40; // x0
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x21
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x20
  System_String_o *v49; // x20
  System_String_o *v50; // x20
  System_String_o *v51; // x20
  System_String_o *v52; // x20
  unsigned __int64 v53; // x8
  System_String_o *v54; // x20
  unsigned __int64 v55; // x8
  System_String_o *v56; // x20
  unsigned __int64 v57; // x8
  System_String_o *v58; // x20
  unsigned __int64 v59; // x8
  int v61; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v62; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B196BB & 1) == 0 )
  {
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, funcVals, method);
    sub_1BCA7E0(&StringLiteral_25384/*"{x"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25169/*"{"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_25099/*"xx}"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_25098/*"xxx}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_25409/*"}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25387/*"{xxxx"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25385/*"{xx"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25097/*"xxxx}"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25100/*"x}"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25386/*"{xxx"*/, v23, v24);
    byte_4B196BB = 1;
  }
  v61 = 0;
  if ( funcVals )
  {
    v25 = *(_QWORD *)&funcVals->max_length;
    if ( v25 )
    {
      v62 = 0;
      if ( (int)v25 >= 1 )
      {
        do
        {
          v26 = System_Int32__ToString((int32_t)&v62, 0LL);
          v27 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v26,
                  (System_String_o *)StringLiteral_25097/*"xxxx}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v62, 0LL);
          v29 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v28,
                  (System_String_o *)StringLiteral_25098/*"xxx}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v62, 0LL);
          v31 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v30,
                  (System_String_o *)StringLiteral_25099/*"xx}"*/,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v62, 0LL);
          v33 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v32,
                  (System_String_o *)StringLiteral_25100/*"x}"*/,
                  0LL);
          v34 = System_Int32__ToString((int32_t)&v62, 0LL);
          v35 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v34,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v36 = System_Int32__ToString((int32_t)&v62, 0LL);
          v37 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25384/*"{x"*/,
                  v36,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v38 = System_Int32__ToString((int32_t)&v62, 0LL);
          v39 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25385/*"{xx"*/,
                  v38,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v40 = System_Int32__ToString((int32_t)&v62, 0LL);
          v41 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25386/*"{xxx"*/,
                  v40,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v42 = System_Int32__ToString((int32_t)&v62, 0LL);
          v43 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25387/*"{xxxx"*/,
                  v42,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v45 = v43;
          v61 = 10000 * funcVals->m_Items[v62 + 1];
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !text )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(text, v27, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v48 = v43;
          v61 = 1000 * funcVals->m_Items[v62 + 1];
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v48 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v48, v29, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v49 = v43;
          v61 = 100 * funcVals->m_Items[v62 + 1];
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v49 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v49, v31, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v50 = v43;
          v61 = 10 * funcVals->m_Items[v62 + 1];
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v50 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v50, v33, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v51 = v43;
          v46 = System_Int32__ToString((unsigned int)funcVals + 4 * v62 + 32, 0LL);
          if ( !v51 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v51, v35, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v52 = v43;
          v53 = 1717986919LL * funcVals->m_Items[v62 + 1];
          v61 = (v53 >> 63) + (SHIDWORD(v53) >> 2);
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v52 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v52, v37, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v54 = v43;
          v55 = 1374389535LL * funcVals->m_Items[v62 + 1];
          v61 = (v55 >> 63) + (SHIDWORD(v55) >> 5);
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v54 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v54, v39, v46, 0LL);
          if ( v62 >= funcVals->max_length )
            goto LABEL_29;
          v56 = v43;
          v57 = 274877907LL * funcVals->m_Items[v62 + 1];
          v61 = (v57 >> 63) + (SHIDWORD(v57) >> 6);
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v56 )
            goto LABEL_30;
          v43 = System_String__Replace_62420848(v56, v41, v46, 0LL);
          if ( v62 >= funcVals->max_length )
LABEL_29:
            sub_1BCAA44(v43, v44);
          v58 = v43;
          v59 = 1759218605LL * funcVals->m_Items[v62 + 1];
          v61 = (v59 >> 63) + (SHIDWORD(v59) >> 12);
          v46 = System_Int32__ToString((int32_t)&v61, 0LL);
          if ( !v58 )
LABEL_30:
            sub_1BCAA3C(v46, v47);
          text = System_String__Replace_62420848(v58, v45, v46, 0LL);
          ++v62;
        }
        while ( (signed int)v62 < (signed int)funcVals->max_length );
      }
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, funcVals);
      return SkillDetailParamFormatResolver__ApplyGivenValues(text, funcVals, 0LL);
    }
  }
  return text;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
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
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v46; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v48; // w23
  System_Collections_Generic_List_object__o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Comparison_T__o *v53; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v55; // x22
  float v56; // s8
  __int64 v57; // x1
  BalanceConfig_c *v58; // x0
  ClassBoardClassEntity_o *current; // x23
  __int64 v60; // x1
  BalanceConfig_c *v61; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v63; // x1
  UnityEngine_GameObject_o *v64; // x22
  __int64 v65; // x1
  Il2CppObject *Component_object; // x24
  _BOOL8 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v71; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  struct UIGrid_o *v76; // x8
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v80; // s8
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  __int64 v83; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v84; // x8
  UnityEngine_GameObject_o *v85; // x20
  UnityEngine_GameObject_o *v86; // x0
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B196B4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, classBoardBaseEntity, isAll);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, v9, v10);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Comparison_ClassBoardClassEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_3521/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v39, v40);
    byte_4B196B4 = 1;
  }
  entitys = 0LL;
  memset(&v88, 0, sizeof(v88));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, classBoardBaseEntity);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_69;
  if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v43);
    v46 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v46->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_17;
  v48 = classBoardBaseEntity->fields.id;
  if ( !v46->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v46, v43);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v48 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_17:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v44);
    v49 = (System_Collections_Generic_List_object__o *)entitys;
    v53 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ClassBoardClassEntity__TypeInfo, v50, v51, v52);
    System_Comparison_object____ctor(
      v53,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v49 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_56244000(
      v49,
      v53,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v55 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
    if ( !v55 )
      goto LABEL_69;
    UILabel__set_text(v55, (System_String_o *)Master_object, 0LL);
  }
  Master_object = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_69;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v56 = 0.0;
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v58 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v88.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v57);
    if ( !current )
      sub_1BCAA3C(v58, v57);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           current->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v61 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v60);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( v61->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v64 = Object;
    if ( !Object )
      sub_1BCAA3C(0LL, v63);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
    v67 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v67 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v88,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1BCAA3C(v67, v68);
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
                 (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_45;
    }
LABEL_46:
    v71 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v69);
      v71 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_object,
      v71->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v64, 0LL);
    if ( !classIconGrid )
      sub_1BCAA3C(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v64, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v64, 1, 0LL);
    v76 = this->fields.classIconGrid;
    if ( !v76 )
      sub_1BCAA3C(v74, v75);
    v56 = v56 + (float)(v76->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v78 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
  if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
  {
    Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
    if ( !Master_object )
      goto LABEL_69;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    v80 = -v56;
    GameObjectExtensions__AddLocalPositionX(gameObject, v80, 0LL);
    Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_object )
      goto LABEL_69;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__AddLocalPositionX(v81, v80, 0LL);
    if ( !isAll
      && System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( Master_object )
      {
        v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        v84 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v85 = v82;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v83);
          v84 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        GameObjectExtensions__AddLocalPositionX(v85, v84->static_fields->classIconOneDispFixPosY, 0LL);
        Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
        if ( Master_object )
        {
          v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          GameObjectExtensions__AddLocalPositionX(
            v86,
            ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
            0LL);
          goto LABEL_64;
        }
      }
LABEL_69:
      sub_1BCAA3C(Master_object, v42);
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
    sub_1BCAA3C(0LL, v5);
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
    sub_1BCAA3C(0LL, sprite);
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
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  const MethodInfo *v59; // x4
  long double inited; // q0
  System_Collections_Generic_List_ClassBoardClassEntity__o *v61; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v62; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v64; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  bool v72; // w0
  int v73; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v74; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v75; // x8
  int32_t v76; // w23
  int v77; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v80; // x22
  __int64 v81; // x8
  __int64 v82; // x0
  __int64 v83; // x0
  int32_t v84; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v95; // x21
  __int64 v96; // x1
  Il2CppObject *Component_object; // x23
  __int64 v98; // x1
  UnityEngine_Object_o *recycler; // x23
  __int64 v100; // x2
  __int64 v101; // x3
  struct ScrollItemRecycler_o *v102; // x8
  System_Func_T1__T2__TResult__o *v103; // x22
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  ScrollItemRecycler_HeightCalculatorVarious_o *v107; // x20
  __int64 v108; // x2
  __int64 v109; // x3
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v112; // x22
  System_Action_T1__T2__o *v113; // x24
  UILabel_o *allClosedLabel; // x21
  __int64 v115; // x1
  UnityEngine_Object_o *v116; // x21
  float v117; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v120; // x1
  UnityEngine_GameObject_o *v121; // x22
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v130; // x23
  __int64 v131; // x0
  __int64 v132; // x1
  const MethodInfo *v133; // x6
  float v134; // s8
  __int64 v135; // x1
  __int64 v136; // x2
  System_String_o *v137; // x0
  System_String_o *v138; // x22
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_4B196B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__int__TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&dispType);
    sub_1BCA7E0(&Method_System_Array_Empty_int___, v11, v12);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v13, v14);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v15, v16);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v23, v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v25,
      v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v29,
      v30);
    sub_1BCA7E0(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Func_GameObject__int__float__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v35, v36);
    sub_1BCA7E0(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v37, v38);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v39,
      v40);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v41,
      v42);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__, v47, v48);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_3520/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_3519/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v53, v54);
    byte_4B196B8 = 1;
  }
  entitys = 0LL;
  memset(&v140, 0, sizeof(v140));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseId);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v9, 0LL) )
  {
    v61 = entitys;
    v62 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v56);
      v62 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__bool__o *)v62->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62, v56);
        v62 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v64 = (Il2CppObject *)v62->static_fields->__9;
      _9__30_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_ClassBoardClassEntity__bool__TypeInfo,
                                                  v56,
                                                  v57,
                                                  v58);
      System_Func_object__bool____ctor(
        _9__30_0,
        v64,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
        (int64_t)_9__30_0,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
    }
    v72 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v61,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v73 = v72;
  }
  else
  {
    v73 = 1;
  }
  v74 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v56);
    v74 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v75 = v74->static_fields;
  if ( v9 == v75->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v76 = baseIda;
  if ( !v74->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v74, v56);
    v75 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v76 == v75->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v77 = 1;
  }
  else
  {
    classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
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
    v77 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v80 = Method_System_Array_Empty_int___;
      v81 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v81 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v56);
        v81 = v80[7];
      }
      v82 = *(_QWORD *)(v81 + 16);
      if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
        v82 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v82 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v82, v56);
      v83 = *(_QWORD *)(v80[7] + 16LL);
      if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
        v83 = sub_1C1C6BC(inited);
      squareIds = **(System_Int32_array ***)(v83 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v84 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v56);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v84, dispType, 0, squareIds, v59);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillDispDataList,
    (int64_t)OpenSkillList,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1BCAA3C(Master_object, v56);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3519/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v116 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v115);
      if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
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
      if ( (v77 & v73) != 0 )
      {
        v137 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v138 = System_String__Concat_62401220((System_String_o *)StringLiteral_3520/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v137, 0LL);
      }
      else
      {
        v138 = (System_String_o *)StringLiteral_3519/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v138, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
LABEL_50:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v95 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      recycler = (UnityEngine_Object_o *)this->fields.recycler;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98);
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(recycler, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( (v7 & v77) != 0 )
        {
          v102 = this->fields.recycler;
          if ( !v102 )
            goto LABEL_98;
          v102->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v103 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_GameObject__int__float__TypeInfo,
                                                   v56,
                                                   v100,
                                                   v101);
        System_Func_object__int__float____ctor(
          v103,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v107 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1BCAA2C(
                                                                 ScrollItemRecycler_HeightCalculatorVarious_TypeInfo,
                                                                 v104,
                                                                 v105,
                                                                 v106);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v107, (System_Func_GameObject__int__float__o *)v103, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v112 = this->fields.recycler;
          v113 = (System_Action_T1__T2__o *)sub_1BCAA2C(System_Action_GameObject__int__TypeInfo, v56, v108, v109);
          System_Action_object__int____ctor(
            v113,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v112 )
          {
            ScrollItemRecycler__Init(
              v112,
              size,
              v95,
              (System_Action_GameObject__int__o *)v113,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v107,
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v139,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v117 = 0.0;
      v140 = v139;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v140,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v140.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v95, 0LL, 0LL, 0LL);
        v121 = Object;
        if ( !Object )
          sub_1BCAA3C(0LL, v120);
        v122 = UnityEngine_GameObject__GetComponent_object_(
                 Object,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v130 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v122;
        if ( !v122 )
          sub_1BCAA3C(0LL, v123);
        v122[5].monitor = this;
        sub_1BCA784((PartyOrganizationUtility_o *)&v122[5].monitor, (int64_t)this, v124, v125, v126, v127, v128, v129);
        if ( !current )
          sub_1BCAA3C(v131, v132);
        v134 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v130,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v133);
        GameObjectExtensions__SetParent_34336872(v121, this->fields.skillListParent, 0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v135, v136);
          byte_4B109C6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v121, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_34331148(v121, 0.0, -v117, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v121, 1, 0LL);
        v117 = v117 + v134;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v140,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v15; // x21
  const MethodInfo *v16; // x6

  v6 = this;
  if ( (byte_4B196B6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      obj,
      *(_QWORD *)&index);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7,
                                                               v8);
    byte_4B196B6 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v15 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillListParent,
          (int64_t)v6,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(this, obj);
  }
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v15,
    *(System_String_o **)&this->fields.m_CachedPtr,
    (System_String_o *)this->fields.m_CancellationTokenSource,
    (int32_t)this->fields.classIconGrid,
    HIDWORD(this->fields.classIconGrid),
    0,
    v16);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)funcDispEntity, v11, v12, v13, v14, v15, v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillLvEntity,
    (int64_t)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellEntity,
    (int64_t)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquareEntity,
    (int64_t)classBoardSquareEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->fields, (int64_t)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v14, (int64_t)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B196BD & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2);
    byte_4B196BD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return !ClassBoardClassEntity__IsOpen(entity, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1BCAA3C(0LL, *(_QWORD *)&id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}