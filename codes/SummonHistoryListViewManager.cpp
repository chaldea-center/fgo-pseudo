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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w21
  Il2CppObject *current; // x20
  System_String_o *v39; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v41; // x23
  Il2CppObject *object; // x0
  __int64 v43; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v45; // x24
  int64_t v46; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  Il2CppClass *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v71; // x0
  __int64 v72; // x1
  _DWORD *v73; // x23
  int32_t v74; // w22
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  System_Collections_Generic_List_object__o *v83; // x21
  int64_t v84; // x25
  int64_t v85; // x24
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x0
  __int64 v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  Il2CppClass *v108; // x8
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x20
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  UserGachaHistoryEntity_o *v122; // x0
  __int64 v123; // x1
  UserGachaHistoryEntity_o *v124; // x24
  System_Collections_Generic_List_object__o *v125; // x23
  System_String_o *v126; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v129; // x26
  SummonHistoryListViewItem_o *v130; // x24
  const MethodInfo *v131; // x6
  __int64 v132; // x0
  __int64 v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  __int64 v144; // x8
  __int64 v145; // x9
  int *v146; // x10
  __int64 v147; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3382B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_1BD3458(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v10);
    sub_1BD3458(&System_IDisposable_TypeInfo, v11);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v12);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v13);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v16);
    sub_1BD3458(&LocalizationManager_TypeInfo, v17);
    sub_1BD3458(&SummonHistoryListViewItem_TypeInfo, v18);
    sub_1BD3458(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v19);
    sub_1BD3458(&SummonHistoryListViewManager___c_TypeInfo, v20);
    sub_1BD3458(&StringLiteral_7009/*"GACHA_HISTORY_LIST_DATETIME"*/, v21);
    byte_4B3382B = 1;
  }
  memset(&v150, 0, sizeof(v150));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
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
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v26, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2F55894 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v35 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v34,
                                                       (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v35 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v149,
    v35,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v37 = 0;
  v150 = v149;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v150,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v150.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_7009/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v41 = v39;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2F520E8 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1BD36B4(0LL, v43);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v45 = System_String__Format(v41, CreatedAtToString, 0LL);
    v46 = sub_1BD36A4(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_41548032((ListViewItem_o *)v46, v37, 0LL);
    *(_QWORD *)(v46 + 112) = v45;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v46 + 112), (int64_t)v45, v47, v48, v49, v50, v51, v52);
    *(_DWORD *)(v46 + 120) = 1;
    if ( !itemList )
      sub_1BD36B4(v53, v54);
    items = itemList->fields._items;
    v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1BD36B4(v53, v54);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v46,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v64[4] = (Il2CppClass *)v46;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v64 + 4), v46, v55, v56, v57, v58, v59, v60);
    }
    if ( !current )
      sub_1BD36B4(v65, v66);
    klass = current->klass;
    v68 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v68;
        p_offset += 4;
        if ( !v68 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1C25438(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v71 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v73 = v71;
    v74 = v37 + 1;
    while ( 1 )
    {
      if ( !v73 )
        sub_1BD36B4(v71, v72);
      v75 = *(_QWORD *)v73;
      v76 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
      {
        v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v76;
          v77 += 4;
          if ( !v76 )
            goto LABEL_35;
        }
        v78 = v75 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_35:
        v78 = sub_1C25438(v73, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v78)(v73, *(_QWORD *)(v78 + 8)) & 1) == 0 )
        break;
      v79 = *(_QWORD *)v73;
      v80 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
      {
        v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v81 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_42;
        }
        v82 = v79 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_42:
        v82 = sub_1C25438(v73, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v71 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v82)(v73, *(_QWORD *)(v82 + 8));
      if ( !v71 )
        sub_1BD36B4(0LL, v72);
      if ( !v71[16] )
      {
        v83 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v84 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v71 + 360LL))(
                v71,
                *(_QWORD *)(*(_QWORD *)v71 + 368LL));
        v85 = sub_1BD36A4(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_41548032((ListViewItem_o *)v85, v74, 0LL);
        *(_QWORD *)(v85 + 112) = v84;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v85 + 112), v84, v86, v87, v88, v89, v90, v91);
        *(_DWORD *)(v85 + 120) = 0;
        if ( !v83 )
          sub_1BD36B4(v92, v93);
        v100 = v83->fields._items;
        v101 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v83->fields._version;
        if ( !v100 )
          sub_1BD36B4(v92, v93);
        v102 = v83->fields._size;
        if ( (unsigned int)v102 >= v100->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v83,
            (Il2CppObject *)v85,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &v100->obj.klass + v102;
          v83->fields._size = v102 + 1;
          v103[4] = (Il2CppClass *)v85;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v103 + 4), v85, v94, v95, v96, v97, v98, v99);
        }
        ++v74;
      }
    }
    v104 = *(_QWORD *)v73;
    v105 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_56;
      }
      v107 = v104 + 16LL * *v106 + 312;
    }
    else
    {
LABEL_56:
      v107 = sub_1C25438(v73, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v107)(v73, *(_QWORD *)(v107 + 8));
    v108 = current->klass;
    v109 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v110 = &v108->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v110 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v109;
        v110 += 4;
        if ( !v109 )
          goto LABEL_62;
      }
      v111 = (__int64)&v108->vtable[*v110].method;
    }
    else
    {
LABEL_62:
      v111 = sub_1C25438(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v113 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v111)(current, *(_QWORD *)(v111 + 8));
    if ( !v113 )
      sub_1BD36B4(0LL, v112);
    v37 = v74;
    while ( 1 )
    {
      v114 = *(_QWORD *)v113;
      v115 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
      {
        v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v116 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v115;
          v116 += 4;
          if ( !v115 )
            goto LABEL_70;
        }
        v117 = v114 + 16LL * *v116 + 312;
      }
      else
      {
LABEL_70:
        v117 = sub_1C25438(v113, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8)) & 1) == 0 )
        break;
      v118 = *(_QWORD *)v113;
      v119 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
      {
        v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v120 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v119;
          v120 += 4;
          if ( !v119 )
            goto LABEL_77;
        }
        v121 = v118 + 16LL * *v120 + 312;
      }
      else
      {
LABEL_77:
        v121 = sub_1C25438(v113, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v122 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v113, *(_QWORD *)(v121 + 8));
      v124 = v122;
      if ( !v122 )
        sub_1BD36B4(0LL, v123);
      if ( v122->fields.gachaExtraGiftBonusType && v122->fields.gachaExtraGiftResultType != 3 )
      {
        v125 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v126 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v122->klass->vtable._3_ToString.method)(
                                    v122,
                                    v122->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v124, 0LL);
        objectId = v124->fields.objectId;
        v129 = TitleToString;
        v130 = (SummonHistoryListViewItem_o *)sub_1BD36A4(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_33690408(v130, v37, v126, v129, objectId, 2, v131);
        if ( !v125 )
          sub_1BD36B4(v132, v133);
        v140 = v125->fields._items;
        v141 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v125->fields._version;
        if ( !v140 )
          sub_1BD36B4(v132, v133);
        v142 = v125->fields._size;
        if ( (unsigned int)v142 >= v140->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v125,
            (Il2CppObject *)v130,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
        }
        else
        {
          v143 = &v140->obj.klass + v142;
          v125->fields._size = v142 + 1;
          v143[4] = (Il2CppClass *)v130;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v143 + 4), (int64_t)v130, v134, v135, v136, v137, v138, v139);
        }
        ++v37;
      }
    }
    v144 = *(_QWORD *)v113;
    v145 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
    {
      v146 = (int *)(*(_QWORD *)(v144 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v146 - 1) != System_IDisposable_TypeInfo )
      {
        --v145;
        v146 += 4;
        if ( !v145 )
          goto LABEL_92;
      }
      v147 = v144 + 16LL * *v146 + 312;
    }
    else
    {
LABEL_92:
      v147 = sub_1C25438(v113, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v147)(v113, *(_QWORD *)(v147 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v150,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1BD36B4(v35, v36);
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

  if ( (byte_4B3382C & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1BD3458(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_4B3382C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1BD36B4(this, obj);
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
    sub_1BD36B4(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3382D & 1) == 0 )
  {
    sub_1BD3458(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_4B3382D = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return entity->fields.userGachaHistoryId;
}