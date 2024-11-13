void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  CombineServantListViewManager_c *v10; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x11
  struct CombineServantListViewManager_StaticFields *v12; // x0
  int64_t v13; // x1

  if ( (byte_4B19E0D & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4674/*"CombineServant"*/, v8, v9);
    byte_4B19E0D = 1;
  }
  v10 = CombineServantListViewManager_TypeInfo;
  static_fields = CombineServantListViewManager_TypeInfo->static_fields;
  static_fields->COLOR_VAL = 0.375;
  *(_OWORD *)&static_fields->FILTER2_MAX_KIND_NUM = xmmword_BD3340;
  static_fields->LV_UP_COLOR = (struct UnityEngine_Color_o)xmmword_BD3590;
  v12 = v10->static_fields;
  v12->SCROLL_TO_ITEM_OFFSET = 4.5;
  v13 = StringLiteral_4674/*"CombineServant"*/;
  v12->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4674/*"CombineServant"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->SORT_SAVE_KEY, v13, v2, v3, v4, v5, v6, v7);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CheckCombineResStatus_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_long__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B19E0C & 1) == 0 )
  {
    sub_1BCA7E0(&CheckCombineResStatus_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v7, v8);
    byte_4B19E0C = 1;
  }
  this->fields.selectMax = 20;
  v9 = (CheckCombineResStatus_o *)sub_1BCAA2C(CheckCombineResStatus_TypeInfo, method, v2, v3);
  CheckCombineResStatus___ctor(v9, 0LL);
  this->fields.combineResStatus = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineResStatus, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tempMaterialUserServantIdList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_long__o *v45; // x20
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t itemList; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v58; // w9
  System_Collections_Generic_List_object__o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_long__o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_long__o *v67; // x22
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 IsSelect; // x0
  __int64 v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  int64_t UserSvtId; // x0
  struct System_Int64_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x2
  __int64 v89; // x3
  System_Comparison_T__o *v90; // x23
  Il2CppObject *v91; // x24
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  System_Collections_Generic_List_long__o *v102; // x23
  int v103; // w25
  int v104; // w27
  int32_t v105; // w24
  __int128 v106; // q0
  struct System_Int64_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  struct System_Int64_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  const MethodInfo *v117; // x2
  const MethodInfo *v118; // x2
  const MethodInfo *v119; // x2
  int v120; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B19DD4 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Comparison_CombineServantListViewItem__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__, v41, v42);
    sub_1BCA7E0(&CombineServantListViewManager___c_TypeInfo, v43, v44);
    byte_4B19DD4 = 1;
  }
  memset(&v123, 0, sizeof(v123));
  v45 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v45,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  this->fields.selectedMaterialUserServantIdList = v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectedMaterialUserServantIdList,
    (int64_t)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_55;
  v58 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v58;
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                       v54,
                                                       v55,
                                                       v56);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v63 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v60,
                                                     v61,
                                                     v62);
  System_Collections_Generic_List_long____ctor(
    v63,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v67 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v64,
                                                     v65,
                                                     v66);
  System_Collections_Generic_List_long____ctor(
    v67,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v122,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v123.fields._list = *(_OWORD *)&v122.fields.currentCryptoKey;
  v123.fields._current = (Il2CppObject *)v122.fields.fakeValue;
  while ( 1 )
  {
    v68 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v123,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v68 )
      break;
    current = v123.fields._current;
    if ( !v123.fields._current )
      goto LABEL_57;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v123.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v123.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BCACFC(v123.fields._current);
LABEL_57:
      sub_1BCAA3C(v68, v69);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v123.fields._current, 0LL);
    if ( IsSelect )
    {
      if ( !v59 )
        sub_1BCAA3C(IsSelect, v73);
      items = v59->fields._items;
      v81 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v59->fields._version;
      if ( !items )
        sub_1BCAA3C(IsSelect, v73);
      size = v59->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &items->obj.klass + size;
        v59->fields._size = size + 1;
        v83[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)current, v74, v75, v76, v77, v78, v79);
      }
      if ( SHIDWORD(current[9].klass) >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        if ( !v67 )
          sub_1BCAA3C(UserSvtId, UserSvtId);
        v85 = v67->fields._items;
        v86 = Method_System_Collections_Generic_List_long__Add__;
        ++v67->fields._version;
        if ( !v85 )
          sub_1BCAA3C(UserSvtId, UserSvtId);
        v87 = v67->fields._size;
        if ( (unsigned int)v87 >= v85->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v67,
            UserSvtId,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v67->fields._size = v87 + 1;
          v85->m_Items[v87] = UserSvtId;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v123,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo, v54);
    itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  v90 = *(System_Comparison_T__o **)(*(_QWORD *)(itemList + 184) + 8LL);
  if ( !v90 )
  {
    if ( !*(_DWORD *)(itemList + 224) )
    {
      j_il2cpp_runtime_class_init_0(itemList, v54);
      itemList = (int64_t)CombineServantListViewManager___c_TypeInfo;
    }
    v91 = **(Il2CppObject ***)(itemList + 184);
    v90 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_CombineServantListViewItem__TypeInfo, v54, v88, v89);
    System_Comparison_object____ctor(
      v90,
      v91,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__174_0__,
      0LL);
    static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__174_0 = (struct System_Comparison_CombineServantListViewItem__o *)v90;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__174_0, (int64_t)v90, v93, v94, v95, v96, v97, v98);
  }
  if ( !v59 )
LABEL_55:
    sub_1BCAA3C(itemList, v54);
  System_Collections_Generic_List_object___Sort_56244000(
    v59,
    v90,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v102 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      v99,
                                                      v100,
                                                      v101);
  System_Collections_Generic_List_long____ctor(
    v102,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v103 = v59->fields._size;
  if ( v103 >= 1 )
  {
    v104 = 0;
    v105 = 0;
    do
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v59,
                            v105,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( !itemList )
        goto LABEL_55;
      v106 = *(_OWORD *)(itemList + 32);
      *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
      *(_OWORD *)&v122.fields.fakeValue = v106;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54);
      v121 = v122;
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v121, 0LL);
      if ( !v102 )
        goto LABEL_55;
      v107 = v102->fields._items;
      v108 = Method_System_Collections_Generic_List_long__Add__;
      ++v102->fields._version;
      if ( !v107 )
        goto LABEL_55;
      v109 = v102->fields._size;
      if ( (unsigned int)v109 >= v107->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v102,
          itemList,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v102->fields._size = v109 + 1;
        v107->m_Items[v109] = itemList;
      }
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v59,
                            v105,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_55;
      if ( *(_DWORD *)(itemList + 148) > v104 )
      {
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v59,
                              v105,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        v104 = *(_DWORD *)(itemList + 148);
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v59,
                              v105,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_55;
        this->fields.lastSelectIndex = *(_DWORD *)(itemList + 24);
      }
    }
    while ( v103 != ++v105 );
  }
  itemList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !itemList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v102,
    (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
  itemList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_55;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)itemList,
    (System_Collections_Generic_IEnumerable_T__o *)v102,
    (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v67 )
    goto LABEL_55;
  v110 = System_Collections_Generic_List_long___ToArray(
           v67,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v110;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.highRarityList,
    (int64_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v59,
    v117);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v118);
  CombineServantListViewManager__SetStatusKind(this, 0, v119);
  itemList = (int64_t)this->fields.combineRootComponent;
  if ( !itemList )
    goto LABEL_55;
  v120 = *(_DWORD *)(itemList + 452);
  if ( v120 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
  }
  else if ( v120 == 3 )
  {
    CombineRootComponent__SelectMaterialSvt((CombineRootComponent_o *)itemList, 0LL);
  }
}


void __fastcall CombineServantListViewManager__CancelDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        CombineServantListViewManager__CancelDragSelect(this, dragStartIndex++, v2);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        CombineServantListViewManager__CancelDragSelect(this, dragEndIndex++, v2);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  CombineServantListViewManager__RefrashListDisp(this, method);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B19DFE & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B19DFE = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
  }
  else
  {
    sub_1BCACFC(itemSortList);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v9, v10);
  }
}


bool __fastcall CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  bool v14; // w20
  int v15; // w19
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B19DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    byte_4B19DE4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    if ( selectedMaterialUserServantIdList->fields._size < 1 )
    {
      LOBYTE(selectedMaterialUserServantIdList) = 0;
    }
    else
    {
      System_Collections_Generic_List_long___GetEnumerator(
        &v17,
        selectedMaterialUserServantIdList,
        (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v18 = v17;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v18,
                (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
        if ( !v14 )
          break;
        if ( v18.fields._current == (Il2CppObject *)userSvtId )
        {
          v15 = 5;
          goto LABEL_11;
        }
      }
      v15 = 2;
LABEL_11:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v18,
        (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = v14 && v15 == 5;
    }
  }
  return (char)selectedMaterialUserServantIdList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CreateList(
        CombineServantListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  unsigned int v7; // w22
  CombineServantListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  struct UIScrollView_o *v27; // x8
  int v28; // s2
  UnityEngine_GameObject_o *v29; // x0
  struct UIScrollView_o *scrollView; // x8
  int callbackAfterScroll; // s0
  int callbackAfterScroll_high; // s1
  float y; // s3
  __int64 v34; // x1
  CombineServantListViewManager_c *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct ListViewSort_array *sortStatusList; // x8
  int64_t v43; // x1
  ListViewSort_o **p_sort; // x23
  ListViewSort_o *v45; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct ListViewSort_o *sort; // x24
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Collections_Generic_Dictionary_int__int____o *EventCombineCampaignDictionary_k__BackingField; // x1
  bool isBonusKind; // w1
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  UILabel_o *spendQpInfoLabel; // x21
  __int64 *v69; // x8
  __int64 v70; // x2
  __int64 v71; // x3
  struct ListViewSort_o *v72; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_T1__T2__o *v76; // x26
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x3
  __int64 v83; // x1
  UILabel_o *v84; // x21
  UnityEngine_Vector2_o v85; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v86; // 0:s0.4,4:s1.4

  v7 = type;
  v8 = this;
  if ( (byte_4B19DBC & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo,
      *(_QWORD *)&type,
      *(_QWORD *)&modeKind);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v9, v10);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_7023/*"GET_EXP_INFO"*/, v19, v20);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v21, v22);
    byte_4B19DBC = 1;
  }
  if ( !setupInfo )
    goto LABEL_97;
  EventUpValSetupInfo__AnalyzeInfoCombineCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, v7, v23);
  this = (CombineServantListViewManager_o *)v8->fields.bgTxtSprite;
  if ( !this )
    goto LABEL_97;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CombineServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this )
    goto LABEL_97;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v7 - 11 > 1 )
  {
    GameObjectExtensions__SetLocalPositionX(v25, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v86.fields.x = -101.0;
    v86.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_34330940(v29, v86, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)scrollView->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v28 = 1145077760;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v25, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_97;
    v26 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v85.fields.x = -11.0;
    v85.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_34330940(v26, v85, 0LL);
    v27 = v8->fields.scrollView;
    if ( !v27 )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)v27->fields.mPanel;
    if ( !this )
      goto LABEL_97;
    v28 = 1148026880;
  }
  callbackAfterScroll = (int)this->fields.callbackAfterScroll;
  callbackAfterScroll_high = HIDWORD(this->fields.callbackAfterScroll);
  y = this->fields.oldScrollPosition.fields.y;
  UIPanel__set_baseClipRegion((UIPanel_o *)this, *(UnityEngine_Vector4_o *)(&v28 - 2), 0LL);
  v8->fields.currentType = v7;
  v35 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v34);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v35);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_97;
  if ( sortStatusList->max_length <= v7 )
    sub_1BCAA44(this, *(_QWORD *)&type);
  v43 = (int64_t)sortStatusList->m_Items[v7];
  v8->fields.sort = (struct ListViewSort_o *)v43;
  p_sort = &v8->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.sort, v43, v36, v37, v38, v39, v40, v41);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_97;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_BD2BC0;
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoLabel;
  v8->fields.isDragSelect = 1;
  if ( !this )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)this, 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoIcon;
  if ( !this
    || (UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL),
        (this = (CombineServantListViewManager_o *)v8->fields.currentExpBar) == 0LL)
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)this,
                                                    0LL)) == 0LL
    || (this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL )
  {
LABEL_97:
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v45 = *p_sort;
  if ( this )
  {
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             (System_Collections_Generic_Dictionary_int__object__o *)this,
             (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    this = (CombineServantListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    *(_QWORD *)&type = this;
    if ( !v45 )
      goto LABEL_97;
  }
  else
  {
    *(_QWORD *)&type = 0LL;
    if ( !v45 )
      goto LABEL_97;
  }
  AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                         v45,
                         *(System_Int32_array **)&type,
                         setupInfo->fields.servantFilterEventCampaignIds,
                         setupInfo->fields.servantFilterEventIds,
                         0LL,
                         setupInfo->fields.servantFilterIds,
                         0,
                         0LL);
  v8->fields.alignedBonusFilterInfos = AlignedBonusFilter;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v8->fields.alignedBonusFilterInfos,
    (int64_t)AlignedBonusFilter,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  sort = v8->fields.sort;
  this = (CombineServantListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)v8->fields.alignedBonusFilterInfos,
                                              0LL);
  if ( !sort )
    goto LABEL_97;
  sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  EventCombineCampaignDictionary_k__BackingField = setupInfo->fields._EventCombineCampaignDictionary_k__BackingField;
  v8->fields.eventCombineCampaignDictionary = EventCombineCampaignDictionary_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v8->fields.eventCombineCampaignDictionary,
    (int64_t)EventCombineCampaignDictionary_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( (v7 | 4) == 5 )
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    isBonusKind = 0;
  }
  else
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !*p_sort || !this )
      goto LABEL_97;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBonusKind, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scaleChangeButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  if ( !v7 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.decideButton;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
    if ( !this )
      goto LABEL_97;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v72 = v8->fields.sort;
    if ( !v72 )
      goto LABEL_97;
    expUpDispKind = v72->fields.expUpDispKind;
    expUpDispType = v72->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v76 = (System_Action_T1__T2__o *)sub_1BCAA2C(
                                       System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo,
                                       *(_QWORD *)&type,
                                       v70,
                                       v71);
    System_Action_Int32Enum__Int32Enum____ctor(
      v76,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      0LL);
    if ( !combineMaterialNumInfo )
      goto LABEL_97;
    if ( !CombineExpUpInfo__ExpUpInfoSet(
            combineMaterialNumInfo,
            expUpDispKind,
            expUpDispType,
            1,
            (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)v76,
            0LL) )
    {
      this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.decideButton;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
      if ( !this )
        goto LABEL_97;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    goto LABEL_79;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.decideButton;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v7 > 0xC )
    goto LABEL_86;
  if ( ((1 << v7) & 0x1FDC) != 0 )
  {
LABEL_79:
    CombineServantListViewManager__setDispActive(v8, 0, v63);
    CombineServantListViewManager__setBtnEnable(v8, 0, v77);
    CombineServantListViewManager__setServantList(v8, v7, setupInfo, v78);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v79);
            if ( v7 - 11 <= 1 )
            {
              this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
              if ( !this )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_86;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( v7 != 1 )
  {
    if ( v7 != 5 )
      goto LABEL_86;
    CombineServantListViewManager__setDispActive(v8, 1, v63);
    CombineServantListViewManager__setBtnEnable(v8, 0, v64);
    CombineServantListViewManager__setCombineViewInfo(v8, v65);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v66);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
        if ( this )
        {
          this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            spendQpInfoLabel = v8->fields.spendQpInfoLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
            v69 = &StringLiteral_9343/*"NEED_QP_INFO"*/;
            goto LABEL_95;
          }
        }
      }
    }
    goto LABEL_97;
  }
  CombineServantListViewManager__setDispActive(v8, 1, v63);
  CombineServantListViewManager__setBtnEnable(v8, 0, v80);
  CombineServantListViewManager__setCombineViewInfo(v8, v81);
  v8->fields.selectMax = 20;
  CombineServantListViewManager__setServantList(v8, 1, setupInfo, v82);
  this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
  if ( !this )
    goto LABEL_97;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v84 = v8->fields.spendQpInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83);
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
  if ( !v84 )
    goto LABEL_97;
  UILabel__set_text(v84, (System_String_o *)this, 0LL);
  spendQpInfoLabel = v8->fields.getExpInfoLabel;
  v69 = &StringLiteral_7023/*"GET_EXP_INFO"*/;
LABEL_95:
  this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v69, 0LL);
  if ( !spendQpInfoLabel )
    goto LABEL_97;
  UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
LABEL_86:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v63);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  CombineServantListViewManager_c *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CombineServantListViewManager_c *v16; // x8
  int64_t v17; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  __int64 v19; // x1
  unsigned __int64 v20; // x24
  __int64 i; // x22
  CombineServantListViewManager_c *v22; // x0
  struct CombineServantListViewManager_StaticFields *v23; // x8
  unsigned int *sortStatusList; // x26
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  ListViewSort_o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19DB6 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort___TypeInfo, v3, v4);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v5, v6);
    byte_4B19DB6 = 1;
  }
  v7 = CombineServantListViewManager_TypeInfo;
  v41 = 0;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1);
    v7 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v7->static_fields->isInitSystem )
  {
    v8 = sub_1BCA888(ListViewSort___TypeInfo, 13LL);
    v16 = CombineServantListViewManager_TypeInfo;
    v17 = v8;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v9);
      v16 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->sortStatusList, v17, v10, v11, v12, v13, v14, v15);
    v20 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      v22 = CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v19);
        v22 = CombineServantListViewManager_TypeInfo;
      }
      v23 = v22->static_fields;
      if ( i == 34 )
        break;
      sortStatusList = (unsigned int *)v23->sortStatusList;
      SORT_SAVE_KEY = v23->SORT_SAVE_KEY;
      v41 = v20 + 1;
      v26 = System_Int32__ToString((int32_t)&v41, 0LL);
      v27 = System_String__Concat_62401220(SORT_SAVE_KEY, v26, 0LL);
      v31 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v28, v29, v30);
      ListViewSort___ctor_41480716(v31, v27, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_1BCAA3C(v32, v33);
      if ( v31 )
      {
        v32 = sub_1BCA91C(v31, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v32 )
        {
          v40 = sub_1BCAA60(0LL);
          sub_1BCA908(v40, 0LL);
        }
      }
      if ( v20 >= sortStatusList[6] )
        sub_1BCAA44(v32, v33);
      *(_QWORD *)&sortStatusList[i] = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&sortStatusList[i], (int64_t)v31, v34, v35, v36, v37, v38, v39);
      ++v20;
    }
    v23->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v16; // x19
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v20; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass; // w9
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19DFD & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    byte_4B19DFD = 1;
  }
  memset(&v30, 0, sizeof(v30));
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_22;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_22;
  v16 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[8].klass) < 1 )
      goto LABEL_20;
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = this->fields.selectSum;
        if ( selectSum < this->fields.selectMax )
        {
          v16->fields.selectNum = selectSum;
          this->fields.selectSum = selectSum + 1;
          CombineServantListViewManager__changeCombineEnableRestCnt(this, 0, v16, v20);
        }
      }
      goto LABEL_20;
    }
    if ( !IsSelect )
      goto LABEL_20;
    selectNum = v16->fields.selectNum;
    ListViewItem__set_IsSelect((ListViewItem_o *)v16, 0, 0LL);
    v16->fields.isMaterialSvt = 0;
    --this->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, v16, v23);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        itemSortList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v24 )
          break;
        if ( !v30.fields._current )
          sub_1BCAA3C(v24, v25);
        klass = (int32_t)v30.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v30.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  sub_1BCACFC(itemSortList);
  if ( v28 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CB5270();
  }
  v29 = *(_QWORD *)__cxa_begin_catch(v27);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v29 )
    sub_1BCAA34(v29);
LABEL_20:
  CombineServantListViewItem__set_IsDragSelect(v16, 0, 0LL);
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  CombineServantListViewManager_c *v6; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B19DB7 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v1, v2);
    byte_4B19DB7 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1);
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v3);
  v5 = 0LL;
  do
  {
    v6 = CombineServantListViewManager_TypeInfo;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v4);
      v6 = CombineServantListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)v5 >= sortStatusList->max_length )
      sub_1BCAA44(v6, v4);
    v6 = (CombineServantListViewManager_c *)sortStatusList->m_Items[v5];
    if ( !v6 )
LABEL_13:
      sub_1BCAA3C(v6, v4);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v6, 0LL);
    ++v5;
  }
  while ( (_DWORD)v5 != 13 );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Clear(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__EndCardFavoriteRequest(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_46099192(this, 2, v4);
}


void __fastcall CombineServantListViewManager__EndClickTabChoice(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  CombineServantListViewManager__SetStatusKind(this, 2, method);
  CombineServantListViewManager__ReleaseAll(this, v4);
  CombineServantListViewManager__ModifyList(this, 0, v5);
  CombineServantListViewManager__SetMode_46099192(this, 2, v6);
}


void __fastcall CombineServantListViewManager__EndClickTabLock(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  CombineServantListViewManager__SetStatusKind(this, 1, method);
  CombineServantListViewManager__ReleaseAll(this, v4);
  CombineServantListViewManager__ModifyList(this, 0, v5);
  CombineServantListViewManager__SetMode_46099192(this, 2, v6);
}


void __fastcall CombineServantListViewManager__EndClickTabPush(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 3, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_46099192(this, 2, v5);
}


void __fastcall CombineServantListViewManager__EndClickTabStatus(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 0, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_46099192(this, 2, v5);
}


void __fastcall CombineServantListViewManager__EndCloseSelectFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectFilterKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B19DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B19DE6 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineServantListViewManager__SetFilterButtonImage(this, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_4B19DEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19DEB = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0LL, 0LL);
}


void __fastcall CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  PartyOrganizationUtility_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  __int64 methodPtr_low; // x9
  int64_t result; // x0
  CombineServantListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1

  v3 = svtId;
  if ( (byte_4B19DF0 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    byte_4B19DF0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( itemList[3].fields._size == v3 )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_13;
    }
    sub_1BCACFC(itemList);
    CombineServantListViewManager__OnClickNormalStatus(v15, v16);
  }
  return result;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  UserServantCollectionMaster_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B19DC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19DC7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v13 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v14 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v21 = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_15;
  v16 = Instance;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  if ( !v14 )
LABEL_15:
    sub_1BCAA3C(Instance, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v14, v16, Instance, 0LL);
  if ( EntityDefinitely )
    return EntityDefinitely->fields.maxLimitCount;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLv(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  UserServantCollectionMaster_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B19DC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19DC8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v13 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v14 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v21 = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_14;
  v16 = Instance;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  if ( !v14 )
LABEL_14:
    sub_1BCAA3C(Instance, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v14, v16, Instance, 0LL);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t __fastcall CombineServantListViewManager__GetCombineInfoMsgLbFontSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t currentType; // w8

  if ( (unsigned int)(this->fields.modeKind - 1) < 3 )
    return 14;
  currentType = this->fields.currentType;
  result = 20;
  if ( currentType )
  {
    if ( currentType == 7 )
      return 20;
    else
      return 14;
  }
  return result;
}


