void ClassBoardClassIconListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_597460E & 1) == 0 )
  {
    sub_2213A60(&ClassBoardClassIconListComponent_TypeInfo);
    byte_597460E = 1;
  }
  LODWORD(ClassBoardClassIconListComponent_TypeInfo->static_fields->ClassIconOneDispFixPosY) = (struct ClassBoardClassIconListComponent_StaticFields)-1082130432;
}


void ClassBoardClassIconListComponent___ctor(ClassBoardClassIconListComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ClassBoardClassIconListComponent__Awake(ClassBoardClassIconListComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t ClassBoardClassIconListComponent__CompareClassId(
        ClassBoardClassIconListComponent_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  struct System_Int32_array *arrayForSort; // x13
  il2cpp_array_size_t max_length; // x12
  __int64 v6; // x11
  int v7; // w8
  int v8; // w9
  __int64 v9; // x10
  __int64 v10; // x12
  int32_t *m_Items; // x13
  int32_t v12; // w15

  arrayForSort = this->fields.arrayForSort;
  if ( !arrayForSort )
LABEL_14:
    sub_2213CDC(this, a);
  max_length = arrayForSort->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = (unsigned int)max_length & ~((int)max_length >> 31);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = (unsigned int)arrayForSort->max_length;
  m_Items = arrayForSort->m_Items;
  do
  {
    if ( !a )
      goto LABEL_14;
    if ( v10 == v9 )
      sub_2213CE4(this);
    if ( !b )
      goto LABEL_14;
    v12 = m_Items[v9];
    if ( a->fields.classId == v12 )
      v8 = v9;
    if ( b->fields.classId == v12 )
      v7 = v9;
    ++v9;
  }
  while ( v6 != v9 );
  return v8 - v7;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardClassIconListComponent__CreateArrayForSort(
        ClassBoardClassIconListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        bool isGrandExtra,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x8
  ClassBoardEffectListDialogSkillListComponent_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra1SortOrderClassIds; // x21
  BalanceConfig_c *v12; // x0
  ClassBoardClassIconListComponent___c_c *v13; // x0
  struct ClassBoardClassIconListComponent___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__7_0; // x22
  Il2CppObject *v16; // x23
  struct ClassBoardClassIconListComponent___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  __int64 v25; // x1
  ClassBoardClassIconListComponent___c_c *v26; // x8
  struct ClassBoardClassIconListComponent___c_StaticFields *v27; // x9
  System_Func_object__int__o *_9__7_1; // x22
  Il2CppObject *v29; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct ClassBoardClassIconListComponent___c_StaticFields *v36; // x0
  MissionNaviTransitionBoardItem_o *p__9__7_1; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v38; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v39; // x8
  ClassBoardClassIconListComponent___c_c *v40; // x0
  struct ClassBoardClassIconListComponent___c_StaticFields *v41; // x8
  Il2CppObject *v42; // x23
  struct ClassBoardClassIconListComponent___c_StaticFields *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  struct System_Int32_array *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  ClassBoardClassIconListComponent___c_c *v54; // x0
  struct ClassBoardClassIconListComponent___c_StaticFields *v55; // x8
  System_Func_object__int__o *_9__7_3; // x21
  Il2CppObject *v57; // x22
  struct ClassBoardClassIconListComponent___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7

  if ( (byte_597460D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Union_int___);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_ClassBoardClassEntity__int__TypeInfo);
    sub_2213A60(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_0__);
    sub_2213A60(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_1__);
    sub_2213A60(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_2__);
    sub_2213A60(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_3__);
    sub_2213A60(&ClassBoardClassIconListComponent___c_TypeInfo);
    byte_597460D = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&id);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v9->static_fields->Extra1SortOrderClassIds;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&id);
    v10 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  if ( v10->static_fields->Extra2ClassBaseId == id )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&id);
      v12 = BalanceConfig_TypeInfo;
    }
    Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->Extra2SortOrderClassIds,
                                                                                     (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  if ( isGrandExtra )
  {
    v13 = ClassBoardClassIconListComponent___c_TypeInfo;
    if ( !*(&ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo, *(_QWORD *)&id);
      v13 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__7_0 = static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&id);
        static_fields = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(
        _9__7_0,
        v16,
        Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_0__,
        0);
      v17 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
      v17->__9__7_0 = _9__7_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__7_0, (int32_t)_9__7_0, v18, v19, v20, v21, v22, v23);
    }
    v24 = System_Linq_Enumerable__Select_int__int_(
            Extra1SortOrderClassIds,
            (System_Func_TSource__TResult__o *)_9__7_0,
            (const MethodInfo_388D7F0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v26 = ClassBoardClassIconListComponent___c_TypeInfo;
    Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( !*(&ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo, v25);
      v26 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    v27 = v26->static_fields;
    _9__7_1 = (System_Func_object__int__o *)v27->__9__7_1;
    if ( _9__7_1 )
      goto LABEL_37;
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v25);
      v27 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_1,
      v29,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_1__,
      0);
    v36 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v36->__9__7_1 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_1;
    p__9__7_1 = (MissionNaviTransitionBoardItem_o *)&v36->__9__7_1;
LABEL_36:
    sub_2213A04(p__9__7_1, (int32_t)_9__7_1, v30, v31, v32, v33, v34, v35);
LABEL_37:
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entityList,
                                                                 (System_Func_TSource__TResult__o *)_9__7_1,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
    v45 = System_Linq_Enumerable__Union_int_(
            Extra1SortOrderClassIds,
            v44,
            (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
    goto LABEL_38;
  }
  v38 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&id);
    v38 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v39 = v38->static_fields;
  if ( v39->Extra1ClassBaseId == id )
    goto LABEL_30;
  if ( !*(&v38->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v38, *(_QWORD *)&id);
    v39 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v39->Extra2ClassBaseId == id )
  {
LABEL_30:
    v40 = ClassBoardClassIconListComponent___c_TypeInfo;
    if ( !*(&ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo, *(_QWORD *)&id);
      v40 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    v41 = v40->static_fields;
    _9__7_1 = (System_Func_object__int__o *)v41->__9__7_2;
    if ( _9__7_1 )
      goto LABEL_37;
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, *(_QWORD *)&id);
      v41 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v41->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_1,
      v42,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_2__,
      0);
    v43 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v43->__9__7_2 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_1;
    p__9__7_1 = (MissionNaviTransitionBoardItem_o *)&v43->__9__7_2;
    goto LABEL_36;
  }
  v54 = ClassBoardClassIconListComponent___c_TypeInfo;
  if ( !*(&ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo, *(_QWORD *)&id);
    v54 = ClassBoardClassIconListComponent___c_TypeInfo;
  }
  v55 = v54->static_fields;
  _9__7_3 = (System_Func_object__int__o *)v55->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !*(&v54->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v54, *(_QWORD *)&id);
      v55 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__7_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_3,
      v57,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_3__,
      0);
    v58 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v58->__9__7_3 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->__9__7_3, (int32_t)_9__7_3, v59, v60, v61, v62, v63, v64);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entityList,
                                                               (System_Func_TSource__TResult__o *)_9__7_3,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
