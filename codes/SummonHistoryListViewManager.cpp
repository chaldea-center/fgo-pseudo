void SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SummonHistoryListViewManager__CreateList(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SummonHistoryListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__2_0; // x21
  Il2CppObject *v12; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *current; // x20
  System_String_o *v27; // x0
  System_Collections_Generic_List_object__o *itemList; // x21
  System_String_o *v29; // x23
  Il2CppObject *object; // x0
  __int64 v31; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v33; // x24
  __int64 v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppClass *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  UserGachaHistoryEntity_o *v59; // x0
  __int64 v60; // x1
  int32_t v61; // w21
  UserGachaHistoryEntity_o *v62; // x22
  UserGachaHistoryEntity_c *v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  UserGachaHistoryEntity_o *v69; // x22
  UserGachaHistoryEntity_c *v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  System_Collections_Generic_List_object__o *v74; // x22
  __int64 v75; // x24
  __int64 v76; // x23
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x0
  __int64 v84; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  UserGachaHistoryEntity_o *v95; // x23
  UserGachaHistoryEntity_c *v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  Il2CppClass *v100; // x8
  __int64 v101; // x9
  int32_t *v102; // x10
  __int64 v103; // x0
  UserGachaHistoryEntity_o *v104; // x0
  __int64 v105; // x1
  UserGachaHistoryEntity_o *v106; // x20
  UserGachaHistoryEntity_c *v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  UserGachaHistoryEntity_o *v113; // x20
  UserGachaHistoryEntity_c *v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  UserGachaHistoryEntity_o *v118; // x23
  System_Collections_Generic_List_object__o *v119; // x20
  System_String_o *v120; // x24
  System_String_o *TitleToString; // x0
  int32_t objectId; // w26
  System_String_o *v123; // x25
  SummonHistoryListViewItem_o *v124; // x23
  const MethodInfo *v125; // x6
  __int64 v126; // x0
  __int64 v127; // x1
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  UserGachaHistoryEntity_o *v138; // x20
  UserGachaHistoryEntity_c *v139; // x8
  __int64 v140; // x9
  int *v141; // x10
  __int64 v142; // x0
  struct System_Collections_Generic_List_T__o *list; // x20
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+10h] [xbp-A0h] BYREF
  UserGachaHistoryEntity_o *v146; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_593489B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_21FFC50(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&SummonHistoryListViewItem_TypeInfo);
    sub_21FFC50(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_21FFC50(&SummonHistoryListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_7186/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_593489B = 1;
  }
  memset(&v147, 0, sizeof(v147));
  v146 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v8 = SummonHistoryListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !*(&SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo, v6, v7);
    v8 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__2_0 = (System_Func_object__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v12, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0);
    v13 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v13->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__2_0, (int32_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v9,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_384FDA4 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v21 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v20,
                                                       (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v21 )
    goto LABEL_118;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    v21,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v23 = 0;
  v147 = v145;
  v145.fields._list = 0;
  *(_QWORD *)&v145.fields._index = &v147;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v147,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v147.fields._current;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_7186/*"GACHA_HISTORY_LIST_DATETIME"*/, 0);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v29 = v27;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_21FFECC(0, v31);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0);
    v33 = System_String__Format(v29, CreatedAtToString, 0);
    v34 = sub_21FFEBC(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_50749276((ListViewItem_o *)v34, v23, 0);
    *(_QWORD *)(v34 + 120) = v33;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 120), (int32_t)v33, v35, v36, v37, v38, v39, v40);
    *(_DWORD *)(v34 + 128) = 1;
    if ( !itemList
      || (items = itemList->fields._items,
          v50 = Method_System_Collections_Generic_List_ListViewItem__Add__,
          ++itemList->fields._version,
          !items) )
    {
      sub_21FFECC(v41, v42);
    }
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v34,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v34;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), v34, v43, v44, v45, v46, v47, v48);
    }
    if ( !current )
      sub_21FFECC(v53, v54);
    klass = current->klass;
    v56 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v56;
        p_offset += 4;
        if ( !v56 )
          goto LABEL_27;
      }
      v58 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_27:
      v58 = sub_2237E2C(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v59 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v58)(
                                        current,
                                        *(_QWORD *)(v58 + 8));
    v146 = v59;
    v61 = v23 + 1;
    while ( 1 )
    {
      v62 = v146;
      if ( !v146 )
        sub_21FFECC(v59, v60);
      v63 = v146->klass;
      v64 = *(unsigned __int16 *)&v146->klass->_2.rank;
      if ( *(_WORD *)&v146->klass->_2.rank )
      {
        v65 = &v63->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_35;
        }
        v66 = (__int64)&v63->vtable + 16 * *v65;
      }
      else
      {
LABEL_35:
        v66 = sub_2237E2C(v146, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v67 = (*(__int64 (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
      if ( (v67 & 1) == 0 )
        break;
      v69 = v146;
      if ( !v146 )
        sub_21FFECC(v67, v68);
      v70 = v146->klass;
      v71 = *(unsigned __int16 *)&v146->klass->_2.rank;
      if ( *(_WORD *)&v146->klass->_2.rank )
      {
        v72 = &v70->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v72 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_43;
        }
        v73 = (__int64)&v70->vtable + 16 * *v72;
      }
      else
      {
LABEL_43:
        v73 = sub_2237E2C(v146, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v59 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v73)(
                                          v69,
                                          *(_QWORD *)(v73 + 8));
      if ( !v59 )
        sub_21FFECC(0, v60);
      if ( !v59->fields.gachaExtraGiftBonusType )
      {
        v74 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v75 = ((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, const MethodInfo *))v59->klass->vtable._3_ToString.methodPtr)(
                v59,
                v59->klass->vtable._3_ToString.method);
        v76 = sub_21FFEBC(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v76, v61, 0);
        *(_QWORD *)(v76 + 120) = v75;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v76 + 120), v75, v77, v78, v79, v80, v81, v82);
        *(_DWORD *)(v76 + 128) = 0;
        if ( !v74
          || (v91 = v74->fields._items,
              v92 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++v74->fields._version,
              !v91) )
        {
          sub_21FFECC(v83, v84);
        }
        v93 = v74->fields._size;
        if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            (Il2CppObject *)v76,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v91->obj.klass + v93;
          v74->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)v76;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 4), v76, v85, v86, v87, v88, v89, v90);
        }
        ++v61;
      }
    }
    v95 = v146;
    if ( v146 )
    {
      v96 = v146->klass;
      v97 = *(unsigned __int16 *)&v146->klass->_2.rank;
      if ( *(_WORD *)&v146->klass->_2.rank )
      {
        v98 = &v96->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
        {
          --v97;
          v98 += 4;
          if ( !v97 )
            goto LABEL_58;
        }
        v99 = (__int64)&v96->vtable + 16 * *v98;
      }
      else
      {
LABEL_58:
        v99 = sub_2237E2C(v146, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8));
    }
    v100 = current->klass;
    v101 = *(unsigned __int16 *)&current->klass->_2.rank;
    if ( *(_WORD *)&current->klass->_2.rank )
    {
      v102 = &v100->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v102 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_65;
      }
      v103 = (__int64)&v100->vtable[*v102];
    }
    else
    {
LABEL_65:
      v103 = sub_2237E2C(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0);
    }
    v104 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v103)(
                                         current,
                                         *(_QWORD *)(v103 + 8));
    v106 = v104;
    v146 = v104;
    if ( !v104 )
      goto LABEL_109;
