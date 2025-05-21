void __fastcall ClassBoardClassIconListComponent___ctor(
        ClassBoardClassIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B4823C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B4823C = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.arrayForSort = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.arrayForSort, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardClassIconListComponent__Awake(
        ClassBoardClassIconListComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ClassBoardClassIconListComponent__CompareClassId(
        ClassBoardClassIconListComponent_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  ClassBoardClassIconListComponent_o *v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *arrayForSort; // x8
  int32_t v9; // w23
  int32_t v10; // w24
  int32_t v11; // w22
  int32_t classId; // w26
  int32_t v13; // w26

  v6 = this;
  if ( (byte_4B4823B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, a);
    this = (ClassBoardClassIconListComponent_o *)sub_1BDB878(
                                                   &Method_System_Collections_Generic_List_int__get_Item__,
                                                   v7);
    byte_4B4823B = 1;
  }
  arrayForSort = v6->fields.arrayForSort;
  if ( !arrayForSort )
LABEL_14:
    sub_1BDBAD4(this, a);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( v11 < arrayForSort->fields._size )
  {
    if ( a )
    {
      classId = a->fields.classId;
      this = (ClassBoardClassIconListComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                     arrayForSort,
                                                     v11,
                                                     (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( classId == (_DWORD)this )
        v9 = v11;
      if ( b )
      {
        this = (ClassBoardClassIconListComponent_o *)v6->fields.arrayForSort;
        if ( this )
        {
          v13 = b->fields.classId;
          this = (ClassBoardClassIconListComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                         (System_Collections_Generic_List_int__o *)this,
                                                         v11,
                                                         (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
          arrayForSort = v6->fields.arrayForSort;
          if ( v13 == (_DWORD)this )
            v10 = v11;
          ++v11;
          if ( arrayForSort )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v9 - v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassIconListComponent__CreateArrayForSort(
        ClassBoardClassIconListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        bool isGrandExtra,
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
  __int64 v25; // x1
  System_Collections_Generic_List_int__o *v26; // x20
  __int64 v27; // x1
  void *Master_object; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v29; // x8
  _QWORD *v30; // x22
  BalanceConfig_c *v31; // x0
  System_Collections_Generic_Dictionary_int__int__o *v32; // x23
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  int32_t v35; // w24
  int32_t v36; // w25
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  unsigned __int64 v44; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+3Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B4823A & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1BDB878(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__, v24);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v25);
    byte_4B4823A = 1;
  }
  entitys = 0LL;
  value = 0;
  memset(&v49, 0, sizeof(v49));
  v26 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  Master_object = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = BalanceConfig_TypeInfo;
  }
  v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  v30 = *(_QWORD **)(*((_QWORD *)Master_object + 23) + 1048LL);
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  if ( v29->static_fields->EXTRA2_CLASS_BASE_ID == id )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    Master_object = System_Linq_Enumerable__ToArray_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v31->static_fields->Extra2SortOrderClassIds,
                      (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
    v30 = Master_object;
  }
  if ( !isGrandExtra )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (void *)ClassBoardClassMaster__TryGetEntityList(
                            (ClassBoardClassMaster_o *)Master_object,
                            &entitys,
                            id,
                            0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v32 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v32,
      (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Master_object = entitys;
    if ( !entitys )
      goto LABEL_24;
    v35 = 0;
    while ( v35 < *((_DWORD *)Master_object + 6) )
    {
      Master_object = System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Master_object,
                        v35,
                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
      if ( Master_object )
      {
        if ( entityList )
        {
          v36 = *((_DWORD *)Master_object + 5);
          Master_object = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)entityList,
                            v35,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
          if ( Master_object )
          {
            if ( v32 )
            {
              System_Collections_Generic_Dictionary_int__int___Add(
                v32,
                v36,
                *((_DWORD *)Master_object + 5),
                (const MethodInfo_3332868 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
              Master_object = entitys;
              ++v35;
              if ( entitys )
                continue;
            }
          }
        }
      }
      goto LABEL_24;
    }
    if ( !v30 )
LABEL_24:
      sub_1BDBAD4(Master_object, v27);
    v43 = v30[3];
    if ( (int)v43 >= 1 )
    {
      v44 = 0LL;
      do
      {
        if ( v44 >= (unsigned int)v43 )
          sub_1BDBADC(Master_object, v27, v33);
        if ( !v32 )
          goto LABEL_24;
        Master_object = (void *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                  v32,
                                  *((_DWORD *)v30 + v44 + 8),
                                  &value,
                                  (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_24;
          v27 = (unsigned int)value;
          items = v26->fields._items;
          v46 = Method_System_Collections_Generic_List_int__Add__;
          ++v26->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v26,
              v27,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v26->fields._size = size + 1;
            items->m_Items[size + 1] = v27;
          }
        }
        LODWORD(v43) = *((_DWORD *)v30 + 6);
      }
      while ( (__int64)++v44 < (int)v43 );
    }
  }
  else
  {
LABEL_25:
    if ( !entityList )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
      if ( !v37 )
        break;
      if ( !v49.fields._current )
        sub_1BDBAD4(v37, v38);
      if ( !v26 )
        sub_1BDBAD4(v37, v38);
      klass_high = HIDWORD(v49.fields._current[1].klass);
      v40 = v26->fields._items;
      v41 = Method_System_Collections_Generic_List_int__Add__;
      ++v26->fields._version;
      if ( !v40 )
        sub_1BDBAD4(v37, klass_high);
      v42 = v26->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v26,
          klass_high,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = v42 + 1;
        v40->m_Items[v42 + 1] = klass_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  }
  this->fields.arrayForSort = v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.arrayForSort, (int32_t)v26, v33, v34);
}


void __fastcall ClassBoardClassIconListComponent__SetClassIconList(
        ClassBoardClassIconListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        bool isGrand,
        const MethodInfo *method)
{
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
  void *Master_object; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  int klass; // w22
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int v34; // w22
  int32_t v35; // w1
  System_Collections_Generic_List_ClassBoardClassEntity__o *v36; // x2
  bool v37; // w3
  ClassBoardClassIconListComponent_o *v38; // x0
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v40; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v41; // x8
  int32_t v42; // w23
  System_Collections_Generic_List_object__o *v43; // x22
  System_Comparison_T__o *v44; // x23
  UILabel_o *subjectClassLabel; // x22
  float v46; // s8
  _BOOL8 v47; // x0
  __int64 v48; // x1
  ClassBoardClassEntity_o *current; // x23
  BalanceConfig_c *v50; // x0
  int32_t klass_high; // w25
  BalanceConfig_c *v52; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *v55; // x22
  Il2CppObject *Component_object; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  bool IsOpen; // w0
  UnityEngine_GameObject_o *v60; // x0
  __int64 v61; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v62; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  struct UIGrid_o *v67; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v69; // s8
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v72; // x8
  UnityEngine_GameObject_o *v73; // x20
  UnityEngine_GameObject_o *v74; // x0
  bool v75; // [xsp+4h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B48239 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, classBoardBaseEntity);
    sub_1BDB878(&Method_ClassBoardClassIconListComponent_CompareClassId__, v11);
    sub_1BDB878(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v12);
    sub_1BDB878(&System_Comparison_ClassBoardClassEntity__TypeInfo, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v15);
    sub_1BDB878(&DataManager_TypeInfo, v16);
    sub_1BDB878(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v17);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v18);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v22);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v25);
    sub_1BDB878(&LocalizationManager_TypeInfo, v26);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v27);
    sub_1BDB878(&StringLiteral_3428/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v28);
    byte_4B48239 = 1;
  }
  entity = 0LL;
  entitys = 0LL;
  memset(&v77, 0, sizeof(v77));
  if ( classBoardBaseEntity && (supportClassBoard || !isAll || ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL)) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object )
      goto LABEL_84;
    if ( !ClassBoardClassMaster__TryGetEntityList(
            (ClassBoardClassMaster_o *)Master_object,
            &entitys,
            classBoardBaseEntity->fields.id,
            0LL) )
      return;
    if ( !isGrand )
      goto LABEL_26;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_84;
    Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              classBoardBaseEntity->fields.parentClassBoardBaseId,
                              (const MethodInfo_32E1E88 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_84;
      klass = (int)entity[1].klass;
      Master_object = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        Master_object = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      static_fields = (struct ClassBoardEffectListDialogSkillListComponent_StaticFields *)*((_QWORD *)Master_object + 23);
      if ( klass == static_fields->EXTRA1_CLASS_BASE_ID )
        goto LABEL_24;
      if ( !entity )
        goto LABEL_84;
      v34 = (int)entity[1].klass;
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v34 == static_fields->EXTRA2_CLASS_BASE_ID )
      {
LABEL_24:
        if ( !entity )
          goto LABEL_84;
        v35 = (int32_t)entity[1].klass;
        v36 = entitys;
        v37 = 1;
        v38 = this;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_26:
      id = classBoardBaseEntity->fields.id;
      v40 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v40 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      }
      v41 = v40->static_fields;
      if ( id == v41->EXTRA1_CLASS_BASE_ID )
        goto LABEL_32;
      v42 = classBoardBaseEntity->fields.id;
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v41 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
      }
      if ( v42 == v41->EXTRA2_CLASS_BASE_ID )
      {
LABEL_32:
        v35 = classBoardBaseEntity->fields.id;
        v36 = entitys;
        v38 = this;
        v37 = 0;
LABEL_33:
        ClassBoardClassIconListComponent__CreateArrayForSort(v38, v35, v36, v37, v31);
        v43 = (System_Collections_Generic_List_object__o *)entitys;
        v44 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_ClassBoardClassEntity__TypeInfo);
        System_Comparison_object____ctor(
          v44,
          (Il2CppObject *)this,
          Method_ClassBoardClassIconListComponent_CompareClassId__,
          0LL);
        if ( !v43 )
          goto LABEL_84;
        System_Collections_Generic_List_object___Sort_57505928(
          v43,
          v44,
          (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      }
    }
    subjectClassLabel = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3428/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
    if ( !subjectClassLabel )
      goto LABEL_84;
    v75 = isAll;
    UILabel__set_text(subjectClassLabel, (System_String_o *)Master_object, 0LL);
    Master_object = entitys;
    if ( !entitys )
      goto LABEL_84;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    v46 = 0.0;
    v77 = v76;
    while ( 1 )
    {
      do
      {
        v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v77,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
        if ( !v47 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v77,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
          Master_object = this->fields.subjectClassLabel;
          if ( Master_object )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
            v69 = -v46;
            GameObjectExtensions__AddLocalPositionX(gameObject, v69, 0LL);
            Master_object = this->fields.classIconGrid;
            if ( Master_object )
            {
              v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
              GameObjectExtensions__AddLocalPositionX(v70, v69, 0LL);
              if ( v75
                || System_Linq_Enumerable__Count_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                     (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) < 2 )
              {
                goto LABEL_76;
              }
              Master_object = this->fields.subjectClassLabel;
              if ( Master_object )
              {
                v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                v72 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
                v73 = v71;
                if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
                  v72 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
                }
                GameObjectExtensions__AddLocalPositionX(v73, v72->static_fields->classIconOneDispFixPosY, 0LL);
                Master_object = this->fields.classIconGrid;
                if ( Master_object )
                {
                  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                  GameObjectExtensions__AddLocalPositionX(
                    v74,
                    ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
                    0LL);
LABEL_76:
                  Master_object = this->fields.classIconGrid;
                  if ( Master_object )
                  {
                    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Master_object + 440LL))(
                      Master_object,
                      *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
                    return;
                  }
                }
              }
            }
          }
LABEL_84:
          sub_1BDBAD4(Master_object, v30);
        }
        current = (ClassBoardClassEntity_o *)v77.fields._current;
        if ( !v77.fields._current )
          sub_1BDBAD4(v47, v48);
        v50 = BalanceConfig_TypeInfo;
        klass_high = HIDWORD(v77.fields._current[1].klass);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v50 = BalanceConfig_TypeInfo;
        }
        if ( !System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v50->static_fields->PlayableBeastClassIds,
                klass_high,
                (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___) )
          break;
        v52 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v52 = BalanceConfig_TypeInfo;
        }
      }
      while ( v52->static_fields->PlayableBeastBaseClassId != klass_high );
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
      v55 = Object;
      if ( !Object )
        sub_1BDBAD4(0LL, v54);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v57 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v57 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v77,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
        return;
      }
      if ( !Component_object )
        sub_1BDBAD4(v57, v58);
      ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, klass_high, 0, 0LL);
      if ( !supportClassBoard )
        break;
      if ( !BasicHelper__IsNullOrEmpty(
              (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
              0LL) )
      {
        IsOpen = System_Linq_Enumerable__Contains_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                   current->fields.classId,
                   (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
        goto LABEL_57;
      }
LABEL_58:
      if ( ClassBoardClassEntity__HasFlag(current, 1LL, 0LL) )
      {
        v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v60 )
          sub_1BDBAD4(0LL, v61);
        UnityEngine_GameObject__SetActive(v60, 0, 0LL);
      }
      else
      {
        v62 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v62 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ServantClassIconComponent__SetColor(
          (ServantClassIconComponent_o *)Component_object,
          v62->static_fields->DISABLED_COLOR,
          0LL);
LABEL_64:
        classIconGrid = this->fields.classIconGrid;
        transform = UnityEngine_GameObject__get_transform(v55, 0LL);
        if ( !classIconGrid )
          sub_1BDBAD4(transform, transform);
        UIGrid__AddChild(classIconGrid, transform, 0LL);
        LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
        GameObjectExtensions__SetLocalScale(v55, LocalScale, 0LL);
        UnityEngine_GameObject__SetActive(v55, 1, 0LL);
        v67 = this->fields.classIconGrid;
        if ( !v67 )
          sub_1BDBAD4(v65, v66);
        v46 = v46 + (float)(v67->fields.cellWidth * 0.5);
      }
    }
    IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
LABEL_57:
    if ( IsOpen )
      goto LABEL_64;
    goto LABEL_58;
  }
}