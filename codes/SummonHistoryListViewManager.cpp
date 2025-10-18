void SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SummonHistoryListViewManager__CreateList(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  SummonHistoryListViewManager___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__long__o *_9__2_0; // x21
  Il2CppObject *v7; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x0
  int32_t v13; // w21
  Il2CppObject *current; // x20
  System_String_o *v15; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v17; // x23
  Il2CppObject *object; // x0
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v20; // x24
  __int64 v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x0
  Il2CppClass *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  _DWORD *v36; // x0
  _DWORD *v37; // x23
  int32_t v38; // w22
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_List_object__o *v47; // x21
  __int64 v48; // x25
  __int64 v49; // x24
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  Il2CppClass *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x20
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  UserGachaHistoryEntity_o *v76; // x0
  UserGachaHistoryEntity_o *v77; // x24
  System_Collections_Generic_List_object__o *v78; // x23
  System_String_o *v79; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v82; // x26
  SummonHistoryListViewItem_o *v83; // x24
  const MethodInfo *v84; // x6
  __int64 v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3F439 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_1C37058(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&SummonHistoryListViewItem_TypeInfo);
    sub_1C37058(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C37058(&SummonHistoryListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_6905/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_4C3F439 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v4 = SummonHistoryListViewManager___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v4 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__long__o *)v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Func_object__long__o *)sub_1C372A4(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v7, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_31120C0 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v11,
                                                       (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v12 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    v12,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v13 = 0;
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v98.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6905/*"GACHA_HISTORY_LIST_DATETIME"*/, 0);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v17 = v15;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1C372B4(0);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0);
    v20 = System_String__Format(v17, CreatedAtToString, 0);
    v21 = sub_1C372A4(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_43804668((ListViewItem_o *)v21, v13, 0);
    *(_QWORD *)(v21 + 120) = v20;
    sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 120), (int32_t)v20, v22, v23);
    *(_DWORD *)(v21 + 128) = 1;
    if ( !itemList )
      sub_1C372B4(v24);
    items = itemList->fields._items;
    v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C372B4(v24);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v21,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v21;
      sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), v21, v25, v26);
    }
    if ( !current )
      sub_1C372B4(v31);
    klass = current->klass;
    v33 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_27;
      }
      v35 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_27:
      v35 = sub_1C87870(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v36 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v35)(current, *(_QWORD *)(v35 + 8));
    v37 = v36;
    v38 = v13 + 1;
    while ( 1 )
    {
      if ( !v37 )
        sub_1C372B4(v36);
      v39 = *(_QWORD *)v37;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_35;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_35:
        v42 = sub_1C87870(v37, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8)) & 1) == 0 )
        break;
      v43 = *(_QWORD *)v37;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_42;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_42:
        v46 = sub_1C87870(v37, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v36 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v46)(v37, *(_QWORD *)(v46 + 8));
      if ( !v36 )
        sub_1C372B4(0);
      if ( !v36[16] )
      {
        v47 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v48 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v36 + 360LL))(
                v36,
                *(_QWORD *)(*(_QWORD *)v36 + 368LL));
        v49 = sub_1C372A4(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v49, v38, 0);
        *(_QWORD *)(v49 + 120) = v48;
        sub_1C36FFC((CGThumbnailListItem_o *)(v49 + 120), v48, v50, v51);
        *(_DWORD *)(v49 + 128) = 0;
        if ( !v47 )
          sub_1C372B4(v52);
        v55 = v47->fields._items;
        v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v47->fields._version;
        if ( !v55 )
          sub_1C372B4(v52);
        v57 = v47->fields._size;
        if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)v49,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v47->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v49;
          sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 4), v49, v53, v54);
        }
        ++v38;
      }
    }
    v59 = *(_QWORD *)v37;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_56;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_56:
      v62 = sub_1C87870(v37, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v62)(v37, *(_QWORD *)(v62 + 8));
    v63 = current->klass;
    v64 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v65 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_62;
      }
      v66 = (__int64)&v63->vtable[*v65];
    }
    else
    {
LABEL_62:
      v66 = sub_1C87870(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v67 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v66)(current, *(_QWORD *)(v66 + 8));
    if ( !v67 )
      sub_1C372B4(0);
    v13 = v38;
    while ( 1 )
    {
      v68 = *(_QWORD *)v67;
      v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v69;
          v70 += 4;
          if ( !v69 )
            goto LABEL_70;
        }
        v71 = v68 + 16LL * *v70 + 312;
      }
      else
      {
LABEL_70:
        v71 = sub_1C87870(v67, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) & 1) == 0 )
        break;
      v72 = *(_QWORD *)v67;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v74 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_77;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_77:
        v75 = sub_1C87870(v67, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v76 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v67, *(_QWORD *)(v75 + 8));
      v77 = v76;
      if ( !v76 )
        sub_1C372B4(0);
      if ( v76->fields.gachaExtraGiftBonusType && v76->fields.gachaExtraGiftResultType != 3 )
      {
        v78 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v79 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, const MethodInfo *))v76->klass->vtable._3_ToString.methodPtr)(
                                   v76,
                                   v76->klass->vtable._3_ToString.method);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v77, 0);
        objectId = v77->fields.objectId;
        v82 = TitleToString;
        v83 = (SummonHistoryListViewItem_o *)sub_1C372A4(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_35468612(v83, v13, v79, v82, objectId, 2, v84);
        if ( !v78 )
          sub_1C372B4(v85);
        v88 = v78->fields._items;
        v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v78->fields._version;
        if ( !v88 )
          sub_1C372B4(v85);
        v90 = v78->fields._size;
        if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v78,
            (Il2CppObject *)v83,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v78->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v83;
          sub_1C36FFC((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v83, v86, v87);
        }
        ++v13;
      }
    }
    v92 = *(_QWORD *)v67;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_92;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_92:
      v95 = sub_1C87870(v67, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v95)(v67, *(_QWORD *)(v95 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1C372B4(v12);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void SummonHistoryListViewManager__SetObjectItem(
        SummonHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C3F43A & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1C37058(&SummonHistoryListViewObject_TypeInfo);
    byte_4C3F43A = 1;
  }
  if ( !obj
    || (naturalAligment = SummonHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float SummonHistoryListViewManager__get_ListViewHeight(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C372B4(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F43B & 1) == 0 )
  {
    sub_1C37058(&SummonHistoryListViewManager___c_TypeInfo);
    byte_4C3F43B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonHistoryListViewManager___c___ctor(SummonHistoryListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t SummonHistoryListViewManager___c___CreateList_b__2_0(
        SummonHistoryListViewManager___c_o *this,
        UserGachaHistoryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.userGachaHistoryId;
}