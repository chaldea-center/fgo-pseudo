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
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x0
  __int64 v32; // x1
  int32_t v33; // w21
  Il2CppObject *current; // x20
  System_String_o *v35; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v37; // x23
  Il2CppObject *object; // x0
  __int64 v39; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v41; // x24
  __int64 v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppClass *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v59; // x0
  __int64 v60; // x1
  _DWORD *v61; // x23
  int32_t v62; // w22
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  System_Collections_Generic_List_object__o *v71; // x21
  __int64 v72; // x25
  __int64 v73; // x24
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x0
  __int64 v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  Il2CppClass *v88; // x8
  __int64 v89; // x9
  int32_t *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x20
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  UserGachaHistoryEntity_o *v102; // x0
  __int64 v103; // x1
  UserGachaHistoryEntity_o *v104; // x24
  System_Collections_Generic_List_object__o *v105; // x23
  System_String_o *v106; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v109; // x26
  SummonHistoryListViewItem_o *v110; // x24
  const MethodInfo *v111; // x6
  __int64 v112; // x0
  __int64 v113; // x1
  int32_t v114; // w2
  int32_t v115; // w3
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DF0B2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_1B00CCC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_1B00CCC(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v10);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v16);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v17);
    sub_1B00CCC(&SummonHistoryListViewItem_TypeInfo, v18);
    sub_1B00CCC(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v19);
    sub_1B00CCC(&SummonHistoryListViewManager___c_TypeInfo, v20);
    sub_1B00CCC(&StringLiteral_6803/*"GACHA_HISTORY_LIST_DATETIME"*/, v21);
    byte_48DF0B2 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v26, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2D8565C *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v30,
                                                       (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v31 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v125,
    v31,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v33 = 0;
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v126,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v126.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6803/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v37 = v35;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2D822F8 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1B00F28(0LL, v39);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v41 = System_String__Format(v37, CreatedAtToString, 0LL);
    v42 = sub_1B00F18(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_39415512((ListViewItem_o *)v42, v33, 0LL);
    *(_QWORD *)(v42 + 112) = v41;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v42 + 112), (int32_t)v41, v43, v44);
    *(_DWORD *)(v42 + 120) = 1;
    if ( !itemList )
      sub_1B00F28(v45, v46);
    items = itemList->fields._items;
    v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1B00F28(v45, v46);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v42,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v42;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v52 + 4), v42, v47, v48);
    }
    if ( !current )
      sub_1B00F28(v53, v54);
    klass = current->klass;
    v56 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v56;
        p_offset += 4;
        if ( !v56 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1B52CAC(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v59 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v61 = v59;
    v62 = v33 + 1;
    while ( 1 )
    {
      if ( !v61 )
        sub_1B00F28(v59, v60);
      v63 = *(_QWORD *)v61;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_35;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_35:
        v66 = sub_1B52CAC(v61, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v66)(v61, *(_QWORD *)(v66 + 8)) & 1) == 0 )
        break;
      v67 = *(_QWORD *)v61;
      v68 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v69 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_42;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_42:
        v70 = sub_1B52CAC(v61, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v59 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v70)(v61, *(_QWORD *)(v70 + 8));
      if ( !v59 )
        sub_1B00F28(0LL, v60);
      if ( !v59[16] )
      {
        v71 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v72 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v59 + 360LL))(
                v59,
                *(_QWORD *)(*(_QWORD *)v59 + 368LL));
        v73 = sub_1B00F18(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_39415512((ListViewItem_o *)v73, v62, 0LL);
        *(_QWORD *)(v73 + 112) = v72;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v73 + 112), v72, v74, v75);
        *(_DWORD *)(v73 + 120) = 0;
        if ( !v71 )
          sub_1B00F28(v76, v77);
        v80 = v71->fields._items;
        v81 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v71->fields._version;
        if ( !v80 )
          sub_1B00F28(v76, v77);
        v82 = v71->fields._size;
        if ( (unsigned int)v82 >= v80->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)v73,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &v80->obj.klass + v82;
          v71->fields._size = v82 + 1;
          v83[4] = (Il2CppClass *)v73;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v83 + 4), v73, v78, v79);
        }
        ++v62;
      }
    }
    v84 = *(_QWORD *)v61;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_56;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_56:
      v87 = sub_1B52CAC(v61, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v87)(v61, *(_QWORD *)(v87 + 8));
    v88 = current->klass;
    v89 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v90 = &v88->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v90 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v89;
        v90 += 4;
        if ( !v89 )
          goto LABEL_62;
      }
      v91 = (__int64)&v88->vtable[*v90].method;
    }
    else
    {
LABEL_62:
      v91 = sub_1B52CAC(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v93 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v91)(current, *(_QWORD *)(v91 + 8));
    if ( !v93 )
      sub_1B00F28(0LL, v92);
    v33 = v62;
    while ( 1 )
    {
      v94 = *(_QWORD *)v93;
      v95 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
      {
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v96 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v95;
          v96 += 4;
          if ( !v95 )
            goto LABEL_70;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_70:
        v97 = sub_1B52CAC(v93, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v93, *(_QWORD *)(v97 + 8)) & 1) == 0 )
        break;
      v98 = *(_QWORD *)v93;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
      {
        v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v100 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v99;
          v100 += 4;
          if ( !v99 )
            goto LABEL_77;
        }
        v101 = v98 + 16LL * *v100 + 312;
      }
      else
      {
LABEL_77:
        v101 = sub_1B52CAC(v93, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v102 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v93, *(_QWORD *)(v101 + 8));
      v104 = v102;
      if ( !v102 )
        sub_1B00F28(0LL, v103);
      if ( v102->fields.gachaExtraGiftBonusType && v102->fields.gachaExtraGiftResultType != 3 )
      {
        v105 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v106 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v102->klass->vtable._3_ToString.method)(
                                    v102,
                                    v102->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v104, 0LL);
        objectId = v104->fields.objectId;
        v109 = TitleToString;
        v110 = (SummonHistoryListViewItem_o *)sub_1B00F18(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_31879428(v110, v33, v106, v109, objectId, 2, v111);
        if ( !v105 )
          sub_1B00F28(v112, v113);
        v116 = v105->fields._items;
        v117 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v105->fields._version;
        if ( !v116 )
          sub_1B00F28(v112, v113);
        v118 = v105->fields._size;
        if ( (unsigned int)v118 >= v116->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v105,
            (Il2CppObject *)v110,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
        }
        else
        {
          v119 = &v116->obj.klass + v118;
          v105->fields._size = v118 + 1;
          v119[4] = (Il2CppClass *)v110;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v119 + 4), (int32_t)v110, v114, v115);
        }
        ++v33;
      }
    }
    v120 = *(_QWORD *)v93;
    v121 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
    {
      v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
      {
        --v121;
        v122 += 4;
        if ( !v121 )
          goto LABEL_92;
      }
      v123 = v120 + 16LL * *v122 + 312;
    }
    else
    {
LABEL_92:
      v123 = sub_1B52CAC(v93, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v123)(v93, *(_QWORD *)(v123 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v126,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1B00F28(v31, v32);
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

  if ( (byte_48DF0B3 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1B00CCC(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_48DF0B3 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1B00F28(this, obj);
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
    sub_1B00F28(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF0B4 & 1) == 0 )
  {
    sub_1B00CCC(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_48DF0B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
  return entity->fields.userGachaHistoryId;
}