LABEL_38:
  v46 = System_Linq_Enumerable__ToArray_int_(
          v45,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !this )
    sub_2213CDC(v46, v47);
  this->fields.arrayForSort = v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.arrayForSort,
    (int32_t)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
}


void ClassBoardClassIconListComponent__SetClassIconList(
        ClassBoardClassIconListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        bool isGrand,
        const MethodInfo *method)
{
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  ClassBoardEffectListDialogSkillListComponent_c *v15; // x0
  int32_t parentClassBoardBaseId; // w25
  int32_t v17; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v18; // x0
  int32_t id; // w25
  int32_t v20; // w23
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_ClassBoardClassEntity__o *v22; // x2
  ClassBoardClassIconListComponent_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w3
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x22
  System_Comparison_T__o *v28; // x23
  UILabel_o *subjectClassLabel; // x22
  __int64 v30; // x1
  ServantClassMaster_o *v31; // x23
  System_Collections_Generic_IEnumerable_TSource__o *PlayableGrandBeastClassIds; // x22
  int v33; // w23
  float v34; // s8
  _BOOL8 v35; // x0
  __int64 v36; // x1
  ClassBoardClassEntity_o *current; // x25
  BalanceConfig_c *v38; // x0
  int32_t klass_high; // w27
  __int64 v40; // x1
  BalanceConfig_c *v41; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v43; // x1
  UnityEngine_GameObject_o *v44; // x24
  __int64 v45; // x1
  Il2CppObject *Component_object; // x26
  _BOOL8 v47; // x0
  __int64 v48; // x1
  bool IsOpen; // w0
  __int64 v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v53; // x0
  UIGrid_o *classIconGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  struct UIGrid_o *v58; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v60; // s8
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x1
  UnityEngine_GameObject_o *v63; // x20
  ClassBoardClassIconListComponent_c *v64; // x8
  UnityEngine_GameObject_o *v65; // x0
  bool v66; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597460C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_ClassBoardClassIconListComponent_CompareClassId__);
    sub_2213A60(&ClassBoardClassIconListComponent_TypeInfo);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3529/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/);
    byte_597460C = 1;
  }
  entitys = 0;
  memset(&v68, 0, sizeof(v68));
  if ( classBoardBaseEntity && (supportClassBoard || !isAll || ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0)) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, classBoardBaseEntity);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object )
      goto LABEL_83;
    if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0) )
      return;
    if ( isGrand )
    {
      v15 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      parentClassBoardBaseId = classBoardBaseEntity->fields.parentClassBoardBaseId;
      if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v13);
        v15 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      v17 = classBoardBaseEntity->fields.parentClassBoardBaseId;
      static_fields = v15->static_fields;
      if ( parentClassBoardBaseId == static_fields->Extra1ClassBaseId )
        goto LABEL_22;
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v13);
        static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v17 == static_fields->Extra2ClassBaseId )
      {
        v17 = classBoardBaseEntity->fields.parentClassBoardBaseId;
LABEL_22:
        v22 = entitys;
        v23 = this;
        v24 = v17;
        v25 = 1;
LABEL_30:
        ClassBoardClassIconListComponent__CreateArrayForSort(v23, v24, v22, v25, v14);
        v27 = (System_Collections_Generic_List_object__o *)entitys;
        v28 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ClassBoardClassEntity__TypeInfo);
        System_Comparison_object____ctor(
          v28,
          (Il2CppObject *)this,
          Method_ClassBoardClassIconListComponent_CompareClassId__,
          0);
        if ( !v27 )
          goto LABEL_83;
        System_Collections_Generic_List_object___Sort_71849708(
          v27,
          v28,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      }
