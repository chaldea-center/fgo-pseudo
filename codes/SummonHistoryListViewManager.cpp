void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  SummonHistoryListViewManager___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v7; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w22
  Il2CppObject *current; // x20
  System_String_o *v20; // x0
  System_Collections_Generic_List_object__o *itemList; // x21
  System_String_o *v22; // x23
  Il2CppObject *object; // x0
  __int64 v24; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v26; // x24
  SummonHistoryListViewItem_o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  Il2CppClass *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v46; // x0
  __int64 v47; // x1
  _DWORD *v48; // x23
  int32_t v49; // w21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  System_Collections_Generic_List_object__o *v58; // x22
  System_String_o *v59; // x25
  SummonHistoryListViewItem_o *v60; // x24
  __int64 v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  Il2CppClass *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x20
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  UserGachaHistoryEntity_o *v91; // x0
  __int64 v92; // x1
  UserGachaHistoryEntity_o *v93; // x24
  System_Collections_Generic_List_object__o *v94; // x23
  System_String_o *v95; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v98; // x26
  SummonHistoryListViewItem_o *v99; // x24
  __int64 v100; // x0
  __int64 v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8B5D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_1C21E38(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&SummonHistoryListViewItem_TypeInfo);
    sub_1C21E38(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_1C21E38(&SummonHistoryListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_7048/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_4BD8B5D = 1;
  }
  memset(&v118, 0, sizeof(v118));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v4 = SummonHistoryListViewManager___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v4 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v7, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2FD4030 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v16 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v15,
                                                       (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v16 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    v16,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v18 = 0;
  v118 = v117;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v118.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_7048/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v22 = v20;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2FD0884 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1C22094(0LL, v24);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v26 = System_String__Format(v22, CreatedAtToString, 0LL);
    v27 = (SummonHistoryListViewItem_o *)sub_1C22084(SummonHistoryListViewItem_TypeInfo);
    SummonHistoryListViewItem___ctor(v27, v18, v26, 1, 0LL);
    if ( !itemList )
      sub_1C22094(v28, v29);
    items = itemList->fields._items;
    v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C22094(v28, v29);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v27,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v39[4] = (Il2CppClass *)v27;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v27, v30, v31, v32, v33, v34, v35);
    }
    if ( !current )
      sub_1C22094(v40, v41);
    klass = current->klass;
    v43 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1C73E18(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v46 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v48 = v46;
    v49 = v18 + 1;
    while ( 1 )
    {
      if ( !v48 )
        sub_1C22094(v46, v47);
      v50 = *(_QWORD *)v48;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_35;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_35:
        v53 = sub_1C73E18(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v53)(v48, *(_QWORD *)(v53 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v48;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_42;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_42:
        v57 = sub_1C73E18(v48, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v46 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
      if ( !v46 )
        sub_1C22094(0LL, v47);
      if ( !v46[16] )
      {
        v58 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v59 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v46 + 360LL))(
                                   v46,
                                   *(_QWORD *)(*(_QWORD *)v46 + 368LL));
        v60 = (SummonHistoryListViewItem_o *)sub_1C22084(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor(v60, v49, v59, 0, 0LL);
        if ( !v58 )
          sub_1C22094(v61, v62);
        v69 = v58->fields._items;
        v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v58->fields._version;
        if ( !v69 )
          sub_1C22094(v61, v62);
        v71 = v58->fields._size;
        if ( (unsigned int)v71 >= v69->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)v60,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v69->obj.klass + v71;
          v58->fields._size = v71 + 1;
          v72[4] = (Il2CppClass *)v60;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v60, v63, v64, v65, v66, v67, v68);
        }
        ++v49;
      }
    }
    v73 = *(_QWORD *)v48;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_56;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_56:
      v76 = sub_1C73E18(v48, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v76)(v48, *(_QWORD *)(v76 + 8));
    v77 = current->klass;
    v78 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v79 = &v77->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v79 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_62;
      }
      v80 = (__int64)&v77->vtable[*v79].method;
    }
    else
    {
LABEL_62:
      v80 = sub_1C73E18(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v82 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v80)(current, *(_QWORD *)(v80 + 8));
    if ( !v82 )
      sub_1C22094(0LL, v81);
    v18 = v49;
    while ( 1 )
    {
      v83 = *(_QWORD *)v82;
      v84 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
      {
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v84;
          v85 += 4;
          if ( !v84 )
            goto LABEL_70;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_70:
        v86 = sub_1C73E18(v82, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) == 0 )
        break;
      v87 = *(_QWORD *)v82;
      v88 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
      {
        v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v89 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v88;
          v89 += 4;
          if ( !v88 )
            goto LABEL_77;
        }
        v90 = v87 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_77:
        v90 = sub_1C73E18(v82, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v91 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v82, *(_QWORD *)(v90 + 8));
      v93 = v91;
      if ( !v91 )
        sub_1C22094(0LL, v92);
      if ( v91->fields.gachaExtraGiftBonusType && v91->fields.gachaExtraGiftResultType != 3 )
      {
        v94 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v95 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v91->klass->vtable._3_ToString.method)(
                                   v91,
                                   v91->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v93, 0LL);
        objectId = v93->fields.objectId;
        v98 = TitleToString;
        v99 = (SummonHistoryListViewItem_o *)sub_1C22084(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_34086300(v99, v18, v95, v98, objectId, 2, 0LL);
        if ( !v94 )
          sub_1C22094(v100, v101);
        v108 = v94->fields._items;
        v109 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v94->fields._version;
        if ( !v108 )
          sub_1C22094(v100, v101);
        v110 = v94->fields._size;
        if ( (unsigned int)v110 >= v108->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            (Il2CppObject *)v99,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        }
        else
        {
          v111 = &v108->obj.klass + v110;
          v94->fields._size = v110 + 1;
          v111[4] = (Il2CppClass *)v99;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v99, v102, v103, v104, v105, v106, v107);
        }
        ++v18;
      }
    }
    v112 = *(_QWORD *)v82;
    v113 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
    {
      v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_92;
      }
      v115 = v112 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_92:
      v115 = sub_1C73E18(v82, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v115)(v82, *(_QWORD *)(v115 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1C22094(v16, v17);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SummonHistoryListViewManager__SetObjectItem(
        SummonHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BD8B5E & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1C21E38(&SummonHistoryListViewObject_TypeInfo);
    byte_4BD8B5E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall SummonHistoryListViewManager__get_ListViewHeight(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C22094(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8B5F & 1) == 0 )
  {
    sub_1C21E38(&SummonHistoryListViewManager___c_TypeInfo);
    byte_4BD8B5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonHistoryListViewManager___c___ctor(
        SummonHistoryListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall SummonHistoryListViewManager___c___CreateList_b__2_0(
        SummonHistoryListViewManager___c_o *this,
        UserGachaHistoryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
  return entity->fields.userGachaHistoryId;
}