float __fastcall CombineServantListViewManager__GetCurrentScrollOffset(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float VerticalScrollableSize; // s0
  UIProgressBar_o *scrollBar; // x0

  VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, method);
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    sub_1BCAA3C(0LL, v3);
  return VerticalScrollableSize * UIProgressBar__get_value(scrollBar, 0LL);
}


bool __fastcall CombineServantListViewManager__GetDragSelect(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int64_t __fastcall CombineServantListViewManager__GetEventCampaignFinishedAt(
        CombineServantListViewManager_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *eventCampaignEntities; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  void *monitor; // x20
  int32_t v17; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19E01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19E01 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v13);
  }
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0LL;
  v17 = 0;
  while ( v17 < eventCampaignEntities->fields._size )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 eventCampaignEntities,
                 v17,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    if ( Instance && v15 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v15,
                                   &entity,
                                   (int32_t)Instance[1].klass,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_18;
        if ( monitor )
        {
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          monitor = entity[6].monitor;
        }
      }
      eventCampaignEntities = (System_Collections_Generic_List_object__o *)this->fields.eventCampaignEntities;
      ++v17;
      if ( eventCampaignEntities )
        continue;
    }
    goto LABEL_18;
  }
  return (int64_t)monitor;
}


bool __fastcall CombineServantListViewManager__GetFocusItemIndex(
        CombineServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t i; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B19E0B & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, index, list);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v8,
                                                v9);
    byte_4B19E0B = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_18:
      sub_1BCAA3C(this, index);
    for ( i = 0; sum != i; ++i )
    {
      this = (CombineServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  i,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_18;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        goto LABEL_18;
      }
      if ( LODWORD(this->fields.clipRange.fields.x) == 5 )
      {
        if ( BYTE1(this->fields.clipOffset.fields.x) )
          continue;
      }
      else if ( BYTE1(this->fields.clipOffset.fields.x) )
      {
        goto LABEL_16;
      }
      if ( HIBYTE(this->fields.clipOffset.fields.x) )
      {
LABEL_16:
        *index = i;
        return 1;
      }
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
CombineServantListViewItem_o *__fastcall CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CombineServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *v9; // x0
  int64_t v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B19DC9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B19DC9 = 1;
  }
  result = (CombineServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(result);
        CombineServantListViewManager__ModifyItem(v9, v10, v11);
      }
    }
  }
  return result;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__GetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19DC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19DC6 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v13 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v16 = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v16, 0LL);
  if ( !v14 )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                  v14,
                                  (int64_t)Instance,
                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x9
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  CombineServantListViewManager_o *v33; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v34; // x1
  System_Collections_Generic_List_long__o **v35; // x2
  const MethodInfo *v36; // x3

  if ( (byte_4B19DD6 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v13, v14);
    byte_4B19DD6 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1BCAA3C(itemList, v16);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v15;
  v19 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v19,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_17;
    v20 = (Il2CppObject *)itemList;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_17;
      items = v15->fields._items;
      v29 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_17;
      v30 = v15->fields._size;
      if ( (unsigned int)v30 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v20,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + v30;
        v15->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v22, v23, v24, v25, v26, v27);
      }
    }
    if ( size == ++v19 )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v15;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
  }
  sub_1BCACFC(itemList);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v33,
                                                                            v34,
                                                                            v35,
                                                                            v36);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x8

  if ( (byte_4B19DB9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, method, v2);
    byte_4B19DB9 = 1;
  }
  v4 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, method);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v4->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_9;
  if ( sortStatusList->max_length <= type )
    sub_1BCAA44(v4, method);
  v6 = sortStatusList->m_Items[type];
  if ( !v6 )
LABEL_9:
    sub_1BCAA3C(v4, method);
  return v6->fields.sortKind;
}


bool __fastcall CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_long__o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_long__o *v25; // x22
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t itemList; // x0
  int v34; // w26
  int32_t v35; // w24
  CombineServantListViewItem_o *v36; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isChoice; // w20
  __int128 v39; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  __int128 v44; // q0
  struct System_Int64_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_long__o *v49; // x0
  int v50; // w19
  System_Int64_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Int64_array *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Int64_array **v65; // x0
  bool result; // w0
  CombineServantListViewManager_o *v67; // x0
  const MethodInfo *v68; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+50h] [xbp-80h]

  if ( (byte_4B19DED & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    byte_4B19DED = 1;
  }
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v25 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v34 = *(_DWORD *)(itemList + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v35,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v36 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(itemList);
        CombineServantListViewManager__OnClickSortAscendingOrder(v67, v68);
        return result;
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v36->fields.isSwapChoice )
      {
        isChoice = v36->fields.isChoice;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v36, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isChoice )
        {
          v39 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v73.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v72 = v73;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v72, 0LL);
          if ( !v25 )
            goto LABEL_38;
          items = v25->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v25->fields._size;
          v26 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v48 = v41[4];
            v49 = v25;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v49,
              v26,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v48 + 192) + 112LL));
            goto LABEL_29;
          }
          v43 = &items->obj.klass + size;
          v25->fields._size = size + 1;
        }
        else
        {
          v44 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v73.fields.fakeValue = v44;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v71 = v73;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v71, 0LL);
          if ( !v21 )
            goto LABEL_38;
          v45 = v21->fields._items;
          v46 = Method_System_Collections_Generic_List_long__Add__;
          ++v21->fields._version;
          if ( !v45 )
            goto LABEL_38;
          v47 = v21->fields._size;
          v26 = itemList;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            v48 = v46[4];
            v49 = v21;
            goto LABEL_28;
          }
          v43 = &v45->obj.klass + v47;
          v21->fields._size = v47 + 1;
        }
        v43[4] = (Il2CppClass *)v26;
      }
LABEL_29:
      if ( v34 == ++v35 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v21 || !v25 )
LABEL_38:
    sub_1BCAA3C(itemList, v26);
  v50 = v25->fields._size + v21->fields._size;
  if ( v50 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v27, v28, v29, v30, v31, v32);
    v65 = unchoiceList;
    v58 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v21,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v25,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    v65 = unchoiceList;
    *unchoiceList = v58;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v65, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  return v50 > 0;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_long__o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_long__o *v25; // x22
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t itemList; // x0
  int v34; // w26
  int32_t v35; // w24
  CombineServantListViewItem_o *v36; // x25
  __int64 methodPtr_low; // x9
  _BOOL4 isLock; // w20
  __int128 v39; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  __int128 v44; // q0
  struct System_Int64_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_long__o *v49; // x0
  int v50; // w19
  System_Int64_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Int64_array *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Int64_array **v65; // x0
  CombineServantListViewManager_o *v67; // x0
  System_Int64_array **v68; // x1
  System_Int64_array **v69; // x2
  const MethodInfo *v70; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-80h]

  if ( (byte_4B19DEC & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    byte_4B19DEC = 1;
  }
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v25 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  v34 = *(_DWORD *)(itemList + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v35,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_38;
      v36 = (CombineServantListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(itemList);
        return CombineServantListViewManager__GetSwapChoiceList(v67, v68, v69, v70);
      }
      itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)itemList, 0LL);
      if ( itemList && v36->fields.isSwapLock )
      {
        isLock = v36->fields.isLock;
        itemList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v36, 0LL);
        if ( !itemList )
          goto LABEL_38;
        if ( isLock )
        {
          v39 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v75.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v74 = v75;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v74, 0LL);
          if ( !v25 )
            goto LABEL_38;
          items = v25->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_38;
          size = v25->fields._size;
          v26 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v48 = v41[4];
            v49 = v25;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v49,
              v26,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v48 + 192) + 112LL));
            goto LABEL_29;
          }
          v43 = &items->obj.klass + size;
          v25->fields._size = size + 1;
        }
        else
        {
          v44 = *(_OWORD *)(itemList + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(itemList + 16);
          *(_OWORD *)&v75.fields.fakeValue = v44;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v73 = v75;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v73, 0LL);
          if ( !v21 )
            goto LABEL_38;
          v45 = v21->fields._items;
          v46 = Method_System_Collections_Generic_List_long__Add__;
          ++v21->fields._version;
          if ( !v45 )
            goto LABEL_38;
          v47 = v21->fields._size;
          v26 = itemList;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            v48 = v46[4];
            v49 = v21;
            goto LABEL_28;
          }
          v43 = &v45->obj.klass + v47;
          v21->fields._size = v47 + 1;
        }
        v43[4] = (Il2CppClass *)v26;
      }
LABEL_29:
      if ( v34 == ++v35 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_38;
    }
  }
  if ( !v21 || !v25 )
LABEL_38:
    sub_1BCAA3C(itemList, v26);
  v50 = v25->fields._size + v21->fields._size;
  if ( v50 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v27, v28, v29, v30, v31, v32);
    v65 = unlockList;
    v58 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v21,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v25,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    v65 = unlockList;
    *unlockList = v58;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v65, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  return v50 > 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  CombineServantListViewItem_o *v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x0
  __int64 v25; // x1
  CombineServantListViewObject_o *v26; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v28; // x1
  CombineServantListViewItem_o *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19E09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11, v12);
    byte_4B19E09 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( progress == 4 )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)objectList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v33 = v32;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v33,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v22 )
          break;
        current = v33.fields._current;
        if ( !v33.fields._current )
          sub_1BCAA3C(v22, v23);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v33.fields._current,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v26 = (CombineServantListViewObject_o *)Component_object;
        if ( !Component_object )
          sub_1BCAA3C(0LL, v25);
        Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, 0LL);
        if ( !Item )
          sub_1BCAA3C(0LL, v28);
        if ( Item->fields.rarity == 4 )
        {
          v29 = CombineServantListViewObject__GetItem(v26, 0LL);
          if ( !v29 )
            sub_1BCAA3C(0LL, v30);
          if ( v29->fields.svtId == 9770400 )
          {
LABEL_26:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v33,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            return (UnityEngine_GameObject_o *)current;
          }
        }
      }
      goto LABEL_27;
    }
LABEL_33:
    sub_1BCAA3C(objectList, *(_QWORD *)&progress);
  }
  v13 = progress == 2;
  current = 0LL;
  if ( !v13 )
    return (UnityEngine_GameObject_o *)current;
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v16 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1BCAA3C(v16, v17);
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v33.fields._current,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v18 )
      sub_1BCAA3C(0LL, v19);
    v20 = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)v18, 0LL);
    if ( !v20 )
      sub_1BCAA3C(0LL, v21);
    if ( v20->fields.rarity == 4 )
      goto LABEL_26;
  }
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0LL;
}


float __fastcall CombineServantListViewManager__GetVerticalScrollableSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x0
  float v4; // s10
  float v5; // s11
  struct UIScrollView_o *v6; // x8
  struct UIPanel_o *mPanel; // x19
  float v8; // s12
  float v9; // s13
  __int64 v10; // x1
  __int64 v11; // x2
  float w; // s8
  double v13; // d9
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int v18; // w8
  float v19; // s8
  double v20; // d0
  double v21; // d0
  float v22; // s1
  __int64 v23; // x8
  float v24; // s0
  float v25; // s1
  double iptr[2]; // [xsp+8h] [xbp-68h] BYREF
  float v28; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_35;
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
    scrollView,
    scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
          scrollView,
          scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v4 = *((float *)iptr + 1),
        v5 = v28,
        scrollView = (struct UIScrollView_o *)((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
                                                scrollView,
                                                scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr),
        (v6 = this->fields.scrollView) == 0LL)
    || (mPanel = v6->fields.mPanel) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(scrollView, method);
  }
  v8 = *((float *)iptr + 1);
  v9 = v28;
  finalClipRegion = UIPanel__get_finalClipRegion(v6->fields.mPanel, 0LL);
  w = finalClipRegion.fields.w;
  if ( !byte_4B11755 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v10, v11);
    byte_4B11755 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
  v13 = w;
  v14 = modf(w, iptr);
  if ( w >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v13 + 0.5);
      goto LABEL_20;
    }
    v15 = iptr[0];
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v13 + -0.5);
      goto LABEL_20;
    }
    v15 = iptr[0];
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_20:
  v18 = (int)v15;
  if ( v15 == INFINITY )
    v18 = 0x80000000;
  v19 = (float)(int)(v18 & 0xFFFFFFFE) * 0.5;
  v20 = modf(v19, iptr);
  if ( v19 >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v24 = floorf(v19 + 0.5);
      goto LABEL_32;
    }
    v21 = iptr[0];
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v24 = ceilf(v19 + -0.5);
      goto LABEL_32;
    }
    v21 = iptr[0];
    v22 = -1.0;
  }
  v23 = (__int64)v21;
  v24 = v21;
  v25 = v24 + v22;
  if ( (v23 & 1) != 0 )
    v24 = v25;
LABEL_32:
  if ( mPanel->fields.mClipping == 3 )
    v24 = v24 - mPanel->fields.mClipSoftness.fields.y;
  return fmaxf((float)((float)(v4 + v5) - (float)(v8 - v9)) - (float)(v24 + v24), 0.0);
}


void __fastcall CombineServantListViewManager__InitBackListView(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v2);
  CombineServantListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall CombineServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineServantListViewManager_c *v3; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B19DB8 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v1, v2);
    byte_4B19DB8 = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 4LL; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3, v1);
        v3 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= sortStatusList->max_length )
        sub_1BCAA44(v3, v1);
      v3 = (CombineServantListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v3 )
LABEL_15:
        sub_1BCAA3C(v3, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL);
      if ( (_DWORD)i == 16 )
        break;
      v3 = CombineServantListViewManager_TypeInfo;
    }
  }
}


bool __fastcall CombineServantListViewManager__IsDragEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t currentType; // w8
  const MethodInfo *v7; // x5
  bool IsSelectEnable; // w8

  if ( this->fields.modeKind )
    return 0;
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    if ( !item )
      return 0;
  }
  else
  {
    result = 0;
    if ( !item || currentType != 5 )
      return result;
  }
  if ( CombineServantListViewItem__get_IsCanNotSelect(item, 0LL) )
    return 0;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
    return 1;
  IsSelectEnable = CombineServantListViewManager__IsSelectEnable(this, item, 0, 0, 0, v7);
  result = 0;
  if ( IsSelectEnable )
    return 1;
  return result;
}


bool __fastcall CombineServantListViewManager__IsDragStart(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsExchangeSvtExist(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int64_t uniId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  EventCampaignMaster_o *v30; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x22
  _BOOL8 v35; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  bool v39; // w21
  EventCampaignEntity_o *Data; // x0
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x1
  Il2CppObject *Entity; // x0
  int v46; // w19
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B19DF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaignEventId, uniId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    byte_4B19DF8 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_37;
  v30 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return 0;
  Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_39815744(v30, CombineEventCampaigns, 0LL);
  if ( !Instance )
LABEL_37:
    sub_1BCAA3C(Instance, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v51 = v49;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    if ( !v32 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1BCAA3C(v32, v33);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)v51.fields._current,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v50 = v49;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v35 )
        break;
      if ( !v50.fields._current )
        sub_1BCAA3C(v35, v36);
      if ( LODWORD(v50.fields._current[1].klass) == campaignEventId )
        goto LABEL_16;
    }
    current = 0LL;
LABEL_16:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( current )
      goto LABEL_20;
  }
  current = 0LL;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  if ( !current )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)current,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    v39 = v37;
    if ( !v37 )
      break;
    if ( !v50.fields._current )
      sub_1BCAA3C(v37, v38);
    Data = EventCampaignMaster__getData(v30, (int32_t)v50.fields._current[1].klass, 0LL);
    if ( Data && Data->fields.target == 27 )
    {
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        sub_1BCAA3C(0LL, v42);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v41,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1BCAA3C(0LL, v44);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 uniId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Entity )
      {
        if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL) )
        {
          v46 = 12;
          goto LABEL_33;
        }
      }
    }
  }
  v46 = 13;
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return v39 && v46 == 12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsLargeSuccessCampaignClassId(
        CombineServantListViewManager_o *this,
        int32_t campaignEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_int__object__o *eventCombineCampaignDictionary; // x0
  __int64 v26; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Int32_array *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Func_int__bool__o *v39; // x21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19DF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&campaignEventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v15, v16);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__,
      v19,
      v20);
    sub_1BCA7E0(&CombineServantListViewManager___c__DisplayClass228_0_TypeInfo, v21, v22);
    byte_4B19DF7 = 1;
  }
  value = 0LL;
  v23 = sub_1BCAA2C(
          CombineServantListViewManager___c__DisplayClass228_0_TypeInfo,
          *(_QWORD *)&campaignEventId,
          *(_QWORD *)&svtId,
          method);
  CombineServantListViewManager___c__DisplayClass228_0___ctor(
    (CombineServantListViewManager___c__DisplayClass228_0_o *)v23,
    0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.eventCombineCampaignDictionary, 0LL) )
    return 0;
  eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventCombineCampaignDictionary;
  if ( !eventCombineCampaignDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          eventCombineCampaignDictionary,
          campaignEventId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__int____TryGetValue__) )
    return 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0LL)
    && !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)value,
          svtId,
          (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
    eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( eventCombineCampaignDictionary )
    {
      eventCombineCampaignDictionary = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventCombineCampaignDictionary,
                                                                                                 svtId,
                                                                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v23 )
      {
        *(_QWORD *)(v23 + 16) = eventCombineCampaignDictionary;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v23 + 16),
          (int64_t)eventCombineCampaignDictionary,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v35 = (System_Int32_array *)value;
        v39 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v36, v37, v38);
        System_Func_int__bool____ctor(
          v39,
          (Il2CppObject *)v23,
          Method_CombineServantListViewManager___c__DisplayClass228_0__IsLargeSuccessCampaignClassId_b__0__,
          0LL);
        return BasicHelper__Any_int__49273364(
                 v35,
                 (System_Func_T__bool__o *)v39,
                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
      }
    }
LABEL_16:
    sub_1BCAA3C(eventCombineCampaignDictionary, v24);
  }
  return 1;
}


bool __fastcall CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_long__o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_object__o *v59; // x20
  int64_t Item; // x0
  int64_t v61; // x1
  int32_t size; // w23
  int32_t v63; // w22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  int v76; // w21
  System_Collections_Generic_List_int__o *v77; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_Dictionary_int__int__o *v81; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x25
  int32_t v83; // w26
  int64_t v84; // x27
  int32_t v85; // w28
  int32_t i; // w29
  int32_t v87; // w1
  unsigned int v88; // w29
  __int64 v89; // x26
  __int64 v90; // x27
  __int64 v91; // x28
  __int64 v92; // x26
  __int64 v93; // x27
  struct System_Int32_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  int v97; // w27
  int32_t v98; // w24
  int32_t v99; // w25
  int v100; // w29
  int32_t j; // w26
  int64_t v103; // [xsp+0h] [xbp-80h]
  UserServantMaster_o *v104; // [xsp+8h] [xbp-78h]
  int v106; // [xsp+1Ch] [xbp-64h]
  char v107; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4B19DD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList, equipLastSvtList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v43, v44);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48);
    byte_4B19DD7 = 1;
  }
  v49 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectMaterialItemList,
                                                     equipLastSvtList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)equipLastSvtList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewItem__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_70;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)selectMaterialItemList,
                        v63,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
      if ( !Item )
        break;
      v61 = Item;
      if ( *(_BYTE *)(Item + 350) || *(_BYTE *)(Item + 351) )
      {
        if ( !v59 )
          break;
        items = v59->fields._items;
        v71 = Method_System_Collections_Generic_List_CombineServantListViewItem__Add__;
        ++v59->fields._version;
        if ( !items )
          break;
        v72 = v59->fields._size;
        if ( (unsigned int)v72 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v59,
            (Il2CppObject *)Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &items->obj.klass + v72;
          v59->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v61;
          sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), v61, v64, v65, v66, v67, v68, v69);
        }
      }
      if ( size == ++v63 )
        goto LABEL_15;
    }
LABEL_70:
    sub_1BCAA3C(Item, v61);
  }
