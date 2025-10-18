void ClassBoardClassIconListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C46974 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardClassIconListComponent_TypeInfo);
    byte_4C46974 = 1;
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
  unsigned __int64 max_length_low; // x9
  int v6; // w10
  int v7; // w8
  unsigned __int64 v8; // x11
  int32_t *m_Items; // x13
  int32_t v10; // w14

  arrayForSort = this->fields.arrayForSort;
  if ( !arrayForSort )
    goto LABEL_15;
  max_length_low = LODWORD(arrayForSort->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    m_Items = arrayForSort->m_Items;
    while ( a )
    {
      if ( v8 >= max_length_low )
        sub_1C372BC(this);
      if ( !b )
        break;
      v10 = m_Items[v8];
      if ( a->fields.classId == v10 )
        v7 = v8;
      if ( b->fields.classId == v10 )
        v6 = v8;
      if ( (__int64)++v8 >= (int)max_length_low )
        return v7 - v6;
    }
LABEL_15:
    sub_1C372B4(this);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


void ClassBoardClassIconListComponent__CreateArrayForSort(
        ClassBoardClassIconListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        bool isGrandExtra,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *Extra1SortOrderClassIds; // x21
  BalanceConfig_c *v12; // x0
  ClassBoardClassIconListComponent___c_c *v13; // x0
  System_Func_int__int__o *_9__7_0; // x22
  Il2CppObject *v15; // x23
  struct ClassBoardClassIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  ClassBoardClassIconListComponent___c_c *v20; // x8
  System_Func_object__int__o *_9__7_1; // x22
  Il2CppObject *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ClassBoardClassIconListComponent___c_StaticFields *v25; // x0
  CGThumbnailListItem_o *p__9__7_1; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v27; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v28; // x8
  ClassBoardClassIconListComponent___c_c *v29; // x0
  Il2CppObject *v30; // x23
  struct ClassBoardClassIconListComponent___c_StaticFields *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct System_Int32_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ClassBoardClassIconListComponent___c_c *v37; // x0
  System_Func_object__int__o *_9__7_3; // x21
  Il2CppObject *v39; // x22
  struct ClassBoardClassIconListComponent___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4C46973 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C37058(&System_Func_int__int__TypeInfo);
    sub_1C37058(&System_Func_ClassBoardClassEntity__int__TypeInfo);
    sub_1C37058(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_0__);
    sub_1C37058(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_1__);
    sub_1C37058(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_2__);
    sub_1C37058(&Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_3__);
    sub_1C37058(&ClassBoardClassIconListComponent___c_TypeInfo);
    byte_4C46973 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v9->static_fields->Extra1SortOrderClassIds;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v10 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  if ( v10->static_fields->Extra2ClassBaseId == id )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->Extra2SortOrderClassIds,
                                                                                     (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  if ( isGrandExtra )
  {
    v13 = ClassBoardClassIconListComponent___c_TypeInfo;
    if ( !ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo);
      v13 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    _9__7_0 = v13->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = ClassBoardClassIconListComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__7_0 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(
        _9__7_0,
        v15,
        Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_0__,
        0);
      static_fields = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = _9__7_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__Select_int__int_(
            Extra1SortOrderClassIds,
            (System_Func_TSource__TResult__o *)_9__7_0,
            (const MethodInfo_311B010 *)Method_System_Linq_Enumerable_Select_int__int___);
    v20 = ClassBoardClassIconListComponent___c_TypeInfo;
    Extra1SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    if ( !ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo);
      v20 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    _9__7_1 = (System_Func_object__int__o *)v20->static_fields->__9__7_1;
    if ( _9__7_1 )
      goto LABEL_37;
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_1,
      v22,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_1__,
      0);
    v25 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v25->__9__7_1 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_1;
    p__9__7_1 = (CGThumbnailListItem_o *)&v25->__9__7_1;
LABEL_36:
    sub_1C36FFC(p__9__7_1, (int32_t)_9__7_1, v23, v24);
LABEL_37:
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entityList,
                                                                 (System_Func_TSource__TResult__o *)_9__7_1,
                                                                 (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
    v33 = System_Linq_Enumerable__Union_int_(
            Extra1SortOrderClassIds,
            v32,
            (const MethodInfo_312C4C8 *)Method_System_Linq_Enumerable_Union_int___);
    goto LABEL_38;
  }
  v27 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v27 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v28 = v27->static_fields;
  if ( v28->Extra1ClassBaseId == id )
    goto LABEL_30;
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v28->Extra2ClassBaseId == id )
  {
LABEL_30:
    v29 = ClassBoardClassIconListComponent___c_TypeInfo;
    if ( !ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo);
      v29 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    _9__7_1 = (System_Func_object__int__o *)v29->static_fields->__9__7_2;
    if ( _9__7_1 )
      goto LABEL_37;
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v29->static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_1,
      v30,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_2__,
      0);
    v31 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v31->__9__7_2 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_1;
    p__9__7_1 = (CGThumbnailListItem_o *)&v31->__9__7_2;
    goto LABEL_36;
  }
  v37 = ClassBoardClassIconListComponent___c_TypeInfo;
  if ( !ClassBoardClassIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent___c_TypeInfo);
    v37 = ClassBoardClassIconListComponent___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__int__o *)v37->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = ClassBoardClassIconListComponent___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__7_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardClassEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_3,
      v39,
      Method_ClassBoardClassIconListComponent___c__CreateArrayForSort_b__7_3__,
      0);
    v40 = ClassBoardClassIconListComponent___c_TypeInfo->static_fields;
    v40->__9__7_3 = (struct System_Func_ClassBoardClassEntity__int__o *)_9__7_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v40->__9__7_3, (int32_t)_9__7_3, v41, v42);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entityList,
                                                               (System_Func_TSource__TResult__o *)_9__7_3,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__int___);
