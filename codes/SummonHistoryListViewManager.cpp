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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w21
  Il2CppObject *current; // x20
  System_String_o *v20; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v22; // x23
  Il2CppObject *object; // x0
  __int64 v24; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v26; // x24
  __int64 v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  Il2CppClass *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  _DWORD *v52; // x0
  __int64 v53; // x1
  _DWORD *v54; // x23
  int32_t v55; // w22
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  System_Collections_Generic_List_object__o *v64; // x21
  __int64 v65; // x25
  __int64 v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  Il2CppClass *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x20
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  UserGachaHistoryEntity_o *v103; // x0
  __int64 v104; // x1
  UserGachaHistoryEntity_o *v105; // x24
  System_Collections_Generic_List_object__o *v106; // x23
  System_String_o *v107; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v110; // x26
  SummonHistoryListViewItem_o *v111; // x24
  const MethodInfo *v112; // x6
  __int64 v113; // x0
  __int64 v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  __int64 v125; // x8
  __int64 v126; // x9
  int *v127; // x10
  __int64 v128; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEA9CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_1C7BAE8(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&SummonHistoryListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C7BAE8(&SummonHistoryListViewManager___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6918/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_4CEA9CE = 1;
  }
  memset(&v131, 0, sizeof(v131));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
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
    _9__2_0 = (System_Func_object__long__o *)sub_1C7BD34(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v7, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_3199764 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v16 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v15,
                                                       (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v16 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v130,
    v16,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v18 = 0;
  v131 = v130;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v131.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6918/*"GACHA_HISTORY_LIST_DATETIME"*/, 0);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v22 = v20;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_319601C *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1C7BD40(0, v24);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0);
    v26 = System_String__Format(v22, CreatedAtToString, 0);
    v27 = sub_1C7BD34(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_44325320((ListViewItem_o *)v27, v18, 0);
    *(_QWORD *)(v27 + 120) = v26;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 120), (int32_t)v26, v28, v29, v30, v31, v32, v33);
    *(_DWORD *)(v27 + 128) = 1;
    if ( !itemList )
      sub_1C7BD40(v34, v35);
    items = itemList->fields._items;
    v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C7BD40(v34, v35);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v27,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v27;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v45 + 4), v27, v36, v37, v38, v39, v40, v41);
    }
    if ( !current )
      sub_1C7BD40(v46, v47);
    klass = current->klass;
    v49 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_27;
      }
      v51 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_27:
      v51 = sub_1C51E70(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v52 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v51)(current, *(_QWORD *)(v51 + 8));
    v54 = v52;
    v55 = v18 + 1;
    while ( 1 )
    {
      if ( !v54 )
        sub_1C7BD40(v52, v53);
      v56 = *(_QWORD *)v54;
      v57 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
      {
        v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v57;
          v58 += 4;
          if ( !v57 )
            goto LABEL_35;
        }
        v59 = v56 + 16LL * *v58 + 312;
      }
      else
      {
LABEL_35:
        v59 = sub_1C51E70(v54, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v59)(v54, *(_QWORD *)(v59 + 8)) & 1) == 0 )
        break;
      v60 = *(_QWORD *)v54;
      v61 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v62 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_42;
        }
        v63 = v60 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_42:
        v63 = sub_1C51E70(v54, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v52 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v63)(v54, *(_QWORD *)(v63 + 8));
      if ( !v52 )
        sub_1C7BD40(0, v53);
      if ( !v52[16] )
      {
        v64 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v65 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v52 + 360LL))(
                v52,
                *(_QWORD *)(*(_QWORD *)v52 + 368LL));
        v66 = sub_1C7BD34(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v66, v55, 0);
        *(_QWORD *)(v66 + 120) = v65;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 120), v65, v67, v68, v69, v70, v71, v72);
        *(_DWORD *)(v66 + 128) = 0;
        if ( !v64 )
          sub_1C7BD40(v73, v74);
        v81 = v64->fields._items;
        v82 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v64->fields._version;
        if ( !v81 )
          sub_1C7BD40(v73, v74);
        v83 = v64->fields._size;
        if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)v66,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &v81->obj.klass + v83;
          v64->fields._size = v83 + 1;
          v84[4] = (Il2CppClass *)v66;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 4), v66, v75, v76, v77, v78, v79, v80);
        }
        ++v55;
      }
    }
    v85 = *(_QWORD *)v54;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_56;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_56:
      v88 = sub_1C51E70(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v88)(v54, *(_QWORD *)(v88 + 8));
    v89 = current->klass;
    v90 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v91 = &v89->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v91 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_62;
      }
      v92 = (__int64)&v89->vtable[*v91];
    }
    else
    {
LABEL_62:
      v92 = sub_1C51E70(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v94 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v92)(current, *(_QWORD *)(v92 + 8));
    if ( !v94 )
      sub_1C7BD40(0, v93);
    v18 = v55;
    while ( 1 )
    {
      v95 = *(_QWORD *)v94;
      v96 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
      {
        v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v97 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v96;
          v97 += 4;
          if ( !v96 )
            goto LABEL_70;
        }
        v98 = v95 + 16LL * *v97 + 312;
      }
      else
      {
LABEL_70:
        v98 = sub_1C51E70(v94, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8)) & 1) == 0 )
        break;
      v99 = *(_QWORD *)v94;
      v100 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
      {
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v101 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v100;
          v101 += 4;
          if ( !v100 )
            goto LABEL_77;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_77:
        v102 = sub_1C51E70(v94, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v103 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v94, *(_QWORD *)(v102 + 8));
      v105 = v103;
      if ( !v103 )
        sub_1C7BD40(0, v104);
      if ( v103->fields.gachaExtraGiftBonusType && v103->fields.gachaExtraGiftResultType != 3 )
      {
        v106 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v107 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, const MethodInfo *))v103->klass->vtable._3_ToString.methodPtr)(
                                    v103,
                                    v103->klass->vtable._3_ToString.method);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v105, 0);
        objectId = v105->fields.objectId;
        v110 = TitleToString;
        v111 = (SummonHistoryListViewItem_o *)sub_1C7BD34(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_35857696(v111, v18, v107, v110, objectId, 2, v112);
        if ( !v106 )
          sub_1C7BD40(v113, v114);
        v121 = v106->fields._items;
        v122 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v106->fields._version;
        if ( !v121 )
          sub_1C7BD40(v113, v114);
        v123 = v106->fields._size;
        if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v106,
            (Il2CppObject *)v111,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
        }
        else
        {
          v124 = &v121->obj.klass + v123;
          v106->fields._size = v123 + 1;
          v124[4] = (Il2CppClass *)v111;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v124 + 4), (int32_t)v111, v115, v116, v117, v118, v119, v120);
        }
        ++v18;
      }
    }
    v125 = *(_QWORD *)v94;
    v126 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
    {
      v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
      {
        --v126;
        v127 += 4;
        if ( !v126 )
          goto LABEL_92;
      }
      v128 = v125 + 16LL * *v127 + 312;
    }
    else
    {
LABEL_92:
      v128 = sub_1C51E70(v94, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v128)(v94, *(_QWORD *)(v128 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1C7BD40(v16, v17);
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

  if ( (byte_4CEA9CF & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1C7BAE8(&SummonHistoryListViewObject_TypeInfo);
    byte_4CEA9CF = 1;
  }
  if ( !obj
    || (naturalAligment = SummonHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
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
    sub_1C7BD40(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA9D0 & 1) == 0 )
  {
    sub_1C7BAE8(&SummonHistoryListViewManager___c_TypeInfo);
    byte_4CEA9D0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return entity->fields.userGachaHistoryId;
}