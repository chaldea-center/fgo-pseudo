void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_4C255DD & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_4C255DD = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_C0E2C0;
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
        sub_1C3B9C8(this, a);
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
    sub_1C3B9C0(this, a);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C255D6 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4C255D6 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v18 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v40.fields._current )
      sub_1C3B9C0(v21, v22);
    if ( !v18 )
      sub_1C3B9C0(v21, v22);
    klass_high = HIDWORD(v40.fields._current[1].klass);
    items = v18->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1C3B9C0(v21, klass_high);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_high,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
              (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1C3B9C0(v19, v20);
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
          (const MethodInfo_302EF68 *)Method_System_Linq_Enumerable_Union_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v32;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.arrayForSort, (int64_t)v32, v33, v34, v35, v36, v37, v38);
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
  if ( (byte_4C255D8 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C3B764(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4C255D8 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v9 )
  {
    sub_1C3B9C0(this, obj);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Func_T__TResult__o *v27; // x22
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v31; // x3
  ClassBoardSquareEntity_array *v32; // x21

  if ( (byte_4C255DA & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_1C3B764(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v14);
    sub_1C3B764(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      v15);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo, v16);
    byte_4C255DA = 1;
  }
  v17 = sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1C3B9C0(v18, v19);
  *(_DWORD *)(v17 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v17 + 16) = Master_object;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Master_object, v21, v22, v23, v24, v25, v26);
  if ( openedSquareIdArray )
  {
    v27 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v27,
      (Il2CppObject *)v17,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v27,
                                                           (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v29 = BasicHelper__ExcludeNull_object_(
            v28,
            (const MethodInfo_2FDB4C8 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v17 + 24), 0LL);
  }
  v32 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v32,
           dispType,
           ignoreTurnOrCountPassive,
           v31);
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
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_object__o *v85; // x29
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  Il2CppObject *v91; // x22
  __int64 v92; // x1
  System_Collections_Generic_List_object__o *v93; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v95; // x19
  System_Collections_Generic_List_object__o *v96; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v97; // x20
  const MethodInfo *v98; // x5
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v125; // x22
  const MethodInfo *v126; // x7
  __int64 v127; // x0
  __int64 v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  System_String_o *v143; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v145; // w19
  int32_t v146; // w23
  int32_t v147; // w24
  int32_t v148; // w25
  System_String_o *v149; // x26
  const MethodInfo *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  System_Collections_Generic_List_object__o *v155; // x0
  _BOOL8 v156; // x0
  __int64 v157; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v160; // x0
  __int64 v161; // x1
  Il2CppObject *v162; // x0
  __int64 v163; // x1
  _DWORD *v164; // x8
  __int64 v165; // x1
  Il2CppObject *v166; // x0
  __int64 v167; // x1
  Il2CppObject *v168; // x0
  __int64 v169; // x1
  Il2CppClass *v170; // x8
  __int64 v171; // x25
  int32_t v172; // w24
  Il2CppObject *v173; // x19
  __int64 v174; // x0
  __int64 v175; // x1
  _DWORD *v176; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v178; // x8
  __int64 v179; // x10
  unsigned __int64 v180; // x9
  __int64 v181; // x10
  unsigned __int64 v182; // x12
  int v183; // w13
  _DWORD *v184; // x8
  int32_t v185; // w8
  Il2CppObject *v186; // x0
  __int64 v187; // x1
  const MethodInfo *v188; // x2
  Il2CppClass *v189; // x8
  System_String_o *data; // x19
  System_String_o *v191; // x25
  Il2CppObject *v192; // x0
  __int64 v193; // x1
  _DWORD *v194; // x8
  int32_t v195; // w26
  Il2CppObject *v196; // x0
  __int64 v197; // x1
  _DWORD *v198; // x8
  int32_t v199; // w20
  Il2CppObject *v200; // x0
  __int64 v201; // x1
  _DWORD *v202; // x8
  int32_t v203; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v204; // x22
  const MethodInfo *v205; // x7
  __int64 v206; // x0
  __int64 v207; // x1
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  Il2CppClass **v217; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v218; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v220; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v228; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v229; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v230; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v232; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v240; // x0
  int32_t v243; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v244; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v246; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v247; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v248; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v249; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v250; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v251; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v252; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v253; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v254; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v255; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v256; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v258; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4C255DB & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_1C3B764(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v21);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v24);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v27);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v29);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v30);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_1C3B764(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_1C3B764(&int___TypeInfo, v33);
    sub_1C3B764(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v35);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v41);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v42);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v44);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_1C3B764(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v47);
    sub_1C3B764(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_1C3B764(&Method_System_String_Join_int___, v52);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__, v53);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__, v54);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v55);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v56);
    sub_1C3B764(&StringLiteral_1/*""*/, v57);
    byte_4C255DB = 1;
  }
  v258 = 0LL;
  entity = 0LL;
  v256 = 0LL;
  entitys = 0LL;
  memset(&v255, 0, sizeof(v255));
  v254 = 0LL;
  v252 = 0LL;
  memset(&v253, 0, sizeof(v253));
  memset(&v251, 0, sizeof(v251));
  v58 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v58;
  v248 = v58;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v244 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v247 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v247,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    v249 = (FuncDispMaster_o *)v62;
    v243 = v4;
    v246 = openedSquareArray;
    do
    {
      if ( v64 >= (unsigned int)max_length )
        sub_1C3B9C8(IsPassive, v60);
      v65 = openedSquareArray->m_Items[v64];
      v66 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v66,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v66;
      if ( !v65 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v65, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v65, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v244;
          if ( !v244 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v244,
                                        &entitys,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v85 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v85,
              (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v250,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v255.fields._list = *(_OWORD *)&v250.fields._dictionary;
            v255.fields._current = v250.fields._current.fields.key;
            while ( 1 )
            {
              v86 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v255,
                      (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v62 = (Il2CppObject *)v249;
              if ( !v86 )
                break;
              current = v255.fields._current;
              if ( !v255.fields._current )
                sub_1C3B9C0(v86, v87);
              if ( !v249 )
                sub_1C3B9C0(v86, v87);
              if ( FuncDispMaster__IsContainFuncIds(
                     v249,
                     &v254,
                     (System_Int32_array *)v255.fields._current[3].klass,
                     0LL) )
              {
                v89 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_3095570 *)Method_System_String_Join_int___);
                if ( !v85 )
                  sub_1C3B9C0(v89, v90);
                v91 = v89;
                if ( !System_Collections_Generic_List_object___Contains(
                        v85,
                        v89,
                        (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v247 )
                    sub_1C3B9C0(0LL, v92);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v247,
                          v91,
                          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v93 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v93,
                      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v247,
                      v91,
                      (Il2CppObject *)v93,
                      (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v247,
                           v91,
                           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v95 = v254;
                  v96 = (System_Collections_Generic_List_object__o *)Item;
                  v97 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v97,
                    v95,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v65,
                    v98);
                  if ( !v96 )
                    sub_1C3B9C0(v99, v100);
                  items = v96->fields._items;
                  v108 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v96->fields._version;
                  if ( !items )
                    sub_1C3B9C0(v99, v100);
                  size = v96->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v96,
                      (Il2CppObject *)v97,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v110 = &items->obj.klass + size;
                    v96->fields._size = size + 1;
                    v110[4] = (Il2CppClass *)v97;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v110 + 4),
                      (int64_t)v97,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105,
                      v106);
                  }
                  v139 = v85->fields._items;
                  v140 = Method_System_Collections_Generic_List_string__Add__;
                  ++v85->fields._version;
                  if ( !v139 )
                    sub_1C3B9C0(v111, v112);
                  v141 = v85->fields._size;
                  if ( (unsigned int)v141 >= v139->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v85,
                      v91,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v142 = &v139->obj.klass + v141;
                    v85->fields._size = v141 + 1;
                    v142[4] = (Il2CppClass *)v91;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v142 + 4),
                      (int64_t)v91,
                      v113,
                      v114,
                      v115,
                      v116,
                      v117,
                      v118);
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
                v125 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v125,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v126);
                if ( !v248 )
                  sub_1C3B9C0(v127, v128);
                v135 = v248->fields._items;
                v136 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v248->fields._version;
                if ( !v135 )
                  sub_1C3B9C0(v127, v128);
                v137 = v248->fields._size;
                if ( (unsigned int)v137 >= v135->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v248,
                    (Il2CppObject *)v125,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                }
                else
                {
                  v138 = &v135->obj.klass + v137;
                  v248->fields._size = v137 + 1;
                  v138[4] = (Il2CppClass *)v125;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)(v138 + 4),
                    (int64_t)v125,
                    v129,
                    v130,
                    v131,
                    v132,
                    v133,
                    v134);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v255,
              (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v243;
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
                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v61,
                                        &v258,
                                        v65->fields.targetId,
                                        v65->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v258;
            if ( !v258 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v258, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v258 || !v62 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v62,
                                            &v256,
                                            v258->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v258 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v258->fields.funcId,
                                              (const MethodInfo_3095570 *)Method_System_String_Join_int___);
                if ( !v247 )
                  goto LABEL_159;
                v67 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v247,
                        IsPassive,
                        (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v68 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v68,
                    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v247,
                    v67,
                    (Il2CppObject *)v68,
                    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v69 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v247,
                        v67,
                        (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v70 = v256;
                v71 = v258;
                v72 = (System_Collections_Generic_List_object__o *)v69;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v73, v70, v71, 0LL, v65, v74);
                if ( !v72 )
                  goto LABEL_159;
                v81 = v72->fields._items;
                v82 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v72->fields._version;
                if ( !v81 )
                  goto LABEL_159;
                v83 = v72->fields._size;
                if ( (unsigned int)v83 >= v81->max_length )
                {
                  v154 = v82[4];
                  v155 = v72;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v155,
                    (Il2CppObject *)v73,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v154 + 192) + 112LL));
                  goto LABEL_61;
                }
                v84 = &v81->obj.klass + v83;
                v72->fields._size = v83 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v143 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v145 = v65->fields.priority;
                v146 = v65->fields.id;
                v147 = v65->fields.iconId;
                v148 = v65->fields.skillType;
                v149 = EffectExplanation;
                v73 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v73,
                  v143,
                  v149,
                  v146,
                  v145,
                  v147,
                  v148,
                  v150);
                if ( !v248 )
                  goto LABEL_159;
                v151 = v248->fields._items;
                v152 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v248->fields._version;
                if ( !v151 )
                  goto LABEL_159;
                v153 = v248->fields._size;
                v62 = (Il2CppObject *)v249;
                if ( (unsigned int)v153 >= v151->max_length )
                {
                  v154 = v152[4];
                  v155 = v248;
                  goto LABEL_72;
                }
                v84 = &v151->obj.klass + v153;
                v248->fields._size = v153 + 1;
              }
              v84[4] = (Il2CppClass *)v73;
              sub_1C3B708((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v73, v75, v76, v77, v78, v79, v80);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v246;
      ++v64;
      max_length = v246->max_length;
    }
    while ( v64 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v247;
  if ( !v247 )
LABEL_159:
    sub_1C3B9C0(IsPassive, v60);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v250,
    v247,
    (const MethodInfo_3355B98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v253 = v250;
  while ( 1 )
  {
    v156 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v253,
             (const MethodInfo_34515CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v156 )
      break;
    value = v253.fields._current.fields.value;
    if ( !v253.fields._current.fields.value )
      sub_1C3B9C0(v156, v157);
    if ( SLODWORD(v253.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v160 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v253.fields._current.fields.value,
               0,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v160 )
        sub_1C3B9C0(0LL, v161);
      if ( v160[1].monitor )
      {
        v162 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v162 )
          sub_1C3B9C0(0LL, v163);
        v164 = v162[1].monitor;
        if ( !v164 )
          sub_1C3B9C0(v162, v163);
        if ( !Master_object )
          sub_1C3B9C0(0LL, v163);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v252,
               v164[4],
               (const MethodInfo_329AE94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v252 )
            sub_1C3B9C0(0LL, v165);
          Name = SkillEntity__getName((SkillEntity_o *)v252, 0LL);
        }
      }
      else
      {
        v166 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v166 )
          sub_1C3B9C0(0LL, v167);
        if ( v166[2].klass )
        {
          v168 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v168 )
            sub_1C3B9C0(0LL, v169);
          v170 = v168[2].klass;
          if ( !v170 )
            sub_1C3B9C0(v168, v169);
          Name = (System_String_o *)v170->_1.byval_arg.data;
        }
      }
      v171 = sub_1C3B80C(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v250,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v172 = 0;
      *(_OWORD *)&v251.fields._list = *(_OWORD *)&v250.fields._dictionary;
      v251.fields._current = v250.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v251,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v251,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v186 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v186 )
          sub_1C3B9C0(0LL, v187);
        v189 = v186[1].klass;
        if ( !v189 )
          sub_1C3B9C0(v186, v187);
        data = (System_String_o *)v189->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v191 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v171,
                 v188);
        v192 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v192 )
          sub_1C3B9C0(0LL, v193);
        v194 = v192[2].monitor;
        if ( !v194 )
          sub_1C3B9C0(v192, v193);
        v195 = v194[5];
        v196 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v196 )
          sub_1C3B9C0(0LL, v197);
        v198 = v196[2].monitor;
        if ( !v198 )
          sub_1C3B9C0(v196, v197);
        v199 = v198[6];
        v200 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v200 )
          sub_1C3B9C0(0LL, v201);
        v202 = v200[2].monitor;
        if ( !v202 )
          sub_1C3B9C0(v200, v201);
        v203 = v202[14];
        v204 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v204,
          Name,
          v191,
          v195,
          v172,
          v199,
          v203,
          v205);
        if ( !v248 )
          sub_1C3B9C0(v206, v207);
        v214 = v248->fields._items;
        v215 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v248->fields._version;
        if ( !v214 )
          sub_1C3B9C0(v206, v207);
        v216 = v248->fields._size;
        if ( (unsigned int)v216 >= v214->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v248,
            (Il2CppObject *)v204,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
        }
        else
        {
          v217 = &v214->obj.klass + v216;
          v248->fields._size = v216 + 1;
          v217[4] = (Il2CppClass *)v204;
          sub_1C3B708((PartyOrganizationUtility_o *)(v217 + 4), (int64_t)v204, v208, v209, v210, v211, v212, v213);
        }
        continue;
      }
      v173 = v251.fields._current;
      v174 = sub_1C3B80C(int___TypeInfo, 0LL);
      if ( !v173 )
        sub_1C3B9C0(v174, v175);
      v176 = v173[1].monitor;
      if ( v176 )
      {
        if ( !v61 )
          sub_1C3B9C0(v174, v175);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v61,
                                                               v176[4],
                                                               v176[5],
                                                               0LL);
