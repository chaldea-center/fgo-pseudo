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
  __int64 v13; // x1
  int32_t v14; // w21
  Il2CppObject *current; // x20
  System_String_o *v16; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v18; // x23
  Il2CppObject *object; // x0
  __int64 v20; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v22; // x24
  __int64 v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  Il2CppClass *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  _DWORD *v40; // x0
  __int64 v41; // x1
  _DWORD *v42; // x23
  int32_t v43; // w22
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  System_Collections_Generic_List_object__o *v52; // x21
  __int64 v53; // x25
  __int64 v54; // x24
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  Il2CppClass *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x20
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  UserGachaHistoryEntity_o *v83; // x0
  __int64 v84; // x1
  UserGachaHistoryEntity_o *v85; // x24
  System_Collections_Generic_List_object__o *v86; // x23
  System_String_o *v87; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v90; // x26
  SummonHistoryListViewItem_o *v91; // x24
  const MethodInfo *v92; // x6
  __int64 v93; // x0
  __int64 v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x8
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C236F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_1C2D490(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&SummonHistoryListViewItem_TypeInfo);
    sub_1C2D490(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C2D490(&SummonHistoryListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_6899/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_4C236F0 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
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
    _9__2_0 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v7, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_30F8DB8 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v11,
                                                       (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v12 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v106,
    v12,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v14 = 0;
  v107 = v106;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v107,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v107.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6899/*"GACHA_HISTORY_LIST_DATETIME"*/, 0);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v18 = v16;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1C2D6EC(0, v20);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0);
    v22 = System_String__Format(v18, CreatedAtToString, 0);
    v23 = sub_1C2D6DC(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_43566844((ListViewItem_o *)v23, v14, 0);
    *(_QWORD *)(v23 + 120) = v22;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 120), (int32_t)v22, v24, v25);
    *(_DWORD *)(v23 + 128) = 1;
    if ( !itemList )
      sub_1C2D6EC(v26, v27);
    items = itemList->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C2D6EC(v26, v27);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v23,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v23;
      sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), v23, v28, v29);
    }
    if ( !current )
      sub_1C2D6EC(v34, v35);
    klass = current->klass;
    v37 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_27;
      }
      v39 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_27:
      v39 = sub_1C7DCA8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v40 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v39)(current, *(_QWORD *)(v39 + 8));
    v42 = v40;
    v43 = v14 + 1;
    while ( 1 )
    {
      if ( !v42 )
        sub_1C2D6EC(v40, v41);
      v44 = *(_QWORD *)v42;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_35;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_35:
        v47 = sub_1C7DCA8(v42, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v47)(v42, *(_QWORD *)(v47 + 8)) & 1) == 0 )
        break;
      v48 = *(_QWORD *)v42;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v50 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_42;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_42:
        v51 = sub_1C7DCA8(v42, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v40 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v51)(v42, *(_QWORD *)(v51 + 8));
      if ( !v40 )
        sub_1C2D6EC(0, v41);
      if ( !v40[16] )
      {
        v52 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v53 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v40 + 360LL))(
                v40,
                *(_QWORD *)(*(_QWORD *)v40 + 368LL));
        v54 = sub_1C2D6DC(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_43566844((ListViewItem_o *)v54, v43, 0);
        *(_QWORD *)(v54 + 120) = v53;
        sub_1C2D434((CGThumbnailListItem_o *)(v54 + 120), v53, v55, v56);
        *(_DWORD *)(v54 + 128) = 0;
        if ( !v52 )
          sub_1C2D6EC(v57, v58);
        v61 = v52->fields._items;
        v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v52->fields._version;
        if ( !v61 )
          sub_1C2D6EC(v57, v58);
        v63 = v52->fields._size;
        if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v52,
            (Il2CppObject *)v54,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &v61->obj.klass + v63;
          v52->fields._size = v63 + 1;
          v64[4] = (Il2CppClass *)v54;
          sub_1C2D434((CGThumbnailListItem_o *)(v64 + 4), v54, v59, v60);
        }
        ++v43;
      }
    }
    v65 = *(_QWORD *)v42;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_56;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_56:
      v68 = sub_1C7DCA8(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v68)(v42, *(_QWORD *)(v68 + 8));
    v69 = current->klass;
    v70 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v71 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_62;
      }
      v72 = (__int64)&v69->vtable[*v71];
    }
    else
    {
LABEL_62:
      v72 = sub_1C7DCA8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v74 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v72)(current, *(_QWORD *)(v72 + 8));
    if ( !v74 )
      sub_1C2D6EC(0, v73);
    v14 = v43;
    while ( 1 )
    {
      v75 = *(_QWORD *)v74;
      v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v76;
          v77 += 4;
          if ( !v76 )
            goto LABEL_70;
        }
        v78 = v75 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_70:
        v78 = sub_1C7DCA8(v74, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
        break;
      v79 = *(_QWORD *)v74;
      v80 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v81 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_77;
        }
        v82 = v79 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_77:
        v82 = sub_1C7DCA8(v74, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v83 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v74, *(_QWORD *)(v82 + 8));
      v85 = v83;
      if ( !v83 )
        sub_1C2D6EC(0, v84);
      if ( v83->fields.gachaExtraGiftBonusType && v83->fields.gachaExtraGiftResultType != 3 )
      {
        v86 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v87 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, const MethodInfo *))v83->klass->vtable._3_ToString.methodPtr)(
                                   v83,
                                   v83->klass->vtable._3_ToString.method);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v85, 0);
        objectId = v85->fields.objectId;
        v90 = TitleToString;
        v91 = (SummonHistoryListViewItem_o *)sub_1C2D6DC(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_35174760(v91, v14, v87, v90, objectId, 2, v92);
        if ( !v86 )
          sub_1C2D6EC(v93, v94);
        v97 = v86->fields._items;
        v98 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v86->fields._version;
        if ( !v97 )
          sub_1C2D6EC(v93, v94);
        v99 = v86->fields._size;
        if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v86,
            (Il2CppObject *)v91,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &v97->obj.klass + v99;
          v86->fields._size = v99 + 1;
          v100[4] = (Il2CppClass *)v91;
          sub_1C2D434((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v91, v95, v96);
        }
        ++v14;
      }
    }
    v101 = *(_QWORD *)v74;
    v102 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v103 - 1) != System_IDisposable_TypeInfo )
      {
        --v102;
        v103 += 4;
        if ( !v102 )
          goto LABEL_92;
      }
      v104 = v101 + 16LL * *v103 + 312;
    }
    else
    {
LABEL_92:
      v104 = sub_1C7DCA8(v74, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v104)(v74, *(_QWORD *)(v104 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v107,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1C2D6EC(v12, v13);
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

  if ( (byte_4C236F1 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1C2D490(&SummonHistoryListViewObject_TypeInfo);
    byte_4C236F1 = 1;
  }
  if ( !obj
    || (naturalAligment = SummonHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float SummonHistoryListViewManager__get_ListViewHeight(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C2D6EC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C236F2 & 1) == 0 )
  {
    sub_1C2D490(&SummonHistoryListViewManager___c_TypeInfo);
    byte_4C236F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return entity->fields.userGachaHistoryId;
}