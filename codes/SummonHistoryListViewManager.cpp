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
  __int64 v23; // x1
  __int64 v24; // x2
  SummonHistoryListViewManager___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v28; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x0
  int32_t v34; // w21
  Il2CppObject *current; // x20
  System_String_o *v36; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v38; // x23
  Il2CppObject *object; // x0
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x0
  Il2CppClass *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v59; // x0
  _DWORD *v60; // x23
  int32_t v61; // w22
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  System_Collections_Generic_List_object__o *v70; // x21
  __int64 v71; // x25
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x24
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x0
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
  __int64 v92; // x20
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  UserGachaHistoryEntity_o *v101; // x0
  UserGachaHistoryEntity_o *v102; // x24
  System_Collections_Generic_List_object__o *v103; // x23
  System_String_o *v104; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v107; // x26
  __int64 v108; // x1
  __int64 v109; // x2
  SummonHistoryListViewItem_o *v110; // x24
  const MethodInfo *v111; // x6
  __int64 v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F8C45 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_1B640C8(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&SummonHistoryListViewItem_TypeInfo, v18);
    sub_1B640C8(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v19);
    sub_1B640C8(&SummonHistoryListViewManager___c_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_6844/*"GACHA_HISTORY_LIST_DATETIME"*/, v21);
    byte_49F8C45 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v25 = SummonHistoryListViewManager___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v25 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v25->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_UserGachaHistoryEntity__long__TypeInfo, v23, v24);
    System_Func_object__long____ctor(_9__2_0, v28, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2E5E214 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v33 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v32,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v33 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    v33,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v34 = 0;
  v125 = v124;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v125,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v125.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6844/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v38 = v36;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1B64324(0LL);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v41 = System_String__Format(v38, CreatedAtToString, 0LL);
    v44 = sub_1B64314(SummonHistoryListViewItem_TypeInfo, v42, v43);
    ListViewItem___ctor_40370988((ListViewItem_o *)v44, v34, 0LL);
    *(_QWORD *)(v44 + 112) = v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 112), (int32_t)v41, v45, v46);
    *(_DWORD *)(v44 + 120) = 1;
    if ( !itemList )
      sub_1B64324(v47);
    items = itemList->fields._items;
    v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1B64324(v47);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v44,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v53[4] = (Il2CppClass *)v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), v44, v48, v49);
    }
    if ( !current )
      sub_1B64324(v54);
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
      p_method = sub_1BB60A8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v59 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v60 = v59;
    v61 = v34 + 1;
    while ( 1 )
    {
      if ( !v60 )
        sub_1B64324(v59);
      v62 = *(_QWORD *)v60;
      v63 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
      {
        v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_35;
        }
        v65 = v62 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_35:
        v65 = sub_1BB60A8(v60, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v65)(v60, *(_QWORD *)(v65 + 8)) & 1) == 0 )
        break;
      v66 = *(_QWORD *)v60;
      v67 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v68 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_42;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_42:
        v69 = sub_1BB60A8(v60, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v59 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v69)(v60, *(_QWORD *)(v69 + 8));
      if ( !v59 )
        sub_1B64324(0LL);
      if ( !v59[16] )
      {
        v70 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v71 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v59 + 360LL))(
                v59,
                *(_QWORD *)(*(_QWORD *)v59 + 368LL));
        v74 = sub_1B64314(SummonHistoryListViewItem_TypeInfo, v72, v73);
        ListViewItem___ctor_40370988((ListViewItem_o *)v74, v61, 0LL);
        *(_QWORD *)(v74 + 112) = v71;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 112), v71, v75, v76);
        *(_DWORD *)(v74 + 120) = 0;
        if ( !v70 )
          sub_1B64324(v77);
        v80 = v70->fields._items;
        v81 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v70->fields._version;
        if ( !v80 )
          sub_1B64324(v77);
        v82 = v70->fields._size;
        if ( (unsigned int)v82 >= v80->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            (Il2CppObject *)v74,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &v80->obj.klass + v82;
          v70->fields._size = v82 + 1;
          v83[4] = (Il2CppClass *)v74;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), v74, v78, v79);
        }
        ++v61;
      }
    }
    v84 = *(_QWORD *)v60;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
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
      v87 = sub_1BB60A8(v60, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v87)(v60, *(_QWORD *)(v87 + 8));
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
      v91 = sub_1BB60A8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v92 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v91)(current, *(_QWORD *)(v91 + 8));
    if ( !v92 )
      sub_1B64324(0LL);
    v34 = v61;
    while ( 1 )
    {
      v93 = *(_QWORD *)v92;
      v94 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
      {
        v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v95 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v94;
          v95 += 4;
          if ( !v94 )
            goto LABEL_70;
        }
        v96 = v93 + 16LL * *v95 + 312;
      }
      else
      {
LABEL_70:
        v96 = sub_1BB60A8(v92, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8)) & 1) == 0 )
        break;
      v97 = *(_QWORD *)v92;
      v98 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
      {
        v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v99 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v98;
          v99 += 4;
          if ( !v98 )
            goto LABEL_77;
        }
        v100 = v97 + 16LL * *v99 + 312;
      }
      else
      {
LABEL_77:
        v100 = sub_1BB60A8(v92, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v101 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v92, *(_QWORD *)(v100 + 8));
      v102 = v101;
      if ( !v101 )
        sub_1B64324(0LL);
      if ( v101->fields.gachaExtraGiftBonusType && v101->fields.gachaExtraGiftResultType != 3 )
      {
        v103 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v104 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v101->klass->vtable._3_ToString.method)(
                                    v101,
                                    v101->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v102, 0LL);
        objectId = v102->fields.objectId;
        v107 = TitleToString;
        v110 = (SummonHistoryListViewItem_o *)sub_1B64314(SummonHistoryListViewItem_TypeInfo, v108, v109);
        SummonHistoryListViewItem___ctor_32768768(v110, v34, v104, v107, objectId, 2, v111);
        if ( !v103 )
          sub_1B64324(v112);
        v115 = v103->fields._items;
        v116 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v103->fields._version;
        if ( !v115 )
          sub_1B64324(v112);
        v117 = v103->fields._size;
        if ( (unsigned int)v117 >= v115->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v103,
            (Il2CppObject *)v110,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
        }
        else
        {
          v118 = &v115->obj.klass + v117;
          v103->fields._size = v117 + 1;
          v118[4] = (Il2CppClass *)v110;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v110, v113, v114);
        }
        ++v34;
      }
    }
    v119 = *(_QWORD *)v92;
    v120 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
    {
      v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v121 - 1) != System_IDisposable_TypeInfo )
      {
        --v120;
        v121 += 4;
        if ( !v120 )
          goto LABEL_92;
      }
      v122 = v119 + 16LL * *v121 + 312;
    }
    else
    {
LABEL_92:
      v122 = sub_1BB60A8(v92, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v122)(v92, *(_QWORD *)(v122 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v125,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1B64324(v33);
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

  if ( (byte_49F8C46 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1B640C8(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_49F8C46 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall SummonHistoryListViewManager__get_ListViewHeight(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1B64324(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8C47 & 1) == 0 )
  {
    sub_1B640C8(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_49F8C47 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SummonHistoryListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.userGachaHistoryId;
}