LABEL_32:
      subjectClassLabel = this->fields.subjectClassLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0);
      if ( !subjectClassLabel )
        goto LABEL_83;
      UILabel__set_text(subjectClassLabel, (System_String_o *)Master_object, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
      Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
      if ( !Master_object )
        goto LABEL_83;
      v31 = (ServantClassMaster_o *)Master_object;
      v66 = isAll;
      PlayableGrandBeastClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantClassMaster__GetPlayableGrandBeastClassIds(
                                                                                          (ServantClassMaster_o *)Master_object,
                                                                                          0);
      Master_object = (ClassBoardClassMaster_o *)ServantClassMaster__GetPlayableGrandBeastBaseClassId(v31, 0);
      if ( !entitys )
        goto LABEL_83;
      v33 = (int)Master_object;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        (System_Collections_Generic_List_object__o *)entitys,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v68 = v67;
      v34 = 0.0;
      v67.fields._list = 0;
      *(_QWORD *)&v67.fields._index = &v68;
      while ( 1 )
      {
        while ( 1 )
        {
          v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v68,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
          if ( !v35 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v68,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
            Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
            if ( Master_object )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
              v60 = -v34;
              GameObjectExtensions__AddLocalPositionX(gameObject, v60, 0);
              Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
              if ( Master_object )
              {
                v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                GameObjectExtensions__AddLocalPositionX(v61, v60, 0);
                if ( v66
                  || System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                       (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) < 2 )
                {
                  goto LABEL_77;
                }
                Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
                if ( Master_object )
                {
                  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                  v64 = ClassBoardClassIconListComponent_TypeInfo;
                  if ( !*(&ClassBoardClassIconListComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent_TypeInfo, v62);
                    v64 = ClassBoardClassIconListComponent_TypeInfo;
                  }
                  GameObjectExtensions__AddLocalPositionX(v63, v64->static_fields->ClassIconOneDispFixPosY, 0);
                  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                  if ( Master_object )
                  {
                    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                    GameObjectExtensions__AddLocalPositionX(
                      v65,
                      ClassBoardClassIconListComponent_TypeInfo->static_fields->ClassIconOneDispFixPosY,
                      0);
LABEL_77:
                    Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                    if ( Master_object )
                    {
                      ((void (__fastcall *)(ClassBoardClassMaster_o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
                        Master_object,
                        Master_object->klass->vtable._8_ReplacedForThread.method);
                      return;
                    }
                  }
                }
              }
            }
LABEL_83:
            sub_2213CDC(Master_object, v12);
          }
          current = (ClassBoardClassEntity_o *)v68.fields._current;
          if ( !v68.fields._current )
            sub_2213CDC(v35, v36);
          v38 = BalanceConfig_TypeInfo;
          klass_high = HIDWORD(v68.fields._current[1].klass);
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36);
            v38 = BalanceConfig_TypeInfo;
          }
          if ( !System_Linq_Enumerable__Contains_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v38->static_fields->PlayableBeastClassIds,
                  klass_high,
                  (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
            goto LABEL_48;
          v41 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
            v41 = BalanceConfig_TypeInfo;
          }
          if ( v41->static_fields->PlayableBeastBaseClassId == klass_high )
          {
LABEL_48:
            if ( !System_Linq_Enumerable__Contains_int_(
                    PlayableGrandBeastClassIds,
                    klass_high,
                    (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___)
              || v33 == klass_high )
            {
              break;
            }
          }
        }
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0, 0, 0);
        v44 = Object;
        if ( !Object )
          sub_2213CDC(0, v43);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             Object,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
        v47 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( v47 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v68,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
          return;
        }
        if ( !Component_object )
          sub_2213CDC(v47, v48);
        ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, klass_high, 0, 0);
        if ( !supportClassBoard )
          break;
        if ( !BasicHelper__IsNullOrEmpty(
                (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
                0) )
        {
          IsOpen = System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                     current->fields.classId,
                     (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          goto LABEL_58;
        }
LABEL_59:
        if ( ClassBoardClassEntity__HasFlag(current, 1, 0) )
        {
          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
          if ( !v51 )
            sub_2213CDC(0, v52);
          UnityEngine_GameObject__SetActive(v51, 0, 0);
        }
        else
        {
          v53 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v50);
            v53 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          }
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)Component_object,
            v53->static_fields->DISABLED_COLOR,
            0);