LABEL_15:
  if ( !v59 )
    goto LABEL_70;
  if ( v59->fields._size )
  {
    Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)Item,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Item )
      goto LABEL_70;
    v104 = (UserServantMaster_o *)Item;
    Item = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_70;
    v103 = Item;
    v106 = *(_DWORD *)(Item + 24);
    v76 = v59->fields._size;
    v77 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v61,
                                                      v74,
                                                      v75);
    System_Collections_Generic_List_int____ctor(
      v77,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v81 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v78,
                                                                 v79,
                                                                 v80);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v81,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_70;
    Item = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)Item,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
    if ( v76 >= 1 )
    {
      v83 = 0;
      do
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v59,
                          v83,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item || !v81 )
          goto LABEL_70;
        v84 = Item;
        Item = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v81,
                 *(_DWORD *)(Item + 144),
                 (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (Item & 1) == 0 )
        {
          v85 = 0;
          for ( i = 0; i != v76; ++i )
          {
            Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v59,
                              i,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_70;
            v87 = *(_DWORD *)(v84 + 144);
            if ( v87 == *(_DWORD *)(Item + 144) )
              ++v85;
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v81,
            v87,
            v85,
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( ++v83 != v76 );
    }
    if ( v106 >= 1 )
    {
      v88 = 0;
      do
      {
        if ( v88 >= *(_DWORD *)(v103 + 24) )
          sub_1BCAA44(Item, v61);
        v89 = *(_QWORD *)(v103 + 8LL * (int)v88 + 32);
        if ( !v89 )
          goto LABEL_70;
        v91 = *(_QWORD *)(v89 + 80);
        v90 = *(_QWORD *)(v89 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
        *(_QWORD *)&v108.fields.currentCryptoKey = v91;
        *(_QWORD *)&v108.fields.fakeValue = v90;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v108, 0LL);
        if ( !v82 )
          goto LABEL_70;
        Item = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v82,
                          Item,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Item )
          goto LABEL_70;
        Item = ServantEntity__get_IsServant((ServantEntity_o *)Item, 0LL);
        if ( (Item & 1) != 0 )
        {
          Item = UserServantEntity__IsEventJoin((UserServantEntity_o *)v89, 0LL);
          if ( (Item & 1) == 0 )
          {
            v93 = *(_QWORD *)(v89 + 80);
            v92 = *(_QWORD *)(v89 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
            *(_QWORD *)&v109.fields.currentCryptoKey = v93;
            *(_QWORD *)&v109.fields.fakeValue = v92;
            Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v109, 0LL);
            if ( !v77 )
              goto LABEL_70;
            v94 = v77->fields._items;
            v95 = Method_System_Collections_Generic_List_int__Add__;
            ++v77->fields._version;
            if ( !v94 )
              goto LABEL_70;
            v96 = v77->fields._size;
            v61 = (unsigned int)Item;
            if ( (unsigned int)v96 >= v94->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v77,
                Item,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
            }
            else
            {
              v77->fields._size = v96 + 1;
              v94->m_Items[v96 + 1] = Item;
            }
          }
        }
      }
      while ( v106 != ++v88 );
    }
    if ( !v77 )
      goto LABEL_70;
    if ( v76 >= 1 )
    {
      v107 = 0;
      v97 = v77->fields._size;
      v98 = 0;
      while ( 1 )
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v59,
                          v98,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_70;
        v99 = *(_DWORD *)(Item + 144);
        if ( v97 < 1 )
        {
          v100 = 0;
          if ( !v81 )
            goto LABEL_70;
        }
        else
        {
          v100 = 0;
          for ( j = 0; j != v97; ++j )
          {
            Item = System_Collections_Generic_List_int___get_Item(
                     v77,
                     j,
                     (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v99 == (_DWORD)Item )
              ++v100;
          }
          if ( !v81 )
            goto LABEL_70;
        }
        if ( v100 == System_Collections_Generic_Dictionary_int__int___get_Item(
                       v81,
                       v99,
                       (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
        {
          Item = (int64_t)UserServantMaster__getSvtAllUserIdList(v104, v99, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_70;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Item,
            (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
          v107 = 1;
        }
        if ( ++v98 == v76 )
          return v107 & 1;
      }
    }
  }
  v107 = 0;
  return v107 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsSelectEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        bool isDrag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t itemType; // w8
  int32_t rarity; // w8
  System_Collections_Generic_List_long__o *v30; // x23
  __int64 v31; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v42; // x0
  int v43; // w23
  const MethodInfo *v44; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-90h] BYREF
  __int64 tdMaxLv; // [xsp+38h] [xbp-78h] BYREF
  int32_t tmpTargetLv; // [xsp+40h] [xbp-70h] BYREF
  bool isMaxLvSelected; // [xsp+44h] [xbp-6Ch] BYREF
  bool isSecondAtkMax; // [xsp+48h] [xbp-68h] BYREF
  bool isSecondHpMax; // [xsp+4Ch] [xbp-64h] BYREF
  bool isAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkUpMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpUpMax; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4B19DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, item, *(_QWORD *)&addSum);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v25, v26);
    byte_4B19DE2 = 1;
  }
  isHpUpMax = 0;
  isAtkUpMax = 0;
  isHpMax = 0;
  isAtkMax = 0;
  isSecondHpMax = 0;
  isSecondAtkMax = 0;
  isMaxLvSelected = 0;
  tmpTargetLv = 0;
  tdMaxLv = 0LL;
  memset(&v46, 0, sizeof(v46));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v30 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         item,
                                                         *(_QWORD *)&addSum,
                                                         *(_QWORD *)&addServantSum);
      System_Collections_Generic_List_long____ctor(
        v30,
        (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_49;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v33 )
          break;
        current = (CombineServantListViewItem_o *)v46.fields._current;
        if ( !v46.fields._current )
          goto LABEL_46;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v46.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BCACFC(v46.fields._current);
LABEL_46:
          sub_1BCAA3C(v33, v34);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v46.fields._current, 0LL)
          || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, 0LL);
          if ( !v30 )
            sub_1BCAA3C(UserSvtId, UserSvtId);
          items = v30->fields._items;
          v39 = Method_System_Collections_Generic_List_long__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1BCAA3C(UserSvtId, UserSvtId);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v30,
              UserSvtId,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = size + 1;
            items->m_Items[size] = UserSvtId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v30
        || (baseUsrSvtData = this->fields.baseUsrSvtData,
            v42 = System_Collections_Generic_List_long___ToArray(
                    v30,
                    (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__),
            itemList = (struct System_Collections_Generic_List_ListViewItem__o *)NpCombineControl__GetNpLv(
                                                                                   baseUsrSvtData,
                                                                                   v42,
                                                                                   &tmpTargetLv,
                                                                                   0LL),
            !this->fields.baseUsrSvtData) )
      {
LABEL_49:
        sub_1BCAA3C(itemList, v31);
      }
      v43 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_40943792(
        this->fields.baseUsrSvtData,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      if ( (int)tdMaxLv <= v43 )
        return 0;
    }
    else if ( itemType == 1 )
    {
      CombineServantListViewManager__checkDragMax(
        this,
        &isHpUpMax,
        &isAtkUpMax,
        &isHpMax,
        &isAtkMax,
        &isSecondHpMax,
        &isSecondAtkMax,
        &isMaxLvSelected,
        v44);
      if ( item->fields.isStatusUpSvt )
      {
        rarity = item->fields.rarity;
        if ( rarity == 4 )
        {
          if ( item->fields.hpBase >= 1 && (!isHpUpMax || isSecondHpMax)
            || item->fields.atkBase >= 1 && (!isAtkUpMax || isSecondAtkMax) )
          {
            return 0;
          }
        }
        else if ( rarity <= 3 && (item->fields.hpBase >= 1 && isHpMax || item->fields.atkBase >= 1 && isAtkMax) )
        {
          return 0;
        }
      }
      else if ( isMaxLvSelected )
      {
        return 0;
      }
    }
  }
  if ( this->fields.itemType != 1
    || !CombineServantListViewItem__get_IsOrganization(item, 0LL)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
}


bool __fastcall CombineServantListViewManager__IsSelectTransformServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__HasTransform(SelectBaseSvtData, 0LL);
  return (char)SelectBaseSvtData;
}


void __fastcall CombineServantListViewManager__ModifyItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v32; // x1
  __int128 v33; // q0
  int64_t v34; // x0
  Il2CppObject v35; // q0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UnityEngine_Object_o *monitor; // x22
  __int64 v47; // x1
  void *v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B19DCA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, usrSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B19DCA = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_39:
      sub_1BCAA3C(Instance, v23);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v52.fields._list = *(_OWORD *)&v51.fields.currentCryptoKey;
  v52.fields._current = (Il2CppObject *)v51.fields.fakeValue;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v27 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      goto LABEL_33;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v52.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v52.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BCACFC(v52.fields._current);
LABEL_33:
      if ( !Entity )
        sub_1BCAA3C(v27, v28);
      sub_1BCAA3C(v27, v28);
    }
    if ( Entity )
    {
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v52.fields._current,
                        0LL);
      if ( !UserSvtEntity )
        sub_1BCAA3C(0LL, v32);
      v33 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v51.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
      v50 = v51;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
      v35 = Entity[2];
      *(Il2CppObject *)&v49.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v49.fields.fakeValue = v35;
      if ( v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL) )
      {
        current[7].monitor = Entity;
        sub_1BCA784((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v36, v37, v38, v39, v40, v41);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, 0LL);
          klass = (int)current[7].klass;
        }
        if ( (unsigned int)(klass - 11) < 2 )
          CombineServantListViewItem__SetAppendSkillInfo((CombineServantListViewItem_o *)current, 0LL);
      }
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
    if ( !SelfUserGame )
      sub_1BCAA3C(UserSvtId, v44);
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      0LL);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v48 = current[6].monitor;
      if ( !v48 )
        sub_1BCAA3C(0LL, v47);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v48 + 392LL))(
        v48,
        current,
        *(_QWORD *)(*(_QWORD *)v48 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x22
  int64_t sort; // x0
  UserServantEntity_o *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v67; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  unsigned int v76; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x23
  int monitor; // w8
  __int64 v87; // x20
  int64_t v88; // x24
  __int128 v89; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v91; // q0
  int64_t v92; // x25
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Object_array *items; // x8
  _QWORD *v100; // x9
  __int64 size; // x10
  Il2CppClass **v102; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v104; // x25
  int v105; // w27
  unsigned int v106; // w26
  __int64 v107; // x8
  __int128 v108; // q0
  int64_t v109; // x23
  int32_t v110; // w24
  CombineServantListViewItem_o *v111; // x22
  __int64 methodPtr_low; // x9
  __int128 v113; // q0
  __int128 v114; // q0
  int64_t v115; // x0
  const MethodInfo *v116; // x5
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Collections_Generic_List_object__o *v120; // x23
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  System_Collections_Generic_List_object__o *v124; // x24
  int32_t v125; // w21
  __int128 v126; // q0
  struct UserServantEntity_o *v127; // x8
  __int128 v128; // q0
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  System_Predicate_object__o **v130; // x25
  unsigned int v131; // w29
  int64_t v132; // x26
  __int128 v133; // q0
  int64_t v134; // x27
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  System_Predicate_object__o *v148; // x26
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int v155; // w8
  struct System_Collections_Generic_List_long__o *v156; // x9
  CombineServantListViewManager_o *v157; // x0
  const MethodInfo *v158; // x1
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+110h] [xbp-80h]

  if ( (byte_4B19DD2 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, isIconSizeChange, method);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v38, v39);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Predicate_UserServantEntity__TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__, v46, v47);
    sub_1BCA7E0(&CombineServantListViewManager___c__DisplayClass172_0_TypeInfo, v48, v49);
    byte_4B19DD2 = 1;
  }
  v50 = sub_1BCAA2C(CombineServantListViewManager___c__DisplayClass172_0_TypeInfo, isIconSizeChange, method, v3);
  CombineServantListViewManager___c__DisplayClass172_0___ctor(
    (CombineServantListViewManager___c__DisplayClass172_0_o *)v50,
    0LL);
  if ( !v50 )
    goto LABEL_113;
  *(_QWORD *)(v50 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 16), (int64_t)this, v53, v54, v55, v56, v57, v58);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v52);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v65 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v65 )
    goto LABEL_113;
  currentType = this->fields.currentType;
  if ( (unsigned int)currentType >= *(_DWORD *)(v65 + 24) )
    goto LABEL_63;
  v67 = *(struct ListViewSort_o **)(v65 + 8 * currentType + 32);
  this->fields.sort = v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v67, v59, v60, v61, v62, v63, v64);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  isIconSizeChangea = isIconSizeChange;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)sort,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantMaster,
    (int64_t)MasterData_object,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = this->fields.currentType;
  if ( v76 > 0xC )
    goto LABEL_113;
  if ( ((1 << v76) & 0x1FDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v78,
                                                         v79,
                                                         v80);
    System_Collections_Generic_List_object____ctor_56235344(
      v81,
      OrganizationList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
    v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                         v82,
                                                         v83,
                                                         v84);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_113;
    if ( !OrganizationList[1].monitor )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v87 = 0LL;
        while ( (unsigned int)v87 < monitor )
        {
          v88 = *((_QWORD *)&OrganizationList[2].klass + v87);
          if ( !v88 )
            goto LABEL_113;
          v89 = *(_OWORD *)(v88 + 32);
          *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(v88 + 16);
          *(_OWORD *)&v169.fields.fakeValue = v89;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
          v168 = v169;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v168, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_113;
          v91 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v92 = sort;
          *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v167.fields.fakeValue = v91;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v167, 0LL);
          if ( v92 == sort )
          {
            if ( !v85 )
              goto LABEL_113;
            items = v85->fields._items;
            v100 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v85->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v85->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v85,
                (Il2CppObject *)v88,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
            }
            else
            {
              v102 = &items->obj.klass + size;
              v85->fields._size = size + 1;
              v102[4] = (Il2CppClass *)v88;
              sub_1BCA784((PartyOrganizationUtility_o *)(v102 + 4), v88, v93, v94, v95, v96, v97, v98);
            }
            if ( !v81 )
              goto LABEL_113;
            sort = System_Collections_Generic_List_object___Remove(
                     v81,
                     (Il2CppObject *)v88,
                     (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v87 >= monitor )
            goto LABEL_35;
        }
        goto LABEL_63;
      }
LABEL_35:
      if ( !v85 )
        goto LABEL_113;
      System_Collections_Generic_List_object___AddRange(
        v85,
        (System_Collections_Generic_IEnumerable_T__o *)v81,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                        v85,
                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
LABEL_37:
      if ( !OrganizationList )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v76 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_113;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v120 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                            v117,
                                                            v118,
                                                            v119);
      System_Collections_Generic_List_object____ctor_56235344(
        v120,
        OrganizationList,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
      v124 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                            v121,
                                                            v122,
                                                            v123);
      System_Collections_Generic_List_object____ctor(
        v124,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v120 )
          goto LABEL_113;
        if ( v120->fields._size >= 1 )
        {
          v125 = 0;
          do
          {
            sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v120,
                              v125,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !sort )
              goto LABEL_113;
            v126 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v169.fields.fakeValue = v126;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
            v166 = v169;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v166, 0LL);
            v127 = this->fields.baseUsrSvtData;
            if ( !v127 )
              goto LABEL_113;
            v128 = *(_OWORD *)&v127->fields.id.fields.fakeValue;
            *(_OWORD *)&v165.fields.currentCryptoKey = *(_OWORD *)&v127->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v165.fields.fakeValue = v128;
            if ( sort == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v165, 0LL) )
              System_Collections_Generic_List_object___RemoveAt(
                v120,
                v125,
                (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            ++v125;
          }
          while ( v125 < v120->fields._size );
        }
        sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v120,
                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        *(_DWORD *)(v50 + 24) = 0;
        v130 = (System_Predicate_object__o **)(v50 + 32);
        while ( 1 )
        {
          if ( !v120 )
            goto LABEL_113;
          if ( v120->fields._size >= 1 )
            break;
LABEL_101:
          v155 = *(_DWORD *)(v50 + 24) + 1;
          *(_DWORD *)(v50 + 24) = v155;
          v156 = this->fields.selectedMaterialUserServantIdList;
          if ( !v156 )
            goto LABEL_113;
          if ( v155 >= v156->fields._size )
          {
            if ( !v124 )
              goto LABEL_113;
            System_Collections_Generic_List_object___AddRange(
              v124,
              (System_Collections_Generic_IEnumerable_T__o *)v120,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
            sort = (int64_t)System_Collections_Generic_List_object___ToArray(
                              v124,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
            if ( !sort )
              goto LABEL_113;
            goto LABEL_109;
          }
        }
        v131 = 0;
        while ( 1 )
        {
          if ( !OrganizationList )
            goto LABEL_113;
          if ( v131 >= LODWORD(OrganizationList[1].monitor) )
            break;
          sort = (int64_t)this->fields.selectedMaterialUserServantIdList;
          if ( !sort )
            goto LABEL_113;
          v132 = *((_QWORD *)&OrganizationList[2].klass + (int)v131);
          sort = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)sort,
                   *(_DWORD *)(v50 + 24),
                   (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
          if ( !v132 )
            goto LABEL_113;
          v133 = *(_OWORD *)(v132 + 32);
          v134 = sort;
          *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(v132 + 16);
          *(_OWORD *)&v169.fields.fakeValue = v133;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
          v164 = v169;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v164, 0LL);
          if ( v134 == sort )
          {
            if ( !v124 )
              goto LABEL_113;
            v141 = v124->fields._items;
            v142 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v124->fields._version;
            if ( !v141 )
              goto LABEL_113;
            v143 = v124->fields._size;
            if ( (unsigned int)v143 >= v141->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v124,
                (Il2CppObject *)v132,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
            }
            else
            {
              v144 = &v141->obj.klass + v143;
              v124->fields._size = v143 + 1;
              v144[4] = (Il2CppClass *)v132;
              sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 4), v132, v135, v136, v137, v138, v139, v140);
            }
            v148 = *v130;
            if ( !*v130 )
            {
              v148 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                     System_Predicate_UserServantEntity__TypeInfo,
                                                     v145,
                                                     v146,
                                                     v147);
              System_Predicate_object____ctor(
                v148,
                (Il2CppObject *)v50,
                Method_CombineServantListViewManager___c__DisplayClass172_0__ModifyList_b__0__,
                0LL);
              *(_QWORD *)(v50 + 32) = v148;
              sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)v148, v149, v150, v151, v152, v153, v154);
            }
            sort = System_Collections_Generic_List_object___RemoveAll(
                     v120,
                     (System_Predicate_T__o *)v148,
                     (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
          }
          if ( (signed int)++v131 >= v120->fields._size )
            goto LABEL_101;
        }
LABEL_63:
        sub_1BCAA44(sort, v52);
      }
      goto LABEL_37;
    }
    v52 = this->fields.baseUsrSvtData;
    if ( !v52 )
      goto LABEL_113;
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_113;
    sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v52, 0LL);
    if ( !sort )
      goto LABEL_113;
LABEL_109:
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
    if ( !*(_QWORD *)(sort + 24) )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_113;
  v104 = OrganizationList[1].monitor;
  if ( (int)v104 >= 1 )
  {
    v105 = itemList->fields._size;
    v106 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v107 = *((_QWORD *)&OrganizationList[2].klass + (int)v106);
      if ( !v107 )
        goto LABEL_113;
      v108 = *(_OWORD *)(v107 + 32);
      *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(v107 + 16);
      *(_OWORD *)&v169.fields.fakeValue = v108;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
      v163 = v169;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v163, 0LL);
      if ( v105 >= 1 )
        break;
LABEL_61:
      if ( ++v106 == (_DWORD)v104 )
        return;
      if ( v106 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_63;
    }
    v109 = sort;
    v110 = 0;
    while ( 1 )
    {
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_113;
      sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)sort,
                        v110,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !sort )
        goto LABEL_113;
      v111 = (CombineServantListViewItem_o *)sort;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low
        || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)sort, 0LL);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v111, 0LL);
        if ( !sort )
          goto LABEL_113;
        v113 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v169.fields.fakeValue = v113;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
        v162 = v169;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v162, 0LL);
        if ( sort == v109 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v111, 0LL);
          if ( sort )
          {
            v114 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v169.fields.fakeValue = v114;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
            v161 = v169;
            v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v161, 0LL);
            CombineServantListViewManager__ModifyLockItem_46098488(this, v111, v115, 1, isIconSizeChangeb, v116);
            goto LABEL_61;
          }
LABEL_113:
          sub_1BCAA3C(sort, v52);
        }
      }
      if ( v105 == ++v110 )
        goto LABEL_61;
    }
    sub_1BCACFC(sort);
    CombineServantListViewManager__OnClickDecide(v157, v158);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x21
  bool v30; // w24
  int64_t v31; // x0
  CombineServantListViewItem_c *v32; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v36; // x1
  __int128 v37; // q0
  int64_t v38; // x0
  Il2CppObject v39; // q0
  int64_t v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Object_o *monitor; // x23
  __int64 v48; // x1
  void *v49; // x0
  __int64 v50; // x1
  ListViewObject_o *v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B19DCB & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, usrSvtId, isInit);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B19DCB = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_1BCAA3C(Instance, v27);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               usrSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v55.fields._list = *(_OWORD *)&v54.fields.currentCryptoKey;
  v55.fields._current = (Il2CppObject *)v54.fields.fakeValue;
  v30 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v31 & 1) == 0 )
      break;
    current = v55.fields._current;
    if ( v55.fields._current )
    {
      v32 = CombineServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v55.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)v55.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(v55.fields._current);
LABEL_36:
        sub_1BCAA3C(v31, v32);
      }
      if ( Entity )
      {
        UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                          (CombineServantListViewItem_o *)v55.fields._current,
                          0LL);
        if ( !UserSvtEntity )
          sub_1BCAA3C(0LL, v36);
        v37 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v54.fields.fakeValue = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
        v53 = v54;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v53, 0LL);
        v39 = Entity[2];
        v40 = v38;
        *(Il2CppObject *)&v52.fields.currentCryptoKey = Entity[1];
        *(Il2CppObject *)&v52.fields.fakeValue = v39;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v52, 0LL);
        if ( v40 == v31 )
        {
          current[7].monitor = Entity;
          sub_1BCA784((PartyOrganizationUtility_o *)&current[7].monitor, (int64_t)Entity, v41, v42, v43, v44, v45, v46);
        }
      }
    }
    else if ( Entity )
    {
      sub_1BCAA3C(v31, v32);
    }
    if ( v30 )
    {
      if ( !current )
        sub_1BCAA3C(v31, v32);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, 0LL);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, 0LL);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, 0LL);
    }
    else if ( !current )
    {
      goto LABEL_36;
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v49 = current[6].monitor;
      if ( !v49 )
        sub_1BCAA3C(0LL, v48);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v49 + 392LL))(
        v49,
        current,
        *(_QWORD *)(*(_QWORD *)v49 + 400LL));
      if ( isIconSizeChange )
      {
        v51 = (ListViewObject_o *)current[6].monitor;
        if ( !v51 )
          sub_1BCAA3C(0LL, v50);
        ListViewObject__SetItemSeed(v51, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_46098488(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  CombineServantListViewManager_o *v19; // x23
  __int128 v20; // q1
  int64_t v21; // x0
  __int128 v22; // q1
  CombineServantListViewManager_o *v23; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B19DCC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem, usrSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v17,
                                                v18);
    byte_4B19DCC = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (CombineServantListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_26;
      v19 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(servantItem, 0LL);
      if ( !this )
        goto LABEL_26;
      v20 = *(_OWORD *)&this->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v33.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v33.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, servantItem);
      v32 = v33;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v32, 0LL);
      v22 = *(_OWORD *)&v19->fields.dropObjectList;
      v23 = (CombineServantListViewManager_o *)v21;
      *(UnityEngine_MonoBehaviour_Fields *)&v31.fields.currentCryptoKey = v19->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v31.fields.fakeValue = v22;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v31,
                                                  0LL);
      if ( v23 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v19;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&servantItem->fields.userSvtEntity,
          (int64_t)v19,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !servantItem )
      goto LABEL_26;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_26;
    CombineServantListViewItem__ModifyLockItem(servantItem, 0LL);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, 0LL);
    CombineServantListViewItem__ModifyPushItem(servantItem, 0LL);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantItem);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(CombineServantListViewManager_o *, CombineServantListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, servantItem);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B19DE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B19DE8 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CombineServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_1BCAA3C(sort, v6);
    }
    CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__OnClickChangeExpInfo(
        CombineServantListViewManager_o *this,
        int32_t dispKind,
        int32_t dispType,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(this, *(_QWORD *)&dispKind);
  sort->fields.expUpDispKind = dispKind;
  sort->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  CombineServantListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B19DF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickChoiceTab__, v4, v5);
    sub_1BCA7E0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B19DF3 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_CombineServantListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickChoiceTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                     CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                     v10,
                                                                     v11,
                                                                     v12);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v11);
      CombineServantListViewManager__ReleaseAll(this, v15);
      CombineServantListViewManager__ModifyList(this, 0, v16);
      CombineServantListViewManager__SetMode_46099192(this, 2, v17);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  CombineServantListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B19DF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickCollectLock__, v4, v5);
    sub_1BCA7E0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B19DF2 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_CombineServantListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickCollectLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                     CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                     v10,
                                                                     v11,
                                                                     v12);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v11);
      CombineServantListViewManager__ReleaseAll(this, v15);
      CombineServantListViewManager__ModifyList(this, 0, v16);
      CombineServantListViewManager__SetMode_46099192(this, 2, v17);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickDecide(
        CombineServantListViewManager_o *this,
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
  _QWORD *v18; // x0
  _BOOL4 isDecideFlg; // w20
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_long__o *v26; // x20
  struct CombineRootComponent_o *v27; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v29; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v31; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct CombineRootComponent_o *v34; // x8
  UnityEngine_Object_o *v35; // x20
  struct CombineRootComponent_o *v36; // x8
  struct CombineRootComponent_o *v37; // x8
  CheckMaterialSvtEquippedDialog_o *v38; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v39; // x0
  System_Collections_Generic_List_long__o *v40; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_int__o *v45; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19DD3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_CombineServantListViewManager__OnClickDecide_b__173_0__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_long___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_long___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B19DD3 = 1;
  }
  v18 = Method_CombineServantListViewManager_OnClickDecide__;
  isDecideFlg = this->fields.isDecideFlg;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickDecide__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  if ( isDecideFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_28;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    v26 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
    System_Collections_Generic_List_long____ctor(
      v26,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v26;
    if ( this->fields.currentType == 1 )
    {
      v27 = this->fields.combineRootComponent;
      if ( !v27 )
        goto LABEL_28;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v27->fields.checkMaterialSvtEquipped;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(
                                                         checkMaterialSvtEquipped,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v29 = this->fields.combineRootComponent;
        if ( !v29 )
          goto LABEL_28;
        combineRootComponent = (CombineRootComponent_o *)v29->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_28;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v21);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v31);
      v33 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_2F300D0 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v33,
                                                         (const MethodInfo_2F4F5F0 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v34 = this->fields.combineRootComponent;
        if ( !v34 )
          goto LABEL_28;
        v35 = (UnityEngine_Object_o *)v34->fields.checkMaterialSvtEquipped;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v36 = this->fields.combineRootComponent;
          if ( v36 )
          {
            combineRootComponent = (CombineRootComponent_o *)v36->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v37 = this->fields.combineRootComponent;
              if ( v37 )
              {
                v38 = v37->fields.checkMaterialSvtEquipped;
                v39 = CombineServantListViewManager__GetSelectMaterialItemList(this, v21);
                v40 = equipLastSvtList;
                v41 = v39;
                v45 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v42, v43, v44);
                System_Action_int____ctor(
                  v45,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__173_0__,
                  0LL);
                if ( v38 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v38, v41, v40, v45, 0LL);
                  return;
                }
              }
            }
          }