LABEL_110:
        v178 = (__int64)DispValFromSkill;
      }
      else
      {
        v178 = v174;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v173[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v171 )
        sub_1C3B9C0(DispValFromSkill, v175);
      v179 = *(_QWORD *)(v171 + 24);
      if ( v179 )
      {
        if ( (int)v179 >= 1 )
        {
          v180 = 0LL;
          v181 = (unsigned int)*(_QWORD *)(v171 + 24);
          do
          {
            if ( !v178 )
              sub_1C3B9C0(DispValFromSkill, v175);
            if ( v180 >= *(unsigned int *)(v178 + 24) )
              sub_1C3B9C8(DispValFromSkill, v175);
            v182 = v171 + 4 * v180;
            v183 = *(_DWORD *)(v178 + 32 + 4 * v180++);
            *(_DWORD *)(v182 + 32) += v183;
          }
          while ( v181 != v180 );
        }
      }
      else
      {
        v171 = v178;
      }
      v184 = v173[2].monitor;
      if ( !v184 )
        sub_1C3B9C0(DispValFromSkill, v175);
      v185 = v184[20];
      if ( v185 > v172 )
        v172 = v185;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v253,
    (const MethodInfo_34516EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v218 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v218 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v218->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v218->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v218);
      v218 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v220 = (Il2CppObject *)v218->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_0,
      v220,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
      (int64_t)_9__32_0,
      v222,
      v223,
      v224,
      v225,
      v226,
      v227);
  }
  v228 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v248,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v229 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v230 = v228;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v229 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v229->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v229->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v229);
      v229 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v232 = (Il2CppObject *)v229->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_1,
      v232,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v233 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v233->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v233->__9__32_1, (int64_t)_9__32_1, v234, v235, v236, v237, v238, v239);
  }
  v240 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v230,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_302A15C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v240, (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dialog, (int64_t)method, v3, v4, v5, v6, v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1C3B9C0(gameObject, v10);
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

  if ( (byte_4C255DC & 1) == 0 )
  {
    sub_1C3B764(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_1C3B764(&StringLiteral_25646, v5);
    sub_1C3B764(&StringLiteral_25427, v6);
    sub_1C3B764(&StringLiteral_25357, v7);
    sub_1C3B764(&StringLiteral_25356, v8);
    sub_1C3B764(&StringLiteral_25673, v9);
    sub_1C3B764(&StringLiteral_25649, v10);
    sub_1C3B764(&StringLiteral_25647, v11);
    sub_1C3B764(&StringLiteral_25355, v12);
    sub_1C3B764(&StringLiteral_25358, v13);
    sub_1C3B764(&StringLiteral_25648, v14);
    byte_4C255DC = 1;
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
          v17 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v16,
                  (System_String_o *)StringLiteral_25355,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v52, 0LL);
          v19 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v18,
                  (System_String_o *)StringLiteral_25356,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v52, 0LL);
          v21 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v20,
                  (System_String_o *)StringLiteral_25357,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v52, 0LL);
          v23 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v22,
                  (System_String_o *)StringLiteral_25358,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v52, 0LL);
          v25 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v24,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v52, 0LL);
          v27 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25646,
                  v26,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v52, 0LL);
          v29 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25647,
                  v28,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v52, 0LL);
          v31 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25648,
                  v30,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v52, 0LL);
          v33 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25649,
                  v32,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v35 = v33;
          v51 = 10000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !text )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(text, v17, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v38 = v33;
          v51 = 1000 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v38 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v38, v19, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v39 = v33;
          v51 = 100 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v39 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v39, v21, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v40 = v33;
          v51 = 10 * funcVals->m_Items[v52 + 1];
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v40 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v40, v23, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v41 = v33;
          v36 = System_Int32__ToString((unsigned int)funcVals + 4 * v52 + 32, 0LL);
          if ( !v41 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v41, v25, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v42 = v33;
          v43 = 1717986919LL * funcVals->m_Items[v52 + 1];
          v51 = (v43 >> 63) + (SHIDWORD(v43) >> 2);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v42 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v42, v27, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v44 = v33;
          v45 = 1374389535LL * funcVals->m_Items[v52 + 1];
          v51 = (v45 >> 63) + (SHIDWORD(v45) >> 5);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v44 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v44, v29, v36, 0LL);
          if ( v52 >= funcVals->max_length )
            goto LABEL_29;
          v46 = v33;
          v47 = 274877907LL * funcVals->m_Items[v52 + 1];
          v51 = (v47 >> 63) + (SHIDWORD(v47) >> 6);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v46 )
            goto LABEL_30;
          v33 = System_String__Replace_63388240(v46, v31, v36, 0LL);
          if ( v52 >= funcVals->max_length )