LABEL_68:
    v23 = v61;
    while ( 1 )
    {
      v107 = v106->klass;
      v108 = *(unsigned __int16 *)&v106->klass->_2.rank;
      if ( *(_WORD *)&v106->klass->_2.rank )
      {
        v109 = &v107->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v109 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_73;
        }
        v110 = (__int64)&v107->vtable + 16 * *v109;
      }
      else
      {
LABEL_73:
        v110 = sub_2237E2C(v106, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v111 = (*(__int64 (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8));
      if ( (v111 & 1) == 0 )
        break;
      v113 = v146;
      if ( !v146 )
        sub_21FFECC(v111, v112);
      v114 = v146->klass;
      v115 = *(unsigned __int16 *)&v146->klass->_2.rank;
      if ( *(_WORD *)&v146->klass->_2.rank )
      {
        v116 = &v114->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v116 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v115;
          v116 += 4;
          if ( !v115 )
            goto LABEL_81;
        }
        v117 = (__int64)&v114->vtable + 16 * *v116;
      }
      else
      {
LABEL_81:
        v117 = sub_2237E2C(v146, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0);
      }
      v104 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v117)(
                                           v113,
                                           *(_QWORD *)(v117 + 8));
      v118 = v104;
      if ( !v104 )
        sub_21FFECC(0, v105);
      if ( v104->fields.gachaExtraGiftBonusType && v104->fields.gachaExtraGiftResultType != 3 )
      {
        v119 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v61;
        v120 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, const MethodInfo *))v104->klass->vtable._3_ToString.methodPtr)(
                                    v104,
                                    v104->klass->vtable._3_ToString.method);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v118, 0);
        objectId = v118->fields.objectId;
        v123 = TitleToString;
        v124 = (SummonHistoryListViewItem_o *)sub_21FFEBC(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_42126820(v124, v23, v120, v123, objectId, 2, v125);
        if ( !v119
          || (v134 = v119->fields._items,
              v135 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++v119->fields._version,
              !v134) )
        {
          sub_21FFECC(v126, v127);
        }
        v136 = v119->fields._size;
        if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v119,
            (Il2CppObject *)v124,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
        }
        else
        {
          v137 = &v134->obj.klass + v136;
          v119->fields._size = v136 + 1;
          v137[4] = (Il2CppClass *)v124;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v137 + 4), (int32_t)v124, v128, v129, v130, v131, v132, v133);
        }
        v106 = v146;
        if ( !v146 )
LABEL_109:
          sub_21FFECC(v104, v105);
        goto LABEL_68;
      }
      v106 = v146;
      if ( !v146 )
        goto LABEL_109;
    }
    v138 = v146;
    if ( v146 )
    {
      v139 = v146->klass;
      v140 = *(unsigned __int16 *)&v146->klass->_2.rank;
      if ( *(_WORD *)&v146->klass->_2.rank )
      {
        v141 = &v139->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v141 - 1) != System_IDisposable_TypeInfo )
        {
          --v140;
          v141 += 4;
          if ( !v140 )
            goto LABEL_100;
        }
        v142 = (__int64)&v139->vtable + 16 * *v141;
      }
      else
      {
LABEL_100:
        v142 = sub_2237E2C(v146, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UserGachaHistoryEntity_o *, _QWORD))v142)(v138, *(_QWORD *)(v142 + 8));
    }
  }
  list = v145.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v145.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( list )
    sub_21FFEC4(list);
  sort = this->fields.sort;
  if ( !sort )
LABEL_118:
    sub_21FFECC(v21, v22);
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

  if ( (byte_593489C & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_21FFC50(&SummonHistoryListViewObject_TypeInfo);
    byte_593489C = 1;
  }
  if ( !obj
    || (naturalAligment = SummonHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
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
    sub_21FFECC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593489D & 1) == 0 )
  {
    sub_21FFC50(&SummonHistoryListViewManager___c_TypeInfo);
    byte_593489D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return entity->fields.userGachaHistoryId;
}