LABEL_28:
          sub_1BCAA3C(combineRootComponent, v21);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v21);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilter2Kind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t itemType; // w21
  int32_t filter2Kind; // w20
  __int64 v13; // x10
  int32_t v14; // w9

  if ( (byte_4B19DE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickFilter2Kind__, method, v2);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v4, v5);
    byte_4B19DE9 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_CombineServantListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickFilter2Kind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      itemType = this->fields.itemType;
      filter2Kind = sort->fields.filter2Kind;
      noticeTween = (CombineServantListViewNoticeTween_o *)CombineServantListViewManager_TypeInfo;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v9);
        noticeTween = (CombineServantListViewNoticeTween_o *)CombineServantListViewManager_TypeInfo;
        sort = this->fields.sort;
      }
      if ( itemType == 2 )
      {
        if ( !sort )
          goto LABEL_21;
        v13 = 8LL;
      }
      else
      {
        if ( !sort )
          goto LABEL_21;
        v13 = 4LL;
      }
      if ( filter2Kind + 1 <= *(_DWORD *)(*(_QWORD *)&noticeTween[3].fields.isTween + v13) )
        v14 = filter2Kind + 1;
      else
        v14 = 0;
      sort->fields.filter2Kind = v14;
      noticeTween = this->fields.noticeTween;
      if ( noticeTween )
      {
        CombineServantListViewNoticeTween__Clear(noticeTween, 0LL);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        noticeTween = this->fields.noticeTween;
        if ( noticeTween )
        {
          CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(noticeTween, v9);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 itemType; // x8
  int32_t v13; // w20
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B19DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19DE5 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CombineServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    itemType = this->fields.itemType;
    v13 = 0;
    if ( (unsigned int)itemType <= 0xC )
      v13 = dword_C0E1FC[itemType];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v20 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_1BCAA3C(v21, v22);
    CommonUI__OpenServantFilterSelectMenu(v16, v13, sort, v20, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickListView(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager__OnClickLockModeItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  _QWORD *v11; // x8
  CombineServantListViewItem_o *v12; // x20
  System_Reflection_MethodBase_o *v13; // x0
  __int128 v14; // q1
  int64_t v15; // x0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  CombineServantListViewManager_o *v18; // x0
  CombineServantListViewItem_o *v19; // x1
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B19DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickLockModeItem__, obj, method);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v5, v6);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                v7,
                                                v8);
    byte_4B19DE1 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    CombineServantListViewManager__IsDragEnable(v18, v19, v20);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  v11 = Method_CombineServantListViewManager_OnClickLockModeItem__;
  v12 = Item;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickLockModeItem__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 11, 0LL);
  if ( !v12
    || (CombineServantListViewItem__SwapLock(v12, 0LL),
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(v12, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(this, obj);
  }
  v14 = *(_OWORD *)&this->fields.dropObjectList;
  *(UnityEngine_MonoBehaviour_Fields *)&v22.fields.currentCryptoKey = this->fields.UnityEngine_MonoBehaviour_Fields;
  *(_OWORD *)&v22.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
  v21 = v22;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v15, 0, 0, v16);
  CombineServantListViewManager__SetMode_46099192(v4, 3, v17);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CombineServantListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B19DF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickNormalStatus__, v4, v5);
    sub_1BCA7E0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B19DF1 = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_CombineServantListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickNormalStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                   CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v13, v14);
  }
}


void __fastcall CombineServantListViewManager__OnClickPush(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  CombineServantListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B19DF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickPush__, v4, v5);
    sub_1BCA7E0(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B19DF4 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_CombineServantListViewManager_OnClickPush__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickPush__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickPush__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                     CombineServantListViewManager_RequestCallbackFunc_TypeInfo,
                                                                     v10,
                                                                     v11,
                                                                     v12);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v11);
      CombineServantListViewManager__ReleaseAll(this, v15);
      CombineServantListViewManager__ModifyList(this, 0, v16);
      CombineServantListViewManager__SetMode_46099192(this, 2, v17);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B19DDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickReleaseAll__, method, v2);
    byte_4B19DDA = 1;
  }
  v4 = Method_CombineServantListViewManager_OnClickReleaseAll__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  CombineServantListViewManager__ReleaseAll(this, v6);
}


void __fastcall CombineServantListViewManager__OnClickScaleChange(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  int32_t v14; // w8
  __int64 v15; // x10
  bool v16; // cf
  __int64 v17; // x8
  int32_t currentType; // w8
  int32_t v19; // w8
  struct ListViewItemSeed_o *v20; // x1
  ListViewSort_o *sort; // x0
  int32_t v22; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2

  if ( (byte_4B19DF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickScaleChange__, method, v2);
    byte_4B19DF6 = 1;
  }
  v4 = Method_CombineServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v15 = 824LL;
    this->fields.scaleType = 2;
    v16 = (unsigned int)(currentType - 11) >= 2;
    v17 = 848LL;
  }
  else if ( scaleType == 2 )
  {
    v19 = this->fields.currentType;
    v15 = 832LL;
    this->fields.scaleType = 3;
    v16 = (unsigned int)(v19 - 11) >= 2;
    v17 = 856LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v14 = this->fields.currentType;
    v15 = 816LL;
    this->fields.scaleType = 1;
    v16 = (unsigned int)(v14 - 11) >= 2;
    v17 = 840LL;
  }
  if ( v16 )
    v17 = v15;
  v20 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v17);
  this->fields.seed = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)v20, v7, v8, v9, v10, v11, v12);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  v22 = this->fields.scaleType;
  sort->fields.iconScaleKind = v22;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v22, 0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v24),
        CombineServantListViewManager__SetMode_46099192(this, 2, v25),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(sort, v6);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 methodPtr_low; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v13; // x21
  __int128 v14; // q1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v24; // w9
  bool CanNotBaseSelect; // w0
  _QWORD *v26; // x8
  bool v27; // w22
  System_Reflection_MethodBase_o *v28; // x0
  int32_t v29; // w1
  UserServantEntity_o *UserSvtEntity; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  CombineServantListViewManager_o *v37; // x0
  ListViewObject_o *v38; // x1
  const MethodInfo *v39; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4B19DDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickSelectBase__, obj, method);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v7, v8);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                v9,
                                                v10);
    byte_4B19DDD = 1;
  }
  if ( !obj )
    goto LABEL_37;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v37, v38, v39);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v13 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v14 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    v40 = v41;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                &v40,
                                                0LL);
    if ( !v13 )
      goto LABEL_37;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(v13, 0LL) )
    {
      v15 = Method_CombineServantListViewManager_OnClickSelectBase__;
      if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickSelectBase__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
      tempMaterialUserServantIdList = v4->fields.tempMaterialUserServantIdList;
      if ( tempMaterialUserServantIdList )
      {
        v24 = tempMaterialUserServantIdList->fields._version + 1;
        tempMaterialUserServantIdList->fields._size = 0;
        tempMaterialUserServantIdList->fields._version = v24;
        goto LABEL_22;
      }
LABEL_37:
      sub_1BCAA3C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_37;
  }
  CanNotBaseSelect = CombineServantListViewItem__get_IsCanNotBaseSelect(v13, 0LL);
  v26 = Method_CombineServantListViewManager_OnClickSelectBase__;
  v27 = CanNotBaseSelect;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickSelectBase__);
  v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
  if ( v27 )
    v29 = 2;
  else
    v29 = 0;
  OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0LL);
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(v13, 0LL);
  v4->fields.baseUsrSvtData = UserSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.baseUsrSvtData,
    (int64_t)UserSvtEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
LABEL_22:
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_37;
  switch ( HIDWORD(this->fields.spendQpInfoImg) )
  {
    case 3:
      CombineRootComponent__ShowSelectBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 5:
      CombineRootComponent__ShowSelectLimitUpBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 6:
      CombineRootComponent__ShowSelectLvExceedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 7:
      CombineRootComponent__BackServantList((CombineRootComponent_o *)this, 0LL);
      break;
    case 9:
      CombineRootComponent__ShowCommandCardEquipmentSelectedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xA:
      CombineRootComponent__SetSelectSvtSkill((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xB:
      CombineRootComponent__SetSelectSvtNp((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xC:
      CombineRootComponent__ShowSelectFriendshipExceedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xD:
      CombineRootComponent__SelectBaseServantInCommandCardExceed((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xE:
      CombineRootComponent__SetSelectSvtAppendSkill((CombineRootComponent_o *)this, 0LL);
      break;
    case 0x10:
      CombineRootComponent__SetSelectSvtAppendSkillExchange((CombineRootComponent_o *)this, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall CombineServantListViewManager__OnClickSelectMaterial(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 methodPtr_low; // x9
  ListViewItem_o *v26; // x20
  const MethodInfo *v27; // x5
  int32_t selectNum; // w21
  const MethodInfo *v29; // x3
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t klass; // w9
  const MethodInfo *v33; // x3
  __int64 v34; // x9
  __int64 v35; // x9
  __int64 v36; // x2
  __int64 v37; // x3
  CommonUI_o *v38; // x21
  CombineServantListViewManager___c_c *v39; // x8
  System_Action_o *_9__187_0; // x22
  Il2CppObject *v41; // x23
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x9
  __int64 v50; // x9
  int32_t selectSum; // w8
  const MethodInfo *v52; // x1
  void *v53; // x0
  int v54; // w1
  __int64 v55; // x20
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B19DDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__, v21, v22);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(&CombineServantListViewManager___c_TypeInfo, v23, v24);
    byte_4B19DDE = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !obj )
    goto LABEL_46;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_48;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  if ( !this )
    goto LABEL_46;
  v26 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v26->fields.selectNum;
    ListViewItem__set_IsSelect(v26, 0, 0LL);
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v26, v29);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v56,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v56,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v30 )
          break;
        if ( !v56.fields._current )
          sub_1BCAA3C(v30, v31);
        klass = (int32_t)v56.fields._current[1].klass;
        if ( klass > selectNum )
          LODWORD(v56.fields._current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v56,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_43;
    }
LABEL_46:
    sub_1BCAA3C(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v26, 0, 0, 0, v27) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_46;
  v34 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v34
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v34 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_48:
    sub_1BCACFC(this);
    if ( v54 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v56,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      sub_1CB5270();
    }
    v55 = *(_QWORD *)__cxa_begin_catch(v53);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v55 )
      sub_1BCAA34(v55);
    goto LABEL_43;
  }
  if ( HIDWORD(this->fields.resNextExpBar) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v35 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v35
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v35 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v38 = (CommonUI_o *)this;
    v39 = CombineServantListViewManager___c_TypeInfo;
    if ( !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo, obj);
      v39 = CombineServantListViewManager___c_TypeInfo;
    }
    _9__187_0 = v39->static_fields->__9__187_0;
    if ( !_9__187_0 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39, obj);
        v39 = CombineServantListViewManager___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v39->static_fields->__9;
      _9__187_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, v36, v37);
      System_Action___ctor(
        _9__187_0,
        v41,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__187_0__,
        0LL);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__187_0 = _9__187_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__187_0,
        (int64_t)_9__187_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    if ( !v38 )
      goto LABEL_46;
    CommonUI__CloseTutorialNotificationDialogArrow_30791892(v38, _9__187_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_46;
    v49 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v49
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v49 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( HIDWORD(this->fields.resNextExpBar) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_46;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_46;
      v50 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v50
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v50 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_41;
      }
      goto LABEL_48;
    }
  }
LABEL_41:
  selectSum = v4->fields.selectSum;
  v26->fields.selectNum = selectSum;
  v4->fields.selectSum = selectSum + 1;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v26, v33);
LABEL_43:
  CombineServantListViewManager__RefrashListDisp(v4, v52);
}


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x19
  int64_t SelfUserGame; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 methodPtr_low; // x9
  CombineServantListViewItem_o *Item; // x0
  CombineServantListViewItem_o **v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  const MethodInfo *v70; // x2
  int64_t v71; // x22
  __int128 v72; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v77; // x1
  Il2CppObject *v78; // x26
  __int64 v79; // x1
  Il2CppObject *Master_object; // x24
  System_String_o *v81; // x21
  System_String_o *v82; // x22
  System_Object_array *v83; // x23
  __int64 v84; // x1
  int32_t Rarity; // w27
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x27
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x26
  int32_t v100; // w0
  Il2CppClass *v101; // x8
  int32_t v102; // w25
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x25
  int32_t v110; // w0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x25
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x25
  int32_t v125; // w20
  int32_t v126; // w0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x20
  System_String_o *v134; // x20
  System_String_o *v135; // x22
  System_String_o *v136; // x23
  Il2CppObject *Instance; // x24
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  CommonConfirmDialog_ClickDelegate_o *v141; // x25
  __int64 v142; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_4B19DDF & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, obj, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickSelectPush__, v8, v9);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&object___TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31);
    sub_1BCA7E0(&Rarity_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__, v38, v39);
    sub_1BCA7E0(&CombineServantListViewManager___c__DisplayClass188_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v48, v49);
    byte_4B19DDF = 1;
  }
  v50 = sub_1BCAA2C(CombineServantListViewManager___c__DisplayClass188_0_TypeInfo, obj, method, v3);
  CombineServantListViewManager___c__DisplayClass188_0___ctor(
    (CombineServantListViewManager___c__DisplayClass188_0_o *)v50,
    0LL);
  if ( !v50 )
    goto LABEL_62;
  *(_QWORD *)(v50 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 16), (int64_t)this, v53, v54, v55, v56, v57, v58);
  if ( !obj )
    goto LABEL_62;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    goto LABEL_64;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v50 + 24) = Item;
  v61 = (CombineServantListViewItem_o **)(v50 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 24), (int64_t)Item, v62, v63, v64, v65, v66, v67);
  v68 = Method_CombineServantListViewManager_OnClickSelectPush__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSelectPush__ + 83) & 2) != 0 )
    v68 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickSelectPush__);
  v69 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v68, v68[4]);
  OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0LL);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v71 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v71 )
  {
LABEL_16:
    CombineServantListViewManager__PushRequest(this, *v61, v70);
    return;
  }
  SelfUserGame = (int64_t)*v61;
  if ( !*v61 )
    goto LABEL_62;
  SelfUserGame = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                            (CombineServantListViewItem_o *)SelfUserGame,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v72 = *(_OWORD *)(SelfUserGame + 32);
  *(_OWORD *)&v144.fields.currentCryptoKey = *(_OWORD *)(SelfUserGame + 16);
  *(_OWORD *)&v144.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
  v143 = v144;
  if ( v71 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v143, 0LL) )
    goto LABEL_16;
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_62;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_62;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             v71,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_62;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_62;
  v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
  *(_QWORD *)&v145.fields.currentCryptoKey = klass;
  *(_QWORD *)&v145.fields.fakeValue = monitor;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v145, 0LL);
  if ( !v74 )
    goto LABEL_62;
  v78 = DataMasterBase_object__object__int___GetEntity(
          v74,
          SelfUserGame,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v83 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v84);
  SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
  if ( !v83 )
LABEL_62:
    sub_1BCAA3C(SelfUserGame, v52);
  v92 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_65;
  }
  if ( !v83->max_length )
    goto LABEL_64;
  v83->m_Items[0] = (Il2CppObject *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)v83->m_Items, v92, v86, v87, v88, v89, v90, v91);
  if ( !v78 )
    goto LABEL_62;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v78, 0LL);
  v99 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_65;
  }
  if ( v83->max_length <= 1 )
    goto LABEL_64;
  v83->m_Items[1] = (Il2CppObject *)v99;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[1], v99, v93, v94, v95, v96, v97, v98);
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
           0LL);
  v101 = Entity[6].klass;
  *(_QWORD *)&v146.fields.fakeValue = Entity[6].monitor;
  v102 = v100;
  *(_QWORD *)&v146.fields.currentCryptoKey = v101;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v146, 0LL);
  if ( !Master_object )
    goto LABEL_62;
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v102,
                            SelfUserGame,
                            0LL);
  v109 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_65;
  }
  if ( v83->max_length <= 2 )
    goto LABEL_64;
  v83->m_Items[2] = (Il2CppObject *)v109;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[2], v109, v103, v104, v105, v106, v107, v108);
  SelfUserGame = (int64_t)*v61;
  if ( !*v61 )
    goto LABEL_62;
  SelfUserGame = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                            (CombineServantListViewItem_o *)SelfUserGame,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v110 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (int64_t)Rarity__getRarityType(v110, 0LL);
  v117 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_65;
  }
  if ( v83->max_length <= 3 )
    goto LABEL_64;
  v83->m_Items[3] = (Il2CppObject *)v117;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[3], v117, v111, v112, v113, v114, v115, v116);
  if ( !*v61 )
    goto LABEL_62;
  SelfUserGame = (int64_t)(*v61)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_62;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v124 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_65;
  }
  if ( v83->max_length <= 4 )
    goto LABEL_64;
  v83->m_Items[4] = (Il2CppObject *)v124;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[4], v124, v118, v119, v120, v121, v122, v123);
  SelfUserGame = (int64_t)*v61;
  if ( !*v61 )
    goto LABEL_62;
  v125 = *(_DWORD *)(SelfUserGame + 144);
  SelfUserGame = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                            (CombineServantListViewItem_o *)SelfUserGame,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_62;
  v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(SelfUserGame + 96),
           0LL);
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v125,
                            v126,
                            0LL);
  v133 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_65:
      v142 = sub_1BCAA60(SelfUserGame);
      sub_1BCA908(v142, 0LL);
    }
  }
  if ( v83->max_length <= 5 )