LABEL_29:
            sub_1C3B9C8(v33, v34);
          v48 = v33;
          v49 = 1759218605LL * funcVals->m_Items[v52 + 1];
          v51 = (v49 >> 63) + (SHIDWORD(v49) >> 12);
          v36 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v48 )
LABEL_30:
            sub_1C3B9C0(v36, v37);
          text = System_String__Replace_63388240(v48, v35, v36, 0LL);
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

  if ( (byte_4C255D5 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, classBoardBaseEntity);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, v9);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v10);
    sub_1C3B764(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_1C3B764(&DataManager_TypeInfo, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v18);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v21);
    sub_1C3B764(&LocalizationManager_TypeInfo, v22);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v23);
    sub_1C3B764(&StringLiteral_3533/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, v24);
    byte_4C255D5 = 1;
  }
  entitys = 0LL;
  memset(&v63, 0, sizeof(v63));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    v33 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(
      v33,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v32 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_57202480(
      v32,
      v33,
      (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v35 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
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
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v36 = 0.0;
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v38 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v63.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1C3B9C0(v38, v37);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           current->fields.classId,
           (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v40 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      if ( v40->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v43 = Object;
    if ( !Object )
      sub_1C3B9C0(0LL, v42);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v45 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v45 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1C3B9C0(v45, v46);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, current->fields.classId, 0, 0LL);
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
                 (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
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
      sub_1C3B9C0(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v43, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v43, 1, 0LL);
    v53 = this->fields.classIconGrid;
    if ( !v53 )
      sub_1C3B9C0(v51, v52);
    v36 = v36 + (float)(v53->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
           (const MethodInfo_300B768 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
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
      sub_1C3B9C0(Master_object, v26);
    }
  }
LABEL_64:
  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
  if ( !Master_object )
    goto LABEL_69;
  ((void (__fastcall *)(ClassBoardClassMaster_o *, Il2CppMethodPointer))Master_object->klass->vtable._8_ReplacedForThread.method)(
    Master_object,
    Master_object->klass->vtable._9_Updated.methodPtr);
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
    sub_1C3B9C0(0LL, v5);
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
    sub_1C3B9C0(0LL, sprite);
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
  long double inited; // q0
  System_Collections_Generic_List_ClassBoardClassEntity__o *v37; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v38; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v40; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  bool v48; // w0
  int v49; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v50; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v51; // x8
  int32_t v52; // w23
  int v53; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v56; // x22
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v71; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v74; // x8
  System_Func_T1__T2__TResult__o *v75; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v76; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v79; // x22
  System_Action_T1__T2__o *v80; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v82; // x21
  float v83; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v86; // x1
  UnityEngine_GameObject_o *v87; // x22
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v96; // x23
  __int64 v97; // x0
  __int64 v98; // x1
  const MethodInfo *v99; // x6
  float v100; // s8
  __int64 v101; // x1
  System_String_o *v102; // x0
  System_String_o *v103; // x22
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_4C255D9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_GameObject__int__TypeInfo, *(_QWORD *)&baseId);
    sub_1C3B764(&Method_System_Array_Empty_int___, v11);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v12);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v13);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v17);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v18);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v19);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v20);
    sub_1C3B764(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v21);
    sub_1C3B764(&System_Func_GameObject__int__float__TypeInfo, v22);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v23);
    sub_1C3B764(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v24);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v25);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v26);
    sub_1C3B764(&LocalizationManager_TypeInfo, v27);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v28);
    sub_1C3B764(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__, v29);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v30);
    sub_1C3B764(&StringLiteral_3532/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, v31);
    sub_1C3B764(&StringLiteral_3531/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v32);
    byte_4C255D9 = 1;
  }
  entitys = 0LL;
  memset(&v105, 0, sizeof(v105));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      _9__30_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__30_0,
        v40,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
        (int64_t)_9__30_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v37,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2FFA7D0 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v49 = v48;
  }
  else
  {
    v49 = 1;
  }
  v50 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v50 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v51 = v50->static_fields;
  if ( v9 == v51->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v52 = baseIda;
  if ( !v50->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v50);
    v51 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v52 == v51->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v53 = 1;
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
    v53 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v56 = Method_System_Array_Empty_int___;
      v57 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v57 )
      {
        sub_1C8D69C(Method_System_Array_Empty_int___);
        v57 = v56[7];
      }
      v58 = *(_QWORD *)(v57 + 16);
      if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
        v58 = sub_1C8D640(inited);
      if ( !*(_DWORD *)(v58 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v58);
      v59 = *(_QWORD *)(v56[7] + 16LL);
      if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
        v59 = sub_1C8D640(inited);
      squareIds = **(System_Int32_array ***)(v59 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v60 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v60, dispType, 0, squareIds, v35);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.skillDispDataList,
    (int64_t)OpenSkillList,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1C3B9C0(Master_object, v34);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3531/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v82 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
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
      if ( (v53 & v49) != 0 )
      {
        v102 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v103 = System_String__Concat_63368612((System_String_o *)StringLiteral_3532/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, v102, 0LL);
      }
      else
      {
        v103 = (System_String_o *)StringLiteral_3531/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v103, 0LL);
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
    v71 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v7 & v53) != 0 )
        {
          v74 = this->fields.recycler;
          if ( !v74 )
            goto LABEL_98;
          v74->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v75 = (System_Func_T1__T2__TResult__o *)sub_1C3B9B0(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v75,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v76 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C3B9B0(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v76, (System_Func_GameObject__int__float__o *)v75, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v79 = this->fields.recycler;
          v80 = (System_Action_T1__T2__o *)sub_1C3B9B0(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v80,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v79 )
          {
            ScrollItemRecycler__Init(
              v79,
              size,
              v71,
              (System_Action_GameObject__int__o *)v80,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v76,
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v104,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v83 = 0.0;
      v105 = v104;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v105,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v105.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v71, 0LL, 0LL, 0LL);
        v87 = Object;
        if ( !Object )
          sub_1C3B9C0(0LL, v86);
        v88 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v96 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v88;
        if ( !v88 )
          sub_1C3B9C0(0LL, v89);
        v88[5].klass = (Il2CppClass *)this;
        sub_1C3B708((PartyOrganizationUtility_o *)&v88[5], (int64_t)this, v90, v91, v92, v93, v94, v95);
        if ( !current )
          sub_1C3B9C0(v97, v98);
        v100 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v96,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v99);
        GameObjectExtensions__SetParent_34969220(v87, this->fields.skillListParent, 0LL);
        if ( !byte_4C1C516 )
        {
          sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v101);
          byte_4C1C516 = 1;
        }
        GameObjectExtensions__SetLocalScale(v87, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_34963496(v87, 0.0, -v83, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v87, 1, 0LL);
        v83 = v83 + v100;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v105,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v14; // x21
  const MethodInfo *v15; // x6

  v6 = this;
  if ( (byte_4C255D7 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C3B764(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4C255D7 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v14 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.recycler = (struct ScrollItemRecycler_o *)v6,
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.recycler, (int64_t)v6, v8, v9, v10, v11, v12, v13),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(this, obj);
  }
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v14,
    *(System_String_o **)&this->fields.m_CachedPtr,
    (System_String_o *)this->fields.m_CancellationTokenSource,
    (int32_t)this->fields.classIconGrid,
    HIDWORD(this->fields.classIconGrid),
    0,
    v15);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)funcDispEntity, v11, v12, v13, v14, v15, v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.skillLvEntity,
    (int64_t)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellEntity,
    (int64_t)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&v14->fields, (int64_t)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)v14, (int64_t)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C255DE & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_4C255DE = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}