LABEL_38:
  v34 = System_Linq_Enumerable__ToArray_int_(
          v33,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !this )
    sub_1C372B4(v34);
  this->fields.arrayForSort = v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.arrayForSort, (int32_t)v34, v35, v36);
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
  const MethodInfo *v12; // x4
  int32_t parentClassBoardBaseId; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v14; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v16; // w24
  int32_t v17; // w1
  System_Collections_Generic_List_ClassBoardClassEntity__o *v18; // x2
  bool v19; // w3
  ClassBoardClassIconListComponent_o *v20; // x0
  int32_t id; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v22; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v23; // x8
  int32_t v24; // w24
  System_Collections_Generic_List_object__o *v25; // x22
  System_Comparison_T__o *v26; // x23
  UILabel_o *subjectClassLabel; // x22
  ServantClassMaster_o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *PlayableGrandBeastClassIds; // x22
  int v30; // w23
  float v31; // s8
  _BOOL8 v32; // x0
  ClassBoardClassEntity_o *current; // x25
  BalanceConfig_c *v34; // x0
  int32_t klass_high; // w26
  BalanceConfig_c *v36; // x0
  _BOOL4 v37; // w0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v39; // x24
  Il2CppObject *Component_object; // x27
  _BOOL8 v41; // x0
  bool IsOpen; // w0
  UnityEngine_GameObject_o *v43; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v44; // x0
  UIGrid_o *classIconGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x0
  struct UIGrid_o *v48; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v50; // s8
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x20
  ClassBoardClassIconListComponent_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  bool v55; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46972 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_ClassBoardClassIconListComponent_CompareClassId__);
    sub_1C37058(&ClassBoardClassIconListComponent_TypeInfo);
    sub_1C37058(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C37058(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3390/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/);
    byte_4C46972 = 1;
  }
  entitys = 0;
  memset(&v57, 0, sizeof(v57));
  if ( classBoardBaseEntity && (supportClassBoard || !isAll || ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0)) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object )
      goto LABEL_80;
    if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0) )
      return;
    if ( isGrand )
    {
      parentClassBoardBaseId = classBoardBaseEntity->fields.parentClassBoardBaseId;
      v14 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v14 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      static_fields = v14->static_fields;
      if ( parentClassBoardBaseId == static_fields->Extra1ClassBaseId )
        goto LABEL_18;
      v16 = classBoardBaseEntity->fields.parentClassBoardBaseId;
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v16 == static_fields->Extra2ClassBaseId )
      {
LABEL_18:
        v17 = classBoardBaseEntity->fields.parentClassBoardBaseId;
        v18 = entitys;
        v19 = 1;
        v20 = this;
LABEL_26:
        ClassBoardClassIconListComponent__CreateArrayForSort(v20, v17, v18, v19, v12);
        v25 = (System_Collections_Generic_List_object__o *)entitys;
        v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ClassBoardClassEntity__TypeInfo);
        System_Comparison_object____ctor(
          v26,
          (Il2CppObject *)this,
          Method_ClassBoardClassIconListComponent_CompareClassId__,
          0);
        if ( !v25 )
          goto LABEL_80;
        System_Collections_Generic_List_object___Sort_58346216(
          v25,
          v26,
          (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      }
    }
    else
    {
      id = classBoardBaseEntity->fields.id;
      v22 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v22 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      v23 = v22->static_fields;
      if ( id == v23->Extra1ClassBaseId )
        goto LABEL_25;
      v24 = classBoardBaseEntity->fields.id;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v23 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v24 == v23->Extra2ClassBaseId )
      {
LABEL_25:
        v17 = classBoardBaseEntity->fields.id;
        v18 = entitys;
        v20 = this;
        v19 = 0;
        goto LABEL_26;
      }
    }
    subjectClassLabel = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0);
    if ( !subjectClassLabel )
      goto LABEL_80;
    UILabel__set_text(subjectClassLabel, (System_String_o *)Master_object, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      goto LABEL_80;
    v28 = (ServantClassMaster_o *)Master_object;
    v55 = isAll;
    PlayableGrandBeastClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantClassMaster__GetPlayableGrandBeastClassIds(
                                                                                        (ServantClassMaster_o *)Master_object,
                                                                                        0);
    Master_object = (ClassBoardClassMaster_o *)ServantClassMaster__GetPlayableGrandBeastBaseClassId(v28, 0);
    if ( !entitys )
      goto LABEL_80;
    v30 = (int)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    v31 = 0.0;
    v57 = v56;
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
        if ( !v32 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v57,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
          Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
          if ( Master_object )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            v50 = -v31;
            GameObjectExtensions__AddLocalPositionX(gameObject, v50, 0);
            Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
            if ( Master_object )
            {
              v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
              GameObjectExtensions__AddLocalPositionX(v51, v50, 0);
              if ( v55
                || System_Linq_Enumerable__Count_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                     (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) < 2 )
              {
                goto LABEL_74;
              }
              Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
              if ( Master_object )
              {
                v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                v53 = ClassBoardClassIconListComponent_TypeInfo;
                if ( !ClassBoardClassIconListComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ClassBoardClassIconListComponent_TypeInfo);
                  v53 = ClassBoardClassIconListComponent_TypeInfo;
                }
                GameObjectExtensions__AddLocalPositionX(v52, v53->static_fields->ClassIconOneDispFixPosY, 0);
                Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                if ( Master_object )
                {
                  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                  GameObjectExtensions__AddLocalPositionX(
                    v54,
                    ClassBoardClassIconListComponent_TypeInfo->static_fields->ClassIconOneDispFixPosY,
                    0);
LABEL_74:
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
LABEL_80:
          sub_1C372B4(Master_object);
        }
        current = (ClassBoardClassEntity_o *)v57.fields._current;
        if ( !v57.fields._current )
          sub_1C372B4(v32);
        v34 = BalanceConfig_TypeInfo;
        klass_high = HIDWORD(v57.fields._current[1].klass);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v34 = BalanceConfig_TypeInfo;
        }
        if ( !System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v34->static_fields->PlayableBeastClassIds,
                klass_high,
                (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
          goto LABEL_45;
        v36 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v36 = BalanceConfig_TypeInfo;
        }
        if ( v36->static_fields->PlayableBeastBaseClassId == klass_high )
        {
LABEL_45:
          v37 = System_Linq_Enumerable__Contains_int_(
                  PlayableGrandBeastClassIds,
                  klass_high,
                  (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( v30 == klass_high || !v37 )
            break;
        }
      }
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0, 0, 0);
      v39 = Object;
      if ( !Object )
        sub_1C372B4(0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v41 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v57,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
        return;
      }
      if ( !Component_object )
        sub_1C372B4(v41);
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
                   (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
        goto LABEL_55;
      }
LABEL_56:
      if ( ClassBoardClassEntity__HasFlag(current, 1, 0) )
      {
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
        if ( !v43 )
          sub_1C372B4(0);
        UnityEngine_GameObject__SetActive(v43, 0, 0);
      }
      else
      {
        v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ServantClassIconComponent__SetColor(
          (ServantClassIconComponent_o *)Component_object,
          v44->static_fields->DISABLED_COLOR,
          0);
LABEL_62:
        classIconGrid = this->fields.classIconGrid;
        transform = UnityEngine_GameObject__get_transform(v39, 0);
        if ( !classIconGrid )
          sub_1C372B4(transform);
        UIGrid__AddChild(classIconGrid, transform, 0);
        LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0);
        GameObjectExtensions__SetLocalScale(v39, LocalScale, 0);
        UnityEngine_GameObject__SetActive(v39, 1, 0);
        v48 = this->fields.classIconGrid;
        if ( !v48 )
          sub_1C372B4(v47);
        v31 = v31 + (float)(v48->fields.cellWidth * 0.5);
      }
    }
    IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
LABEL_55:
    if ( IsOpen )
      goto LABEL_62;
    goto LABEL_56;
  }
}


void ClassBoardClassIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46975 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardClassIconListComponent___c_TypeInfo);
    byte_4C46975 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardClassIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardClassIconListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardClassIconListComponent___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ClassBoardClassIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ClassBoardClassIconListComponent___c___ctor(
        ClassBoardClassIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_0(
        ClassBoardClassIconListComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C46976 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C46976 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return GrandGraphDetailMaster__GetGrandClassId((GrandGraphDetailMaster_o *)Master_object, x, 0);
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_1(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.classId;
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_2(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.classId;
}


int32_t ClassBoardClassIconListComponent___c___CreateArrayForSort_b__7_3(
        ClassBoardClassIconListComponent___c_o *this,
        ClassBoardClassEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.classId;
}