LABEL_64:
    sub_1BCAA44(SelfUserGame, v52);
  v83->m_Items[5] = (Il2CppObject *)v133;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[5], v133, v127, v128, v129, v130, v131, v132);
  v134 = System_String__Format_62415728(v82, v83, 0LL);
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v141 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v138,
                                                  v139,
                                                  v140);
  CommonConfirmDialog_ClickDelegate___ctor(
    v141,
    (Il2CppObject *)v50,
    Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v52);
  if ( !Instance )
    goto LABEL_62;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)Instance,
    v81,
    v134,
    v135,
    v136,
    v141,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B19DEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B19DEE = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CombineServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickSortKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t itemType; // w8
  int v13; // w9
  int32_t v14; // w20
  bool v15; // w21
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantSortSelectMenu_CallbackFunc_o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_4B19DEA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19DEA = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CombineServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    itemType = this->fields.itemType;
    if ( itemType == 5 )
      v13 = 3;
    else
      v13 = 1;
    if ( itemType )
      v14 = v13;
    else
      v14 = 0;
    v15 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v18 = (CommonUI_o *)Instance;
    v22 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v18 )
      sub_1BCAA3C(v23, v24);
    CommonUI__OpenServantSortSelectMenu(v18, v14, sort, v15, v22, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x2
  __int64 methodPtr_low; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x23
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v28; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  void *v36; // x0
  int v37; // w1
  __int64 v38; // x22
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, item, method);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnLongPushListView__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v17, v18);
    byte_4B19DE3 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, item);
  if ( TutorialFlag__Get_38402052(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    v19 = Method_CombineServantListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_OnLongPushListView__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    if ( item
      && ((methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_1BCACFC(item);
      if ( v37 != 1 )
      {
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v40,
          (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
        sub_1CB5270();
      }
      v38 = *(_QWORD *)__cxa_begin_catch(v36);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v40,
        (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v38 )
        sub_1BCAA34(v38);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v39,
          selectedMaterialUserServantIdList,
          (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v40 = v39;
        while ( 1 )
        {
          v24 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v40,
                  (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v24 )
            break;
          if ( !item )
            sub_1BCAA3C(v24, v25);
          current = v40.fields._current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            0LL) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v40,
          (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v21);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, 0LL),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.selectUsrSvtEntity,
            (int64_t)UserSvtEntity,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_1BCAA3C(combineRootComponent, v28);
    }
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnMoveEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B19DD1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19DD1 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
                v15,
                1LL,
                v15->klass->vtable._9_SetDragAmount.methodPtr),
              (v15 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v15, v8);
        }
        UIScrollView__UpdatePosition(v15, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall CombineServantListViewManager__PushRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B19DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B19DE0 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !UserSvtEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &UserSvtEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      UserSvtEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(UserSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(UserSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RefrashListDisp(
        CombineServantListViewManager_o *this,
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
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_object__o *v54; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v60; // x8
  int32_t adjustAtk; // w22
  int v62; // w21
  char v63; // w23
  char v64; // w24
  char v65; // w26
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v67; // x22
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v73; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  UserServantEntity_o *v77; // x21
  System_Int64_array *v78; // x0
  int32_t v79; // w21
  struct UserServantEntity_o *v80; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v82; // x8
  int32_t *p_getHpUpVal; // x23
  _BOOL8 v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x26
  __int64 v87; // x9
  int klass_high; // w22
  __int64 v89; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v92; // w10
  int32_t v93; // w9
  UserServantEntity_o *v94; // x0
  int32_t v95; // w10
  int32_t v96; // w9
  __int64 v97; // x1
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v99; // x22
  Il2CppObject *v100; // x23
  Il2CppObject *v101; // x0
  __int64 v102; // x2
  struct MenuListControl_o *menuListCtr; // x8
  float v104; // s8
  float v105; // s9
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v107; // s0
  float selectExp; // s10
  float v109; // s9
  int v110; // w8
  int32_t v111; // w9
  float selectQp; // s9
  float v113; // s8
  int32_t v114; // w8
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v116; // x0
  float v117; // s1
  float v118; // s0
  float v119; // s3
  float v120; // s2
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v122; // x0
  const MethodInfo *v123; // x2
  __int64 v124; // x3
  int32_t v125; // w8
  struct UserServantEntity_o *v126; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v127; // x21
  __int64 v128; // x22
  __int64 v129; // x23
  int32_t v130; // w8
  int32_t v131; // w21
  const MethodInfo *v132; // x4
  struct UserServantEntity_o *v133; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v136; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v138; // x22
  UnityEngine_Transform_o *v139; // x23
  CombineServantListViewManager_c *v140; // x8
  struct UILabel_o *v141; // x9
  struct System_String_o *mText; // x9
  float v143; // s0
  float v144; // s1
  struct UserServantEntity_o *v145; // x8
  bool v146; // w26
  _BOOL8 v147; // x0
  __int64 v148; // x1
  CombineServantListViewItem_o *v149; // x25
  __int64 v150; // x9
  _BOOL4 isStatusUpSvt; // w8
  System_Collections_Generic_List_long__o *v152; // x22
  _BOOL8 v153; // x0
  __int64 v154; // x1
  Il2CppObject *v155; // x21
  __int64 v156; // x9
  int64_t v157; // x0
  int64_t v158; // x1
  struct System_Int64_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  UserServantEntity_o *v162; // x21
  System_Int64_array *v163; // x0
  UILabel_o *v164; // x21
  bool v165; // w22
  _BOOL8 v166; // x0
  __int64 v167; // x1
  Il2CppObject *v168; // x21
  __int64 v169; // x9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v171; // x3
  const MethodInfo *v172; // x3
  int32_t v173; // w8
  int32_t v174; // w21
  __int64 v175; // x9
  const MethodInfo *v176; // x2
  __int64 v177; // x9
  int32_t v178; // [xsp+Ch] [xbp-104h]
  char v179; // [xsp+10h] [xbp-100h]
  char v180; // [xsp+14h] [xbp-FCh]
  int32_t adjustHp; // [xsp+18h] [xbp-F8h]
  char v182; // [xsp+1Ch] [xbp-F4h]
  __int64 v183; // [xsp+20h] [xbp-F0h]
  char v184; // [xsp+28h] [xbp-E8h]
  int32_t selectMax; // [xsp+2Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v186; // [xsp+30h] [xbp-E0h] BYREF
  int32_t tdMaxLv[2]; // [xsp+48h] [xbp-C8h] BYREF
  int32_t v188[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int64 lateExp; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v190; // [xsp+60h] [xbp-B0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-98h] BYREF
  int32_t tmpTargetLv; // [xsp+84h] [xbp-8Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+88h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v197; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19DC3 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v36, v37);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v48, v49);
    byte_4B19DC3 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v190, 0, sizeof(v190));
  *(_QWORD *)v188 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v54 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v56);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v57);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_39;
  itemType = this->fields.itemType;
  if ( itemType == 5 )
  {
    v67 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v51,
                                                       v52,
                                                       v53);
    System_Collections_Generic_List_long____ctor(
      v67,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v186,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v190 = v186;
    while ( 1 )
    {
      v68 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v190,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v68 )
        break;
      current = v190.fields._current;
      if ( !v190.fields._current )
        sub_1BCAA3C(v68, v69);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v190.fields._current, 0LL) )
      {
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BCACFC(current);
LABEL_160:
          sub_1BCAA3C(UserSvtId, v73);
        }
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
        v73 = UserSvtId;
        if ( !v67 )
          goto LABEL_160;
        items = v67->fields._items;
        v75 = Method_System_Collections_Generic_List_long__Add__;
        ++v67->fields._version;
        if ( !items )
          sub_1BCAA3C(UserSvtId, UserSvtId);
        size = v67->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v67,
            UserSvtId,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v67->fields._size = size + 1;
          items->m_Items[size] = UserSvtId;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v190,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v67 )
      goto LABEL_219;
    v77 = this->fields.baseUsrSvtData;
    v78 = System_Collections_Generic_List_long___ToArray(
            v67,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    resExpBar = NpCombineControl__GetNpLv(v77, v78, &tmpTargetLv, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_219;
    v79 = resExpBar;
    resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_219;
    v80 = this->fields.baseUsrSvtData;
    if ( !v80 )
      goto LABEL_219;
    resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v80->fields.treasureDeviceLv1, v79, 0LL);
    levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
    this->fields.selectQp = resExpBar;
    if ( !levelUpInfoImg )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
    v82 = this->fields.baseUsrSvtData;
    if ( !v82 || !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v82->fields.treasureDeviceLv1 < v79, 0LL);
    goto LABEL_39;
  }
  if ( itemType != 1 )
  {
LABEL_39:
    isSecondAdjustAtkMax = 0;
    v65 = 0;
    v64 = 0;
    v63 = 0;
    adjustAtk = 0;
    v62 = 0;
    adjustHp = 0;
    goto LABEL_40;
  }
  resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
  v60 = this->fields.baseUsrSvtData;
  if ( !v60 )
    goto LABEL_219;
  adjustAtk = v60->fields.adjustAtk;
  v62 = resExpBar;
  adjustHp = v60->fields.adjustHp;
  UserServantEntity__GetAdjustMax(
    this->fields.baseUsrSvtData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0LL);
  resExpBar = (__int64)this->fields.baseUsrSvtData;
  if ( !resExpBar )
    goto LABEL_219;
  resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v63 = resExpBar;
  resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v64 = resExpBar;
  resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_219;
  v65 = resExpBar;
  isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
  this->fields.isAllUpMax = v63 & v64 & 1;
  this->fields.isSecondAllUpMax = v65 & isSecondAdjustAtkMax & 1;
LABEL_40:
  resExpBar = (__int64)this->fields.itemList;
  v179 = v63;
  v180 = v65;
  v178 = adjustAtk;
  if ( !resExpBar )
    goto LABEL_219;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v186,
    (System_Collections_Generic_List_object__o *)resExpBar,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v183 = 0LL;
  v184 = 0;
  v182 = 0;
  v190 = v186;
  while ( 1 )
  {
    v84 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v190,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v84 )
      break;
    v86 = v190.fields._current;
    if ( !v190.fields._current )
      goto LABEL_155;
    v87 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v190.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v87
      || (CombineServantListViewItem_c *)v190.fields._current->klass->_2.typeHierarchy[v87 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BCACFC(v190.fields._current);
LABEL_155:
      sub_1BCAA3C(v84, v85);
    }
    klass_high = HIDWORD(v190.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v190.fields._current, 0LL) )
    {
      if ( BYTE4(v86[14].klass) )
      {
        monitor_high = HIDWORD(v86[13].monitor);
        klass = (int)v86[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v180 & 1 | (monitor_high < 1)) )
            {
              v92 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v92;
              if ( v92 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                v184 = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v93 = this->fields.getAtkUpVal + klass;
              this->fields.getAtkUpVal = v93;
              if ( v93 + v178 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v178;
                BYTE4(v183) = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v179 & 1 | (monitor_high < 1)) )
          {
            v95 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v95;
            if ( v95 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              LOBYTE(v183) = 1;
            }
          }
          if ( klass >= 1 && (v64 & 1) == 0 )
          {
            v96 = this->fields.getAtkUpVal + klass;
            this->fields.getAtkUpVal = v96;
            if ( v96 + v178 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v178;
              v182 = 1;
            }
          }
        }
      }
      v94 = this->fields.baseUsrSvtData;
      if ( !v94 )
        sub_1BCAA3C(0LL, v89);
      if ( !UserServantEntity__isLevelMax(v94, 0LL) )
        this->fields.selectExp += LODWORD(v86[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v62;
    }
    else
    {
      BYTE4(v86[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v190,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  LODWORD(v186.fields._list) = this->fields.selectSum;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  selectMax = this->fields.selectMax;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
  resExpBar = (__int64)System_String__Format_62415592(v99, v100, v101, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_219;
  UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_219;
  v104 = 1.0;
  v105 = 1.0;
  if ( this->fields.itemType == 1 )
  {
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    combineEventList = menuListCtr->fields.combineEventList;
    v107 = CheckCombineResStatus__GetExpCampaignValue(
             (CheckCombineResStatus_o *)resExpBar,
             this->fields.baseUsrSvtData,
             combineEventList,
             0LL);
    resExpBar = (__int64)this->fields.combineResStatus;
    if ( !resExpBar )
      goto LABEL_219;
    v105 = v107;
    v104 = CheckCombineResStatus__GetQpCampaignValue(
             (CheckCombineResStatus_o *)resExpBar,
             this->fields.baseUsrSvtData,
             combineEventList,
             0LL);
  }
  selectExp = (float)this->fields.selectExp;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v51, v102);
    byte_4B1103A = 1;
  }
  v109 = v105 * selectExp;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v110 = 1;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v51);
    v110 = (unsigned __int8)byte_4B1103A;
  }
  v111 = vcvtps_s32_f32(v109);
  if ( ceilf(v109) == INFINITY )
    v111 = 0x80000000;
  selectQp = (float)this->fields.selectQp;
  this->fields.selectExp = v111;
  if ( !v110 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v51, v102);
    byte_4B1103A = 1;
  }
  v113 = v104 * selectQp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v51);
  v114 = vcvtps_s32_f32(v113);
  if ( ceilf(v113) == INFINITY )
    v114 = 0x80000000;
  this->fields.selectQp = v114;
  spendQpLabel = this->fields.spendQpLabel;
  LODWORD(v186.fields._list) = v114;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v116, 0LL);
  if ( !spendQpLabel )
    goto LABEL_219;
  UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
  if ( (this->fields.itemType | 4) == 5 )
  {
    resExpBar = (__int64)this->fields.spendQpLabel;
    v117 = 0.0;
    if ( this->fields.selectQp <= this->fields.userQP )
      v117 = 1.0;
    if ( !resExpBar )
      goto LABEL_219;
    v118 = 1.0;
    v119 = 1.0;
    v120 = v117;
    UIWidget__set_color((UIWidget_o *)resExpBar, *(UnityEngine_Color_o *)(&v117 - 1), 0LL);
  }
  getExpLabel = this->fields.getExpLabel;
  LODWORD(v186.fields._list) = this->fields.selectExp;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v122, 0LL);
  if ( !getExpLabel )
    goto LABEL_219;
  UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_189;
  v125 = this->fields.itemType;
  if ( v125 == 1 )
  {
    resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)resExpBar,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v126 = this->fields.baseUsrSvtData;
    if ( !v126 )
      goto LABEL_219;
    v127 = (DataMasterBase_TMaster__TEntity__PKType__o *)resExpBar;
    v129 = *(_QWORD *)&v126->fields.svtId.fields.currentCryptoKey;
    v128 = *(_QWORD *)&v126->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
    *(_QWORD *)&v195.fields.currentCryptoKey = v129;
    *(_QWORD *)&v195.fields.fakeValue = v128;
    resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v195, 0LL);
    if ( !v127 )
      goto LABEL_219;
    resExpBar = (__int64)DataMasterBase_object__object__int___GetEntity(
                           v127,
                           resExpBar,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !resExpBar )
      goto LABEL_219;
    v130 = *(_DWORD *)(resExpBar + 132);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    this->fields.expType = v130;
    if ( !resExpBar )
      goto LABEL_219;
    this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
    this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
    resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
    if ( !this->fields.resCurrentExpBar )
      goto LABEL_219;
    v131 = resExpBar;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                           0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    if ( this->fields.checkLv != v131 )
    {
      do
        resExpBar = CombineServantListViewManager__checkIncrementLv(
                      this,
                      &this->fields.checkLv,
                      &this->fields.increLv,
                      this->fields.totalExp,
                      v132);
      while ( (resExpBar & 1) == 0 );
      v133 = this->fields.baseUsrSvtData;
      if ( !v133 )
        goto LABEL_219;
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_219;
      increLv = this->fields.increLv;
      lv = v133->fields.lv;
      CheckCombineResStatus__setSvtExp(
        (CheckCombineResStatus_o *)resExpBar,
        (float *)&lateExp + 1,
        (int32_t *)&lateExp,
        this->fields.totalExp,
        increLv,
        v131,
        this->fields.expType,
        0LL);
      resExpBar = (__int64)this->fields.resLvLabel;
      if ( !resExpBar )
        goto LABEL_219;
      v136 = increLv - lv;
      resExpBar = (__int64)UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)resExpBar,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      resLvLabel = this->fields.resLvLabel;
      v138 = (UIWidget_o *)resExpBar;
      if ( v136 < 1 )
      {
        v145 = this->fields.baseUsrSvtData;
        if ( !v145 )
          goto LABEL_219;
        resExpBar = (__int64)System_Int32__ToString((int)v145 + 256, 0LL);
        if ( !resLvLabel )
          goto LABEL_219;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
        if ( !v138 )
          goto LABEL_219;
        v197.fields.r = 1.0;
        v197.fields.g = 1.0;
        v197.fields.b = 1.0;
        v197.fields.a = 1.0;
        UIWidget__set_color(v138, v197, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *((float *)&lateExp + 1), 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0LL);
      }
      else
      {
        resExpBar = (__int64)System_Int32__ToString((int)this + 1088, 0LL);
        if ( !resLvLabel )
          goto LABEL_219;
        UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        resExpBar = (__int64)this->fields.levelUpInfoImg;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
        v139 = (UnityEngine_Transform_o *)resExpBar;
        v140 = CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v51);
          v140 = CombineServantListViewManager_TypeInfo;
        }
        v141 = this->fields.resLvLabel;
        if ( !v141 )
          goto LABEL_219;
        mText = v141->fields.mText;
        if ( !mText )
          goto LABEL_219;
        if ( !v139 )
          goto LABEL_219;
        v196.fields.y = 0.0;
        v196.fields.z = 0.0;
        v196.fields.x = (float)(mText->fields._stringLength * v140->static_fields->RES_LVUP_ARROW_SPACING);
        UnityEngine_Transform__set_localPosition(v139, v196, 0LL);
        if ( !v138 )
          goto LABEL_219;
        UIWidget__set_color(v138, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
        resExpBar = (__int64)this->fields.resExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
        resExpBar = (__int64)this->fields.resNextExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        v143 = *((float *)&lateExp + 1);
        v144 = 0.0;
        if ( v136 != 1 )
          v144 = 1.0;
        if ( this->fields.increLv == v131 )
          v143 = v144;
        UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v143, 0LL);
        resExpBar = (__int64)this->fields.resCurrentExpBar;
        if ( !resExpBar )
          goto LABEL_219;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
        if ( !resExpBar )
          goto LABEL_219;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
      }
    }
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    v146 = this->fields.increLv >= v131;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v186,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v190 = v186;
    while ( 1 )
    {
      v147 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v190,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v147 )
        break;
      v149 = (CombineServantListViewItem_o *)v190.fields._current;
      if ( !v190.fields._current )
        goto LABEL_157;
      v150 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v190.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v150
        || (CombineServantListViewItem_c *)v190.fields._current->klass->_2.typeHierarchy[v150 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(v190.fields._current);
LABEL_157:
        sub_1BCAA3C(v147, v148);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v190.fields._current, 0LL) )
      {
        isStatusUpSvt = v149->fields.isStatusUpSvt;
        v149->fields.isMaxNextLv = v146;
        if ( isStatusUpSvt )
        {
          CombineServantListViewItem__set_IsAtkStatusMax(v149, v182 & 1, 0LL);
          CombineServantListViewItem__set_IsHpStatusMax(v149, v183 & 1, 0LL);
          CombineServantListViewItem__set_IsSecondAtkStatusMax(v149, v183 & 0x100000000LL, 0LL);
          CombineServantListViewItem__set_IsSecondHpStatusMax(v149, v184 & 1, 0LL);
        }
      }
    }
  }
  else
  {
    if ( v125 != 5 )
      goto LABEL_189;
    v152 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_long__TypeInfo,
                                                        v51,
                                                        v123,
                                                        v124);
    System_Collections_Generic_List_long____ctor(
      v152,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v186,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v190 = v186;
    while ( 1 )
    {
      v153 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v190,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v153 )
        break;
      v155 = v190.fields._current;
      if ( !v190.fields._current )
        sub_1BCAA3C(v153, v154);
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)v190.fields._current, 0LL) )
      {
        v156 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v155->klass->vtable[0].methodPtr) < (unsigned int)v156
          || (CombineServantListViewItem_c *)v155->klass->_2.typeHierarchy[v156 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BCACFC(v155);
LABEL_224:
          sub_1BCAA3C(v157, v158);
        }
        v157 = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v155, 0LL);
        v158 = v157;
        if ( !v152 )
          goto LABEL_224;
        v159 = v152->fields._items;
        v160 = Method_System_Collections_Generic_List_long__Add__;
        ++v152->fields._version;
        if ( !v159 )
          sub_1BCAA3C(v157, v157);
        v161 = v152->fields._size;
        if ( (unsigned int)v161 >= v159->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v152,
            v157,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
        }
        else
        {
          v152->fields._size = v161 + 1;
          v159->m_Items[v161] = v157;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v190,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( !v152 )
      goto LABEL_219;
    v162 = this->fields.baseUsrSvtData;
    v163 = System_Collections_Generic_List_long___ToArray(
             v152,
             (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    v188[0] = NpCombineControl__GetNpLv(v162, v163, &v188[1], 0LL);
    v164 = this->fields.resLvLabel;
    resExpBar = (__int64)System_Int32__ToString((int32_t)v188, 0LL);
    if ( !v164 )
      goto LABEL_219;
    UILabel__set_text(v164, (System_String_o *)resExpBar, 0LL);
    resExpBar = (__int64)this->fields.baseUsrSvtData;
    if ( !resExpBar )
      goto LABEL_219;
    UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
    resExpBar = (__int64)this->fields.itemList;
    if ( !resExpBar )
      goto LABEL_219;
    v165 = v188[0] >= tdMaxLv[0];
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v186,
      (System_Collections_Generic_List_object__o *)resExpBar,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v190 = v186;
    while ( 1 )
    {
      v166 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v190,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v166 )
        break;
      v168 = v190.fields._current;
      if ( !v190.fields._current )
        goto LABEL_221;
      v169 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v190.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v169
        || (CombineServantListViewItem_c *)v190.fields._current->klass->_2.typeHierarchy[v169 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(v190.fields._current);
LABEL_221:
        sub_1BCAA3C(v166, v167);
      }
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v190.fields._current, 0LL) && !BYTE1(v168[10].klass) )
        BYTE5(v168[17].monitor) = v165;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v190,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_189:
  if ( this->fields.selectSum < 1 )
  {
    tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
    if ( !tempMaterialUserServantIdList )
      goto LABEL_219;
    if ( tempMaterialUserServantIdList->fields._size <= 0 )
    {
      CombineServantListViewManager__setBtnEnable(this, 0, v123);
    }
    else
    {
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_219;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
        resExpBar,
        3LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    }
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v171);
    CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v172);
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
    if ( !v54 )
      goto LABEL_219;
  }
  else
  {
    CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v123);
    resExpBar = (__int64)this->fields.allReleaseButton;
    if ( !resExpBar )
      goto LABEL_219;
    resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                  resExpBar,
                  0LL,
                  1LL,
                  *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
    if ( !v54 )
      goto LABEL_219;
  }
  v173 = v54->fields._size;
  if ( v173 < 1 )
    return;
  v174 = 0;
  this->fields.callbackCount = v173;
  do
  {
    resExpBar = (__int64)System_Collections_Generic_List_object___get_Item(
                           v54,
                           v174,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    if ( !resExpBar )
      goto LABEL_219;
    (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
      resExpBar,
      this->fields.isInput,
      *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
    ++v174;
  }
  while ( v174 < v54->fields._size );
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar || (resExpBar = *(_QWORD *)(resExpBar + 32)) == 0 )
LABEL_219:
    sub_1BCAA3C(resExpBar, v51);
  v175 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v175
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v175 - 8) != CombineRootComponent_TypeInfo )
  {
    goto LABEL_226;
  }
  if ( *(_DWORD *)(resExpBar + 652) != 5 )
    return;
  resExpBar = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !resExpBar )
    goto LABEL_219;
  resExpBar = *(_QWORD *)(resExpBar + 32);
  if ( !resExpBar )
    goto LABEL_219;
  v177 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 304LL) < (unsigned int)v177
    || *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v177 - 8) != CombineRootComponent_TypeInfo )
  {
LABEL_226:
    sub_1BCACFC(resExpBar);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v190,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CB5270();
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 652), v176);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v16; // x3
  __int64 methodPtr_low; // x9
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19DDB & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    byte_4B19DDB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v20.fields._current, 0, 0LL);
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_1BCACFC(current);
LABEL_18:
        sub_1BCAA3C(v13, v14);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v16);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)itemList,
                                                                    0LL)) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject(
        CombineServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19DCF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B19DCF = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      CombineServantListViewObject__Init_46138816((CombineServantListViewObject_o *)current, mode, v28, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_46100408(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19DD0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_CombineServantListViewManager_OnMoveEnd__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B19DD0 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      CombineServantListViewObject__Init_46138900((CombineServantListViewObject_o *)current, mode, v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void __fastcall CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
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
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w21
  __int64 methodPtr_low; // x10
  int32_t v27; // w20
  const MethodInfo *v28; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4B19E00 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19E00 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventCampaignEntities,
    (int64_t)CombineEventCampaigns,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_22;
  v25 = 0;
  while ( v25 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v25,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
        && *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == CombineServantListViewItem_TypeInfo )
      {
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(
          (CombineServantListViewItem_o *)Instance,
          this->fields.eventCampaignEntities,
          0LL);
        Instance = (int64_t)this->fields.itemList;
        ++v25;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v17);
  if ( !Instance )
    goto LABEL_22;
  v27 = 0;
  while ( v27 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v17);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v27,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        ++v27;
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v28);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_22;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v17);
  if ( !timeOverChecker )
LABEL_22:
    sub_1BCAA3C(Instance, v17);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall CombineServantListViewManager__ResetCombineViewInfoLayout(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19E04 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20561/*"img_list_lv"*/, method, v2);
    byte_4B19E04 = 1;
  }
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 1, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -47.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 139, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v6 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v6, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v7 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v7, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v8 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v9 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, 18.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v10 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, 18.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v11 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, -155.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 88, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v12 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 27.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v13 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v13, -2.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v14 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, -15.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
  if ( !getExpLabel )
    goto LABEL_52;
  v15 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, 13.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20561/*"img_list_lv"*/, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v16 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(v16, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v17 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v17, 21.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v18 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v18, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v19 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v19, 50.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v20 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, 4.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getExpLabel, v28, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_20561/*"img_list_lv"*/, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v21 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(v21, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v22 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v22, -68.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v23 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v24 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v24, -36.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v25 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v25, 4.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !getExpLabel
    || (getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL)
    || (v26 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v26, 0.0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL) )
  {
LABEL_52:
    sub_1BCAA3C(getExpLabel, method);
  }
  v27 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v27, 39.0, 0LL);
}


void __fastcall CombineServantListViewManager__ResetInit(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *levelUpInfoImg; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v20; // w9
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  int v22; // w9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v24; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19DDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    byte_4B19DDC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  this->fields.baseUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v20 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v20;
  }
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  v22 = tempMaterialUserServantIdList->fields._version + 1;
  tempMaterialUserServantIdList->fields._size = 0;
  tempMaterialUserServantIdList->fields._version = v22;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v26.fields._current )
        sub_1BCAA3C(0LL, v24);
      ListViewItem__set_IsSelect((ListViewItem_o *)v26.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !levelUpInfoImg )
    goto LABEL_19;
  levelUpInfoImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL);
  if ( !levelUpInfoImg )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelUpInfoImg, 0, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0LL);
  levelUpInfoImg = (UnityEngine_Component_o *)this->fields.noticeTween;
  if ( !levelUpInfoImg )
