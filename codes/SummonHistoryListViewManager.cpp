void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Master_object; // x0
  SummonHistoryListViewManager___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v26; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x0
  __int64 v32; // x1
  int32_t v33; // w22
  Il2CppObject *current; // x20
  System_String_o *v35; // x0
  System_Collections_Generic_List_object__o *itemList; // x21
  System_String_o *v37; // x23
  Il2CppObject *object; // x0
  __int64 v39; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v41; // x24
  SummonHistoryListViewItem_o *v42; // x23
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  Il2CppClass *klass; // x8
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v57; // x0
  __int64 v58; // x1
  _DWORD *v59; // x23
  int32_t v60; // w21
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  System_Collections_Generic_List_object__o *v69; // x22
  System_String_o *v70; // x25
  SummonHistoryListViewItem_o *v71; // x24
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  Il2CppClass *v84; // x8
  __int64 v85; // x9
  int32_t *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x20
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  UserGachaHistoryEntity_o *v98; // x0
  __int64 v99; // x1
  UserGachaHistoryEntity_o *v100; // x24
  System_Collections_Generic_List_object__o *v101; // x23
  System_String_o *v102; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v105; // x26
  SummonHistoryListViewItem_o *v106; // x24
  __int64 v107; // x0
  __int64 v108; // x1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFE4B0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_1BC3008(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v10);
    sub_1BC3008(&System_IDisposable_TypeInfo, v11);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v12);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v13);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v16);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&SummonHistoryListViewItem_TypeInfo, v18);
    sub_1BC3008(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v19);
    sub_1BC3008(&SummonHistoryListViewManager___c_TypeInfo, v20);
    sub_1BC3008(&StringLiteral_6847/*"GACHA_HISTORY_LIST_DATETIME"*/, v21);
    byte_4AFE4B0 = 1;
  }
  memset(&v121, 0, sizeof(v121));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v23 = SummonHistoryListViewManager___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v23 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v23->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v26, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_30282F4 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v30,
                                                       (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v31 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v120,
    v31,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v33 = 0;
  v121 = v120;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v121,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v121.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6847/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v37 = v35;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_3024764 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1BC3264(0LL, v39);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v41 = System_String__Format(v37, CreatedAtToString, 0LL);
    v42 = (SummonHistoryListViewItem_o *)sub_1BC3254(SummonHistoryListViewItem_TypeInfo);
    SummonHistoryListViewItem___ctor(v42, v33, v41, 1, 0LL);
    if ( !itemList )
      sub_1BC3264(v43, v44);
    items = itemList->fields._items;
    v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1BC3264(v43, v44);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v42,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v50[4] = (Il2CppClass *)v42;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v42, v45, v46);
    }
    if ( !current )
      sub_1BC3264(v51, v52);
    klass = current->klass;
    v54 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v54;
        p_offset += 4;
        if ( !v54 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1C13570(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v57 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v59 = v57;
    v60 = v33 + 1;
    while ( 1 )
    {
      if ( !v59 )
        sub_1BC3264(v57, v58);
      v61 = *(_QWORD *)v59;
      v62 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
      {
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v62;
          v63 += 4;
          if ( !v62 )
            goto LABEL_35;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_35:
        v64 = sub_1C13570(v59, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v64)(v59, *(_QWORD *)(v64 + 8)) & 1) == 0 )
        break;
      v65 = *(_QWORD *)v59;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v67 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_42;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_42:
        v68 = sub_1C13570(v59, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v57 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v68)(v59, *(_QWORD *)(v68 + 8));
      if ( !v57 )
        sub_1BC3264(0LL, v58);
      if ( !v57[16] )
      {
        v69 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v70 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v57 + 360LL))(
                                   v57,
                                   *(_QWORD *)(*(_QWORD *)v57 + 368LL));
        v71 = (SummonHistoryListViewItem_o *)sub_1BC3254(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor(v71, v60, v70, 0, 0LL);
        if ( !v69 )
          sub_1BC3264(v72, v73);
        v76 = v69->fields._items;
        v77 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v69->fields._version;
        if ( !v76 )
          sub_1BC3264(v72, v73);
        v78 = v69->fields._size;
        if ( (unsigned int)v78 >= v76->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v69,
            (Il2CppObject *)v71,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &v76->obj.klass + v78;
          v69->fields._size = v78 + 1;
          v79[4] = (Il2CppClass *)v71;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v71, v74, v75);
        }
        ++v60;
      }
    }
    v80 = *(_QWORD *)v59;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_56;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_56:
      v83 = sub_1C13570(v59, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v83)(v59, *(_QWORD *)(v83 + 8));
    v84 = current->klass;
    v85 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v86 = &v84->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v86 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_62;
      }
      v87 = (__int64)&v84->vtable[*v86].method;
    }
    else
    {
LABEL_62:
      v87 = sub_1C13570(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v89 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v87)(current, *(_QWORD *)(v87 + 8));
    if ( !v89 )
      sub_1BC3264(0LL, v88);
    v33 = v60;
    while ( 1 )
    {
      v90 = *(_QWORD *)v89;
      v91 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
      {
        v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v91;
          v92 += 4;
          if ( !v91 )
            goto LABEL_70;
        }
        v93 = v90 + 16LL * *v92 + 312;
      }
      else
      {
LABEL_70:
        v93 = sub_1C13570(v89, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8)) & 1) == 0 )
        break;
      v94 = *(_QWORD *)v89;
      v95 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
      {
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v96 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v95;
          v96 += 4;
          if ( !v95 )
            goto LABEL_77;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_77:
        v97 = sub_1C13570(v89, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v98 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v89, *(_QWORD *)(v97 + 8));
      v100 = v98;
      if ( !v98 )
        sub_1BC3264(0LL, v99);
      if ( v98->fields.gachaExtraGiftBonusType && v98->fields.gachaExtraGiftResultType != 3 )
      {
        v101 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v102 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v98->klass->vtable._3_ToString.method)(
                                    v98,
                                    v98->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v100, 0LL);
        objectId = v100->fields.objectId;
        v105 = TitleToString;
        v106 = (SummonHistoryListViewItem_o *)sub_1BC3254(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_34472868(v106, v33, v102, v105, objectId, 2, 0LL);
        if ( !v101 )
          sub_1BC3264(v107, v108);
        v111 = v101->fields._items;
        v112 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v101->fields._version;
        if ( !v111 )
          sub_1BC3264(v107, v108);
        v113 = v101->fields._size;
        if ( (unsigned int)v113 >= v111->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v101,
            (Il2CppObject *)v106,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v114 = &v111->obj.klass + v113;
          v101->fields._size = v113 + 1;
          v114[4] = (Il2CppClass *)v106;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v106, v109, v110);
        }
        ++v33;
      }
    }
    v115 = *(_QWORD *)v89;
    v116 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
      {
        --v116;
        v117 += 4;
        if ( !v116 )
          goto LABEL_92;
      }
      v118 = v115 + 16LL * *v117 + 312;
    }
    else
    {
LABEL_92:
      v118 = sub_1C13570(v89, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v118)(v89, *(_QWORD *)(v118 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v121,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1BC3264(v31, v32);
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

  if ( (byte_4AFE4B1 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1BC3008(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_4AFE4B1 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
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
    sub_1BC3264(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE4B2 & 1) == 0 )
  {
    sub_1BC3008(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_4AFE4B2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  return entity->fields.userGachaHistoryId;
}