LABEL_65:
          classIconGrid = this->fields.classIconGrid;
          transform = UnityEngine_GameObject__get_transform(v44, 0);
          if ( !classIconGrid )
            sub_2213CDC(transform, transform);
          UIGrid__AddChild(classIconGrid, transform, 0);
          LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0);
          GameObjectExtensions__SetLocalScale(v44, LocalScale, 0);
          UnityEngine_GameObject__SetActive(v44, 1, 0);
          v58 = this->fields.classIconGrid;
          if ( !v58 )
            sub_2213CDC(v56, v57);
          v34 = v34 + (float)(v58->fields.cellWidth * 0.5);
        }
      }
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
LABEL_58:
      if ( IsOpen )
        goto LABEL_65;
      goto LABEL_59;
    }
    v18 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    id = classBoardBaseEntity->fields.id;
    if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v13);
      v18 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    v20 = classBoardBaseEntity->fields.id;
    v26 = v18->static_fields;
    if ( id != v26->Extra1ClassBaseId )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v13);
        v26 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v20 != v26->Extra2ClassBaseId )
        goto LABEL_32;
      v20 = classBoardBaseEntity->fields.id;
    }
    v22 = entitys;
    v23 = this;
    v24 = v20;
    v25 = 0;
    goto LABEL_30;
  }
}


void ClassBoardClassIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597460F & 1) == 0 )
  {
    sub_2213A60(&ClassBoardClassIconListComponent___c_TypeInfo);
    byte_597460F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardClassIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardClassIconListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardClassIconListComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardClassIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardClassIconListComponent___c___ctor(
        ClassBoardClassIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_0(
        ClassBoardClassIconListComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_5974610 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974610 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&x);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  return GrandGraphDetailMaster__GetGrandClassId((GrandGraphDetailMaster_o *)Master_object, x, 0);
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_1(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.classId;
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_2(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.classId;
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_3(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.classId;
}