LABEL_19:
    sub_1BCAA3C(levelUpInfoImg, v18);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)levelUpInfoImg, 0LL);
}


void __fastcall CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  float VerticalScrollableSize; // s0
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E0A & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, obj, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19E0A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Equality(seed, 0LL, 0LL) )
    {
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v9);
      if ( !obj )
        goto LABEL_21;
      v13 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v14 = fabsf(localPosition.fields.y);
      if ( localPosition.fields.y != 0.0 )
      {
        transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v11);
          transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        }
        if ( !this->fields.seed )
          goto LABEL_21;
        v15 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_21;
        localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
        v14 = v14 + (float)(v15 * localScale.fields.y);
      }
      if ( v13 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v14 / v13, 0LL);
          return;
        }
LABEL_21:
        sub_1BCAA3C(transform, v11);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetCombineSvtClassIcon(
        CombineServantListViewManager_o *this,
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
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v13; // w21
  int32_t FrameType; // w20
  Il2CppObject *Entity; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  Il2CppObject *v18; // x21
  UISprite_o *v19; // x19
  int32_t monitor_high; // w21

  if ( (byte_4B19E02 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19E02 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_17;
  v13 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v13,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v18 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v19 = this->fields.combineSvtInfoIcon;
    if ( v18 )
    {
      monitor_high = HIDWORD(v18[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
      AtlasManager__SetClassIcon(v19, monitor_high, FrameType, 0LL);
      return;
    }
    if ( v19 )
    {
      UISprite__set_spriteName(v19, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(baseUsrSvtData, method);
  }
}


void __fastcall CombineServantListViewManager__SetDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4B19DFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_SetDragEnd__, method, v2);
    byte_4B19DFC = 1;
  }
  v4 = Method_CombineServantListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_CombineServantListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewManager_SetDragEnd__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        CombineServantListViewManager__DecideDragSelect(this, dragStartIndex++, v7);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        CombineServantListViewManager__DecideDragSelect(this, dragEndIndex++, v7);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  CombineServantListViewManager__RefrashListDisp(this, v6);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  this->fields.isDragSelect = 1;
}


void __fastcall CombineServantListViewManager__SetDragMove(
        CombineServantListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    CombineServantListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__SetDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  CombineServantListViewItem_o *v14; // x19
  __int64 methodPtr_low; // x9
  bool v16; // w0
  __int64 v17; // x1
  bool v18; // w21
  _BOOL4 v19; // w21
  bool IsSelect; // w0
  const MethodInfo *v21; // x5
  UnityEngine_Object_o *viewObject; // x20
  __int64 v23; // x9
  bool result; // w0
  CombineServantListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4B19DFA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index, isDragSelect);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19DFA = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_34;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_34;
  v14 = (CombineServantListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_35;
  }
  v16 = CombineServantListViewItem__get_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0LL);
  if ( !isDragSelect )
  {
    if ( v16 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v14, 0LL) && v14->fields.dragSelectNum >= 1 )
      {
        --this->fields.dragSelectSum;
        if ( CombineServantListViewItem__get_IsOrganization(v14, 0LL)
          && CombineServantListViewItem__get_IsCombineEnableServant(v14, 0LL) )
        {
          --this->fields.dragServantSelectSum;
        }
      }
      CombineServantListViewItem__set_IsDragSelect(v14, 0, 0LL);
    }
    goto LABEL_23;
  }
  if ( v16 )
  {
LABEL_23:
    v18 = 0;
    goto LABEL_24;
  }
  v14->fields.dragSelectNum = 0;
  v18 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect(v14, 0LL) )
    goto LABEL_24;
  v19 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v14, 0LL);
  if ( v19 )
  {
    if ( !IsSelect )
    {
      v18 = 1;
      if ( !CombineServantListViewManager__IsSelectEnable(
              this,
              v14,
              this->fields.dragSelectSum,
              this->fields.dragServantSelectSum,
              1,
              v21) )
        goto LABEL_24;
      ++this->fields.dragSelectSum;
      if ( CombineServantListViewItem__get_IsOrganization(v14, 0LL)
        && CombineServantListViewItem__get_IsCombineEnableServant(v14, 0LL) )
      {
        ++this->fields.dragServantSelectSum;
      }
      goto LABEL_33;
    }
    goto LABEL_23;
  }
  if ( !IsSelect )
    goto LABEL_23;
LABEL_33:
  v18 = 0;
  v14->fields.dragSelectNum = 1;
LABEL_24:
  viewObject = (UnityEngine_Object_o *)v14->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v18;
  itemSortList = (System_Collections_Generic_List_object__o *)v14->fields.viewObject;
  if ( !itemSortList )
LABEL_34:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  v23 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v23
    && (CombineServantListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v23 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
    return v18;
  }
LABEL_35:
  sub_1BCACFC(itemSortList);
  CombineServantListViewManager__SetDragStart(v25, v26, v27, v28);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetDragSelectItem(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v15; // w25
  int32_t v16; // w26
  int32_t v17; // w8
  int32_t v18; // w9
  int v19; // w24
  int32_t v20; // w20
  int32_t v21; // w23
  int v22; // w27
  void *itemSortList; // x0
  _QWORD *v24; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v26; // x22
  __int64 v27; // x9
  CombineServantListViewManager_o *v28; // x0
  int32_t v29; // w1
  bool v30; // w2
  const MethodInfo *v31; // x3

  v5 = startIndex;
  if ( (byte_4B19DF9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex, *(_QWORD *)&endIndex);
    sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19DF9 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v15 = -1;
    v16 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v15 = this->fields.dragEndIndex;
    else
      v15 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v16 = this->fields.dragStartIndex;
    else
      v16 = this->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v17 = endIndex;
  else
    v17 = v5;
  if ( v5 <= endIndex )
    v18 = v5;
  else
    v18 = endIndex;
  if ( v5 < 0 )
    v19 = -1;
  else
    v19 = v17;
  if ( v5 < 0 )
    v20 = -1;
  else
    v20 = v18;
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
  if ( (v16 & 0x80000000) == 0 && v16 <= v15 )
  {
    v21 = v16;
    do
    {
      if ( v21 > v19 || (v20 & 0x80000000) != 0 || v21 < v20 )
        CombineServantListViewManager__SetDragSelect(this, v21, 0, method);
      ++v21;
    }
    while ( v21 <= v15 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          CombineServantListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v20 & 0x80000000) == 0 && this->fields.isDragSelect && v20 <= v19 )
    {
      v22 = this->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList
          || (itemSortList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)itemSortList,
                               v20,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
        {
LABEL_62:
          sub_1BCAA3C(itemSortList, *(_QWORD *)&startIndex);
        }
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v24 = itemSortList;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)methodPtr_low
          || *(CombineServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * methodPtr_low - 8) != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( *((int *)itemSortList + 81) >= 1 )
        {
          *((_DWORD *)itemSortList + 81) = v22;
          v26 = (UnityEngine_Object_o *)*((_QWORD *)itemSortList + 13);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&startIndex);
          ++v22;
          if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
          {
            itemSortList = (void *)v24[13];
            if ( !itemSortList )
              goto LABEL_62;
            v27 = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)itemSortList + 304LL) < (unsigned int)v27
              || *(CombineServantListViewObject_c **)(*(_QWORD *)(*(_QWORD *)itemSortList + 200LL) + 8 * v27 - 8) != CombineServantListViewObject_TypeInfo )
            {
              break;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)itemSortList, 0LL);
          }
        }
        if ( ++v20 > v19 )
          return;
      }
      sub_1BCACFC(itemSortList);
      CombineServantListViewManager__SetDragSelect(v28, v29, v30, v31);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v19; // w21
  __int64 methodPtr_low; // x9
  __int64 v21; // x1
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4B19DFB & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex, isDragSelect);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v13, v14);
    byte_4B19DFB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&startIndex);
  if ( TutorialFlag__Get_38402052(102, 0LL) )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_22;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      v19,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemSortList )
          goto LABEL_22;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        CombineServantListViewItem__set_IsDragSelect((CombineServantListViewItem_o *)itemSortList, 0, 0LL);
        if ( size == ++v19 )
          goto LABEL_15;
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_22;
      }
      sub_1BCACFC(itemSortList);
LABEL_22:
      sub_1BCAA3C(itemSortList, v15);
    }
LABEL_15:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v16);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !itemSortList )
        goto LABEL_22;
      UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  int64_t EventCampaignFinishedAt; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v33; // x20
  System_Action_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  TimeOverChecker_o *v38; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B19DFF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&TimeOverChecker_TypeInfo, v16, v17);
    byte_4B19DFF = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventCampaignEntities,
      0LL,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventCampaignEntities,
    (int64_t)CombineEventCampaigns,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v27);
    timeOverChecker = this->fields.timeOverChecker;
    v33 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31),
          System_Action___ctor(
            v34,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v38 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v35, v36, v37),
          TimeOverChecker___ctor(v38, v34, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v38,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.timeOverChecker,
            (int64_t)v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v33, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v19);
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B19DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B19DE7 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_o *v3; // x19
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  int64_t UserSvtId; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x8
  Il2CppObject *current; // x26
  int32_t v24; // w20
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4B19DC2 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14, v15);
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v16,
                                                v17);
    byte_4B19DC2 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  itemList = v3->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v3->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v29,
          selectedMaterialUserServantIdList,
          (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v30 = v29;
LABEL_8:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v30,
                        (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v22 = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
          if ( !v22 )
            goto LABEL_22;
          current = v30.fields._current;
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v22->fields._size )
              goto LABEL_8;
            Item = System_Collections_Generic_List_object___get_Item(
                     v22,
                     v24,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            v27 = Item;
            if ( !Item )
              sub_1BCAA3C(0LL, v26);
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
              || (CombineServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_1BCACFC(Item);
LABEL_22:
              sub_1BCAA3C(UserSvtId, v21);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)Item, 0LL);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v22 = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
            ++v24;
            if ( !v22 )
              goto LABEL_22;
          }
          LOBYTE(v27[20].monitor) = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v30,
          (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetMode(
        CombineServantListViewManager_o *this,
        int32_t mode,
        CombineServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_46099192(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_46099192(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  UIScrollView_o *itemList; // x0
  int32_t v20; // w1
  char v21; // w24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  ListViewItem_o *current; // x21
  __int64 methodPtr_low; // x9
  int32_t selectNum; // w22
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t klass; // w9
  const MethodInfo *v33; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B19DCE & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B19DCE = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode & 0xFFFFFFFE) == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemList = this->fields.scrollView;
    if ( !itemList )
      goto LABEL_40;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)itemList, 0LL) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v18);
      itemList = this->fields.scrollView;
      if ( !itemList )
        goto LABEL_40;
      UIScrollView__UpdatePosition(itemList, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = (UIScrollView_o *)this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v37 = v35;
      v21 = 0;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v37,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v22 )
          break;
        current = (ListViewItem_o *)v37.fields._current;
        if ( !v37.fields._current )
          goto LABEL_39;
        methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v37.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineServantListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_1BCACFC(v37.fields._current);
LABEL_39:
          sub_1BCAA3C(v22, v23);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v37.fields._current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, 0LL) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v27);
          v29 = this->fields.itemList;
          if ( !v29 )
            sub_1BCAA3C(0LL, v28);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v35,
            (System_Collections_Generic_List_object__o *)v29,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v36 = v35;
          while ( 1 )
          {
            v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v36,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v30 )
              break;
            if ( !v36.fields._current )
              sub_1BCAA3C(v30, v31);
            klass = (int32_t)v36.fields._current[1].klass;
            if ( klass > selectNum )
              LODWORD(v36.fields._current[1].klass) = klass - 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v36,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v21 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v21 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v33);
      if ( mode == 2 )
        v20 = 3;
      else
        v20 = 2;
      goto LABEL_34;
    }
LABEL_40:
    sub_1BCAA3C(itemList, v17);
  }
  if ( mode != 3 )
    goto LABEL_35;
  v20 = 4;
LABEL_34:
  CombineServantListViewManager__RequestListObject_46100408(this, v20, v18);
LABEL_35:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_46100204(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_46099192(this, mode, v10);
}


void __fastcall CombineServantListViewManager__SetObjectItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B19DCD & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_1BCA7E0(&CombineServantListViewObject_TypeInfo, obj, item);
    byte_4B19DCD = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BCAA3C(this, obj);
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_46136612((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  int v21; // w8
  int v22; // w8

  if ( (byte_4B19DD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v10, v11);
    byte_4B19DD8 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v13 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       recomendedList,
                                                       method,
                                                       v3);
    System_Collections_Generic_List_long____ctor(
      v13,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectedMaterialUserServantIdList = v13;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectedMaterialUserServantIdList,
      (int64_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
    if ( !selectedMaterialUserServantIdList )
      goto LABEL_7;
  }
  v21 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v21;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
  selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
LABEL_7:
    sub_1BCAA3C(selectedMaterialUserServantIdList, v20);
  v22 = selectedMaterialUserServantIdList->fields._version + 1;
  selectedMaterialUserServantIdList->fields._size = 0;
  selectedMaterialUserServantIdList->fields._version = v22;
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4B19E06 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enabled, method);
    byte_4B19E06 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enabled);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


void __fastcall CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.baseUsrSvtData = resData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)resData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineServantListViewManager__SetSortButtonImage(
        CombineServantListViewManager_o *this,
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B19DEF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B19DEF = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_41;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_41;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1BCAA3C(sort, v17);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetStatusKind(
        CombineServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v20; // x8
  UICommonButton_o *v21; // x21
  bool enabled; // w0
  __int64 *v23; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v25; // w0
  __int64 *v26; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v28; // w0
  __int64 *v29; // x8
  UICommonButton_o *pushTabButton; // x20
  bool v31; // w0
  const MethodInfo *v32; // x2

  if ( (byte_4B19DBD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v17, v18);
    byte_4B19DBD = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v20 = &StringLiteral_17841/*"button_select_reg"*/;
  if ( modeKind )
    v20 = &StringLiteral_17842/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v20, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v21 = this->fields.statusTabButton;
  if ( !v21 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v21, enabled, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v23 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v23 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v23, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_32;
  v25 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v25, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v26 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v26 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v26, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_32;
  v28 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v28, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v29 = &StringLiteral_17839/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v29 = &StringLiteral_17840/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v29, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                       statusTabButton,
                                                       0LL,
                                                       0LL,
                                                       statusTabButton->klass[1]._1.interfaceOffsets),
        (pushTabButton = this->fields.pushTabButton) == 0LL) )
  {
LABEL_32:
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  }
  v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v31, 0, 0LL);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v32);
}


void __fastcall CombineServantListViewManager__StatusRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *Request_object; // x0
  __int64 v25; // x1
  System_Int64_array *v26; // x1
  System_Int64_array *v27; // x2
  bool v28; // w4
  bool v29; // w5
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  __int64 v40; // x1
  System_Int64_array *v41; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B19DF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineServantListViewManager_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B19DF5 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v41 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &v41, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
      Request_object = NetworkManager__getRequest_object_(
                         v39,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_object )
      {
        v27 = v41;
        v26 = choiceList;
        v29 = 1;
        v28 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v25);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Request_object = NetworkManager__getRequest_object_(
                       v22,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_object )
    {
      v27 = unlockList;
      v26 = lockList;
      v28 = 1;
      v29 = 0;
LABEL_15:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)Request_object, v26, v27, 0, v28, v29, 0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__TutorialBlock(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *transform; // x0
  __int64 v18; // x1
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w23
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w23
  int v25; // w8
  void *v26; // x21
  unsigned int v27; // w23
  struct UIScrollView_o *scrollView; // x8
  int v29; // w8
  void *v30; // x21
  unsigned int v31; // w23
  int v32; // w8
  void *v33; // x21
  unsigned int v34; // w22
  const MethodInfo *v35; // x2

  if ( (byte_4B19E08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v9, v10);
    sub_1BCA7E0(&StringLiteral_12663/*"ScaleChangeButton"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9016/*"MarkObject"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12988/*"SortInfo"*/, v15, v16);
    byte_4B19E08 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12988/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v19 = *((_DWORD *)transform + 6);
  v20 = transform;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      transform = (void *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_11;
    }
LABEL_53:
    sub_1BCAA44(transform, v18);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9016/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v22 = *((_DWORD *)transform + 6);
  v23 = transform;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      transform = (void *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_19;
    }
    goto LABEL_53;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12663/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v25 = *((_DWORD *)transform + 6);
  v26 = transform;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( v27 < v25 )
    {
      transform = (void *)*((_QWORD *)v26 + (int)v27 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v25 = *((_DWORD *)v26 + 6);
      if ( (int)++v27 >= v25 )
        goto LABEL_29;
    }
    goto LABEL_53;
  }
LABEL_29:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_52;
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v29 = *((_DWORD *)transform + 6);
  v30 = transform;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < v29 )
    {
      transform = (void *)*((_QWORD *)v30 + (int)v31 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        goto LABEL_38;
    }
    goto LABEL_53;
  }
LABEL_38:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v32 = *((_DWORD *)transform + 6);
  v33 = transform;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( v34 < v32 )
    {
      transform = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
        goto LABEL_45;
    }
    goto LABEL_53;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  if ( progress == 4 || progress == 2 )
  {
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v35);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BCAA3C(transform, v18);
  }
}


void __fastcall CombineServantListViewManager__UnBlockTutorial(
        CombineServantListViewManager_o *this,
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
  void *transform; // x0
  __int64 v15; // x1
  int v16; // w8
  void *v17; // x20
  unsigned int v18; // w22
  int v19; // w8
  void *v20; // x20
  unsigned int v21; // w22
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w22
  struct UIScrollView_o *scrollView; // x8
  int v26; // w8
  void *v27; // x20
  unsigned int v28; // w22
  int v29; // w8
  void *v30; // x20
  unsigned int v31; // w21

  if ( (byte_4B19E07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6, v7);
    sub_1BCA7E0(&StringLiteral_12663/*"ScaleChangeButton"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9016/*"MarkObject"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12988/*"SortInfo"*/, v12, v13);
    byte_4B19E07 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12988/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v16 = *((_DWORD *)transform + 6);
  v17 = transform;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      transform = (void *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        goto LABEL_11;
    }
LABEL_48:
    sub_1BCAA44(transform, v15);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9016/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v19 = *((_DWORD *)transform + 6);
  v20 = transform;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      transform = (void *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_19;
    }
    goto LABEL_48;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12663/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v22 = *((_DWORD *)transform + 6);
  v23 = transform;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      transform = (void *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_29:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_47;
  transform = scrollView->fields.verticalScrollBar;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v26 = *((_DWORD *)transform + 6);
  v27 = transform;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( v28 < v26 )
    {
      transform = (void *)*((_QWORD *)v27 + (int)v28 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        goto LABEL_38;
    }
    goto LABEL_48;
  }
LABEL_38:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_object_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v29 = *((_DWORD *)transform + 6);
  v30 = transform;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < v29 )
    {
      transform = (void *)*((_QWORD *)v30 + (int)v31 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_1BCAA3C(transform, v15);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
}


void __fastcall CombineServantListViewManager___OnClickDecide_b__173_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_46099192(this, 2, v5);
  if ( isDecide == 1 )
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
}


void __fastcall CombineServantListViewManager__add_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  CombineServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B19DB2 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19DB2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__add_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B19DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19DB4 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__changeCombineEnableRestCnt(
        CombineServantListViewManager_o *this,
        bool isPlus,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t sellEnableRestCnt; // w8
  int32_t v8; // w8

  if ( this->fields.itemType == 1 )
  {
    if ( !item )
      sub_1BCAA3C(this, isPlus);
    if ( CombineServantListViewItem__get_IsOrganization(item, 0LL)
      && CombineServantListViewItem__get_IsCombineEnableServant(item, 0LL) )
    {
      sellEnableRestCnt = this->fields.sellEnableRestCnt;
      if ( isPlus )
        v8 = sellEnableRestCnt + 1;
      else
        v8 = sellEnableRestCnt - 1;
      this->fields.sellEnableRestCnt = v8;
    }
  }
}


void __fastcall CombineServantListViewManager__checkDragMax(
        CombineServantListViewManager_o *this,
        bool *isHpUpMax,
        bool *isAtkUpMax,
        bool *isHpMax,
        bool *isAtkMax,
        bool *isSecondHpMax,
        bool *isSecondAtkMax,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x0
  int32_t adjustAtk; // w19
  UserServantEntity_o *isSecondAdjustHpMax; // x0
  char v36; // w27
  bool isSecondAdjustAtkMax; // w28
  int v38; // w23
  int v39; // w24
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x29
  __int64 methodPtr_low; // x9
  int klass_high; // w19
  __int64 v45; // x1
  int klass; // w8
  int monitor_high; // w9
  int v48; // w10
  int32_t v49; // w10
  int32_t v50; // w8
  bool *v51; // x9
  int32_t v52; // w10
  UserServantEntity_o *v53; // x0
  struct MenuListControl_o *menuListCtr; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  float v57; // s8
  float v58; // s8
  unsigned int v59; // w10
  unsigned int v60; // w19
  struct UserServantEntity_o *v61; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x21
  __int64 v63; // x22
  __int64 v64; // x23
  int32_t hiddenValue; // w8
  int v66; // w23
  int32_t exp; // w22
  const MethodInfo *v68; // x4
  int32_t LevelMax; // w21
  bool *v70; // x19
  int32_t v71; // w8
  int32_t v72; // w22
  bool *v73; // [xsp+8h] [xbp-F8h]
  bool *v74; // [xsp+10h] [xbp-F0h]
  bool *v75; // [xsp+18h] [xbp-E8h]
  int32_t v76; // [xsp+2Ch] [xbp-D4h]
  bool *v77; // [xsp+30h] [xbp-D0h]
  __int64 v78; // [xsp+38h] [xbp-C8h]
  char v79; // [xsp+40h] [xbp-C0h]
  int v80; // [xsp+44h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+60h] [xbp-A0h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+78h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-80h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4B19DC4 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, isHpUpMax, isAtkUpMax);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B19DC4 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  checkLv = 0LL;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    LODWORD(v78) = baseUsrSvtData->fields.adjustHp;
    UserServantEntity__GetAdjustMax(
      baseUsrSvtData,
      &maxAjustAtk[1],
      maxAjustAtk,
      (int32_t *)&secondMaxAdjustAtk + 1,
      (int32_t *)&secondMaxAdjustAtk,
      0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isHpUpMax = UserServantEntity__isAdjustHpMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    *isAtkUpMax = UserServantEntity__isAdjustAtkMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_68;
    v76 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_68;
    v36 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    BYTE4(v78) = *isAtkUpMax && *isHpUpMax;
    v79 = v36 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v36 = 0;
    v76 = 0;
    v78 = 0LL;
    v79 = 0;
  }
  v74 = isAtkMax;
  v75 = isSecondHpMax;
  *isHpMax = *isHpUpMax;
  v77 = isMaxLvSelected;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v36 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)isSecondAdjustHpMax,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v38 = 0;
  v39 = 0;
  v80 = 0;
  v82 = v81;
  v73 = isHpMax;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v40 )
      break;
    current = v82.fields._current;
    if ( !v82.fields._current )
      goto LABEL_67;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v82.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewItem_c *)v82.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_1BCACFC(v82.fields._current);
