void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  Il2CppObject *Master_object; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  SummonHistoryListViewManager___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v50; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_List_object__o *v59; // x0
  __int64 v60; // x1
  int32_t v61; // w21
  __int64 v62; // x1
  Il2CppObject *current; // x20
  System_String_o *v64; // x0
  System_Collections_Generic_List_object__o *itemList; // x22
  System_String_o *v66; // x23
  Il2CppObject *object; // x0
  __int64 v68; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v70; // x24
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  int64_t v74; // x23
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x0
  __int64 v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  Il2CppClass *klass; // x8
  __int64 v96; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v99; // x0
  __int64 v100; // x1
  _DWORD *v101; // x23
  int32_t v102; // w22
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  System_Collections_Generic_List_object__o *v111; // x21
  int64_t v112; // x25
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  int64_t v116; // x24
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x0
  __int64 v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  __int64 v135; // x8
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  Il2CppClass *v139; // x8
  __int64 v140; // x9
  int32_t *v141; // x10
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x20
  __int64 v145; // x8
  __int64 v146; // x9
  int *v147; // x10
  __int64 v148; // x0
  __int64 v149; // x8
  __int64 v150; // x9
  int *v151; // x10
  __int64 v152; // x0
  UserGachaHistoryEntity_o *v153; // x0
  __int64 v154; // x1
  UserGachaHistoryEntity_o *v155; // x24
  System_Collections_Generic_List_object__o *v156; // x23
  System_String_o *v157; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v160; // x26
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  SummonHistoryListViewItem_o *v164; // x24
  const MethodInfo *v165; // x6
  __int64 v166; // x0
  __int64 v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  Il2CppClass **v177; // x0
  __int64 v178; // x8
  __int64 v179; // x9
  int *v180; // x10
  __int64 v181; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v183; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v184; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B128A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v16,
      v17);
    sub_1BCA7E0(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v28, v29);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__,
      v30,
      v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&SummonHistoryListViewItem_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v36, v37);
    sub_1BCA7E0(&SummonHistoryListViewManager___c_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_6995/*"GACHA_HISTORY_LIST_DATETIME"*/, v40, v41);
    byte_4B128A1 = 1;
  }
  memset(&v184, 0, sizeof(v184));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v47 = SummonHistoryListViewManager___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo, v44);
    v47 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v47->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47, v44);
      v47 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_UserGachaHistoryEntity__long__TypeInfo,
                                             v44,
                                             v45,
                                             v46);
    System_Func_object__long____ctor(_9__2_0, v50, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v48,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2F364E8 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v59 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v58,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v59 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v183,
    v59,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v61 = 0;
  v184 = v183;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v184,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v184.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_6995/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v66 = v64;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1BCAA3C(0LL, v68);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v70 = System_String__Format(v66, CreatedAtToString, 0LL);
    v74 = sub_1BCAA2C(SummonHistoryListViewItem_TypeInfo, v71, v72, v73);
    ListViewItem___ctor_41447164((ListViewItem_o *)v74, v61, 0LL);
    *(_QWORD *)(v74 + 112) = v70;
    sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 112), (int64_t)v70, v75, v76, v77, v78, v79, v80);
    *(_DWORD *)(v74 + 120) = 1;
    if ( !itemList )
      sub_1BCAA3C(v81, v82);
    items = itemList->fields._items;
    v90 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1BCAA3C(v81, v82);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v92[4] = (Il2CppClass *)v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), v74, v83, v84, v85, v86, v87, v88);
    }
    if ( !current )
      sub_1BCAA3C(v93, v94);
    klass = current->klass;
    v96 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v96;
        p_offset += 4;
        if ( !v96 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1C1C7C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v99 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v101 = v99;
    v102 = v61 + 1;
    while ( 1 )
    {
      if ( !v101 )
        sub_1BCAA3C(v99, v100);
      v103 = *(_QWORD *)v101;
      v104 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
      {
        v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v105 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v104;
          v105 += 4;
          if ( !v104 )
            goto LABEL_35;
        }
        v106 = v103 + 16LL * *v105 + 312;
      }
      else
      {
LABEL_35:
        v106 = sub_1C1C7C0(v101, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v106)(v101, *(_QWORD *)(v106 + 8)) & 1) == 0 )
        break;
      v107 = *(_QWORD *)v101;
      v108 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
      {
        v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v109 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_42;
        }
        v110 = v107 + 16LL * *v109 + 312;
      }
      else
      {
LABEL_42:
        v110 = sub_1C1C7C0(v101, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v99 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v110)(v101, *(_QWORD *)(v110 + 8));
      if ( !v99 )
        sub_1BCAA3C(0LL, v100);
      if ( !v99[16] )
      {
        v111 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v112 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v99 + 360LL))(
                 v99,
                 *(_QWORD *)(*(_QWORD *)v99 + 368LL));
        v116 = sub_1BCAA2C(SummonHistoryListViewItem_TypeInfo, v113, v114, v115);
        ListViewItem___ctor_41447164((ListViewItem_o *)v116, v102, 0LL);
        *(_QWORD *)(v116 + 112) = v112;
        sub_1BCA784((PartyOrganizationUtility_o *)(v116 + 112), v112, v117, v118, v119, v120, v121, v122);
        *(_DWORD *)(v116 + 120) = 0;
        if ( !v111 )
          sub_1BCAA3C(v123, v124);
        v131 = v111->fields._items;
        v132 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v111->fields._version;
        if ( !v131 )
          sub_1BCAA3C(v123, v124);
        v133 = v111->fields._size;
        if ( (unsigned int)v133 >= v131->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v111,
            (Il2CppObject *)v116,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
        }
        else
        {
          v134 = &v131->obj.klass + v133;
          v111->fields._size = v133 + 1;
          v134[4] = (Il2CppClass *)v116;
          sub_1BCA784((PartyOrganizationUtility_o *)(v134 + 4), v116, v125, v126, v127, v128, v129, v130);
        }
        ++v102;
      }
    }
    v135 = *(_QWORD *)v101;
    v136 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
    {
      v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v137 - 1) != System_IDisposable_TypeInfo )
      {
        --v136;
        v137 += 4;
        if ( !v136 )
          goto LABEL_56;
      }
      v138 = v135 + 16LL * *v137 + 312;
    }
    else
    {
LABEL_56:
      v138 = sub_1C1C7C0(v101, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v138)(v101, *(_QWORD *)(v138 + 8));
    v139 = current->klass;
    v140 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v141 = &v139->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v141 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v140;
        v141 += 4;
        if ( !v140 )
          goto LABEL_62;
      }
      v142 = (__int64)&v139->vtable[*v141].method;
    }
    else
    {
LABEL_62:
      v142 = sub_1C1C7C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v144 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v142)(current, *(_QWORD *)(v142 + 8));
    if ( !v144 )
      sub_1BCAA3C(0LL, v143);
    v61 = v102;
    while ( 1 )
    {
      v145 = *(_QWORD *)v144;
      v146 = *(unsigned __int16 *)(*(_QWORD *)v144 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v144 + 302LL) )
      {
        v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v147 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v146;
          v147 += 4;
          if ( !v146 )
            goto LABEL_70;
        }
        v148 = v145 + 16LL * *v147 + 312;
      }
      else
      {
LABEL_70:
        v148 = sub_1C1C7C0(v144, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v148)(v144, *(_QWORD *)(v148 + 8)) & 1) == 0 )
        break;
      v149 = *(_QWORD *)v144;
      v150 = *(unsigned __int16 *)(*(_QWORD *)v144 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v144 + 302LL) )
      {
        v151 = (int *)(*(_QWORD *)(v149 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v151 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v150;
          v151 += 4;
          if ( !v150 )
            goto LABEL_77;
        }
        v152 = v149 + 16LL * *v151 + 312;
      }
      else
      {
LABEL_77:
        v152 = sub_1C1C7C0(v144, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v153 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v152)(v144, *(_QWORD *)(v152 + 8));
      v155 = v153;
      if ( !v153 )
        sub_1BCAA3C(0LL, v154);
      if ( v153->fields.gachaExtraGiftBonusType && v153->fields.gachaExtraGiftResultType != 3 )
      {
        v156 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v157 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v153->klass->vtable._3_ToString.method)(
                                    v153,
                                    v153->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v155, 0LL);
        objectId = v155->fields.objectId;
        v160 = TitleToString;
        v164 = (SummonHistoryListViewItem_o *)sub_1BCAA2C(SummonHistoryListViewItem_TypeInfo, v161, v162, v163);
        SummonHistoryListViewItem___ctor_33641680(v164, v61, v157, v160, objectId, 2, v165);
        if ( !v156 )
          sub_1BCAA3C(v166, v167);
        v174 = v156->fields._items;
        v175 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v156->fields._version;
        if ( !v174 )
          sub_1BCAA3C(v166, v167);
        v176 = v156->fields._size;
        if ( (unsigned int)v176 >= v174->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v156,
            (Il2CppObject *)v164,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
        }
        else
        {
          v177 = &v174->obj.klass + v176;
          v156->fields._size = v176 + 1;
          v177[4] = (Il2CppClass *)v164;
          sub_1BCA784((PartyOrganizationUtility_o *)(v177 + 4), (int64_t)v164, v168, v169, v170, v171, v172, v173);
        }
        ++v61;
      }
    }
    v178 = *(_QWORD *)v144;
    v179 = *(unsigned __int16 *)(*(_QWORD *)v144 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v144 + 302LL) )
    {
      v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v180 - 1) != System_IDisposable_TypeInfo )
      {
        --v179;
        v180 += 4;
        if ( !v179 )
          goto LABEL_92;
      }
      v181 = v178 + 16LL * *v180 + 312;
    }
    else
    {
LABEL_92:
      v181 = sub_1C1C7C0(v144, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v181)(v144, *(_QWORD *)(v181 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v184,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1BCAA3C(v59, v60);
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

  if ( (byte_4B128A2 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1BCA7E0(&SummonHistoryListViewObject_TypeInfo, obj, item);
    byte_4B128A2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
    sub_1BCAA3C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B128A3 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonHistoryListViewManager___c_TypeInfo, v1, v2);
    byte_4B128A3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonHistoryListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.userGachaHistoryId;
}