LABEL_67:
      sub_1BCAA3C(v40, v41);
    }
    klass_high = HIDWORD(v82.fields._current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v82.fields._current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_38;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v79 & 1) == 0 )
        {
          if ( !(v36 & 1 | (monitor_high < 1)) )
          {
            v39 += monitor_high;
            v48 = HIDWORD(secondMaxAdjustAtk);
            if ( v39 + (int)v78 >= SHIDWORD(secondMaxAdjustAtk) )
            {
              *v75 = 1;
              v39 = v48 - v78;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v49 = v76;
            v50 = secondMaxAdjustAtk;
            v38 += LODWORD(current[14].klass);
            if ( v38 + v76 >= (int)secondMaxAdjustAtk )
            {
              v51 = isSecondAtkMax;
LABEL_37:
              v38 = v50 - v49;
              *v51 = 1;
            }
          }
        }
      }
      else if ( !(BYTE4(v78) & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v39 += monitor_high;
          v52 = maxAjustAtk[1];
          if ( v39 + (int)v78 >= maxAjustAtk[1] )
          {
            *v73 = 1;
            v39 = v52 - v78;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v49 = v76;
          v50 = maxAjustAtk[0];
          v38 += LODWORD(current[14].klass);
          if ( v38 + v76 >= maxAjustAtk[0] )
          {
            v51 = v74;
            goto LABEL_37;
          }
        }
      }
LABEL_38:
      v53 = this->fields.baseUsrSvtData;
      if ( !v53 )
        sub_1BCAA3C(0LL, v45);
      if ( !UserServantEntity__isLevelMax(v53, 0LL) )
        v80 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_68;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_68;
  v57 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v55, v56);
    byte_4B1103A = 1;
  }
  v58 = v57 * (float)v80;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v55);
  v59 = vcvtps_s32_f32(v58);
  if ( ceilf(v58) == INFINITY )
    v60 = 0x80000000;
  else
    v60 = v59;
  if ( this->fields.baseUsrSvtData && this->fields.itemType == 1 )
  {
    isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( isSecondAdjustHpMax )
    {
      isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)isSecondAdjustHpMax,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      v61 = this->fields.baseUsrSvtData;
      if ( v61 )
      {
        v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)isSecondAdjustHpMax;
        v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isHpUpMax);
        *(_QWORD *)&v86.fields.currentCryptoKey = v64;
        *(_QWORD *)&v86.fields.fakeValue = v63;
        isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v86,
                                                       0LL);
        if ( v62 )
        {
          isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v62,
                                                         (int32_t)isSecondAdjustHpMax,
                                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( isSecondAdjustHpMax )
          {
            hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue;
            isSecondAdjustHpMax = this->fields.baseUsrSvtData;
            this->fields.expType = hiddenValue;
            if ( isSecondAdjustHpMax )
            {
              exp = isSecondAdjustHpMax->fields.exp;
              LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
              v66 = checkLv;
              LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
              if ( v66 == LevelMax )
              {
                v70 = v77;
                v71 = 0;
              }
              else
              {
                v72 = exp + v60;
                v70 = v77;
                while ( !CombineServantListViewManager__checkIncrementLv(
                           this,
                           (int32_t *)&checkLv,
                           (int32_t *)&checkLv + 1,
                           v72,
                           v68) )
                  ;
                v71 = HIDWORD(checkLv);
              }
              *v70 = v71 >= LevelMax;
              return;
            }
          }
        }
      }
    }
LABEL_68:
    sub_1BCAA3C(isSecondAdjustHpMax, isHpUpMax);
  }
}


bool __fastcall CombineServantListViewManager__checkIncrementLv(
        CombineServantListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v13; // w8
  int32_t v14; // w8
  bool result; // w0

  if ( (byte_4B19DC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv, increLv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19DC5 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_object_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(baseUsrSvtData, checkLv);
  }
  v13 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v13 <= totalExp )
  {
    if ( v13 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v14 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v14 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v14;
  return 1;
}


bool __fastcall CombineServantListViewManager__checkIsSelectMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


void __fastcall CombineServantListViewManager__clearSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v5; // w9

  if ( (byte_4B19DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    byte_4B19DD9 = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    v5 = selectedMaterialUserServantIdList->fields._version + 1;
    selectedMaterialUserServantIdList->fields._size = 0;
    selectedMaterialUserServantIdList->fields._version = v5;
  }
}


int32_t __fastcall CombineServantListViewManager__getItemType(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.itemType;
}


SetCombineData_o *__fastcall CombineServantListViewManager__getSelectCombineData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__getSelectUsrSvtEntity(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ClippingObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B19DBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B19DBB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v21;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19DBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B19DBA = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_CombineServantListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v21;
}


int32_t __fastcall CombineServantListViewManager__get_getModeKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


void __fastcall CombineServantListViewManager__remove_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B19DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19DB3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__remove_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4B19DB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19DB5 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineServantListViewManager__CreateSorteData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_Component_o *decideBtnBg; // x0
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1

  v5 = isEnable;
  if ( (byte_4B19DC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable, method);
    byte_4B19DC0 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = v5;
  if ( !decideBtnBg )
    goto LABEL_12;
  decideBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             decideBtnBg,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v7 = 1.0;
  if ( !this->fields.isDecideFlg )
    v7 = 0.5;
  if ( !decideBtnBg
    || (v8 = 1.0,
        v9 = v7,
        v10 = v7,
        UIWidget__set_color((UIWidget_o *)decideBtnBg, *(UnityEngine_Color_o *)&v7, 0LL),
        (decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(decideBtnBg, isEnable);
  }
  if ( isEnable )
    v11 = 0LL;
  else
    v11 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v11,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


void __fastcall CombineServantListViewManager__setCombineViewInfo(
        CombineServantListViewManager_o *this,
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
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  __int64 v23; // x1
  Il2CppObject *Entity; // x20
  struct UserServantEntity_o *v25; // x8
  ServantLimitImageMaster_o *v26; // x21
  struct UserServantEntity_o *v27; // x8
  int32_t v28; // w22
  UILabel_o *combineSvtInfoLabel; // x21
  UILabel_o *v30; // x20
  const MethodInfo *v31; // x1
  int32_t currentType; // w8
  struct UserServantEntity_o *v33; // x8
  UILabel_o *v34; // x20
  struct UserServantEntity_o *v35; // x8
  UILabel_o *v36; // x20
  const MethodInfo *v37; // x1
  struct UserServantEntity_o *v38; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v40; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B19E03 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_20588/*"img_nplv"*/, v16, v17);
    byte_4B19E03 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_102;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)combineViewInfo;
    v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v65.fields.currentCryptoKey = v22;
    *(_QWORD *)&v65.fields.fakeValue = v21;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v65,
                                                    0LL);
    if ( !v20 )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)combineViewInfo,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v25 = this->fields.baseUsrSvtData;
    if ( !v25 )
      goto LABEL_102;
    v26 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v25->fields.svtId,
                                                    0LL);
    v27 = this->fields.baseUsrSvtData;
    if ( !v27 )
      goto LABEL_102;
    v28 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v27->fields.limitCount,
                                                    0LL);
    if ( !v26 )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v26,
                                                    v28,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_102;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)Entity,
                                                    (int32_t)combineViewInfo,
                                                    -1,
                                                    0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_102;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    v30 = this->fields.combineSvtInfoLabel;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, method);
    if ( !v30 )
      goto LABEL_102;
    UILabel__SetCondensedScale(v30, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v31);
    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)combineViewInfo,
                                                    0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    currentType = this->fields.currentType;
    if ( currentType == 5 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v38 = this->fields.baseUsrSvtData;
      if ( !v38 )
        goto LABEL_102;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v38 + 292, 0LL);
      if ( !currentLvLabel )
        goto LABEL_102;
      UILabel__set_text(currentLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v40 = this->fields.baseUsrSvtData;
      if ( !v40 )
        goto LABEL_102;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v40 + 292, 0LL);
      if ( !resLvLabel )
        goto LABEL_102;
      UILabel__set_text(resLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.getExpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, -45.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 60, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v43, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v44, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v46, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v47, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_102;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v48, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v49, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v50, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_102;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v51, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_102;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v52, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20588/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v53, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v54, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v55, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v56, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_20588/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v57, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_102;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v58, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v59, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_102;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v60, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v61, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_102;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v62, 40.0, 0LL);
    }
    else if ( currentType == 1 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.baseUsrSvtData;
      if ( combineViewInfo )
      {
        UserServantEntity__getExpInfo((UserServantEntity_o *)combineViewInfo, &lateExp[1], lateExp, &barExp, 0LL);
        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
        if ( combineViewInfo )
        {
          combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
          if ( combineViewInfo )
          {
            UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
            if ( combineViewInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0LL);
              v33 = this->fields.baseUsrSvtData;
              if ( v33 )
              {
                v34 = this->fields.currentLvLabel;
                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v33 + 256, 0LL);
                if ( v34 )
                {
                  UILabel__set_text(v34, (System_String_o *)combineViewInfo, 0LL);
                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                  if ( combineViewInfo )
                  {
                    combineViewInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)combineViewInfo,
                                        0LL);
                    if ( combineViewInfo )
                    {
                      UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                      if ( combineViewInfo )
                      {
                        combineViewInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)combineViewInfo,
                                            0LL);
                        if ( combineViewInfo )
                        {
                          UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                          if ( combineViewInfo )
                          {
                            combineViewInfo = UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)combineViewInfo,
                                                0LL);
                            if ( combineViewInfo )
                            {
                              UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                              if ( combineViewInfo )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0LL);
                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                if ( combineViewInfo )
                                {
                                  UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0LL);
                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                  if ( combineViewInfo )
                                  {
                                    UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0LL);
                                    v35 = this->fields.baseUsrSvtData;
                                    if ( v35 )
                                    {
                                      v36 = this->fields.resLvLabel;
                                      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                      (int)v35 + 256,
                                                                                      0LL);
                                      if ( v36 )
                                      {
                                        UILabel__set_text(v36, (System_String_o *)combineViewInfo, 0LL);
                                        CombineServantListViewManager__ResetCombineViewInfoLayout(this, v37);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_102:
      sub_1BCAA3C(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *allReleaseButton; // x0
  float v8; // s8
  bool v9; // w20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19DBF & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, isShow, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    byte_4B19DBF = 1;
  }
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, isShow);
    allReleaseButton = CombineServantListViewManager_TypeInfo;
  }
  if ( !this->fields.spendQpBg )
    goto LABEL_36;
  v8 = **((float **)allReleaseButton + 23);
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.spendQpBg,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( isShow )
    v8 = 1.0;
  if ( !allReleaseButton )
    goto LABEL_36;
  v13.fields.a = 1.0;
  v13.fields.r = v8;
  v13.fields.g = v8;
  v13.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v13, 0LL);
  allReleaseButton = this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v14.fields.a = 1.0;
  v14.fields.r = v8;
  v14.fields.g = v8;
  v14.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v14, 0LL);
  allReleaseButton = this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v15.fields.a = 1.0;
  v15.fields.r = v8;
  v15.fields.g = v8;
  v15.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v15, 0LL);
  allReleaseButton = this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v16.fields.a = 1.0;
  v16.fields.r = v8;
  v16.fields.g = v8;
  v16.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v16, 0LL);
  allReleaseButton = this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v17.fields.a = 1.0;
  v17.fields.r = v8;
  v17.fields.g = v8;
  v17.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v17, 0LL);
  allReleaseButton = this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v18.fields.a = 1.0;
  v18.fields.r = v8;
  v18.fields.g = v8;
  v18.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v18, 0LL);
  allReleaseButton = this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v19.fields.a = 1.0;
  v19.fields.r = v8;
  v19.fields.g = v8;
  v19.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v19, 0LL);
  allReleaseButton = this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v20.fields.a = 1.0;
  v20.fields.r = v8;
  v20.fields.g = v8;
  v20.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v20, 0LL);
  allReleaseButton = this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v21.fields.a = 1.0;
  v21.fields.r = v8;
  v21.fields.g = v8;
  v21.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v21, 0LL);
  allReleaseButton = this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton )
    goto LABEL_36;
  v22.fields.a = 1.0;
  v22.fields.r = v8;
  v22.fields.g = v8;
  v22.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v22, 0LL);
  allReleaseButton = this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_36;
  allReleaseButton = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)allReleaseButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !allReleaseButton
    || (v23.fields.a = 1.0,
        v23.fields.r = v8,
        v23.fields.g = v8,
        v23.fields.b = v8,
        UIWidget__set_color((UIWidget_o *)allReleaseButton, v23, 0LL),
        (allReleaseButton = this->fields.nextExpLabel) == 0LL)
    || (allReleaseButton = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)allReleaseButton,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_36:
    sub_1BCAA3C(allReleaseButton, isShow);
  }
  v24.fields.a = 1.0;
  v24.fields.r = v8;
  v24.fields.g = v8;
  v24.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)allReleaseButton, v24, 0LL);
  v9 = isShow;
  CombineServantListViewManager__setDispSprite(this, v9, this->fields.combineSvtInfoBg, v10);
  CombineServantListViewManager__setDispSprite(this, v9, this->fields.qpAndExpInfoBg, v11);
  CombineServantListViewManager__setDispSprite(this, v9, this->fields.enhancementInfoBg, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispSprite(
        CombineServantListViewManager_o *this,
        bool isShow,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *ComponentsInChildren_object; // x0
  float v12; // s9
  int v13; // w8
  void *v14; // x22
  float v15; // s8
  unsigned int v16; // w23
  UnityEngine_Object_o *enhancementInfoBg; // x22
  float v18; // s2
  float v19; // s1
  float v20; // s3
  float v21; // s0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19E05 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, isShow, sprite);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19E05 = 1;
  }
  ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, isShow);
    ComponentsInChildren_object = CombineServantListViewManager_TypeInfo;
  }
  if ( !sprite )
    goto LABEL_28;
  v12 = **((float **)ComponentsInChildren_object + 23);
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)sprite,
                                  1,
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
  if ( !ComponentsInChildren_object )
    goto LABEL_28;
  v13 = *((_DWORD *)ComponentsInChildren_object + 6);
  v14 = ComponentsInChildren_object;
  if ( isShow )
    v15 = 1.0;
  else
    v15 = v12;
  if ( v13 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v13 )
        sub_1BCAA44(ComponentsInChildren_object, isShow);
      ComponentsInChildren_object = (void *)*((_QWORD *)v14 + (int)v16 + 4);
      if ( !ComponentsInChildren_object )
        break;
      v22.fields.a = 1.0;
      v22.fields.r = v15;
      v22.fields.g = v15;
      v22.fields.b = v15;
      UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, v22, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v16 >= v13 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1BCAA3C(ComponentsInChildren_object, isShow);
  }
LABEL_15:
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isShow);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0LL)
    && this->fields.currentType == 5 )
  {
    ComponentsInChildren_object = this->fields.resLvLabel;
    if ( !ComponentsInChildren_object )
      goto LABEL_28;
    v18 = 0.015686;
    if ( isShow )
      v19 = 0.92157;
    else
      v19 = v12;
    if ( !isShow )
      v18 = v12;
    v20 = 1.0;
    v21 = v15;
    UIWidget__set_color((UIWidget_o *)ComponentsInChildren_object, *(UnityEngine_Color_o *)(&v18 - 2), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setHeaderMsg(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 *v39; // x8
  System_String_o *v40; // x1
  int32_t modeKind; // w8
  __int64 *v42; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_4B19DBE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_7232/*"HEADER_MSG_NPUP_BASE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_7481/*"INFO_MSG_COMBINE_MATERIAL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_7237/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_7227/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3743/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7229/*"HEADER_MSG_LVEXCEED"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2097/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_7236/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_7225/*"HEADER_MSG_COMBINE_MATERIAL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2116/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3684/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_7235/*"HEADER_MSG_SKILLUP"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_7228/*"HEADER_MSG_LIMITUP"*/, v37, v38);
    byte_4B19DBE = 1;
  }
  switch ( type )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7237/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_44;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7225/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7228/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_44;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7235/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_44;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7232/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_44;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7481/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_44;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7229/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_44;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_3684/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_44;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7227/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_44;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_7236/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_44;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_3743/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_44;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_2097/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
      goto LABEL_44;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
      v39 = &StringLiteral_2116/*"APPEND_SKILL_EXCHANGE_SELECT_BASE_INFO"*/;
LABEL_44:
      v40 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
      break;
    default:
      v40 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  modeKind = this->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
      v42 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      goto LABEL_57;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
      v42 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_57;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
      v42 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_57:
      v40 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
      break;
  }
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_67;
  UILabel__set_text(combineInfoMsgLb, v40, 0LL);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v40 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v40 = (System_String_o *)&dword_14;
      else
        v40 = (System_String_o *)(byte_9 + 5);
    }
  }
  else
  {
    v40 = (System_String_o *)(byte_9 + 5);
  }
  if ( !combineInfoMsgLb )
LABEL_67:
    sub_1BCAA3C(combineInfoMsgLb, v40);
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setReleaseBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_1BCAA3C(0LL, isEnable);
  if ( isEnable )
    v4 = 0LL;
  else
    v4 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v4,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CombineServantListViewManager__setSelectMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  SetCombineData_o *v26; // x22
  struct SetCombineData_o **p_combineData; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  char *combineData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  struct SetCombineData_o *v45; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v47; // x8
  __int64 v48; // x9
  System_Collections_Generic_List_long__o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x21
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  struct SetCombineData_o *v57; // x19
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19DD5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, selectedItems, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v22, v23);
    sub_1BCA7E0(&SetCombineData_TypeInfo, v24, v25);
    byte_4B19DD5 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v26 = (SetCombineData_o *)sub_1BCAA2C(SetCombineData_TypeInfo, selectedItems, method, v3);
  SetCombineData___ctor(v26, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineData, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_27;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(combineData + 16), (int64_t)baseUsrSvtData, v35, v36, v37, v38, v39, v40);
  v45 = *p_combineData;
  if ( !*p_combineData )
    goto LABEL_27;
  *(_QWORD *)&v45->fields.selectSum = *(_QWORD *)&this->fields.selectSum;
  v45->fields.getExp = this->fields.selectExp;
  combineData = (char *)BalanceConfig_TypeInfo;
  getHpUpVal = this->fields.getHpUpVal;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    v47 = v45;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v34);
    combineData = (char *)BalanceConfig_TypeInfo;
    v47 = *p_combineData;
  }
  v48 = *((_QWORD *)combineData + 23);
  v45->fields.getHpAdjustVal = *(_DWORD *)(v48 + 312) * getHpUpVal;
  if ( !v47 )
    goto LABEL_27;
  v47->fields.getAtkAdjustVal = this->fields.getAtkUpVal * *(_DWORD *)(v48 + 308);
  v47->fields.isAdjustMax = this->fields.isAllUpMax;
  v47->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v49 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v34,
                                                     v43,
                                                     v44);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_object__o *)selectedItems,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v50 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_1BCAA3C(v50, v51);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v65.fields._current, 0LL) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, 0LL);
      if ( !v49 )
        sub_1BCAA3C(UserSvtId, UserSvtId);
      items = v49->fields._items;
      v55 = Method_System_Collections_Generic_List_long__Add__;
      ++v49->fields._version;
      if ( !items )
        sub_1BCAA3C(UserSvtId, UserSvtId);
      size = v49->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v49,
          UserSvtId,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v49->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v49 )
    goto LABEL_27;
  if ( v49->fields._size <= 0 )
    return;
  v57 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v49,
                          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v57 )
LABEL_27:
    sub_1BCAA3C(combineData, v34);
  v57->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v57->fields.materialUsrSvtIdList,
    (int64_t)combineData,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
}


void __fastcall CombineServantListViewManager__setSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectedMaterialUserServantIdList,
      (int64_t)tempMaterialUserServantIdList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v4; // w23
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
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  UserServantEntity_o *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 emptyListNoticeLabel; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  CombineServantListViewManager_c *v72; // x8
  int64_t v73; // x22
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v75; // x24
  __int64 i; // x19
  __int64 v77; // x8
  unsigned int *v78; // x26
  System_String_o *v79; // x22
  System_String_o *v80; // x0
  System_String_o *v81; // x23
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  ListViewSort_o *v85; // x22
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x8
  struct ListViewSort_o *v93; // x1
  CombineServantListViewManager_o *v94; // x19
  struct ListViewSort_o **p_sort; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  __int64 v104; // x9
  bool v105; // cf
  __int64 v106; // x8
  int64_t v107; // x1
  UISprite_o *scaleChangeButtonSprite; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 *p_userServantMaster; // x25
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  UserGameEntity_o *SelfUserGame; // x19
  UserDeckEntity_array *DeckList; // x29
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x24
  Il2CppObject *v121; // x0
  UILabel_o *nextExpLabel; // x24
  Il2CppObject *v123; // x0
  CombineServantListViewManager_c *v124; // x8
  UIWidget_o *v125; // x24
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x19
  UserServantEntity_o *baseUsrSvtData; // x0
  UILabel_o *v130; // x26
  Il2CppObject *v131; // x0
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x20
  System_Collections_Generic_List_object__o *v135; // x26
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  System_Collections_Generic_List_object__o *v139; // x0
  int32_t v140; // w24
  __int128 v141; // q0
  struct UserServantEntity_o *v142; // x8
  __int128 v143; // q0
  UILabel_o *v144; // x26
  Il2CppObject *v145; // x0
  int v146; // w19
  int v147; // w25
  __int64 v148; // x21
  CombineServantListViewNoticeTween_o *v149; // x26
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int v156; // w8
  unsigned int v157; // w26
  __int64 v158; // x20
  __int64 v159; // x8
  UserServantEntity_o **v160; // x20
  __int64 v161; // t1
  __int128 v162; // q0
  __int64 v163; // x2
  __int64 v164; // x3
  int max_length; // w12
  __int64 v166; // x27
  int v167; // w24
  UserDeckEntity_o *v168; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  unsigned int v171; // w9
  unsigned int j; // w10
  DeckServantData_o *v173; // x11
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  int v175; // w29
  __int64 v176; // x23
  int32_t v177; // w28
  int v178; // w21
  int32_t v179; // w19
  int v180; // w8
  __int64 v181; // x23
  UserServantEntity_o *v182; // x21
  UserServantEntity_o *v183; // x29
  int64_t favoriteUserSvtId; // x25
  bool v185; // w20
  CombineServantListViewItem_o *v186; // x0
  bool v187; // zf
  bool v188; // w4
  CombineServantListViewItem_o *v189; // x28
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  struct System_Collections_Generic_List_long__o *v196; // x8
  __int64 v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  __int64 v200; // x8
  const MethodInfo *v201; // x3
  __int64 v202; // x1
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v204; // x20
  Il2CppObject *v205; // x22
  Il2CppObject *v206; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v208; // x20
  Il2CppObject *v209; // x22
  Il2CppObject *v210; // x0
  const MethodInfo *v211; // x1
  CombineServantListViewManager_o *v212; // x20
  UILabel_o *v213; // x20
  System_String_o *v214; // x21
  Il2CppObject *v215; // x22
  Il2CppObject *v216; // x0
  UILabel_o *v217; // x20
  System_String_o *v218; // x21
  Il2CppObject *v219; // x22
  Il2CppObject *v220; // x0
  const MethodInfo *v221; // x1
  __int64 v222; // x0
  int v223; // [xsp+28h] [xbp-148h]
  int v224; // [xsp+2Ch] [xbp-144h]
  CombineServantListViewManager_o *v225; // [xsp+30h] [xbp-140h]
  UserDeckEntity_array *v226; // [xsp+38h] [xbp-138h]
  unsigned int v227; // [xsp+44h] [xbp-12Ch]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+48h] [xbp-128h]
  UserGameEntity_o *v230; // [xsp+58h] [xbp-118h]
  unsigned int typea; // [xsp+60h] [xbp-110h]
  _BOOL4 isMtSvt; // [xsp+64h] [xbp-10Ch]
  int32_t v233; // [xsp+68h] [xbp-108h] BYREF
  int v234; // [xsp+6Ch] [xbp-104h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v235; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v236; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v237; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v238; // [xsp+D0h] [xbp-A0h] BYREF
  int32_t svtKeep; // [xsp+FCh] [xbp-74h] BYREF
  float barExp[2]; // [xsp+100h] [xbp-70h] BYREF
  __int64 lateExp; // [xsp+108h] [xbp-68h] BYREF
  UnityEngine_Color_o v242; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v243; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v244; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v245; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_4B19DC1 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type, setupInfo);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CombineServantListViewNoticeTween_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&ListViewSort___TypeInfo, v22, v23);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v44, v45);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v54, v55);
    byte_4B19DC1 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, v4, (const MethodInfo *)setupInfo);
  emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v56);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v225 = this;
  typea = v4;
  if ( !*(_BYTE *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 48LL) )
  {
    v64 = sub_1BCA888(ListViewSort___TypeInfo, 13LL);
    v72 = CombineServantListViewManager_TypeInfo;
    v73 = v64;
    if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v65);
      v72 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v72->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v73;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->sortStatusList, v73, v66, v67, v68, v69, v70, v71);
    v75 = 0LL;
    for ( i = 8LL; ; i += 2LL )
    {
      emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      this = v225;
      if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v56);
        emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v77 = *(_QWORD *)(emptyListNoticeLabel + 184);
      if ( i == 34 )
        break;
      v78 = *(unsigned int **)(v77 + 56);
      v79 = *(System_String_o **)(v77 + 40);
      LODWORD(barExp[0]) = v75 + 1;
      v80 = System_Int32__ToString((int32_t)barExp, 0LL);
      v81 = System_String__Concat_62401220(v79, v80, 0LL);
      v85 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v82, v83, v84);
      ListViewSort___ctor_41480716(v85, v81, 3, 0, 0LL);
      if ( !v78 )
        goto LABEL_167;
      if ( v85 )
      {
        emptyListNoticeLabel = sub_1BCA91C(v85, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
        if ( !emptyListNoticeLabel )
        {
          v222 = sub_1BCAA60(0LL);
          sub_1BCA908(v222, 0LL);
        }
      }
      if ( v75 >= v78[6] )
        goto LABEL_168;
      *(_QWORD *)&v78[i] = v85;
      sub_1BCA784((PartyOrganizationUtility_o *)&v78[i], (int64_t)v85, v86, v87, v88, v89, v90, v91);
      ++v75;
    }
    v4 = typea;
    *(_BYTE *)(v77 + 48) = 1;
  }
  if ( !*(_DWORD *)(emptyListNoticeLabel + 224) )
  {
    j_il2cpp_runtime_class_init_0(emptyListNoticeLabel, v56);
    emptyListNoticeLabel = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v92 = *(_QWORD *)(*(_QWORD *)(emptyListNoticeLabel + 184) + 56LL);
  if ( !v92 )
    goto LABEL_167;
  if ( *(_DWORD *)(v92 + 24) <= (unsigned int)v4 )
    goto LABEL_168;
  v93 = *(struct ListViewSort_o **)(v92 + 8LL * v4 + 32);
  v94 = this;
  this->fields.sort = v93;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)p_sort, (int64_t)v93, v57, v58, v59, v60, v61, v62);
  emptyListNoticeLabel = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_167;
  ListViewSort__Load((ListViewSort_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v94->fields.emptyListNoticeLabel;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)emptyListNoticeLabel,
                                    0LL);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
  sort = v94->fields.sort;
  v94->fields.itemType = v4;
  if ( !sort )
    goto LABEL_167;
  iconScaleKind = sort->fields.iconScaleKind;
  v94->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v104 = 816LL;
    v105 = (unsigned int)(v94->fields.currentType - 11) >= 2;
    v106 = 840LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v104 = 824LL;
    v105 = (unsigned int)(v94->fields.currentType - 11) >= 2;
    v106 = 848LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_36;
    v104 = 832LL;
    v105 = (unsigned int)(v94->fields.currentType - 11) >= 2;
    v106 = 856LL;
  }
  if ( v105 )
    v106 = v104;
  v107 = *(int64_t *)((char *)&v94->klass + v106);
  v94->fields.seed = (struct ListViewItemSeed_o *)v107;
  sub_1BCA784((PartyOrganizationUtility_o *)&v94->fields.seed, v107, v96, v97, v98, v99, v100, v101);
LABEL_36:
  emptyListNoticeLabel = (__int64)v94->fields.sort;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  scaleChangeButtonSprite = v94->fields.scaleChangeButtonSprite;
  emptyListNoticeLabel = (__int64)ListViewSort__GetScaleKindSpriteName(
                                    (ListViewSort_o *)emptyListNoticeLabel,
                                    v94->fields.scaleType,
                                    0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_167;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)emptyListNoticeLabel,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = (__int64 *)&v225->fields.userServantMaster;
  v225->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v225->fields.userServantMaster,
    (int64_t)MasterData_object,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  emptyListNoticeLabel = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_167;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)emptyListNoticeLabel, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v225, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = v225->fields.haveQpLabel;
  v225->fields.userQP = qp;
  LODWORD(v238.fields.currentCryptoKey) = qp;
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v121, 0LL);
  if ( !haveQpLabel )
    goto LABEL_167;
  UILabel__set_text(haveQpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  *(_QWORD *)&v225->fields.selectSum = 0LL;
  v225->fields.selectExp = 0;
  *(_QWORD *)&v225->fields.getHpUpVal = 0LL;
  *(_WORD *)&v225->fields.isAllUpMax = 0;
  LODWORD(lateExp) = 0;
  nextExpLabel = v225->fields.nextExpLabel;
  svtKeep = 0;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v123, 0LL);
  if ( !nextExpLabel )
    goto LABEL_167;
  v230 = SelfUserGame;
  UILabel__set_text(nextExpLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  emptyListNoticeLabel = (__int64)v225->fields.spendQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v124 = CombineServantListViewManager_TypeInfo;
  v125 = (UIWidget_o *)emptyListNoticeLabel;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v56);
    v124 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v125 )
    goto LABEL_167;
  v242.fields.a = 1.0;
  v242.fields.r = v124->static_fields->COLOR_VAL;
  v242.fields.g = v242.fields.r;
  v242.fields.b = v242.fields.r;
  UIWidget__set_color(v125, v242, 0LL);
  emptyListNoticeLabel = (__int64)v225->fields.getExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v243.fields.a = 1.0;
  v243.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v243.fields.g = v243.fields.r;
  v243.fields.b = v243.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v243, 0LL);
  emptyListNoticeLabel = (__int64)v225->fields.haveQpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v244.fields.a = 1.0;
  v244.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v244.fields.g = v244.fields.r;
  v244.fields.b = v244.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v244, 0LL);
  emptyListNoticeLabel = (__int64)v225->fields.nextExpMask;
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  emptyListNoticeLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)emptyListNoticeLabel,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !emptyListNoticeLabel )
    goto LABEL_167;
  v245.fields.a = 1.0;
  v245.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  v245.fields.g = v245.fields.r;
  v245.fields.b = v245.fields.r;
  UIWidget__set_color((UIWidget_o *)emptyListNoticeLabel, v245, 0LL);
  if ( typea <= 0xC && ((1 << typea) & 0x1FDD) != 0 )
  {
    emptyListNoticeLabel = (__int64)v225->fields.levelUpInfoImg;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 0, 0LL);
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getOrganizationList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v128 = emptyListNoticeLabel;
    v224 = *(_DWORD *)(emptyListNoticeLabel + 24);
    if ( v224 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v225->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    baseUsrSvtData = v225->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      UserServantEntity__getExpInfo(baseUsrSvtData, (int32_t *)&lateExp + 1, (int32_t *)&lateExp, &barExp[1], 0LL);
      v130 = v225->fields.nextExpLabel;
      LODWORD(v238.fields.currentCryptoKey) = lateExp;
      v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238);
      emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v131, 0LL);
      if ( !v130 )
        goto LABEL_167;
      UILabel__set_text(v130, (System_String_o *)emptyListNoticeLabel, 0LL);
    }
  }
  else
  {
    v224 = 0;
    v128 = 0LL;
  }
  if ( typea == 1 )
  {
    emptyListNoticeLabel = *p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_167;
    emptyListNoticeLabel = (__int64)UserServantMaster__getCombineMaterialList(
                                      (UserServantMaster_o *)emptyListNoticeLabel,
                                      0LL);
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    v134 = emptyListNoticeLabel;
    v135 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                          v56,
                                                          v132,
                                                          v133);
    System_Collections_Generic_List_object____ctor_56235344(
      v135,
      (System_Collections_Generic_IEnumerable_T__o *)v134,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
    v139 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                          v136,
                                                          v137,
                                                          v138);
    System_Collections_Generic_List_object____ctor(
      v139,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( v225->fields.baseUsrSvtData )
    {
      if ( !v135 )
        goto LABEL_167;
      if ( v135->fields._size >= 1 )
      {
        v140 = 0;
        do
        {
          emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                            v135,
                                            v140,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !emptyListNoticeLabel )
            goto LABEL_167;
          v141 = *(_OWORD *)(emptyListNoticeLabel + 32);
          *(_OWORD *)&v238.fields.currentCryptoKey = *(_OWORD *)(emptyListNoticeLabel + 16);
          *(_OWORD *)&v238.fields.fakeValue = v141;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v56);
          v237 = v238;
          emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v237, 0LL);
          v142 = v225->fields.baseUsrSvtData;
          if ( !v142 )
            goto LABEL_167;
          v143 = *(_OWORD *)&v142->fields.id.fields.fakeValue;
          *(_OWORD *)&v236.fields.currentCryptoKey = *(_OWORD *)&v142->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v236.fields.fakeValue = v143;
          if ( emptyListNoticeLabel == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v236, 0LL) )
            System_Collections_Generic_List_object___RemoveAt(
              v135,
              v140,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
        }
        while ( ++v140 < v135->fields._size );
      }
      emptyListNoticeLabel = (__int64)System_Collections_Generic_List_object___ToArray(
                                        v135,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v134 = emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
    }
    v128 = v134;
    v224 = *(_DWORD *)(v134 + 24);
    if ( v224 <= 0 )
    {
      emptyListNoticeLabel = (__int64)v225->fields.emptyListNoticeLabel;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)emptyListNoticeLabel,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
    }
    emptyListNoticeLabel = (__int64)v225->fields.baseUsrSvtData;
    if ( !emptyListNoticeLabel )
      goto LABEL_167;
    UserServantEntity__getExpInfo(
      (UserServantEntity_o *)emptyListNoticeLabel,
      (int32_t *)&lateExp + 1,
      (int32_t *)&lateExp,
      &barExp[1],
      0LL);
    v144 = v225->fields.nextExpLabel;
    LODWORD(v238.fields.currentCryptoKey) = lateExp;
    v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238);
    emptyListNoticeLabel = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v145, 0LL);
    if ( !v144 )
      goto LABEL_167;
    UILabel__set_text(v144, (System_String_o *)emptyListNoticeLabel, 0LL);
  }
  if ( typea == 5 )
  {
    v56 = v225->fields.baseUsrSvtData;
    if ( v56 )
    {
      emptyListNoticeLabel = *p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_167;
      emptyListNoticeLabel = (__int64)UserServantMaster__getNpUpServantList(
                                        (UserServantMaster_o *)emptyListNoticeLabel,
                                        v56,
                                        0LL);
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v146 = *(_DWORD *)(emptyListNoticeLabel + 24);
      v147 = 5;
      v148 = emptyListNoticeLabel;
      v223 = v146;
      if ( v146 <= 0 )
      {
        emptyListNoticeLabel = (__int64)v225->fields.emptyListNoticeLabel;
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        emptyListNoticeLabel = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)emptyListNoticeLabel,
                                          0LL);
        if ( !emptyListNoticeLabel )
          goto LABEL_167;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyListNoticeLabel, 1, 0LL);
      }
      v224 = v146;
    }
    else
    {
      v147 = 5;
      v148 = v128;
      v223 = 0;
    }
  }
  else
  {
    v147 = typea;
    v223 = 0;
    v148 = v128;
  }
  if ( !v225->fields.noticeTween )
  {
    v149 = (CombineServantListViewNoticeTween_o *)sub_1BCAA2C(
                                                    CombineServantListViewNoticeTween_TypeInfo,
                                                    v56,
                                                    v126,
                                                    v127);
    CombineServantListViewNoticeTween___ctor(v149, (UnityEngine_MonoBehaviour_o *)v225, 0LL);
    v147 = typea;
    v225->fields.noticeTween = v149;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v225->fields.noticeTween,
      (int64_t)v149,
      v150,
      v151,
      v152,
      v153,
      v154,
      v155);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_1BCAA2C(
                                                                                           System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                           v56,
                                                                                           v126,
                                                                                           v127);
  System_Collections_Generic_Dictionary_int__object____ctor(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedUserServantNpLvDict,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v148 )
LABEL_167:
    sub_1BCAA3C(emptyListNoticeLabel, v56);
  v156 = *(_DWORD *)(v148 + 24);
  if ( v156 >= 1 )
  {
    v157 = 0;
    v227 = v147 & 0xFFFFFFFB;
    v226 = DeckList;
    while ( 1 )
    {
      if ( v157 >= v156 )
        goto LABEL_168;
      v158 = v148 + 8LL * (int)v157;
      v161 = *(_QWORD *)(v158 + 32);
      v160 = (UserServantEntity_o **)(v158 + 32);
      v159 = v161;
      if ( !v161 )
        goto LABEL_167;
      v162 = *(_OWORD *)(v159 + 32);
      *(_OWORD *)&v238.fields.currentCryptoKey = *(_OWORD *)(v159 + 16);
      *(_OWORD *)&v238.fields.fakeValue = v162;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v56);
      v235 = v238;
      emptyListNoticeLabel = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v235, 0LL);
      if ( !DeckList )
        goto LABEL_167;
      max_length = DeckList->max_length;
      v166 = emptyListNoticeLabel;
      if ( max_length >= 1 )
        break;
      v167 = 0;
LABEL_125:
      if ( (v147 | 4) == 5
        && (selectedMaterialUserServantIdList = v225->fields.selectedMaterialUserServantIdList) != 0LL
        && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        v175 = DeckList->max_length;
        v176 = v148;
        v177 = 0;
        v178 = 0;
        v179 = 0;
        do
        {
          emptyListNoticeLabel = System_Collections_Generic_List_long___get_Item(
                                   selectedMaterialUserServantIdList,
                                   v177,
                                   (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
          selectedMaterialUserServantIdList = v225->fields.selectedMaterialUserServantIdList;
          if ( !selectedMaterialUserServantIdList )
            goto LABEL_167;
          if ( emptyListNoticeLabel == v166 )
            v179 = v177;
          ++v177;
          if ( emptyListNoticeLabel == v166 )
            v178 = 1;
        }
        while ( v177 < selectedMaterialUserServantIdList->fields._size );
        v180 = v178;
        v148 = v176;
        max_length = v175;
        isMtSvt = v180;
      }
      else
      {
        isMtSvt = 0;
        v179 = 0;
      }
      if ( v157 >= *(_DWORD *)(v148 + 24) )
        goto LABEL_168;
      v181 = v148;
      v182 = *v160;
      v183 = v225->fields.baseUsrSvtData;
      favoriteUserSvtId = v230->fields.favoriteUserSvtId;
      v185 = v167 < max_length;
      v186 = (CombineServantListViewItem_o *)sub_1BCAA2C(CombineServantListViewItem_TypeInfo, v56, v163, v164);
      v187 = v166 == favoriteUserSvtId;
      v147 = typea;
      v188 = v187;
      v189 = v186;
      CombineServantListViewItem___ctor(
        v186,
        typea,
        v157,
        v182,
        v188,
        v185,
        v183,
        isMtSvt,
        setupInfo,
        cachedUserServantNpLvDict,
        0LL);
      if ( !v189 )
        goto LABEL_167;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(v189, v225->fields.eventCampaignEntities, 0LL);
      CombineServantListViewItem__SetNoticeTween(v189, v225->fields.noticeTween, 0LL);
      v148 = v181;
      if ( v227 == 1 && isMtSvt )
      {
        v189->fields.selectNum = v179;
        v196 = v225->fields.selectedMaterialUserServantIdList;
        ++v225->fields.selectSum;
        if ( !v196 )
          goto LABEL_167;
        if ( v179 == v196->fields._size - 1 )
          v189->fields.isLastSelectMaterial = 1;
      }
      emptyListNoticeLabel = (__int64)v225->fields.itemList;
      if ( !emptyListNoticeLabel )
        goto LABEL_167;
      v197 = *(_QWORD *)(emptyListNoticeLabel + 16);
      DeckList = v226;
      v198 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(emptyListNoticeLabel + 28);
      if ( !v197 )
        goto LABEL_167;
      v199 = *(int *)(emptyListNoticeLabel + 24);
      if ( (unsigned int)v199 >= *(_DWORD *)(v197 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)emptyListNoticeLabel,
          (Il2CppObject *)v189,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
      }
      else
      {
        v200 = v197 + 8 * v199;
        *(_DWORD *)(emptyListNoticeLabel + 24) = v199 + 1;
        *(_QWORD *)(v200 + 32) = v189;
        sub_1BCA784((PartyOrganizationUtility_o *)(v200 + 32), (int64_t)v189, v190, v191, v192, v193, v194, v195);
      }
      emptyListNoticeLabel = ListViewItem__get_IsSelect((ListViewItem_o *)v189, 0LL);
      if ( (emptyListNoticeLabel & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(v225, 1, v189, v201);
      v156 = *(_DWORD *)(v181 + 24);
      if ( (int)++v157 >= v156 )
        goto LABEL_155;
    }
    v167 = 0;
    while ( v167 != max_length )
    {
      v168 = DeckList->m_Items[v167];
      if ( !v168 )
        goto LABEL_167;
      deckInfo = v168->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_167;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_167;
      v171 = svts->max_length;
      for ( j = 0; (int)j < (int)v171; ++j )
      {
        if ( j >= v171 )
          goto LABEL_168;
        v173 = svts->m_Items[j];
        if ( !v173 )
          goto LABEL_167;
        if ( v173->fields.userSvtId == emptyListNoticeLabel )
          goto LABEL_125;
      }
      if ( ++v167 == max_length )
        goto LABEL_125;
    }
LABEL_168:
    sub_1BCAA44(emptyListNoticeLabel, v56);
  }
LABEL_155:
  CombineServantListViewManager__RefrashListDisp(v225, (const MethodInfo *)v56);
  servantInfoLabel = v225->fields.servantInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v202);
  v204 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  LODWORD(v238.fields.currentCryptoKey) = v224;
  v205 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238);
  svtKeep = v230->fields.svtKeep;
  v206 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  emptyListNoticeLabel = (__int64)System_String__Format_62415592(v204, v205, v206, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_167;
  UILabel__set_text(servantInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  cardInfoLabel = v225->fields.cardInfoLabel;
  v208 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  v234 = v224;
  v209 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
  v233 = v230->fields.svtKeep;
  v210 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
  emptyListNoticeLabel = (__int64)System_String__Format_62415592(v208, v209, v210, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_167;
  UILabel__set_text(cardInfoLabel, (System_String_o *)emptyListNoticeLabel, 0LL);
  v212 = v225;
  if ( v147 == 5 )
  {
    v213 = v225->fields.servantInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v211);
    v214 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
    LODWORD(v238.fields.currentCryptoKey) = v223;
    v215 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238);
    svtKeep = v224;
    v216 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    emptyListNoticeLabel = (__int64)System_String__Format_62415592(v214, v215, v216, 0LL);
    if ( !v213 )
      goto LABEL_167;
    UILabel__set_text(v213, (System_String_o *)emptyListNoticeLabel, 0LL);
    v217 = v225->fields.cardInfoLabel;
    v218 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
    v234 = v223;
    v219 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
    v233 = v224;
    v220 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
    emptyListNoticeLabel = (__int64)System_String__Format_62415592(v218, v219, v220, 0LL);
    if ( !v217 )
      goto LABEL_167;
    UILabel__set_text(v217, (System_String_o *)emptyListNoticeLabel, 0LL);
    v212 = v225;
  }
  CombineServantListViewManager__SetMaterialSvtInfo(v212, v211);
  ListViewManager__SortItem((ListViewManager_o *)v212, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(v212, v221);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A11880;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11828;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineServantListViewManager_CallbackFunc__BeginInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = kind;
  if ( (byte_4B19E0E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind, list);
    byte_4B19E0E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CombineServantListViewManager_CallbackFunc__Invoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_Int32_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    list,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_RequestCallbackFunc___ctor(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A118F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A118B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B19E0F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B19E0F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__Invoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CombineServantListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B19E10 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager___c_TypeInfo, v1, v2);
    byte_4B19E10 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CombineServantListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CombineServantListViewManager___c_TypeInfo->static_fields->__9 = (struct CombineServantListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineServantListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CombineServantListViewManager___c___ctor(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineServantListViewManager___c___AfterCheckMaterial_b__174_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void __fastcall CombineServantListViewManager___c___OnClickSelectMaterial_b__187_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager___c__DisplayClass172_0___ctor(
        CombineServantListViewManager___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass172_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass172_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass172_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int128 v7; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  CombineServantListViewManager___c__DisplayClass172_0_o *v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B19E11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, item, method);
    this = (CombineServantListViewManager___c__DisplayClass172_0_o *)sub_1BCA7E0(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v5,
                                                                       v6);
    byte_4B19E11 = 1;
  }
  if ( !item )
    goto LABEL_9;
  v7 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
  v11 = v12;
  this = (CombineServantListViewManager___c__DisplayClass172_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                     &v11,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        (this = (CombineServantListViewManager___c__DisplayClass172_0_o *)_4__this->fields.selectedMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, item);
  }
  return v9 == (CombineServantListViewManager___c__DisplayClass172_0_o *)System_Collections_Generic_List_long___get_Item(
                                                                           (System_Collections_Generic_List_long__o *)this,
                                                                           v4->fields.i,
                                                                           (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___ctor(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B19E12 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__, v7, v8);
    byte_4B19E12 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass188_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass188_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass228_0___ctor(
        CombineServantListViewManager___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager___c__DisplayClass228_0___IsLargeSuccessCampaignClassId_b__0(
        CombineServantListViewManager___c__DisplayClass228_0_o *this,
        int32_t camSvtClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1BCAA3C(this, *(_QWORD *)&camSvtClassId);
  return svtEntity->fields.classId == camSvtClassId;
}