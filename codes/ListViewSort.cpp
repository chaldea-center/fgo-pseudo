void ListViewSort___ctor(ListViewSort_o *this, int32_t sortKind, bool isAscendingOrder, const MethodInfo *method)
{
  bool v6; // w22
  struct System_Boolean_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Boolean_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Boolean_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_Dictionary_int__int__o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_Dictionary_int__object__o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Boolean_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Boolean_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  const MethodInfo *v68; // x1
  __int128 v69; // [xsp+18h] [xbp-78h]
  struct System_String_o *v70; // [xsp+28h] [xbp-68h] BYREF

  v6 = isAscendingOrder;
  if ( (byte_4D3210A & 1) == 0 )
  {
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4D3210A = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v7 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 102);
  this->fields.isFilterList = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.isFilterList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v14;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v21;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v28,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v35,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v35;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v42;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v49;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  LODWORD(v69) = 0;
  HIDWORD(v69) = 0;
  *(_QWORD *)((char *)&v69 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v70, (int32_t)v70, v56, v57, v58, v59, v60, v61);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v70;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v69;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.defaultSortKind = sortKind;
  this->fields.isDefaultAscendingOrder = v6;
  this->fields.isAscendingOrder = 1;
  this->fields.listViewKind = 0;
  this->fields.filter2Kind = 0;
  this->fields.expUpDispType = 0;
  this->fields.sortKind = 3;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v68);
  this->fields.sortKind = sortKind;
  this->fields.isAscendingOrder = v6;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
}


void ListViewSort___ctor_44521036(
        ListViewSort_o *this,
        System_String_o *saveKey,
        int32_t sortKind,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  bool v8; // w23
  struct System_Boolean_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Boolean_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Boolean_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_Dictionary_int__int__o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_Dictionary_int__object__o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Boolean_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Boolean_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  const MethodInfo *v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int128 v77; // [xsp+18h] [xbp-78h]
  struct System_String_o *v78; // [xsp+28h] [xbp-68h] BYREF

  v8 = isAscendingOrder;
  if ( (byte_4D3210B & 1) == 0 )
  {
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4D3210B = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v9 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 102);
  this->fields.isFilterList = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.isFilterList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v16;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v23;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v30;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v37,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v37;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v44;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v51;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  LODWORD(v77) = 0;
  HIDWORD(v77) = 0;
  *(_QWORD *)((char *)&v77 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v78, (int32_t)v78, v58, v59, v60, v61, v62, v63);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v78;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v77;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isAscendingOrder = 1;
  this->fields.defaultSortKind = sortKind;
  this->fields.isDefaultAscendingOrder = v8;
  this->fields.listViewKind = 0;
  this->fields.filter2Kind = 0;
  this->fields.expUpDispType = 0;
  this->fields.sortKind = 3;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v70);
  this->fields.saveKey = saveKey;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.saveKey, (int32_t)saveKey, v71, v72, v73, v74, v75, v76);
  this->fields.sortKind = sortKind;
  this->fields.isAscendingOrder = v8;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  if ( !System_String__IsNullOrEmpty(this->fields.saveKey, 0) )
    this->fields.isRequestLoad = 1;
}


void ListViewSort___ctor_44521760(ListViewSort_o *this, ListViewSort_o *o, const MethodInfo *method)
{
  struct System_Boolean_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Boolean_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Boolean_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_Dictionary_int__int__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_Dictionary_int__object__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Boolean_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_Boolean_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  const MethodInfo *v66; // x2
  __int128 v67; // [xsp+8h] [xbp-68h]
  struct System_String_o *v68; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D3210C & 1) == 0 )
  {
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4D3210C = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v5 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 102);
  this->fields.isFilterList = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.isFilterList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v12;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v19;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v26;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v33,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v33;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v40;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v47;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  LODWORD(v67) = 0;
  HIDWORD(v67) = 0;
  *(_QWORD *)((char *)&v67 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68, (int32_t)v68, v54, v55, v56, v57, v58, v59);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v68;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v67;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  System_Object___ctor((Il2CppObject *)this, 0);
  ListViewSort__Set(this, o, v66);
}


void ListViewSort__AdjustmentEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *svtEventBonusFilterDic; // x0
  System_Collections_Generic_HashSet_int__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t current; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4D32111 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D32111 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  memset(&i, 0, sizeof(i));
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         svtEventBonusFilterDic,
         (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                     (EventMaster_o *)svtEventBonusFilterDic,
                                                                                     0,
                                                                                     0,
                                                                                     0);
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  v4 = (System_Collections_Generic_HashSet_int__o *)svtEventBonusFilterDic;
  if ( svtEventBonusFilterDic->fields._count <= 0 )
  {
    svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
    {
      System_Collections_Generic_Dictionary_int__object___Clear(
        svtEventBonusFilterDic,
        (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
      goto LABEL_29;
    }
LABEL_34:
    sub_1C93D2C(svtEventBonusFilterDic, method);
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                                                     svtEventBonusFilterDic,
                                                                                     (const MethodInfo_34BCA44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v15,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)svtEventBonusFilterDic,
    (const MethodInfo_37910CC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
  v17 = v15;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v17,
            (const MethodInfo_361E6E0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__) )
  {
    current = v17.fields._current;
    v7 = System_Collections_Generic_HashSet_int___Contains(
           v4,
           v17.fields._current,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( !v7 )
    {
      if ( !v5 )
        sub_1C93D2C(v7, v8);
      items = v5->fields._items;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v7, v8);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          current,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = current;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v17,
    (const MethodInfo_361E6DC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
  if ( !v5 )
    goto LABEL_34;
  if ( v5->fields._size <= 0 )
    return;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    v5,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v15;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)v13,
          i.fields._current,
          (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__int____Remove__) )
  {
    v13 = this->fields.svtEventBonusFilterDic;
    if ( !v13 )
      sub_1C93D2C(0, v12);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_29:
  ListViewSort__SetSvtEventBonusFilter(this, v14);
}


void ListViewSort__BonusFilterGroupingCheck(
        ListViewSort_BonusFilterInfo_array **combineCampaignFilterEntities,
        ListViewSort_BonusFilterInfo_array **campaignEventFilterEntities,
        ListViewSort_BonusFilterInfo_array **eventFilterEntities,
        ListViewSort_BonusFilterInfo_array **finishEventFilterEntities,
        ListViewSort_BonusFilterInfo_array **servantFilterEntities,
        const MethodInfo *method)
{
  __int64 v6; // x24
  __int64 *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ListViewSort_BonusFilterInfo_array *v29; // x1
  ListViewSort_BonusFilterInfo_array *v30; // x1
  ListViewSort_BonusFilterInfo_array *v31; // x1
  ListViewSort_BonusFilterInfo_array *v32; // x1
  ListViewSort_BonusFilterInfo_array *v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *v35; // x20
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v36; // x0
  ListViewSort___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x25
  System_Func_object__bool__o *_9__163_5; // x19
  Il2CppObject *v40; // x20
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  System_Func_object__object__o *v49; // x20
  __int64 v50; // x8
  void *v51; // x25
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x25
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  ListViewSort___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x27
  System_Func_object__int__o *_9__163_7; // x28
  Il2CppObject *v69; // x19
  struct ListViewSort___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v77; // x0
  ListViewSort___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x28
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__163_8; // x19
  Il2CppObject *v82; // x20
  struct ListViewSort___c_StaticFields *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0

  if ( (byte_4D32127 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_EventGroupEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
    sub_1C93AD4(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Func_EventGroupEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C93AD4(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__);
    sub_1C93AD4(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__);
    sub_1C93AD4(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__);
    sub_1C93AD4(&ListViewSort___c__DisplayClass163_0_TypeInfo);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D32127 = 1;
  }
  v6 = sub_1C93D20(ListViewSort___c__DisplayClass163_0_TypeInfo);
  ListViewSort___c__DisplayClass163_0___ctor((ListViewSort___c__DisplayClass163_0_o *)v6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64 *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !v6 )
    goto LABEL_69;
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  v15 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v6 + 24) = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v22,
    (const MethodInfo_39223E8 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v6 + 16) = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  if ( *combineCampaignFilterEntities )
    v29 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*combineCampaignFilterEntities,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v29 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v29,
    0);
  if ( *campaignEventFilterEntities )
    v30 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*campaignEventFilterEntities,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v30 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v30,
    0);
  if ( *eventFilterEntities )
    v31 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*eventFilterEntities,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v31 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v31,
    0);
  if ( *finishEventFilterEntities )
    v32 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*finishEventFilterEntities,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v32 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v32,
    0);
  if ( *servantFilterEntities )
    v33 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*servantFilterEntities,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v33 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v33,
    0);
  v34 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
  v35 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__int____ctor(
    v35,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__,
    0);
  v36 = System_Linq_Enumerable__GroupBy_ListViewSort_BonusFilterInfo__int_(
          v34,
          (System_Func_TSource__TKey__o *)v35,
          (const MethodInfo_31CE294 *)Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
  v37 = ListViewSort___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v37 = ListViewSort___c_TypeInfo;
  }
  _9__163_5 = (System_Func_object__bool__o *)v37->static_fields->__9__163_5;
  if ( !_9__163_5 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = ListViewSort___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__163_5 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    System_Func_object__bool____ctor(_9__163_5, v40, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__, 0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__163_5 = (struct System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__o *)_9__163_5;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__163_5,
      (int32_t)_9__163_5,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)_9__163_5,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
  v49 = (System_Func_object__object__o *)sub_1C93D20(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
  System_Func_object__object____ctor(
    v49,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__,
    0);
  Master_object = (__int64 *)System_Linq_Enumerable__Select_object__object_(
                               v48,
                               (System_Func_TSource__TResult__o *)v49,
                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
  if ( !Master_object )
LABEL_69:
    sub_1C93D2C(Master_object, v8);
  v50 = *Master_object;
  v51 = Master_object;
  v52 = *(unsigned __int16 *)(*Master_object + 302);
  if ( *(_WORD *)(*Master_object + 302) )
  {
    v53 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_List_EventGroupEntity___c **)v53 - 1) != System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_32;
    }
    v54 = v50 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_32:
    v54 = sub_1C69E5C(Master_object, System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo, 0);
  }
  v56 = (*(__int64 (__fastcall **)(void *, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
  if ( !v56 )
    sub_1C93D2C(0, v55);
  while ( 1 )
  {
    v57 = *(_QWORD *)v56;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_39;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_39:
      v60 = sub_1C69E5C(v56, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) == 0 )
      break;
    v61 = *(_QWORD *)v56;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_List_EventGroupEntity___c **)v63 - 1) != System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_46;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_46:
      v64 = sub_1C69E5C(v56, System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo, 0);
    }
    v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v56, *(_QWORD *)(v64 + 8));
    v66 = ListViewSort___c_TypeInfo;
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
    if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
      v66 = ListViewSort___c_TypeInfo;
    }
    _9__163_7 = (System_Func_object__int__o *)v66->static_fields->__9__163_7;
    if ( !_9__163_7 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v66 = ListViewSort___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v66->static_fields->__9;
      _9__163_7 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EventGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__163_7, v69, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__, 0);
      v70 = ListViewSort___c_TypeInfo->static_fields;
      v70->__9__163_7 = (struct System_Func_EventGroupEntity__int__o *)_9__163_7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v70->__9__163_7, (int32_t)_9__163_7, v71, v72, v73, v74, v75, v76);
    }
    v77 = System_Linq_Enumerable__Select_object__int_(
            v67,
            (System_Func_TSource__TResult__o *)_9__163_7,
            (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_EventGroupEntity__int___);
    v78 = ListViewSort___c_TypeInfo;
    v79 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
    v80 = (System_Collections_Generic_IEnumerable_TSource__o *)v77;
    if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
      v78 = ListViewSort___c_TypeInfo;
    }
    _9__163_8 = v78->static_fields->__9__163_8;
    if ( !_9__163_8 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        v78 = ListViewSort___c_TypeInfo;
      }
      v82 = (Il2CppObject *)v78->static_fields->__9;
      _9__163_8 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__int____ctor(
        _9__163_8,
        v82,
        Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__,
        0);
      v83 = ListViewSort___c_TypeInfo->static_fields;
      v83->__9__163_8 = _9__163_8;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v83->__9__163_8, (int32_t)_9__163_8, v84, v85, v86, v87, v88, v89);
    }
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__int_(
                                                                 v79,
                                                                 (System_Func_TSource__TResult__o *)_9__163_8,
                                                                 (const MethodInfo_31DC9CC *)Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___);
    v91 = System_Linq_Enumerable__Intersect_int_(
            v80,
            v90,
            (const MethodInfo_31CE324 *)Method_System_Linq_Enumerable_Intersect_int___);
    if ( System_Linq_Enumerable__Count_int_(v91, (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___) >= 2 )
    {
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        combineCampaignFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v67,
        0);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        campaignEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v67,
        0);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        eventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v67,
        0);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        finishEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v67,
        0);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        servantFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v67,
        0);
    }
  }
  v92 = *(_QWORD *)v56;
  v93 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
  {
    v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_66;
    }
    v95 = v92 + 16LL * *v94 + 312;
  }
  else
  {
LABEL_66:
    v95 = sub_1C69E5C(v56, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v95)(v56, *(_QWORD *)(v95 + 8));
}


int32_t ListViewSort__BonusFilterKindIndex(
        int32_t kindId,
        int32_t kind,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isQuestStart,
        int64_t nowTime,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x20
  int32_t *p_eventId; // x25

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !bonusFilterInfos )
    sub_1C93D2C(IsNullOrEmpty, v12);
  max_length = bonusFilterInfos->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_11:
    LODWORD(v15) = -1;
  }
  else
  {
    v15 = 0;
    p_eventId = &bonusFilterInfos->m_Items[0].fields.eventId;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C93D34(IsNullOrEmpty);
      if ( *(p_eventId - 1) == kind && *p_eventId == kindId )
      {
        if ( !isQuestStart )
          break;
        IsNullOrEmpty = ListViewSort__IsFinishedCampaignId(kindId, kind, nowTime, v13);
        if ( !IsNullOrEmpty )
          break;
      }
      LODWORD(max_length) = bonusFilterInfos->max_length;
      ++v15;
      p_eventId += 6;
      if ( (__int64)v15 >= (int)max_length )
        goto LABEL_11;
    }
  }
  return v15;
}


bool ListViewSort__CheckBonusSelectSummonFilterDefaultAll(
        ListViewSort_o *this,
        int32_t servantFilterKind,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v7; // x21
  const MethodInfo *v8; // x1
  FilterKindList_c *v9; // x0
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x10
  FilterKindList_c *v14; // x0
  FilterKindList_c *v15; // x0
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  int32_t v19; // w9
  char *v20; // x8
  int v21; // w10
  FilterKindList_c *v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int32_t v27; // w1
  __int64 v28; // x24
  unsigned __int64 v29; // x22
  struct System_Boolean_array *isFilterList; // x8
  const MethodInfo *v31; // x2

  if ( (byte_4D32131 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4D32131 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v7 )
    goto LABEL_42;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
    (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
    (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  items = v7->fields._items;
  v11 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      65,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_42;
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 65;
    ++v7->fields._version;
  }
  v13 = v7->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      66,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 66;
  }
  if ( servantFilterKind != 14 )
  {
    if ( servantFilterKind != 13 )
    {
      if ( servantFilterKind == 12 )
      {
        v14 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v14 = FilterKindList_TypeInfo;
        }
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)v14->static_fields->ClassExtra1FilterKindList,
          (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
          (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
          (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      }
      goto LABEL_33;
    }
    v22 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v22 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v22->static_fields->ClassExtra2FilterKindList,
      (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    v23 = v7->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v7->fields._version;
    if ( v23 )
    {
      v25 = v7->fields._size;
      if ( (unsigned int)v25 < LODWORD(v23->max_length) )
      {
        v19 = v25 + 1;
        v20 = (char *)v23 + 4 * v25;
        v21 = 68;
        goto LABEL_29;
      }
      v26 = v24[4];
      v27 = 68;
LABEL_32:
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v7,
        v27,
        *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v26 + 192) + 112LL));
      goto LABEL_33;
    }
LABEL_42:
    sub_1C93D2C(v9, v8);
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v15->static_fields->ClassExtra1FilterKindList,
    (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v16 = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v7->fields._version;
  if ( !v16 )
    goto LABEL_42;
  v18 = v7->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    v26 = v17[4];
    v27 = 67;
    goto LABEL_32;
  }
  v19 = v18 + 1;
  v20 = (char *)v16 + 4 * v18;
  v21 = 67;
LABEL_29:
  v7->fields._size = v19;
  *((_DWORD *)v20 + 8) = v21;
LABEL_33:
  v28 = 133;
  while ( 1 )
  {
    v29 = v28 - 32;
    v9 = (FilterKindList_c *)System_Collections_Generic_List_Int32Enum___Contains(
                               v7,
                               v28 - 32,
                               (const MethodInfo_385F51C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      isFilterList = this->fields.isFilterList;
      if ( !isFilterList )
        goto LABEL_42;
      if ( v29 >= LODWORD(isFilterList->max_length) )
        sub_1C93D34(v9);
      if ( this->fields.FILTER_DEFAULT_VALUE != (((v29 & 0xFFFFFFFE) == 40)
                                               ^ (*((_BYTE *)&isFilterList->obj.klass + v28) != 0)) )
        return 0;
    }
    if ( --v28 == 31 )
    {
      if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v8) )
        return ListViewSort__CheckSvtEventBonusFilterDefaultAll(this, eventId, v31);
      return 0;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__CheckFilterDefaultAll(ListViewSort_o *this, int32_t eventId, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8
  __int64 v6; // x10
  const MethodInfo *v7; // x2

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, eventId);
  v6 = 133;
  while ( 1 )
  {
    if ( v6 - 32 >= (unsigned __int64)LODWORD(isFilterList->max_length) )
      sub_1C93D34(this);
    if ( this->fields.FILTER_DEFAULT_VALUE != (((((_DWORD)v6 - 32) & 0xFFFFFFFE) == 40)
                                             ^ (*((_BYTE *)&isFilterList->obj.klass + v6) != 0)) )
      break;
    if ( --v6 == 31 )
    {
      if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, *(const MethodInfo **)&eventId) )
        return ListViewSort__CheckSvtEventBonusFilterDefaultAll(this, eventId, v7);
      return 0;
    }
  }
  return 0;
}


bool ListViewSort__CheckPresentBoxFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x9
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v4; // x10
  bool *m_Items; // x9
  bool v6; // w11
  bool v7; // cf

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C93D2C(this, method);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C93D34(this);
    if ( !m_Items[v4] )
      break;
    v7 = v4++ >= 0xE;
    v6 = !v7;
  }
  while ( v4 != 15 );
  return !v6;
}


bool ListViewSort__CheckPresentBoxRarityFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x9
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v4; // x10
  bool *m_Items; // x9
  bool v6; // w11
  bool v7; // cf

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C93D2C(this, method);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C93D34(this);
    if ( !m_Items[v4] )
      break;
    v7 = v4++ >= 4;
    v6 = !v7;
  }
  while ( v4 != 5 );
  return !v6;
}


bool ListViewSort__CheckSvtEquipEffectFilterDefaultAll(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int v4; // w19
  _OWORD v6[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4D32132 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4D32132 = 1;
  }
  memset(&v7, 0, 32);
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    sub_1C93D2C(0, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v6,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_34B46A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v7.fields._dictionary = v6[0];
  v7.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v6[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v7,
            (const MethodInfo_361C294 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    if ( this->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE != HIDWORD(v7.fields._current.fields.key) )
    {
      v4 = 4;
      goto LABEL_9;
    }
  }
  v4 = 5;
LABEL_9:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v7,
    (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v4 != 4;
}


bool ListViewSort__CheckSvtEventBonusFilterDefaultAll(ListViewSort_o *this, int32_t eventId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x19
  Il2CppObject *Value_int__object; // x0
  ListViewSort___c_c *v8; // x0
  System_Func_T__TResult__o *_9__204_0; // x20
  Il2CppObject *v10; // x21
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D32133 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_int__int_____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
    sub_1C93AD4(&System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    sub_1C93AD4(&Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D32133 = 1;
  }
  if ( !eventId )
    return 1;
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( eventId >= 1 )
  {
    Value_int__object = BasicHelper__GetValue_int__object_(
                          (System_Collections_Generic_Dictionary_K__V__o *)svtEventBonusFilterDic,
                          eventId,
                          0,
                          (const MethodInfo_3192524 *)Method_BasicHelper_GetValue_int__int_____);
    if ( Value_int__object )
      return LODWORD(Value_int__object[1].monitor) == 0;
    return 1;
  }
  v8 = ListViewSort___c_TypeInfo;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v8 = ListViewSort___c_TypeInfo;
  }
  _9__204_0 = (System_Func_T__TResult__o *)v8->static_fields->__9__204_0;
  if ( !_9__204_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ListViewSort___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__204_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__204_0,
      v10,
      Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__,
      0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__204_0 = (struct System_Func_KeyValuePair_int__int_____bool__o *)_9__204_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__204_0,
      (int32_t)_9__204_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return System_Linq_Enumerable__All_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)svtEventBonusFilterDic,
           (System_Func_TSource__bool__o *)_9__204_0,
           (const MethodInfo_31AE054 *)Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__CheckSvtGroupFilter(ListViewSort_o *this, int32_t filterKind, const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  int32_t v11; // w1

  if ( (byte_4D32143 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D32143 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    sub_1C93D2C(0, *(_QWORD *)&filterKind);
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(this, v7, v8) )
    return 1;
  if ( filterKind <= 6 )
  {
    if ( (unsigned int)filterKind < 3 )
    {
      v11 = 65;
      return ListViewSort__GetFilter(this, v11, v9);
    }
    if ( (unsigned int)(filterKind - 3) <= 3 )
    {
      v11 = 66;
      return ListViewSort__GetFilter(this, v11, v9);
    }
    return 0;
  }
  if ( (unsigned int)(filterKind - 57) < 4 )
  {
    v11 = 67;
    return ListViewSort__GetFilter(this, v11, v9);
  }
  if ( (unsigned int)(filterKind - 61) > 3 )
    return 0;
  v11 = 68;
  return ListViewSort__GetFilter(this, v11, v9);
}


void ListViewSort__ClassFilterOFF(ListViewSort_o *this, const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v5; // x0
  const MethodInfo *v6; // x3
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x3
  struct System_Boolean_array *isFilterList; // x8
  unsigned int max_length; // w9

  if ( (byte_4D32123 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D32123 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)v3->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList
    || (v5 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_1C93D2C(ClassFilterKindList, method);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7
    || (isFilterList->m_Items[7] = 0, max_length == 8)
    || (isFilterList->m_Items[8] = 0, max_length <= 9) )
  {
    sub_1C93D34(ClassFilterKindList);
  }
  isFilterList->m_Items[9] = 0;
}


void ListViewSort__ClassFilterOffInSameClass(ListViewSort_o *this, const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v5; // x0
  const MethodInfo *v6; // x3
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x3
  struct System_Boolean_array *isFilterList; // x8
  unsigned int max_length; // w9

  if ( (byte_4D32124 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D32124 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)v3->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList
    || (v5 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_1C93D2C(ClassFilterKindList, method);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7 || (isFilterList->m_Items[7] = 0, max_length <= 0x1C) )
    sub_1C93D34(ClassFilterKindList);
  isFilterList->m_Items[28] = 0;
}


void ListViewSort__Clear(ListViewSort_o *this, const MethodInfo *method)
{
  this->fields.sortKind = 3;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.listViewKind = 0;
  this->fields.filter2Kind = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.isAscendingOrder = 1;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
}


void ListViewSort__ClearFilter(ListViewSort_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x8
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x8
  bool *v14; // x10
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x8
  bool *v18; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x8
  bool *v22; // x10

  ListViewSort__SetAllNomalFilter(this, this->fields.FILTER_DEFAULT_VALUE, v2);
  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    goto LABEL_19;
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v9 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  do
  {
    if ( v9 >= max_length_low )
LABEL_18:
      sub_1C93D34(v4);
    m_Items[v9++] = 0;
  }
  while ( v9 != 15 );
  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    goto LABEL_19;
  v12 = LODWORD(isPresentBoxRarityFilterList->max_length);
  v13 = 0;
  v14 = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( v13 >= v12 )
      goto LABEL_18;
    v14[v13++] = 0;
  }
  while ( v13 != 5 );
  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    goto LABEL_19;
  v16 = LODWORD(isAutoOrganizationFilterList->max_length);
  v17 = 0;
  v18 = isAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v17 >= v16 )
      goto LABEL_18;
    v18[v17++] = 0;
  }
  while ( v17 != 13 );
  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_19:
    sub_1C93D2C(v4, v5);
  v20 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
  v21 = 0;
  v22 = isWaveBattleAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v21 >= v20 )
      goto LABEL_18;
    v22[v21++] = 0;
  }
  while ( v21 != 7 );
  ListViewSort__SetAllSvtEquipEffectFilter(this, 0, v6);
}


System_Collections_Generic_Dictionary_string__int__o *ListViewSort__ConvertJsonToSvtEquipEffectFilterData(
        ListViewSort_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  bool IsNullOrEmpty; // w21
  System_String_o *v6; // x0
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v8; // x1
  Il2CppObject *key; // x20
  System_String_o *v10; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4D32112 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4D32112 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  if ( IsNullOrEmpty )
    v6 = 0;
  else
    v6 = json;
  Dictionary = JsonManager__getDictionary(v6, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v16 = v14;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v16,
              (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v16.fields._current.fields.value )
        sub_1C93D2C(0, v8);
      key = v16.fields._current.fields.key;
      v10 = (System_String_o *)((__int64 (*)(void))v16.fields._current.fields.value->klass->vtable[3].methodPtr)();
      v11 = System_Int32__TryParse(v10, &result, 0);
      if ( v11 )
      {
        if ( !v4 )
          sub_1C93D2C(v11, v12);
        System_Collections_Generic_Dictionary_object__int___Add(
          v4,
          key,
          result,
          (const MethodInfo_3525CD8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v16,
      (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v4;
}


System_Collections_Generic_Dictionary_string__int____o *ListViewSort__ConvertJsonToSvtEventBonusFilterData(
        ListViewSort_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v4; // x19
  bool IsNullOrEmpty; // w21
  System_String_o *v6; // x0
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *value; // x22
  Il2CppObject *key; // x20
  __int64 v12; // x0
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  System_Collections_ICollection_c **v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x22
  unsigned __int64 i; // x23
  __int64 v21; // x8
  __int64 v22; // x9
  System_Collections_ICollection_c **v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  Il2CppObject *v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  unsigned __int64 v34; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D32113 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C93AD4(&System_Collections_ICollection_TypeInfo);
    sub_1C93AD4(&System_Collections_IList_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4D32113 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  if ( IsNullOrEmpty )
    v6 = 0;
  else
    v6 = json;
  Dictionary = JsonManager__getDictionary(v6, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v36,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v37,
             (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( !v8 )
        break;
      value = v37.fields._current.fields.value;
      if ( !v37.fields._current.fields.value )
        sub_1C93D2C(v8, v9);
      key = v37.fields._current.fields.key;
      v12 = sub_1C93C10(v37.fields._current.fields.value, System_Collections_IList_TypeInfo);
      v13 = v12;
      if ( !v12 )
      {
        sub_1C940C8(value);
LABEL_46:
        sub_1C93D2C(v25, v26);
      }
      v14 = *(_QWORD *)v12;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v16 = (System_Collections_ICollection_c **)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *(v16 - 1) != System_Collections_ICollection_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_17;
        }
        v17 = v14 + 16LL * (*(_DWORD *)v16 + 1) + 312;
      }
      else
      {
LABEL_17:
        v17 = sub_1C69E5C(v12, System_Collections_ICollection_TypeInfo, 1);
      }
      v18 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
      v19 = sub_1C93B7C(int___TypeInfo, v18);
      for ( i = 0; ; ++i )
      {
        v21 = *(_QWORD *)v13;
        v22 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v23 = (System_Collections_ICollection_c **)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *(v23 - 1) != System_Collections_ICollection_TypeInfo )
          {
            --v22;
            v23 += 2;
            if ( !v22 )
              goto LABEL_24;
          }
          v24 = v21 + 16LL * (*(_DWORD *)v23 + 1) + 312;
        }
        else
        {
LABEL_24:
          v24 = sub_1C69E5C(v13, System_Collections_ICollection_TypeInfo, 1);
        }
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v13, *(_QWORD *)(v24 + 8));
        if ( (__int64)i >= (int)v25 )
          break;
        v27 = *(_QWORD *)v13;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v29 - 1) != System_Collections_IList_TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_31;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_31:
          v30 = sub_1C69E5C(v13, System_Collections_IList_TypeInfo, 0);
        }
        v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v30)(
                                v13,
                                (unsigned int)i,
                                *(_QWORD *)(v30 + 8));
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v32 = System_Convert__ToInt32(v31, 0);
        if ( !v19 )
          sub_1C93D2C(v32, v33);
        if ( i >= *(unsigned int *)(v19 + 24) )
          sub_1C93D34(v32);
        v34 = v19 + 4 * i;
        *(_DWORD *)(v34 + 32) = v32;
      }
      if ( !v4 )
        goto LABEL_46;
      System_Collections_Generic_Dictionary_object__object___Add(
        v4,
        key,
        (Il2CppObject *)v19,
        (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__int____Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v37,
      (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int____o *)v4;
}


void ListViewSort__DeleteContinueData(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4D3210E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3214/*"BonusKind2Id-"*/);
    sub_1C93AD4(&StringLiteral_6341/*"ExpUpDispType-"*/);
    sub_1C93AD4(&StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2508/*"AutoOrganizationMode-"*/);
    sub_1C93AD4(&StringLiteral_3213/*"BonusKind2-"*/);
    sub_1C93AD4(&StringLiteral_13025/*"SortFilterLongNew-"*/);
    sub_1C93AD4(&StringLiteral_10817/*"PriorityKind-"*/);
    sub_1C93AD4(&StringLiteral_7573/*"IconSizeKind-"*/);
    sub_1C93AD4(&StringLiteral_3212/*"BonusKind-"*/);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2507/*"AutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10122/*"OtherSortKind-"*/);
    sub_1C93AD4(&StringLiteral_13024/*"SortFilter2-"*/);
    sub_1C93AD4(&StringLiteral_13028/*"SortKind-"*/);
    sub_1C93AD4(&StringLiteral_6340/*"ExpUpDispKind-"*/);
    sub_1C93AD4(&StringLiteral_13023/*"SortFilter-"*/);
    sub_1C93AD4(&StringLiteral_13029/*"SortOrder-"*/);
    sub_1C93AD4(&StringLiteral_3215/*"BonusKindId-"*/);
    sub_1C93AD4(&StringLiteral_13290/*"SvtEventBonusFilterNew-"*/);
    byte_4D3210E = 1;
  }
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13028/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_64425724((System_String_o *)StringLiteral_13029/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
  v5 = System_String__Concat_64425724((System_String_o *)StringLiteral_3212/*"BonusKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0);
  v6 = System_String__Concat_64425724((System_String_o *)StringLiteral_3215/*"BonusKindId-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v6, 0);
  v7 = System_String__Concat_64425724((System_String_o *)StringLiteral_3213/*"BonusKind2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
  v8 = System_String__Concat_64425724((System_String_o *)StringLiteral_3214/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v8, 0);
  v9 = System_String__Concat_64425724((System_String_o *)StringLiteral_13023/*"SortFilter-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
  v10 = System_String__Concat_64425724((System_String_o *)StringLiteral_13024/*"SortFilter2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v10, 0);
  v11 = System_String__Concat_64425724((System_String_o *)StringLiteral_13025/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
  v12 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v12, 0);
  v13 = System_String__Concat_64425724((System_String_o *)StringLiteral_7573/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
  v14 = System_String__Concat_64425724((System_String_o *)StringLiteral_6340/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
  v15 = System_String__Concat_64425724((System_String_o *)StringLiteral_6341/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
  v16 = System_String__Concat_64425724((System_String_o *)StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v16, 0);
  v17 = System_String__Concat_64425724((System_String_o *)StringLiteral_13290/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v17, 0);
  v18 = System_String__Concat_64425724((System_String_o *)StringLiteral_2507/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v18, 0);
  v19 = System_String__Concat_64425724((System_String_o *)StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v19, 0);
  v20 = System_String__Concat_64425724((System_String_o *)StringLiteral_2508/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v20, 0);
  v21 = System_String__Concat_64425724((System_String_o *)StringLiteral_10817/*"PriorityKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v21, 0);
  v22 = System_String__Concat_64425724((System_String_o *)StringLiteral_10122/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
  ListViewSort__InitLoad(this, v23);
}


void ListViewSort__Finalize(ListViewSort_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void ListViewSort__FirstLoginSave(const MethodInfo *method)
{
  WarehouseListViewManager_c *v1; // x0
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  CombineServantListViewManager_c *v8; // x0
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  SvtEqCombineListViewManager_c *v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x19
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x19
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x19
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x19
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x19
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x19
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x19
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  ServantCostumeListViewManager_c *v49; // x0
  System_String_o *v50; // x0
  ServantOperationListViewManager_c *v51; // x0
  System_String_o *v52; // x19
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x19
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  const MethodInfo *v58; // x0
  int v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D3211A & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&ServantCostumeListViewManager_TypeInfo);
    sub_1C93AD4(&ServantOperationListViewManager_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    byte_4D3211A = 1;
  }
  v1 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v1 = WarehouseListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY = v1->static_fields->SORT_SAVE_KEY;
  v59 = 1;
  v3 = System_Int32__ToString((int32_t)&v59, 0);
  v4 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v3, 0);
  UnityEngine_PlayerPrefs__SetInt(v4, 1, 0);
  v5 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v6 = System_Int32__ToString((int32_t)&v59, 0);
  v7 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, 1, 0);
  v8 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v8 = CombineServantListViewManager_TypeInfo;
  }
  v9 = v8->static_fields->SORT_SAVE_KEY;
  v59 = 1;
  v10 = System_Int32__ToString((int32_t)&v59, 0);
  v11 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v9, v10, 0);
  UnityEngine_PlayerPrefs__SetInt(v11, 1, 0);
  v12 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v13 = System_Int32__ToString((int32_t)&v59, 0);
  v14 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v12, v13, 0);
  UnityEngine_PlayerPrefs__SetInt(v14, 1, 0);
  v15 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 4;
  v16 = System_Int32__ToString((int32_t)&v59, 0);
  v17 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v15, v16, 0);
  UnityEngine_PlayerPrefs__SetInt(v17, 1, 0);
  v18 = SvtEqCombineListViewManager_TypeInfo;
  if ( !SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo);
    v18 = SvtEqCombineListViewManager_TypeInfo;
  }
  v19 = v18->static_fields->SORT_SAVE_KEY;
  v59 = 1;
  v20 = System_Int32__ToString((int32_t)&v59, 0);
  v21 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v19, v20, 0);
  UnityEngine_PlayerPrefs__SetInt(v21, 1, 0);
  v22 = SvtEqCombineListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v23 = System_Int32__ToString((int32_t)&v59, 0);
  v24 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v22, v23, 0);
  UnityEngine_PlayerPrefs__SetInt(v24, 1, 0);
  v25 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 3;
  v26 = System_Int32__ToString((int32_t)&v59, 0);
  v27 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v25, v26, 0);
  UnityEngine_PlayerPrefs__SetInt(v27, 1, 0);
  v28 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 9;
  v29 = System_Int32__ToString((int32_t)&v59, 0);
  v30 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v28, v29, 0);
  UnityEngine_PlayerPrefs__SetInt(v30, 1, 0);
  v31 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 8;
  v32 = System_Int32__ToString((int32_t)&v59, 0);
  v33 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v31, v32, 0);
  UnityEngine_PlayerPrefs__SetInt(v33, 1, 0);
  v34 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 5;
  v35 = System_Int32__ToString((int32_t)&v59, 0);
  v36 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v34, v35, 0);
  UnityEngine_PlayerPrefs__SetInt(v36, 1, 0);
  v37 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 7;
  v38 = System_Int32__ToString((int32_t)&v59, 0);
  v39 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v37, v38, 0);
  UnityEngine_PlayerPrefs__SetInt(v39, 1, 0);
  v40 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 11;
  v41 = System_Int32__ToString((int32_t)&v59, 0);
  v42 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v40, v41, 0);
  UnityEngine_PlayerPrefs__SetInt(v42, 1, 0);
  v43 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 12;
  v44 = System_Int32__ToString((int32_t)&v59, 0);
  v45 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v43, v44, 0);
  UnityEngine_PlayerPrefs__SetInt(v45, 1, 0);
  v46 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 13;
  v47 = System_Int32__ToString((int32_t)&v59, 0);
  v48 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v46, v47, 0);
  UnityEngine_PlayerPrefs__SetInt(v48, 1, 0);
  v49 = ServantCostumeListViewManager_TypeInfo;
  if ( !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v49 = ServantCostumeListViewManager_TypeInfo;
  }
  v50 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v49->static_fields->SORT_SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__SetInt(v50, 1, 0);
  v51 = ServantOperationListViewManager_TypeInfo;
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v51 = ServantOperationListViewManager_TypeInfo;
  }
  v52 = v51->static_fields->SORT_SAVE_KEY;
  v59 = 1;
  v53 = System_Int32__ToString((int32_t)&v59, 0);
  v54 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v52, v53, 0);
  UnityEngine_PlayerPrefs__SetInt(v54, 1, 0);
  v55 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v56 = System_Int32__ToString((int32_t)&v59, 0);
  v57 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v55, v56, 0);
  UnityEngine_PlayerPrefs__SetInt(v57, 1, 0);
  ListViewSort__SaveDefaultSmartSort(v58);
  UnityEngine_PlayerPrefs__Save(0);
}


ListViewSort_BonusFilterInfo_array *ListViewSort__GetAlignedBonusFilter(
        ListViewSort_o *this,
        System_Int32_array *combineCampaignIds,
        System_Int32_array *campaignIds,
        System_Int32_array *eventIds,
        System_Int32_array *finishEventIds,
        System_Int32_array *servantFilterIds,
        bool isQuestStart,
        const MethodInfo *method)
{
  __int64 v13; // x21
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v22; // x28
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *Master_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x5
  System_Func_int__ListViewSort_BonusFilterInfo__o *v38; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  ListViewSort_BonusFilterInfo_array *v40; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v41; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  ListViewSort_BonusFilterInfo_array *v43; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v44; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  ListViewSort_BonusFilterInfo_array *v46; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v47; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  ListViewSort_BonusFilterInfo_array *v49; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v50; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  ListViewSort_BonusFilterInfo_array *v52; // x0
  const MethodInfo *v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct ListViewSort_BonusFilterInfo_array *items; // x8
  _QWORD *v67; // x10
  __int64 size; // x9
  __int128 v69; // q0
  GrandQuestFolderBoardItem_o *v70; // x0
  const MethodInfo_3922D04 *v71; // x2
  System_Collections_Generic_List_T__o *v72; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v73; // x23
  System_Collections_Generic_List_T__o *v74; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v75; // x23
  ListViewSort___c_c *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_9; // x20
  Il2CppObject *v79; // x21
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v87; // x0
  ListViewSort___c_c *v88; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v89; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_10; // x20
  Il2CppObject *v91; // x21
  struct ListViewSort___c_StaticFields *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v99; // x0
  ListViewSort___c_c *v100; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v101; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_11; // x20
  Il2CppObject *v103; // x21
  struct ListViewSort___c_StaticFields *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  GrandQuestFolderBoardItem_o v115; // [xsp+50h] [xbp-D0h] BYREF

  if ( (byte_4D32126 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_1C93AD4(&System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__);
    sub_1C93AD4(&ListViewSort___c__DisplayClass162_0_TypeInfo);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_11800/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/);
    byte_4D32126 = 1;
  }
  memset(&v115, 0, 48);
  v13 = sub_1C93D20(ListViewSort___c__DisplayClass162_0_TypeInfo);
  ListViewSort___c__DisplayClass162_0___ctor((ListViewSort___c__DisplayClass162_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_53;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v22,
    (const MethodInfo_39223E8 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v13 + 24) = v22;
  v23 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **)(v13 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v22, v24, v25, v26, v27, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)Master_object, v31, v32, v33, v34, v35, v36);
  if ( combineCampaignIds )
  {
    v38 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v38,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__,
      0);
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)combineCampaignIds,
                                                                 (System_Func_TSource__TResult__o *)v38,
                                                                 (const MethodInfo_31D846C *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v40 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v39,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v40 = 0;
  }
  v115.fields.sortValue0B = (int64_t)v40;
  if ( campaignIds )
  {
    v41 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v41,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__,
      0);
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)campaignIds,
                                                                 (System_Func_TSource__TResult__o *)v41,
                                                                 (const MethodInfo_31D846C *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v43 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v42,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v43 = 0;
  }
  v115.fields.sortValue0 = (int64_t)v43;
  if ( eventIds )
  {
    v44 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v44,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__,
      0);
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                                 (System_Func_TSource__TResult__o *)v44,
                                                                 (const MethodInfo_31D846C *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v46 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v45,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v46 = 0;
  }
  *(_QWORD *)&v115.fields.sortIndex = v46;
  if ( finishEventIds )
  {
    v47 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v47,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__,
      0);
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)finishEventIds,
                                                                 (System_Func_TSource__TResult__o *)v47,
                                                                 (const MethodInfo_31D846C *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v49 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v48,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v49 = 0;
  }
  *(_QWORD *)&v115.fields.selectNum = v49;
  if ( servantFilterIds )
  {
    v50 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v50,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__,
      0);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)servantFilterIds,
                                                                 (System_Func_TSource__TResult__o *)v50,
                                                                 (const MethodInfo_31D846C *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v52 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v51,
            (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v52 = 0;
  }
  v115.monitor = v52;
  ListViewSort__BonusFilterGroupingCheck(
    (ListViewSort_BonusFilterInfo_array **)&v115.fields.sortValue0B,
    (ListViewSort_BonusFilterInfo_array **)&v115.fields.sortValue0,
    (ListViewSort_BonusFilterInfo_array **)&v115.fields.sortIndex,
    (ListViewSort_BonusFilterInfo_array **)&v115.fields,
    (ListViewSort_BonusFilterInfo_array **)&v115.monitor,
    v37);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v115.fields.sortValue0B,
    0,
    0);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v115.fields.sortValue0,
    0,
    0);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v115.fields.sortIndex,
    1,
    0);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v115.fields.selectNum,
    0,
    0);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v115.monitor,
    1,
    0);
  if ( !isQuestStart && ListViewSort__get_IsWareHouseEquipList(this, v53) )
  {
    v115.klass = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115.klass = (GrandQuestFolderBoardItem_c *)LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/, 0);
    sub_1C93A78(&v115, (int32_t)v115.klass, v54, v55, v56, v57, v58, v59);
    v14 = *v23;
    if ( *v23 )
    {
      *(_OWORD *)&v115.fields.sortValue1 = 0x800000000uLL;
      v115.fields.sortValue1B = (int64_t)v115.klass;
      items = v14->fields._items;
      v67 = Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__;
      ++v14->fields._version;
      if ( items )
      {
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v71 = *(const MethodInfo_3922D04 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL);
          *(_OWORD *)&v115.fields.sortValue2B = *(_OWORD *)&v115.fields.sortValue1;
          *(_QWORD *)&v115.fields.isTermination = v115.fields.sortValue1B;
          System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddWithResize(
            v14,
            (ListViewSort_BonusFilterInfo_o *)&v115.fields.sortValue2B,
            v71);
        }
        else
        {
          v14->fields._size = size + 1;
          v69 = *(_OWORD *)&v115.fields.sortValue1;
          v70 = (GrandQuestFolderBoardItem_o *)((char *)items + 24 * size);
          v70->fields.sortValue1 = v115.fields.sortValue1B;
          v70 = (GrandQuestFolderBoardItem_o *)((char *)v70 + 48);
          *(_OWORD *)&v70[-1].fields._ListCreatedTime_k__BackingField = v69;
          sub_1C93A78(v70, 0, v60, v61, v62, v63, v64, v65);
        }
        goto LABEL_30;
      }
    }
LABEL_53:
    sub_1C93D2C(v14, v15);
  }
LABEL_30:
  v72 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v73 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v73,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v72,
          (System_Func_T__bool__o *)v73,
          (const MethodInfo_318E020 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v74 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v75 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v75,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v74,
          (System_Func_T__bool__o *)v75,
          (const MethodInfo_318E020 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind2 = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v76 = ListViewSort___c_TypeInfo;
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)*v23;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v76 = ListViewSort___c_TypeInfo;
  }
  _9__162_9 = v76->static_fields->__9__162_9;
  if ( !_9__162_9 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = ListViewSort___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__162_9 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_9,
      v79,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__,
      0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__162_9 = _9__162_9;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__162_9,
      (int32_t)_9__162_9,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  v87 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
          v77,
          (System_Func_TSource__TKey__o *)_9__162_9,
          (const MethodInfo_31D4004 *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
  v88 = ListViewSort___c_TypeInfo;
  v89 = v87;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v88 = ListViewSort___c_TypeInfo;
  }
  _9__162_10 = v88->static_fields->__9__162_10;
  if ( !_9__162_10 )
  {
    if ( !v88->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v88);
      v88 = ListViewSort___c_TypeInfo;
    }
    v91 = (Il2CppObject *)v88->static_fields->__9;
    _9__162_10 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_10,
      v91,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__,
      0);
    v92 = ListViewSort___c_TypeInfo->static_fields;
    v92->__9__162_10 = _9__162_10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v92->__9__162_10, (int32_t)_9__162_10, v93, v94, v95, v96, v97, v98);
  }
  v99 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
          v89,
          (System_Func_TSource__TKey__o *)_9__162_10,
          (const MethodInfo_31E31AC *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  v100 = ListViewSort___c_TypeInfo;
  v101 = v99;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v100 = ListViewSort___c_TypeInfo;
  }
  _9__162_11 = v100->static_fields->__9__162_11;
  if ( !_9__162_11 )
  {
    if ( !v100->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v100);
      v100 = ListViewSort___c_TypeInfo;
    }
    v103 = (Il2CppObject *)v100->static_fields->__9;
    _9__162_11 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_11,
      v103,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__,
      0);
    v104 = ListViewSort___c_TypeInfo->static_fields;
    v104->__9__162_11 = _9__162_11;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v104->__9__162_11,
      (int32_t)_9__162_11,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
  v111 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
                                                                v101,
                                                                (System_Func_TSource__TKey__o *)_9__162_11,
                                                                (const MethodInfo_31E31AC *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  return System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
           v111,
           (const MethodInfo_31E40D4 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
}


int32_t ListViewSort__GetAutoOrganizationMode(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.autoOrganizationMode;
}


System_String_o *ListViewSort__GetBonusFilterButtonText(
        ListViewSort_o *this,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isQuestStart,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5
  int32_t bonusKindId; // w0
  int32_t bonusKind; // w1
  bool v11; // w3
  ListViewSort_BonusFilterInfo_array *v12; // x2
  int32_t v13; // w0
  __int128 v14; // q0
  ListViewSort_BonusFilterInfo_o v15; // [xsp+8h] [xbp-68h] BYREF
  ListViewSort_BonusFilterInfo_o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D32129 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_4D32129 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
    return this->fields.bonusFilterInfoDefault.fields.buttonText;
  if ( isQuestStart )
  {
    bonusKind = this->fields.bonusKind;
    bonusKindId = this->fields.bonusKindId;
    v11 = 1;
    v12 = bonusFilterInfos;
  }
  else
  {
    bonusKind = this->fields.bonusKind2;
    bonusKindId = this->fields.bonusKind2Id;
    v12 = bonusFilterInfos;
    v11 = 0;
  }
  v13 = ListViewSort__BonusFilterKindIndex(bonusKindId, bonusKind, v12, v11, 0, v7);
  v14 = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
  v16.fields.buttonText = this->fields.bonusFilterInfoDefault.fields.buttonText;
  *(_OWORD *)&v16.fields.priority = v14;
  BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
    &v15,
    bonusFilterInfos,
    v13,
    &v16,
    (const MethodInfo_3193080 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
  return v15.fields.buttonText;
}


int32_t ListViewSort__GetBonusKind(
        ListViewSort_o *this,
        int32_t kind,
        System_Int32_array *eventIdList,
        System_Int32_array *servantFilterIdList,
        int32_t campaignId,
        System_Int32_array *campaignServantIdList,
        const MethodInfo *method)
{
  if ( kind == 3 && campaignId && campaignServantIdList )
  {
    if ( campaignServantIdList->max_length )
      return 3;
  }
  else if ( kind == 4 && eventIdList )
  {
    if ( eventIdList->max_length )
      return 4;
  }
  else if ( kind == 7 && servantFilterIdList && servantFilterIdList->max_length )
  {
    return 7;
  }
  if ( kind == 8 )
    return 8;
  else
    return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t ListViewSort__GetBonusKindIncKind(
        ListViewSort_o *this,
        int32_t kind,
        System_Int32_array *eventIdList,
        System_Int32_array *servantFilterIdList,
        int32_t campaignId,
        System_Int32_array *campaignServantIdList,
        const MethodInfo *method)
{
  __int64 v7; // x0

  if ( kind == 4 )
  {
LABEL_11:
    if ( servantFilterIdList && servantFilterIdList->max_length )
      return (int)&byte_7;
    if ( ListViewSort__get_IsWareHouseEquipList(this, *(const MethodInfo **)&kind) )
    {
      LODWORD(v7) = 8;
      return v7;
    }
LABEL_16:
    LODWORD(v7) = 1;
    return v7;
  }
  if ( kind == 3 )
    goto LABEL_20;
  if ( kind != 1 )
    goto LABEL_16;
  if ( !campaignId || !campaignServantIdList || !campaignServantIdList->max_length )
  {
LABEL_20:
    if ( eventIdList && eventIdList->max_length )
    {
      LODWORD(v7) = 4;
      return v7;
    }
    goto LABEL_11;
  }
  LODWORD(v7) = 3;
  return v7;
}


int32_t ListViewSort__GetBonusKindIndex(
        ListViewSort_o *this,
        int32_t kind,
        int32_t id,
        System_Int32_array *eventIdList,
        System_Int32_array *servantFilterIdList,
        int32_t campaignId,
        System_Int32_array *campaignServantIdList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  int32_t result; // w0

  if ( kind != 7 )
  {
    if ( kind == 4 )
    {
      if ( !eventIdList || !eventIdList->max_length )
        return -1;
    }
    else if ( kind != 3
           || id != campaignId
           || !campaignId
           || !campaignServantIdList
           || !campaignServantIdList->max_length )
    {
      return -1;
    }
    return 0;
  }
  if ( !servantFilterIdList )
    return -1;
  max_length = servantFilterIdList->max_length;
  if ( !max_length || (int)max_length < 1 )
    return -1;
  result = 0;
  while ( servantFilterIdList->m_Items[result] != id )
  {
    if ( (_DWORD)max_length == ++result )
      return -1;
  }
  return result;
}


int32_t ListViewSort__GetExpUpDispKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.expUpDispKind;
}


int32_t ListViewSort__GetExpUpDispType(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.expUpDispType;
}


bool ListViewSort__GetFilter(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C93D34(this);
  return isFilterList->m_Items[kind];
}


System_String_o *ListViewSort__GetFilterKindText(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4D32135 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11888/*"SERVANT_SORT_FILTER_NP_QUICK"*/);
    sub_1C93AD4(&StringLiteral_11853/*"SERVANT_SORT_FILTER_KIND_2"*/);
    sub_1C93AD4(&StringLiteral_11933/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/);
    sub_1C93AD4(&StringLiteral_11845/*"SERVANT_SORT_FILTER_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_11882/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/);
    sub_1C93AD4(&StringLiteral_11903/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/);
    sub_1C93AD4(&StringLiteral_11870/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/);
    sub_1C93AD4(&StringLiteral_11932/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/);
    sub_1C93AD4(&StringLiteral_11910/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/);
    sub_1C93AD4(&StringLiteral_11936/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/);
    sub_1C93AD4(&StringLiteral_11858/*"SERVANT_SORT_FILTER_KIND_6"*/);
    sub_1C93AD4(&StringLiteral_11887/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/);
    sub_1C93AD4(&StringLiteral_11849/*"SERVANT_SORT_FILTER_HP_SECOND"*/);
    sub_1C93AD4(&StringLiteral_11873/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/);
    sub_1C93AD4(&StringLiteral_11889/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/);
    sub_1C93AD4(&StringLiteral_11921/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/);
    sub_1C93AD4(&StringLiteral_11937/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/);
    sub_1C93AD4(&StringLiteral_11862/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/);
    sub_1C93AD4(&StringLiteral_11894/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C93AD4(&StringLiteral_11934/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/);
    sub_1C93AD4(&StringLiteral_11859/*"SERVANT_SORT_FILTER_KIND_7"*/);
    sub_1C93AD4(&StringLiteral_11855/*"SERVANT_SORT_FILTER_KIND_3"*/);
    sub_1C93AD4(&StringLiteral_11848/*"SERVANT_SORT_FILTER_HP_FIRST"*/);
    sub_1C93AD4(&StringLiteral_11886/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/);
    sub_1C93AD4(&StringLiteral_11826/*"SERVANT_SORT_FILTER_CAN_SELECT"*/);
    sub_1C93AD4(&StringLiteral_11902/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/);
    sub_1C93AD4(&StringLiteral_11824/*"SERVANT_SORT_FILTER_ATK_FIRST"*/);
    sub_1C93AD4(&StringLiteral_11872/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/);
    sub_1C93AD4(&StringLiteral_11881/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_11923/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/);
    sub_1C93AD4(&StringLiteral_11884/*"SERVANT_SORT_FILTER_NP_ARTS"*/);
    sub_1C93AD4(&StringLiteral_11897/*"SERVANT_SORT_FILTER_SAME_CLASS"*/);
    sub_1C93AD4(&StringLiteral_11860/*"SERVANT_SORT_FILTER_KIND_8"*/);
    sub_1C93AD4(&StringLiteral_11920/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/);
    sub_1C93AD4(&StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/);
    sub_1C93AD4(&StringLiteral_11875/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/);
    sub_1C93AD4(&StringLiteral_11898/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/);
    sub_1C93AD4(&StringLiteral_11914/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_11919/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/);
    sub_1C93AD4(&StringLiteral_11900/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/);
    sub_1C93AD4(&StringLiteral_11865/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/);
    sub_1C93AD4(&StringLiteral_11901/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/);
    sub_1C93AD4(&StringLiteral_11893/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C93AD4(&StringLiteral_11851/*"SERVANT_SORT_FILTER_KIND_10"*/);
    sub_1C93AD4(&StringLiteral_11908/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/);
    sub_1C93AD4(&StringLiteral_11850/*"SERVANT_SORT_FILTER_KIND_1"*/);
    sub_1C93AD4(&StringLiteral_11874/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/);
    sub_1C93AD4(&StringLiteral_11935/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/);
    sub_1C93AD4(&StringLiteral_11856/*"SERVANT_SORT_FILTER_KIND_4"*/);
    sub_1C93AD4(&StringLiteral_11871/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/);
    sub_1C93AD4(&StringLiteral_11847/*"SERVANT_SORT_FILTER_HPMAX"*/);
    sub_1C93AD4(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C93AD4(&StringLiteral_11912/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/);
    sub_1C93AD4(&StringLiteral_11877/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/);
    sub_1C93AD4(&StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C93AD4(&StringLiteral_11905/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/);
    sub_1C93AD4(&StringLiteral_11911/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_11899/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/);
    sub_1C93AD4(&StringLiteral_11863/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/);
    sub_1C93AD4(&StringLiteral_11916/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_11931/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    sub_1C93AD4(&StringLiteral_11883/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/);
    sub_1C93AD4(&StringLiteral_11825/*"SERVANT_SORT_FILTER_ATK_SECOND"*/);
    sub_1C93AD4(&StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/);
    sub_1C93AD4(&StringLiteral_11869/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/);
    sub_1C93AD4(&StringLiteral_11926/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/);
    sub_1C93AD4(&StringLiteral_11885/*"SERVANT_SORT_FILTER_NP_BUSTER"*/);
    sub_1C93AD4(&StringLiteral_11864/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/);
    sub_1C93AD4(&StringLiteral_11922/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/);
    sub_1C93AD4(&StringLiteral_11918/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/);
    sub_1C93AD4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/);
    sub_1C93AD4(&StringLiteral_11917/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/);
    sub_1C93AD4(&StringLiteral_11867/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/);
    sub_1C93AD4(&StringLiteral_11906/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/);
    sub_1C93AD4(&StringLiteral_11861/*"SERVANT_SORT_FILTER_KIND_9"*/);
    sub_1C93AD4(&StringLiteral_11909/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/);
    sub_1C93AD4(&StringLiteral_11904/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/);
    sub_1C93AD4(&StringLiteral_11808/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/);
    sub_1C93AD4(&StringLiteral_11846/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/);
    sub_1C93AD4(&StringLiteral_11907/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/);
    sub_1C93AD4(&StringLiteral_11925/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/);
    sub_1C93AD4(&StringLiteral_11857/*"SERVANT_SORT_FILTER_KIND_5"*/);
    sub_1C93AD4(&StringLiteral_11915/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/);
    sub_1C93AD4(&StringLiteral_11809/*"SERVANT_SORT_COSTUME_OPEN"*/);
    sub_1C93AD4(&StringLiteral_11878/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/);
    sub_1C93AD4(&StringLiteral_11866/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/);
    sub_1C93AD4(&StringLiteral_11823/*"SERVANT_SORT_FILTER_ATKMAX"*/);
    sub_1C93AD4(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_1C93AD4(&StringLiteral_11876/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/);
    sub_1C93AD4(&StringLiteral_11924/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/);
    byte_4D32135 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11850/*"SERVANT_SORT_FILTER_KIND_1"*/;
      goto LABEL_281;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11853/*"SERVANT_SORT_FILTER_KIND_2"*/;
      goto LABEL_281;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11855/*"SERVANT_SORT_FILTER_KIND_3"*/;
      goto LABEL_281;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11856/*"SERVANT_SORT_FILTER_KIND_4"*/;
      goto LABEL_281;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11857/*"SERVANT_SORT_FILTER_KIND_5"*/;
      goto LABEL_281;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11858/*"SERVANT_SORT_FILTER_KIND_6"*/;
      goto LABEL_281;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11859/*"SERVANT_SORT_FILTER_KIND_7"*/;
      goto LABEL_281;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11860/*"SERVANT_SORT_FILTER_KIND_8"*/;
      goto LABEL_281;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11861/*"SERVANT_SORT_FILTER_KIND_9"*/;
      goto LABEL_281;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11851/*"SERVANT_SORT_FILTER_KIND_10"*/;
      goto LABEL_281;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11878/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/;
      goto LABEL_281;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11876/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/;
      goto LABEL_281;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11877/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/;
      goto LABEL_281;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11882/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/;
      goto LABEL_281;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11848/*"SERVANT_SORT_FILTER_HP_FIRST"*/;
      goto LABEL_281;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11849/*"SERVANT_SORT_FILTER_HP_SECOND"*/;
      goto LABEL_281;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11847/*"SERVANT_SORT_FILTER_HPMAX"*/;
      goto LABEL_281;
    case 25:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11824/*"SERVANT_SORT_FILTER_ATK_FIRST"*/;
      goto LABEL_281;
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11825/*"SERVANT_SORT_FILTER_ATK_SECOND"*/;
      goto LABEL_281;
    case 27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11823/*"SERVANT_SORT_FILTER_ATKMAX"*/;
      goto LABEL_281;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11897/*"SERVANT_SORT_FILTER_SAME_CLASS"*/;
      goto LABEL_281;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11826/*"SERVANT_SORT_FILTER_CAN_SELECT"*/;
      goto LABEL_281;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11846/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/;
      goto LABEL_281;
    case 31:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11883/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/;
      goto LABEL_281;
    case 32:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11808/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/;
      goto LABEL_281;
    case 33:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11809/*"SERVANT_SORT_COSTUME_OPEN"*/;
      goto LABEL_281;
    case 34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
      goto LABEL_281;
    case 35:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11894/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/;
      goto LABEL_281;
    case 36:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_RARE"*/;
      goto LABEL_281;
    case 37:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11892/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/;
      goto LABEL_281;
    case 38:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11893/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/;
      goto LABEL_281;
    case 39:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11845/*"SERVANT_SORT_FILTER_CHOICE"*/;
      goto LABEL_281;
    case 42:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11885/*"SERVANT_SORT_FILTER_NP_BUSTER"*/;
      goto LABEL_281;
    case 43:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11884/*"SERVANT_SORT_FILTER_NP_ARTS"*/;
      goto LABEL_281;
    case 44:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11888/*"SERVANT_SORT_FILTER_NP_QUICK"*/;
      goto LABEL_281;
    case 45:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11887/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/;
      goto LABEL_281;
    case 46:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11886/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/;
      goto LABEL_281;
    case 47:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11889/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/;
      goto LABEL_281;
    case 48:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11881/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/;
      goto LABEL_281;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11875/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/;
      goto LABEL_281;
    case 50:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11906/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/;
      goto LABEL_281;
    case 51:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11905/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/;
      goto LABEL_281;
    case 52:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11926/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/;
      goto LABEL_281;
    case 53:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11931/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/;
      goto LABEL_281;
    case 54:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11925/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/;
      goto LABEL_281;
    case 55:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11923/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/;
      goto LABEL_281;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11919/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/;
      goto LABEL_281;
    case 57:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11869/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/;
      goto LABEL_281;
    case 58:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11870/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/;
      goto LABEL_281;
    case 59:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11863/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/;
      goto LABEL_281;
    case 60:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11864/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/;
      goto LABEL_281;
    case 61:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11862/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/;
      goto LABEL_281;
    case 62:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11865/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/;
      goto LABEL_281;
    case 63:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11866/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/;
      goto LABEL_281;
    case 64:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11867/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/;
      goto LABEL_281;
    case 65:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11874/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/;
      goto LABEL_281;
    case 66:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11873/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/;
      goto LABEL_281;
    case 67:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11871/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/;
      goto LABEL_281;
    case 68:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11872/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/;
      goto LABEL_281;
    case 69:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11932/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/;
      goto LABEL_281;
    case 70:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11933/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/;
      goto LABEL_281;
    case 71:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11934/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/;
      goto LABEL_281;
    case 72:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11924/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/;
      goto LABEL_281;
    case 73:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11918/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/;
      goto LABEL_281;
    case 74:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11921/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/;
      goto LABEL_281;
    case 75:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11922/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/;
      goto LABEL_281;
    case 76:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11920/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/;
      goto LABEL_281;
    case 77:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11915/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/;
      goto LABEL_281;
    case 78:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11913/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/;
      goto LABEL_281;
    case 79:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11912/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/;
      goto LABEL_281;
    case 80:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11917/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/;
      goto LABEL_281;
    case 81:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11914/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/;
      goto LABEL_281;
    case 82:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11911/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/;
      goto LABEL_281;
    case 83:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11916/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/;
      goto LABEL_281;
    case 84:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11910/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/;
      goto LABEL_281;
    case 85:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11907/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/;
      goto LABEL_281;
    case 86:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11908/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/;
      goto LABEL_281;
    case 87:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11909/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/;
      goto LABEL_281;
    case 88:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11903/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/;
      goto LABEL_281;
    case 89:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11902/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/;
      goto LABEL_281;
    case 90:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11899/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/;
      goto LABEL_281;
    case 91:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11900/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/;
      goto LABEL_281;
    case 92:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11901/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/;
      goto LABEL_281;
    case 93:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11898/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/;
      goto LABEL_281;
    case 94:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11904/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/;
      goto LABEL_281;
    case 95:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11937/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/;
      goto LABEL_281;
    case 96:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/;
      goto LABEL_281;
    case 97:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11936/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/;
      goto LABEL_281;
    case 98:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11939/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/;
      goto LABEL_281;
    case 99:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11935/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/;
LABEL_281:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2BD02 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2BD02 = 1;
      }
      v5 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager_TypeInfo;
      }
      result = v5->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *ListViewSort__GetFilterListData(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v5; // x0
  int32_t Int; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D32114 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13025/*"SortFilterLongNew-"*/);
    sub_1C93AD4(&StringLiteral_13023/*"SortFilter-"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32114 = 1;
  }
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13025/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
    return UnityEngine_PlayerPrefs__GetString(v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v5 = System_String__Concat_64425724((System_String_o *)StringLiteral_13023/*"SortFilter-"*/, this->fields.saveKey, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v5, 0, 0);
  return System_Int32__ToString((int32_t)&Int, 0);
}


System_String_o *ListViewSort__GetFilterListDataText(ListViewSort_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 i; // x11

  if ( (byte_4D3211C & 1) == 0 )
  {
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_String_Join_long___);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D3211C = 1;
  }
  v3 = sub_1C93B7C(long___TypeInfo, 2);
  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
LABEL_13:
    sub_1C93D2C(v3, v4);
  v4 = v3;
  for ( i = 0; i != 102; ++i )
  {
    if ( i >= LODWORD(isFilterList->max_length) )
LABEL_12:
      sub_1C93D34(v3);
    if ( ((i & 0x7FFFFFFE) == 40) != isFilterList->m_Items[i] )
    {
      if ( !v3 )
        goto LABEL_13;
      if ( (unsigned int)i >> 6 >= *(_DWORD *)(v3 + 24) )
        goto LABEL_12;
      *(_QWORD *)(v3 + 8LL * ((unsigned int)i >> 6) + 32) |= 1LL << i;
    }
  }
  return System_String__Join_long_(
           (System_String_o *)StringLiteral_809/*","*/,
           (System_Collections_Generic_IEnumerable_T__o *)v3,
           (const MethodInfo_3250068 *)Method_System_String_Join_long___);
}


bool ListViewSort__GetFilter_44547292(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C93D34(this);
  return isPresentBoxFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_44547340(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C93D34(this);
  return isPresentBoxRarityFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_44547584(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  return isAutoOrganizationFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_44547632(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  return isWaveBattleAutoOrganizationFilterList->m_Items[kind];
}


int32_t ListViewSort__GetIconScaleKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.iconScaleKind;
}


System_String_o *ListViewSort__GetLongValueFromPlayerPrefs(
        ListViewSort_o *this,
        System_String_o *key,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  return UnityEngine_PlayerPrefs__GetString(key, defaultValue, 0);
}


ListViewManager_o *ListViewSort__GetManager(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.manager;
}


System_String_o *ListViewSort__GetOtherUserPriorityKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4D3213B & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9801/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/);
    sub_1C93AD4(&StringLiteral_9803/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/);
    sub_1C93AD4(&StringLiteral_9802/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/);
    sub_1C93AD4(&StringLiteral_9800/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/);
    sub_1C93AD4(&StringLiteral_9797/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/);
    sub_1C93AD4(&StringLiteral_9799/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/);
    sub_1C93AD4(&StringLiteral_9798/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/);
    byte_4D3213B = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9802/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/;
      goto LABEL_32;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9800/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/;
      goto LABEL_32;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9801/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/;
      goto LABEL_32;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9799/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/;
      goto LABEL_32;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9797/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/;
      goto LABEL_32;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9803/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9798/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/;
LABEL_32:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2BD02 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2BD02 = 1;
      }
      v5 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager_TypeInfo;
      }
      result = v5->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *ListViewSort__GetPresentBoxFilterKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4D32136 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10480/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/);
    sub_1C93AD4(&StringLiteral_10482/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/);
    sub_1C93AD4(&StringLiteral_10499/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_10489/*"PRESENT_BOX_FILTER_ITEM_STONE"*/);
    sub_1C93AD4(&StringLiteral_10498/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_10496/*"PRESENT_BOX_FILTER_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_10487/*"PRESENT_BOX_FILTER_ITEM_MANA"*/);
    sub_1C93AD4(&StringLiteral_10483/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/);
    sub_1C93AD4(&StringLiteral_10497/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_10486/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/);
    sub_1C93AD4(&StringLiteral_10500/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/);
    sub_1C93AD4(&StringLiteral_10488/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/);
    sub_1C93AD4(&StringLiteral_10484/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/);
    sub_1C93AD4(&StringLiteral_10485/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/);
    sub_1C93AD4(&StringLiteral_10490/*"PRESENT_BOX_FILTER_OTHER"*/);
    byte_4D32136 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10496/*"PRESENT_BOX_FILTER_SERVANT"*/;
      goto LABEL_56;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10497/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10500/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/;
      goto LABEL_56;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10498/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/;
      goto LABEL_56;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10499/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10480/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/;
      goto LABEL_56;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10482/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/;
      goto LABEL_56;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10486/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/;
      goto LABEL_56;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10484/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/;
      goto LABEL_56;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10488/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/;
      goto LABEL_56;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10489/*"PRESENT_BOX_FILTER_ITEM_STONE"*/;
      goto LABEL_56;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10487/*"PRESENT_BOX_FILTER_ITEM_MANA"*/;
      goto LABEL_56;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10483/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/;
      goto LABEL_56;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10485/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/;
      goto LABEL_56;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10490/*"PRESENT_BOX_FILTER_OTHER"*/;
LABEL_56:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2BD02 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2BD02 = 1;
      }
      v5 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager_TypeInfo;
      }
      result = v5->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *ListViewSort__GetPresentBoxRarityFilterKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4D32137 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10492/*"PRESENT_BOX_FILTER_RARITY_2"*/);
    sub_1C93AD4(&StringLiteral_10491/*"PRESENT_BOX_FILTER_RARITY_1"*/);
    sub_1C93AD4(&StringLiteral_10493/*"PRESENT_BOX_FILTER_RARITY_3"*/);
    sub_1C93AD4(&StringLiteral_10495/*"PRESENT_BOX_FILTER_RARITY_5"*/);
    sub_1C93AD4(&StringLiteral_10494/*"PRESENT_BOX_FILTER_RARITY_4"*/);
    byte_4D32137 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10491/*"PRESENT_BOX_FILTER_RARITY_1"*/;
      goto LABEL_26;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10492/*"PRESENT_BOX_FILTER_RARITY_2"*/;
      goto LABEL_26;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10493/*"PRESENT_BOX_FILTER_RARITY_3"*/;
      goto LABEL_26;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10494/*"PRESENT_BOX_FILTER_RARITY_4"*/;
      goto LABEL_26;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10495/*"PRESENT_BOX_FILTER_RARITY_5"*/;
LABEL_26:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2BD02 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2BD02 = 1;
      }
      v5 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager_TypeInfo;
      }
      result = v5->static_fields->unknownNameText;
      break;
  }
  return result;
}


int32_t ListViewSort__GetPriorityKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.priorityKind;
}


System_String_o *ListViewSort__GetScaleKindSpriteName(
        ListViewSort_o *this,
        int32_t scaleKind,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4D3213C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17625/*"btn_list_extremely_small"*/);
    sub_1C93AD4(&StringLiteral_17626/*"btn_list_normal"*/);
    sub_1C93AD4(&StringLiteral_17627/*"btn_list_small"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3213C = 1;
  }
  if ( (unsigned int)scaleKind > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_47419C8 + scaleKind);
  return *v4;
}


float ListViewSort__GetScrollBarValue(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.scrollBarValue;
}


System_String_o *ListViewSort__GetSortKindButtonText(ListViewSort_o *this, bool isAnother, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 56;
  if ( isAnother )
    v3 = 152;
  return ListViewSort__GetSortKindText(this, *(_DWORD *)((char *)&this->klass + v3), method);
}


System_String_o *ListViewSort__GetSortKindText(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4D32134 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11970/*"SERVANT_SORT_KIND_USE_STATUS"*/);
    sub_1C93AD4(&StringLiteral_11966/*"SERVANT_SORT_KIND_RARITY"*/);
    sub_1C93AD4(&StringLiteral_11943/*"SERVANT_SORT_KIND_AMOUNT"*/);
    sub_1C93AD4(&StringLiteral_11961/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/);
    sub_1C93AD4(&StringLiteral_11953/*"SERVANT_SORT_KIND_FRIENDSHIP"*/);
    sub_1C93AD4(&StringLiteral_11959/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/);
    sub_1C93AD4(&StringLiteral_11944/*"SERVANT_SORT_KIND_ATK"*/);
    sub_1C93AD4(&StringLiteral_11950/*"SERVANT_SORT_KIND_CREATE"*/);
    sub_1C93AD4(&StringLiteral_11956/*"SERVANT_SORT_KIND_HP_ADJUST"*/);
    sub_1C93AD4(&StringLiteral_11962/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/);
    sub_1C93AD4(&StringLiteral_11948/*"SERVANT_SORT_KIND_COST"*/);
    sub_1C93AD4(&StringLiteral_11945/*"SERVANT_SORT_KIND_ATK_ADJUST"*/);
    sub_1C93AD4(&StringLiteral_11969/*"SERVANT_SORT_KIND_USER_LEVEL"*/);
    sub_1C93AD4(&StringLiteral_11957/*"SERVANT_SORT_KIND_ID"*/);
    sub_1C93AD4(&StringLiteral_11955/*"SERVANT_SORT_KIND_HP"*/);
    sub_1C93AD4(&StringLiteral_11965/*"SERVANT_SORT_KIND_PARTY"*/);
    sub_1C93AD4(&StringLiteral_11964/*"SERVANT_SORT_KIND_NP_LEVEL"*/);
    sub_1C93AD4(&StringLiteral_11949/*"SERVANT_SORT_KIND_COSTUME"*/);
    sub_1C93AD4(&StringLiteral_11967/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/);
    sub_1C93AD4(&StringLiteral_11951/*"SERVANT_SORT_KIND_DISP_NO"*/);
    sub_1C93AD4(&StringLiteral_11968/*"SERVANT_SORT_KIND_SERVANT_NAME"*/);
    sub_1C93AD4(&StringLiteral_11946/*"SERVANT_SORT_KIND_BUDDY_POINT"*/);
    sub_1C93AD4(&StringLiteral_11960/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/);
    sub_1C93AD4(&StringLiteral_11958/*"SERVANT_SORT_KIND_LEVEL"*/);
    sub_1C93AD4(&StringLiteral_11952/*"SERVANT_SORT_KIND_EVENT_ORDER"*/);
    sub_1C93AD4(&StringLiteral_11954/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/);
    sub_1C93AD4(&StringLiteral_11947/*"SERVANT_SORT_KIND_CLASS"*/);
    sub_1C93AD4(&StringLiteral_11963/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/);
    byte_4D32134 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11965/*"SERVANT_SORT_KIND_PARTY"*/;
      goto LABEL_95;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11950/*"SERVANT_SORT_KIND_CREATE"*/;
      goto LABEL_95;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11966/*"SERVANT_SORT_KIND_RARITY"*/;
      goto LABEL_95;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11958/*"SERVANT_SORT_KIND_LEVEL"*/;
      goto LABEL_95;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11964/*"SERVANT_SORT_KIND_NP_LEVEL"*/;
      goto LABEL_95;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11955/*"SERVANT_SORT_KIND_HP"*/;
      goto LABEL_95;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11944/*"SERVANT_SORT_KIND_ATK"*/;
      goto LABEL_95;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11948/*"SERVANT_SORT_KIND_COST"*/;
      goto LABEL_95;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11947/*"SERVANT_SORT_KIND_CLASS"*/;
      goto LABEL_95;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11959/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/;
      goto LABEL_95;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11953/*"SERVANT_SORT_KIND_FRIENDSHIP"*/;
      goto LABEL_95;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11961/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/;
      goto LABEL_95;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11969/*"SERVANT_SORT_KIND_USER_LEVEL"*/;
      goto LABEL_95;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11957/*"SERVANT_SORT_KIND_ID"*/;
      goto LABEL_95;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11943/*"SERVANT_SORT_KIND_AMOUNT"*/;
      goto LABEL_95;
    case 15:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11956/*"SERVANT_SORT_KIND_HP_ADJUST"*/;
      goto LABEL_95;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11945/*"SERVANT_SORT_KIND_ATK_ADJUST"*/;
      goto LABEL_95;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11949/*"SERVANT_SORT_KIND_COSTUME"*/;
      goto LABEL_95;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11954/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11962/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11963/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/;
      goto LABEL_95;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11960/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/;
      goto LABEL_95;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11952/*"SERVANT_SORT_KIND_EVENT_ORDER"*/;
      goto LABEL_95;
    case 25:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11967/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/;
      goto LABEL_95;
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11968/*"SERVANT_SORT_KIND_SERVANT_NAME"*/;
      goto LABEL_95;
    case 27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11951/*"SERVANT_SORT_KIND_DISP_NO"*/;
      goto LABEL_95;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11946/*"SERVANT_SORT_KIND_BUDDY_POINT"*/;
      goto LABEL_95;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11970/*"SERVANT_SORT_KIND_USE_STATUS"*/;
LABEL_95:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2BD02 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2BD02 = 1;
      }
      v5 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager_TypeInfo;
      }
      result = v5->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *ListViewSort__GetSvtEqFilter2Text(ListViewSort_o *this, int32_t type, const MethodInfo *method)
{
  int32_t v4; // w19
  int32_t filter2Kind; // t1
  System_String_o *v6; // x0
  System_String_o *v7; // x19

  if ( (byte_4D32139 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11817/*"SERVANT_SORT_FILTER2_EQUIP_"*/);
    sub_1C93AD4(&StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    byte_4D32139 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v7 = System_String__Concat_64425724((System_String_o *)StringLiteral_11817/*"SERVANT_SORT_FILTER2_EQUIP_"*/, v6, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0

  if ( (byte_4D3212B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4D3212B = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         isSvtEquipEffectFilterDic,
         categoryId,
         (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( isSvtEquipEffectFilterDic )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               isSvtEquipEffectFilterDic,
               categoryId,
               (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE;
LABEL_8:
    sub_1C93D2C(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
  }
  return 0;
}


int32_t ListViewSort__GetSvtEquipEffectFilterInt(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  bool SvtEquipEffectFilter; // w0
  __int64 v5; // x8

  SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this, categoryId, method);
  v5 = 16;
  if ( SvtEquipEffectFilter )
    v5 = 20;
  return *(_DWORD *)((char *)&this->klass + v5);
}


System_Collections_Generic_Dictionary_int__int____o *ListViewSort__GetSvtEventBonusFilterDictionary(
        ListViewSort_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEventBonusFilterDic;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ListViewSort__GetSvtEventBonusFilterInt(
        ListViewSort_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0

  if ( (byte_4D3212D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4D3212D = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                                     eventId,
                                     (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_8:
    sub_1C93D2C(svtEventBonusFilterDic, *(_QWORD *)&eventId);
  }
  return 0;
}


System_String_o *ListViewSort__GetSvtFilter2Text(ListViewSort_o *this, int32_t type, const MethodInfo *method)
{
  int32_t v5; // w19
  int32_t filter2Kind; // t1
  System_String_o *v7; // x0
  __int64 *v8; // x8
  System_String_o *v9; // x19

  if ( (byte_4D32138 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11820/*"SERVANT_SORT_FILTER2_NP_"*/);
    sub_1C93AD4(&StringLiteral_12848/*"Servant_SORT_FILTER2_EXCEED_"*/);
    sub_1C93AD4(&StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_1C93AD4(&StringLiteral_11822/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/);
    sub_1C93AD4(&StringLiteral_11818/*"SERVANT_SORT_FILTER2_EXCEED_"*/);
    sub_1C93AD4(&StringLiteral_11819/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/);
    byte_4D32138 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v5 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
LABEL_6:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (System_String_o *)StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    switch ( type )
    {
      case 2:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11819/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/;
        break;
      case 3:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11822/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/;
        break;
      case 4:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11820/*"SERVANT_SORT_FILTER2_NP_"*/;
        break;
      case 6:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11818/*"SERVANT_SORT_FILTER2_EXCEED_"*/;
        break;
      case 8:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_12848/*"Servant_SORT_FILTER2_EXCEED_"*/;
        break;
      default:
        goto LABEL_6;
    }
    v9 = System_String__Concat_64425724((System_String_o *)*v8, v7, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v9, 0);
}


System_String_o *ListViewSort__GetSvtOperationFilter2Text(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  int32_t v4; // w19
  int32_t filter2Kind; // t1
  System_String_o *v6; // x0
  System_String_o *v7; // x19

  if ( (byte_4D3213A & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_1C93AD4(&StringLiteral_11821/*"SERVANT_SORT_FILTER2_OPERATION_"*/);
    byte_4D3213A = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_11816/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v7 = System_String__Concat_64425724((System_String_o *)StringLiteral_11821/*"SERVANT_SORT_FILTER2_OPERATION_"*/, v6, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0);
}


void ListViewSort__IncrementBonusFilter(
        ListViewSort_o *this,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isQuestStart,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  int32_t *p_bonusKindId; // x19
  int32_t bonusKindId; // t1
  int32_t v12; // w0
  __int128 v13; // q0
  int32_t *v14; // x2
  int32_t bonusKind2Id; // t1
  int32_t v16; // w0
  __int128 v17; // q0
  ListViewSort_BonusFilterInfo_o v18; // [xsp+8h] [xbp-98h] BYREF
  ListViewSort_BonusFilterInfo_o v19; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *v20; // [xsp+40h] [xbp-60h] BYREF
  int32_t v21; // [xsp+4Ch] [xbp-54h] BYREF
  ListViewSort_BonusFilterInfo_o v22; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_4D32128 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_4D32128 = 1;
  }
  v21 = 0;
  v20 = 0;
  memset(&v19, 0, sizeof(v19));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
  {
    if ( isQuestStart )
    {
      bonusKindId = this->fields.bonusKindId;
      p_bonusKindId = &this->fields.bonusKindId;
      v12 = ListViewSort__BonusFilterKindIndex(bonusKindId, *(p_bonusKindId - 1), bonusFilterInfos, 1, 0, v9);
      v13 = *(_OWORD *)(p_bonusKindId + 29);
      v22.fields.buttonText = *(struct System_String_o **)(p_bonusKindId + 33);
      *(_OWORD *)&v22.fields.priority = v13;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v18,
        bonusFilterInfos,
        v12 + 1,
        &v22,
        (const MethodInfo_3193080 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      v19 = v18;
      v14 = p_bonusKindId - 1;
    }
    else
    {
      bonusKind2Id = this->fields.bonusKind2Id;
      p_bonusKindId = &this->fields.bonusKind2Id;
      v16 = ListViewSort__BonusFilterKindIndex(bonusKind2Id, *(p_bonusKindId - 1), bonusFilterInfos, 0, nowTime, v9);
      v17 = *(_OWORD *)(p_bonusKindId + 27);
      v22.fields.buttonText = *(struct System_String_o **)(p_bonusKindId + 31);
      *(_OWORD *)&v22.fields.priority = v17;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v18,
        bonusFilterInfos,
        v16 + 1,
        &v22,
        (const MethodInfo_3193080 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      v14 = p_bonusKindId - 1;
      v19 = v18;
    }
    ListViewSort_BonusFilterInfo__Deconstruct(&v19, &v21, v14, p_bonusKindId, &v20, 0);
  }
}


void ListViewSort__InitLoad(ListViewSort_o *this, const MethodInfo *method)
{
  int32_t defaultSortKind; // w8
  bool isDefaultAscendingOrder; // w9

  this->fields.sortKind = 3;
  this->fields.listViewKind = 0;
  this->fields.filter2Kind = 0;
  this->fields.expUpDispType = 0;
  *(_WORD *)&this->fields.isRequestLoad = 1;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.isAscendingOrder = 1;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
  defaultSortKind = this->fields.defaultSortKind;
  isDefaultAscendingOrder = this->fields.isDefaultAscendingOrder;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_D018F0;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.sortKind = defaultSortKind;
  this->fields.isAscendingOrder = isDefaultAscendingOrder;
  *(_QWORD *)&this->fields.otherSortKind = 11;
}


void ListViewSort__InitSvtEquipEffectFilterList(ListViewSort_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  void *isSvtEquipEffectFilterDic; // x0
  Il2CppObject *MasterData_object; // x0
  FunctionCategoryMaster_o *v13; // x20
  int32_t listViewKind; // w8
  int v15; // w9
  int32_t v16; // w21
  int v17; // w8
  void *v18; // x20
  unsigned int v19; // w21
  __int64 v20; // x8

  if ( (byte_4D3210D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D3210D = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C69B68(v8);
    isSvtEquipEffectFilterDic = **(void ***)(v10 + 184);
    if ( !isSvtEquipEffectFilterDic )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)isSvtEquipEffectFilterDic,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    if ( MasterData_object )
    {
      v13 = (FunctionCategoryMaster_o *)MasterData_object;
      isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
      if ( !isSvtEquipEffectFilterDic )
        goto LABEL_31;
      listViewKind = this->fields.listViewKind;
      v15 = listViewKind == 3 ? 2 : 1;
      v16 = listViewKind ? v15 : 4;
      System_Collections_Generic_Dictionary_int__int___Clear(
        (System_Collections_Generic_Dictionary_int__int__o *)isSvtEquipEffectFilterDic,
        (const MethodInfo_34B444C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
      isSvtEquipEffectFilterDic = FunctionCategoryMaster__GetEntitiesByFlag(v13, v16, 0);
      if ( !isSvtEquipEffectFilterDic )
        goto LABEL_31;
      v17 = *((_DWORD *)isSvtEquipEffectFilterDic + 6);
      v18 = isSvtEquipEffectFilterDic;
      if ( v17 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= v17 )
            sub_1C93D34(isSvtEquipEffectFilterDic);
          v20 = *((_QWORD *)v18 + (int)v19 + 4);
          if ( !v20 )
            break;
          isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
          if ( !isSvtEquipEffectFilterDic )
            break;
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)isSvtEquipEffectFilterDic,
            *(_DWORD *)(v20 + 16),
            this->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE,
            (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          v17 = *((_DWORD *)v18 + 6);
          if ( (int)++v19 >= v17 )
            return;
        }
LABEL_31:
        sub_1C93D2C(isSvtEquipEffectFilterDic, v7);
      }
    }
  }
}


bool ListViewSort__IsChangeSaveData(
        ListViewSort_o *this,
        System_String_o *filterListData,
        int32_t presentBoxfilterListData,
        int32_t presentBoxfilterRarityListData,
        int32_t autoOrganizationFilterListData,
        int32_t waveBattleAutoOrganizationFilterListData,
        const MethodInfo *method)
{
  int32_t sortKind; // w26
  System_String_o *v14; // x0
  _BOOL4 isAscendingOrder; // w25
  System_String_o *v16; // x0
  int32_t bonusKind; // w25
  System_String_o *v18; // x0
  int32_t bonusKindId; // w25
  System_String_o *v20; // x0
  int32_t bonusKind2; // w25
  System_String_o *v22; // x0
  int32_t bonusKind2Id; // w25
  System_String_o *v24; // x0
  int32_t filter2Kind; // w25
  System_String_o *v26; // x0
  _BOOL4 isSmartSort; // w25
  System_String_o *v28; // x0
  _BOOL4 isChoiceSort; // w25
  System_String_o *v30; // x0
  int32_t iconScaleKind; // w25
  System_String_o *v32; // x0
  int32_t expUpDispKind; // w25
  System_String_o *v34; // x0
  int32_t expUpDispType; // w25
  System_String_o *v36; // x0
  float scrollBarValue; // s8
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  System_String_o *v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  int32_t autoOrganizationMode; // w20
  System_String_o *v49; // x0
  int32_t priorityKind; // w20
  System_String_o *v51; // x0
  int32_t otherSortKind; // w20
  System_String_o *v53; // x0

  if ( (byte_4D32115 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3214/*"BonusKind2Id-"*/);
    sub_1C93AD4(&StringLiteral_6341/*"ExpUpDispType-"*/);
    sub_1C93AD4(&StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2508/*"AutoOrganizationMode-"*/);
    sub_1C93AD4(&StringLiteral_3213/*"BonusKind2-"*/);
    sub_1C93AD4(&StringLiteral_10806/*"PresentBoxSortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10817/*"PriorityKind-"*/);
    sub_1C93AD4(&StringLiteral_7573/*"IconSizeKind-"*/);
    sub_1C93AD4(&StringLiteral_3212/*"BonusKind-"*/);
    sub_1C93AD4(&StringLiteral_4441/*"ChoiceSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2507/*"AutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10122/*"OtherSortKind-"*/);
    sub_1C93AD4(&StringLiteral_12744/*"ScrollBarValue-"*/);
    sub_1C93AD4(&StringLiteral_13024/*"SortFilter2-"*/);
    sub_1C93AD4(&StringLiteral_13028/*"SortKind-"*/);
    sub_1C93AD4(&StringLiteral_6340/*"ExpUpDispKind-"*/);
    sub_1C93AD4(&StringLiteral_13029/*"SortOrder-"*/);
    sub_1C93AD4(&StringLiteral_3215/*"BonusKindId-"*/);
    byte_4D32115 = 1;
  }
  sortKind = this->fields.sortKind;
  v14 = System_String__Concat_64425724((System_String_o *)StringLiteral_13028/*"SortKind-"*/, this->fields.saveKey, 0);
  if ( sortKind != UnityEngine_PlayerPrefs__GetInt(v14, this->fields.defaultSortKind, 0) )
    return 1;
  isAscendingOrder = this->fields.isAscendingOrder;
  v16 = System_String__Concat_64425724((System_String_o *)StringLiteral_13029/*"SortOrder-"*/, this->fields.saveKey, 0);
  if ( isAscendingOrder == (UnityEngine_PlayerPrefs__GetInt(v16, this->fields.isDefaultAscendingOrder, 0) == 0) )
    return 1;
  bonusKind = this->fields.bonusKind;
  v18 = System_String__Concat_64425724((System_String_o *)StringLiteral_3212/*"BonusKind-"*/, this->fields.saveKey, 0);
  if ( bonusKind != UnityEngine_PlayerPrefs__GetInt(v18, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  bonusKindId = this->fields.bonusKindId;
  v20 = System_String__Concat_64425724((System_String_o *)StringLiteral_3215/*"BonusKindId-"*/, this->fields.saveKey, 0);
  if ( bonusKindId != UnityEngine_PlayerPrefs__GetInt(v20, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2 = this->fields.bonusKind2;
  v22 = System_String__Concat_64425724((System_String_o *)StringLiteral_3213/*"BonusKind2-"*/, this->fields.saveKey, 0);
  if ( bonusKind2 != UnityEngine_PlayerPrefs__GetInt(v22, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2Id = this->fields.bonusKind2Id;
  v24 = System_String__Concat_64425724((System_String_o *)StringLiteral_3214/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  if ( bonusKind2Id != UnityEngine_PlayerPrefs__GetInt(v24, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  filter2Kind = this->fields.filter2Kind;
  v26 = System_String__Concat_64425724((System_String_o *)StringLiteral_13024/*"SortFilter2-"*/, this->fields.saveKey, 0);
  if ( filter2Kind != UnityEngine_PlayerPrefs__GetInt(v26, 0, 0) )
    return 1;
  isSmartSort = this->fields.isSmartSort;
  v28 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  if ( isSmartSort != (UnityEngine_PlayerPrefs__GetInt(v28, 1, 0) == 1) )
    return 1;
  isChoiceSort = this->fields.isChoiceSort;
  v30 = System_String__Concat_64425724((System_String_o *)StringLiteral_4441/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
  if ( isChoiceSort != (UnityEngine_PlayerPrefs__GetInt(v30, 0, 0) == 1) )
    return 1;
  iconScaleKind = this->fields.iconScaleKind;
  v32 = System_String__Concat_64425724((System_String_o *)StringLiteral_7573/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  if ( iconScaleKind != UnityEngine_PlayerPrefs__GetInt(v32, 0, 0) )
    return 1;
  expUpDispKind = this->fields.expUpDispKind;
  v34 = System_String__Concat_64425724((System_String_o *)StringLiteral_6340/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
  if ( expUpDispKind != UnityEngine_PlayerPrefs__GetInt(v34, 0, 0) )
    return 1;
  expUpDispType = this->fields.expUpDispType;
  v36 = System_String__Concat_64425724((System_String_o *)StringLiteral_6341/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
  if ( expUpDispType != UnityEngine_PlayerPrefs__GetInt(v36, 0, 0) )
    return 1;
  scrollBarValue = this->fields.scrollBarValue;
  v38 = System_String__Concat_64425724((System_String_o *)StringLiteral_12744/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
  if ( scrollBarValue != UnityEngine_PlayerPrefs__GetFloat(v38, 0.0, 0) )
    return 1;
  v40 = ListViewSort__GetFilterListData(this, v39);
  if ( !filterListData )
    sub_1C93D2C(v40, v41);
  if ( !System_String__Equals_64461044(filterListData, v40, 0) )
    return 1;
  v42 = System_String__Concat_64425724((System_String_o *)StringLiteral_10806/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v42, 0, 0) != presentBoxfilterListData )
    return 1;
  v43 = System_String__Concat_64425724((System_String_o *)StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v43, 0, 0) != presentBoxfilterRarityListData )
    return 1;
  if ( ListViewSort__IsChangeSvtEquipEffectFilter(this, v44) )
    return 1;
  if ( ListViewSort__IsChangeSvtEventBonusFilter(this, v45) )
    return 1;
  v46 = System_String__Concat_64425724((System_String_o *)StringLiteral_2507/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v46, 0, 0) != autoOrganizationFilterListData )
    return 1;
  v47 = System_String__Concat_64425724((System_String_o *)StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v47, 0, 0) != waveBattleAutoOrganizationFilterListData )
    return 1;
  autoOrganizationMode = this->fields.autoOrganizationMode;
  v49 = System_String__Concat_64425724((System_String_o *)StringLiteral_2508/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
  if ( autoOrganizationMode != UnityEngine_PlayerPrefs__GetInt(v49, 0, 0) )
    return 1;
  priorityKind = this->fields.priorityKind;
  v51 = System_String__Concat_64425724((System_String_o *)StringLiteral_10817/*"PriorityKind-"*/, this->fields.saveKey, 0);
  if ( priorityKind != UnityEngine_PlayerPrefs__GetInt(v51, 0, 0) )
    return 1;
  otherSortKind = this->fields.otherSortKind;
  v53 = System_String__Concat_64425724((System_String_o *)StringLiteral_10122/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  return otherSortKind != UnityEngine_PlayerPrefs__GetInt(v53, 11, 0);
}


bool ListViewSort__IsChangeSvtEquipEffectFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_Dictionary_string__int__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__int__o *v10; // x20
  int32_t key; // w21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t Item; // w22
  Il2CppObject *v16; // x1
  _OWORD v18[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-70h] BYREF
  int32_t v20; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4D3211D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/);
    byte_4D3211D = 1;
  }
  v20 = 0;
  memset(&v19, 0, 32);
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  String = UnityEngine_PlayerPrefs__GetString(v3, string_TypeInfo->static_fields->Empty, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v6) )
      return 1;
  }
  else
  {
    v8 = ListViewSort__ConvertJsonToSvtEquipEffectFilterData((ListViewSort_o *)IsNullOrEmpty, String, v7);
    if ( !this->fields.isSvtEquipEffectFilterDic )
      sub_1C93D2C(v8, v9);
    v10 = (System_Collections_Generic_Dictionary_object__int__o *)v8;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v18,
      this->fields.isSvtEquipEffectFilterDic,
      (const MethodInfo_34B46A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    *(_OWORD *)&v19.fields._dictionary = v18[0];
    v19.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v18[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v19,
              (const MethodInfo_361C294 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
    {
      key = (int32_t)v19.fields._current.fields.key;
      v20 = (int32_t)v19.fields._current.fields.key;
      v12 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0);
      if ( !v10 )
        sub_1C93D2C(v12, v12);
      if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
             v10,
             v12,
             (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
      {
        isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
        if ( !isSvtEquipEffectFilterDic )
          sub_1C93D2C(0, v13);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 isSvtEquipEffectFilterDic,
                 key,
                 (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v20 = key;
        v16 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__int___get_Item(
                       v10,
                       v16,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
        &v19,
        (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v19,
      (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  }
  return 0;
}


bool ListViewSort__IsChangeSvtEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_Dictionary_string__int____o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t key; // w21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *Item; // x22
  Il2CppObject *v16; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-80h] BYREF
  int32_t v20; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_4D3211E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_13290/*"SvtEventBonusFilterNew-"*/);
    byte_4D3211E = 1;
  }
  v20 = 0;
  memset(&v19, 0, sizeof(v19));
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13290/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
  String = UnityEngine_PlayerPrefs__GetString(v3, string_TypeInfo->static_fields->Empty, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v6) )
      return 1;
  }
  else
  {
    v8 = ListViewSort__ConvertJsonToSvtEventBonusFilterData((ListViewSort_o *)IsNullOrEmpty, String, v7);
    if ( !this->fields.svtEventBonusFilterDic )
      sub_1C93D2C(v8, v9);
    v10 = (System_Collections_Generic_Dictionary_object__object__o *)v8;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v18,
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
      (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v19,
              (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
    {
      key = (int32_t)v19.fields._current.fields.key;
      v20 = (int32_t)v19.fields._current.fields.key;
      v12 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0);
      if ( !v10 )
        sub_1C93D2C(v12, v12);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v10,
             v12,
             (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__) )
      {
        svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
        if ( !svtEventBonusFilterDic )
          sub_1C93D2C(0, v13);
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                 key,
                 (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
        v20 = key;
        v16 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__object___get_Item(
                       v10,
                       v16,
                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__int____get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v19,
        (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v19,
      (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  }
  return 0;
}


bool ListViewSort__IsFinishedCampaignId(int32_t eventId, int32_t kind, int64_t nowTime, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  EventCampaignMaster_o *v10; // x22
  __int64 v11; // x8

  if ( (byte_4D3212A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3212A = 1;
  }
  if ( kind != 3 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v10 = (EventCampaignMaster_o *)Instance;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0);
    nowTime = Instance;
  }
  if ( !v10 )
    goto LABEL_19;
  Instance = (int64_t)EventCampaignMaster__getData(v10, eventId, 0);
  if ( Instance )
  {
    v11 = *(_QWORD *)(Instance + 40);
    if ( !v11 )
      goto LABEL_19;
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( MasterData_object )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              eventId,
                              (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( Instance )
          return nowTime > *(_QWORD *)(Instance + 104);
      }
LABEL_19:
      sub_1C93D2C(Instance, v8);
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__IsHideSvtEventBonusFilter(
        ListViewSort_o *this,
        int32_t eventId,
        int32_t objectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_int__o *v9; // x20

  if ( (byte_4D3212C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3212C = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
               eventId,
               (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_59097676(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)Item,
        (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
      if ( v9 )
        return System_Collections_Generic_List_int___Contains(
                 v9,
                 objectId,
                 (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C93D2C(svtEventBonusFilterDic, *(_QWORD *)&eventId);
  }
  return 0;
}


bool ListViewSort__IsInitialValueIsInverted(ListViewSort_o *this, int32_t filterKind, const MethodInfo *method)
{
  return (filterKind & 0xFFFFFFFE) == 40;
}


bool ListViewSort__IsMatchClassExtra1Filter(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  int32_t classId; // w8
  int32_t v4; // w1

  if ( servantEntity )
  {
    classId = servantEntity->fields.classId;
    switch ( classId )
    {
      case 23:
        v4 = 60;
        return ListViewSort__GetFilter(this, v4, method);
      case 11:
        v4 = 59;
        return ListViewSort__GetFilter(this, v4, method);
      case 9:
        v4 = 58;
        return ListViewSort__GetFilter(this, v4, method);
    }
  }
  return 0;
}


bool ListViewSort__IsMatchClassExtra2Filter(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  int32_t ClassId; // w0
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  if ( !servantEntity )
    return 0;
  ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0);
  if ( ClassId <= 25 )
  {
    if ( ClassId == 10 )
    {
      v6 = 61;
      return ListViewSort__GetFilter(this, v6, v5);
    }
    if ( ClassId == 25 )
    {
      v6 = 62;
      return ListViewSort__GetFilter(this, v6, v5);
    }
    return 0;
  }
  if ( ClassId == 28 )
  {
    v6 = 63;
    return ListViewSort__GetFilter(this, v6, v5);
  }
  if ( ClassId != 33 )
    return 0;
  v6 = 64;
  return ListViewSort__GetFilter(this, v6, v5);
}


bool ListViewSort__IsMatchClassFilter(ListViewSort_o *this, ServantEntity_o *servantEntity, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  ListViewSort_o *v7; // x0
  bool result; // w0

  if ( !servantEntity )
    return 0;
  if ( ServantEntity__IsBeastNotPlayable(servantEntity, 0) )
  {
LABEL_3:
    v6 = 64;
LABEL_4:
    v7 = this;
    return ListViewSort__GetFilter(v7, v6, v5);
  }
  else
  {
    switch ( ServantEntity__GetClassId(servantEntity, 1, 0, 0) )
    {
      case 1:
      case 13:
        v7 = this;
        v6 = 0;
        return ListViewSort__GetFilter(v7, v6, v5);
      case 2:
      case 14:
        v6 = 1;
        goto LABEL_4;
      case 3:
      case 15:
        v6 = 2;
        goto LABEL_4;
      case 4:
      case 16:
        v6 = 3;
        goto LABEL_4;
      case 5:
      case 17:
        v6 = 4;
        goto LABEL_4;
      case 6:
      case 18:
        v6 = 5;
        goto LABEL_4;
      case 7:
      case 19:
        v6 = 6;
        goto LABEL_4;
      case 8:
        v6 = 57;
        goto LABEL_4;
      case 9:
        v6 = 58;
        goto LABEL_4;
      case 10:
        v6 = 61;
        goto LABEL_4;
      case 11:
        v6 = 59;
        goto LABEL_4;
      case 23:
        v6 = 60;
        goto LABEL_4;
      case 25:
        v6 = 62;
        goto LABEL_4;
      case 28:
        v6 = 63;
        goto LABEL_4;
      case 33:
        goto LABEL_3;
      default:
        result = ServantEntity__get_IsAllClass(servantEntity, 0);
        break;
    }
  }
  return result;
}


bool ListViewSort__IsMatchClassGroupFilter(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  _BOOL8 IsThreeKnights; // x0
  __int64 v9; // x1
  unsigned __int8 v10; // w22
  const MethodInfo *v11; // x2
  bool v12; // w23
  const MethodInfo *v13; // x2
  bool v14; // w23
  bool v15; // w23
  ListViewSort_FilterKind_array *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4D3213D & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4D3213D = 1;
  }
  if ( !servantEntity )
    return 0;
  v5 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( ListViewSort__GetFilter(this, 65, v6) )
  {
    IsThreeKnights = ServantEntity__IsThreeKnights(servantEntity, 0);
    v10 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
      (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  else
  {
    v10 = 0;
  }
  if ( ListViewSort__GetFilter(this, 66, v7) )
  {
    IsThreeKnights = ServantEntity__IsFourCavalry(servantEntity, 0);
    v12 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    v10 |= v12;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
      (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  if ( ListViewSort__GetFilter(this, 67, v11) )
  {
    IsThreeKnights = ServantEntity__IsExtra1(servantEntity, 0);
    v14 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    v10 |= v14;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
      (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  IsThreeKnights = ListViewSort__GetFilter(this, 68, v13);
  if ( !IsThreeKnights )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_28;
LABEL_27:
    IsThreeKnights = ServantEntity__get_IsAllClass(servantEntity, 0);
    if ( IsThreeKnights )
    {
LABEL_28:
      if ( v5 )
        goto LABEL_29;
LABEL_33:
      sub_1C93D2C(IsThreeKnights, v9);
    }
    return 0;
  }
  IsThreeKnights = ServantEntity__IsExtra2(servantEntity, 0);
  v15 = IsThreeKnights;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v5 )
    goto LABEL_33;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( ((v10 | v15) & 1) == 0 )
    goto LABEL_27;
LABEL_29:
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           v5,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(this, v16, v17)
      || ListViewSort__IsMatchClassFilter(this, servantEntity, v18);
}


bool ListViewSort__IsMatchNPEffectFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t DispLimitCount; // w0
  bool TreasureDeviceInfo; // w8
  TreasureDvcEntity_o *v7; // x0
  Il2CppObject *Master_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  TreasureDvcMaster_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4D3213F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3213F = 1;
  }
  tdInfo = 0;
  if ( userServantEntity )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, DispLimitCount, 0, 0);
    LOBYTE(v7) = 0;
    if ( TreasureDeviceInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v11 = (TreasureDvcMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v10;
      *(_QWORD *)&v17.fields.fakeValue = v9;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v17, 0);
      if ( !tdInfo || !v11 )
        sub_1C93D2C(v12, v13);
      v7 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v11, v12, tdInfo->fields.id, 0);
      if ( v7 )
        LOBYTE(v7) = ListViewSort__IsMatchNPEffectFilter_44563084(this, v7, v14);
    }
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return (unsigned __int8)v7 & 1;
}


bool ListViewSort__IsMatchNPEffectFilter_44563084(
        ListViewSort_o *this,
        TreasureDvcEntity_o *tdEntity,
        const MethodInfo *method)
{
  int64_t EffectFlag; // x1
  const MethodInfo *v5; // x2

  if ( !tdEntity )
    return 0;
  EffectFlag = TreasureDvcEntity__GetEffectFlag(tdEntity, 0);
  return ListViewSort__IsMatchNPEffectFilter_44563512(this, EffectFlag, v5);
}


bool ListViewSort__IsMatchNPEffectFilter_44563132(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTreasureDvcMaster_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  ServantTreasureDvcEntity_o *v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x22
  __int64 v15; // x23
  TreasureDvcMaster_o *v16; // x20
  TreasureDvcEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4D32140 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D32140 = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v8 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v7;
  *(_QWORD *)&v20.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v20, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v8, v9, 1, 0);
  if ( !EntityFromSvtIdOnly )
    return 0;
  v12 = EntityFromSvtIdOnly;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v13 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v15 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v16 = (TreasureDvcMaster_o *)v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  if ( !v16 )
LABEL_18:
    sub_1C93D2C(v9, v10);
  v17 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v16, v9, v12->fields.treasureDeviceId, 0);
  if ( v17 )
    return ListViewSort__IsMatchNPEffectFilter_44563084(this, v17, v18);
  return 0;
}


bool ListViewSort__IsMatchNPEffectFilter_44563512(ListViewSort_o *this, int64_t npEffectFlag, const MethodInfo *method)
{
  int32_t v3; // w1

  if ( (unsigned __int64)(npEffectFlag + 1) <= 3 )
  {
    switch ( (_DWORD)npEffectFlag )
    {
      case 0xFFFFFFFF:
        v3 = 47;
        return ListViewSort__GetFilter(this, v3, method);
      case 2:
        v3 = 45;
        return ListViewSort__GetFilter(this, v3, method);
      case 1:
        v3 = 46;
        return ListViewSort__GetFilter(this, v3, method);
    }
  }
  return 0;
}


bool ListViewSort__IsMatchNPTypeFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t DispLimitCount; // w0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool TreasureDeviceInfo; // w8
  bool v9; // w0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0;
  if ( userServantEntity )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, DispLimitCount, 0, 0);
    v9 = 0;
    if ( TreasureDeviceInfo )
    {
      if ( !tdInfo )
        sub_1C93D2C(0, v6);
      return ListViewSort__IsMatchNPTypeFilter_44562488(this, tdInfo->fields.cardId, v7);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}


bool ListViewSort__IsMatchNPTypeFilter_44562488(ListViewSort_o *this, int32_t npType, const MethodInfo *method)
{
  return (unsigned int)(npType - 1) <= 2 && ListViewSort__GetFilter(this, dword_D35EF0[npType - 1], method);
}


bool ListViewSort__IsMatchNPTypeFilter_44562524(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTreasureDvcMaster_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D3213E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3213E = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v8 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  if ( !v8 )
    sub_1C93D2C(v9, v10);
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v8, v9, 1, 0);
  return EntityFromSvtIdOnly
      && ListViewSort__IsMatchNPTypeFilter_44562488(this, EntityFromSvtIdOnly->fields.cardId, v12);
}


bool ListViewSort__IsMatchRarityFilter(ListViewSort_o *this, int32_t rarity, const MethodInfo *method)
{
  return (unsigned int)(rarity - 1) <= 4 && ListViewSort__GetFilter(this, rarity + 33, method);
}


bool ListViewSort__IsMatchServantAttriFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ServantAttriFirstFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_T__o *ServantAttriSecondFilterKindList; // x8
  int v12; // w21
  ListViewSort_FilterKind_array *v13; // x0
  const MethodInfo *v14; // x2
  _BOOL4 IsUnSelectedAllTargetFilters; // w0
  bool result; // w0
  bool v17; // w22
  unsigned int type; // w8
  int32_t DispLimitCount; // w0
  __int64 v20; // x25
  __int64 v21; // x26
  int32_t v22; // w23
  int32_t v23; // w25
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *Master_object; // x25
  int ServantLimitCountSealAfter; // w25
  System_Collections_Generic_List_int__o *v27; // x23
  const MethodInfo *v28; // x2
  Il2CppObject *v29; // x0
  __int64 v30; // x27
  __int64 v31; // x28
  ServantLimitAddMaster_o *v32; // x26
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x26
  ListViewSort___c_c *v34; // x0
  System_Func_int__bool__o *_9__254_0; // x27
  Il2CppObject *v36; // x28
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  ListViewSort___c_c *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x27
  System_Func_int__int__o *_9__254_1; // x28
  Il2CppObject *v48; // x29
  struct ListViewSort___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v56; // x0
  ListViewSort___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x27
  System_Func_int__bool__o *_9__254_2; // x28
  Il2CppObject *v60; // x29
  struct ListViewSort___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  Il2CppObject *v75; // x25
  __int64 v76; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x28
  ListViewSort___c_c *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x24
  System_Func_int__bool__o *_9__254_3; // x27
  Il2CppObject *v81; // x28
  struct ListViewSort___c_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x24
  System_Func_int__bool__o *v90; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  Il2CppObject *v92; // x0
  __int64 v93; // x24
  __int64 v94; // x26
  ServantLimitMaster_o *v95; // x20
  System_Collections_Generic_List_T__o *v96; // [xsp+0h] [xbp-90h]
  __int64 v97; // [xsp+8h] [xbp-88h]
  IndividualityPersonalityEntity_o *v98; // [xsp+10h] [xbp-80h] BYREF
  IndividualityPolicyEntity_o *v99; // [xsp+18h] [xbp-78h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  ServantLimitEntity_o *v101; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4D32144 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&System_Func_int__int__TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__);
    sub_1C93AD4(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__);
    sub_1C93AD4(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__);
    sub_1C93AD4(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__);
    sub_1C93AD4(&ListViewSort___c__DisplayClass254_0_TypeInfo);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D32144 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  entity = 0;
  v101 = 0;
  v98 = 0;
  v99 = 0;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ServantAttriFirstFilterKindList;
  if ( !ServantAttriFirstFilterKindList )
    goto LABEL_92;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ServantAttriFirstFilterKindList,
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                              this,
                                                                              v9,
                                                                              v10);
  ServantAttriSecondFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList;
  if ( !ServantAttriSecondFilterKindList )
    goto LABEL_92;
  v12 = (int)ServantAttriFirstFilterKindList;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ServantAttriSecondFilterKindList,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(this, v13, v14);
  if ( (v12 & IsUnSelectedAllTargetFilters & 1) != 0 )
    return 1;
  v17 = IsUnSelectedAllTargetFilters;
  result = 0;
  if ( userServantEntity && servantEntity )
  {
    type = servantEntity->fields.type;
    if ( type <= 0xC && ((1 << type) & 0x1088) != 0 )
      return 0;
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    v21 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v20 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v22 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v102.fields.currentCryptoKey = v21;
    *(_QWORD *)&v102.fields.fakeValue = v20;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v102, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v22, v23, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                userServantEntity->fields.svtId,
                                                                                0);
    if ( !Master_object )
      goto LABEL_92;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   (int32_t)ServantAttriFirstFilterKindList,
                                   LimitCountByDispLimit,
                                   0);
    v27 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( ServantLimitCountSealAfter >= 11 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v32 = (ServantLimitAddMaster_o *)v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v103.fields.currentCryptoKey = v31;
      *(_QWORD *)&v103.fields.fakeValue = v30;
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                  v103,
                                                                                  0);
      if ( !v32 )
        goto LABEL_92;
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)ServantLimitAddMaster__TryGetEntity(
                                                                                  v32,
                                                                                  &entity,
                                                                                  (int32_t)ServantAttriFirstFilterKindList,
                                                                                  ServantLimitCountSealAfter,
                                                                                  0);
      if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) != 0 )
      {
        v97 = sub_1C93D20(ListViewSort___c__DisplayClass254_0_TypeInfo);
        ListViewSort___c__DisplayClass254_0___ctor((ListViewSort___c__DisplayClass254_0_o *)v97, 0);
        if ( !entity )
          goto LABEL_92;
        individuality = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.individuality;
        v34 = ListViewSort___c_TypeInfo;
        if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
          v34 = ListViewSort___c_TypeInfo;
        }
        _9__254_0 = v34->static_fields->__9__254_0;
        if ( !_9__254_0 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v34 = ListViewSort___c_TypeInfo;
          }
          v36 = (Il2CppObject *)v34->static_fields->__9;
          _9__254_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_0,
            v36,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__,
            0);
          static_fields = ListViewSort___c_TypeInfo->static_fields;
          static_fields->__9__254_0 = _9__254_0;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__254_0,
            (int32_t)_9__254_0,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
        v44 = System_Linq_Enumerable__Where_int_(
                individuality,
                (System_Func_TSource__bool__o *)_9__254_0,
                (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v44,
                                                                                    (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
        v96 = ServantAttriFirstFilterKindList;
        if ( !entity )
          goto LABEL_92;
        v45 = ListViewSort___c_TypeInfo;
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.individuality;
        if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
          v45 = ListViewSort___c_TypeInfo;
        }
        _9__254_1 = v45->static_fields->__9__254_1;
        if ( !_9__254_1 )
        {
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = ListViewSort___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v45->static_fields->__9;
          _9__254_1 = (System_Func_int__int__o *)sub_1C93D20(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(_9__254_1, v48, Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__, 0);
          v49 = ListViewSort___c_TypeInfo->static_fields;
          v49->__9__254_1 = _9__254_1;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v49->__9__254_1, (int32_t)_9__254_1, v50, v51, v52, v53, v54, v55);
        }
        v56 = System_Linq_Enumerable__Select_int__int_(
                v46,
                (System_Func_TSource__TResult__o *)_9__254_1,
                (const MethodInfo_31D77BC *)Method_System_Linq_Enumerable_Select_int__int___);
        v57 = ListViewSort___c_TypeInfo;
        v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
        if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
          v57 = ListViewSort___c_TypeInfo;
        }
        _9__254_2 = v57->static_fields->__9__254_2;
        if ( !_9__254_2 )
        {
          if ( !v57->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v57);
            v57 = ListViewSort___c_TypeInfo;
          }
          v60 = (Il2CppObject *)v57->static_fields->__9;
          _9__254_2 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_2,
            v60,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__,
            0);
          v61 = ListViewSort___c_TypeInfo->static_fields;
          v61->__9__254_2 = _9__254_2;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v61->__9__254_2, (int32_t)_9__254_2, v62, v63, v64, v65, v66, v67);
        }
        v68 = System_Linq_Enumerable__Where_int_(
                v58,
                (System_Func_TSource__bool__o *)_9__254_2,
                (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v68,
                                                                                    (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
        v75 = (Il2CppObject *)v97;
        if ( !v97 )
          goto LABEL_92;
        *(_QWORD *)(v97 + 16) = ServantAttriFirstFilterKindList;
        v76 = v97 + 16;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v97 + 16),
          (int32_t)ServantAttriFirstFilterKindList,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v96;
        if ( !v96 )
          goto LABEL_92;
        if ( v96->fields._size > 0 )
          goto LABEL_54;
        if ( !*(_QWORD *)v76 )
          goto LABEL_92;
        if ( *(int *)(*(_QWORD *)v76 + 24LL) < 1 )
        {
          ServantLimitCountSealAfter = 0;
          if ( !v27 )
            goto LABEL_92;
        }
        else
        {
LABEL_54:
          v78 = ListViewSort___c_TypeInfo;
          v79 = (System_Collections_Generic_IEnumerable_TSource__o *)servantEntity->fields.individuality;
          if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
            v78 = ListViewSort___c_TypeInfo;
          }
          _9__254_3 = v78->static_fields->__9__254_3;
          if ( !_9__254_3 )
          {
            if ( !v78->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v78);
              v78 = ListViewSort___c_TypeInfo;
            }
            v81 = (Il2CppObject *)v78->static_fields->__9;
            _9__254_3 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              _9__254_3,
              v81,
              Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__,
              0);
            v82 = ListViewSort___c_TypeInfo->static_fields;
            v82->__9__254_3 = _9__254_3;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v82->__9__254_3,
              (int32_t)_9__254_3,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88);
            v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v96;
            v75 = (Il2CppObject *)v97;
          }
          v89 = System_Linq_Enumerable__Where_int_(
                  v79,
                  (System_Func_TSource__bool__o *)_9__254_3,
                  (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
          v90 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v90,
            v75,
            Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__,
            0);
          v91 = System_Linq_Enumerable__Where_int_(
                  v89,
                  (System_Func_TSource__bool__o *)v90,
                  (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__Concat_int_(
                                                                                      v91,
                                                                                      v77,
                                                                                      (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
          if ( !v27 )
            goto LABEL_92;
          System_Collections_Generic_List_int___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)ServantAttriFirstFilterKindList,
            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          ServantLimitCountSealAfter = 0;
        }
        goto LABEL_64;
      }
      ServantLimitCountSealAfter = 0;
    }
    if ( !v27 )
      goto LABEL_92;
LABEL_64:
    if ( v27->fields._size )
      return ((v12 & 1) != 0 || ListViewSort__IsMatchServantAttriFirstFilter(this, v27, v28))
          && (v17 || ListViewSort__IsMatchServantAttriSecondFilter(this, v27, v28));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v92 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v94 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v95 = (ServantLimitMaster_o *)v92;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v94;
    *(_QWORD *)&v104.fields.fakeValue = v93;
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                v104,
                                                                                0);
    if ( v95 )
    {
      if ( !ServantLimitMaster__TryGetEntity(
              v95,
              &v101,
              (int32_t)ServantAttriFirstFilterKindList,
              ServantLimitCountSealAfter,
              0) )
        goto LABEL_85;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
      if ( v101 )
      {
        if ( ServantAttriFirstFilterKindList )
        {
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPolicyMaster__TryGetEntityByPolicyValue(
                                                                                      (IndividualityPolicyMaster_o *)ServantAttriFirstFilterKindList,
                                                                                      &v99,
                                                                                      v101->fields.policy,
                                                                                      0);
          if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) != 0 )
          {
            if ( !v99 )
              goto LABEL_92;
            System_Collections_Generic_List_int___AddRange(
              v27,
              (System_Collections_Generic_IEnumerable_T__o *)v99->fields.individuality,
              (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
          if ( v101 && ServantAttriFirstFilterKindList )
          {
            ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPersonalityMaster__TryGetEntityByPersonalityValue(
                                                                                        (IndividualityPersonalityMaster_o *)ServantAttriFirstFilterKindList,
                                                                                        &v98,
                                                                                        v101->fields.personality,
                                                                                        0);
            if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) == 0 )
              goto LABEL_85;
            if ( v98 )
            {
              System_Collections_Generic_List_int___AddRange(
                v27,
                (System_Collections_Generic_IEnumerable_T__o *)v98->fields.individuality,
                (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_85:
              if ( !v27->fields._size )
                return 0;
              return ((v12 & 1) != 0 || ListViewSort__IsMatchServantAttriFirstFilter(this, v27, v28))
                  && (v17 || ListViewSort__IsMatchServantAttriSecondFilter(this, v27, v28));
            }
          }
        }
      }
    }
LABEL_92:
    sub_1C93D2C(ServantAttriFirstFilterKindList, userServantEntity);
  }
  return result;
}


bool ListViewSort__IsMatchServantAttriFirstFilter(
        ListViewSort_o *this,
        System_Collections_Generic_List_int__o *individuality,
        const MethodInfo *method)
{
  ListViewSort_o *v4; // x19
  const MethodInfo *v5; // x2
  bool Filter; // w0
  char v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_int__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4D32145 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    this = (ListViewSort_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4D32145 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !individuality )
    sub_1C93D2C(this, individuality);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    individuality,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v11,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    switch ( v11.fields._current )
    {
      case 0x12E:
        Filter = ListViewSort__GetFilter(v4, 89, v5);
        goto LABEL_12;
      case 0x12D:
        Filter = ListViewSort__GetFilter(v4, 90, v5);
        goto LABEL_12;
      case 0x12C:
        Filter = ListViewSort__GetFilter(v4, 88, v5);
LABEL_12:
        if ( Filter )
        {
          v7 = 1;
          v8 = 8;
          goto LABEL_15;
        }
        break;
    }
  }
  v7 = 0;
  v8 = 9;
LABEL_15:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v11,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v7 & (v8 == 8);
}


bool ListViewSort__IsMatchServantAttriSecondFilter(
        ListViewSort_o *this,
        System_Collections_Generic_List_int__o *individuality,
        const MethodInfo *method)
{
  ListViewSort___c_c *v5; // x0
  System_Func_int__bool__o *_9__256_0; // x21
  Il2CppObject *v7; // x22
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  bool Filter; // w0
  char v21; // w19
  int v22; // w20
  char v23; // w0
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D32146 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D32146 = 1;
  }
  v5 = ListViewSort___c_TypeInfo;
  memset(&v26, 0, sizeof(v26));
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v5 = ListViewSort___c_TypeInfo;
  }
  _9__256_0 = v5->static_fields->__9__256_0;
  if ( !_9__256_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ListViewSort___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__256_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__256_0, v7, Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__, 0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__256_0 = _9__256_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__256_0,
      (int32_t)_9__256_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)individuality,
          (System_Func_TSource__bool__o *)_9__256_0,
          (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  v16 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v15,
                                                    (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v16 )
    sub_1C93D2C(0, v17);
  if ( v16->fields._size )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v16,
      (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v26,
              (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      switch ( v26.fields._current )
      {
        case 0x131:
          Filter = ListViewSort__GetFilter(this, 92, v19);
          break;
        case 0x130:
          Filter = ListViewSort__GetFilter(this, 93, v19);
          break;
        case 0x12F:
          Filter = ListViewSort__GetFilter(this, 91, v19);
          break;
        default:
          Filter = ListViewSort__GetFilter(this, 94, v19);
          break;
      }
      if ( Filter )
      {
        v21 = 1;
        v22 = 11;
        goto LABEL_24;
      }
    }
    v21 = 0;
    v22 = 12;
LABEL_24:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v26,
      (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v23 = v21 & (v22 == 11);
  }
  else
  {
    v23 = ListViewSort__GetFilter(this, 94, v18);
  }
  return v23 & 1;
}


bool ListViewSort__IsMatchServantCollectionStatus(
        ListViewSort_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v6; // x0
  __int64 v7; // x20
  __int64 v8; // x23
  int64_t userIdNumber; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t status; // w8
  int32_t v14; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4D32142 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D32142 = 1;
  }
  entity = 0;
  if ( !svtEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = v6->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v8;
  *(_QWORD *)&v18.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v18, 0);
  if ( !Master_object )
    goto LABEL_26;
  v10 = UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          userIdNumber,
          v10,
          0);
  if ( (v10 & 1) != 0 )
  {
    if ( entity )
    {
      status = entity->fields.status;
      if ( status == 2 )
      {
        v14 = 12;
      }
      else
      {
        if ( status != 1 )
          return 0;
        v14 = 11;
      }
      return ListViewSort__GetFilter(this, v14, v12);
    }
LABEL_26:
    sub_1C93D2C(v10, v11);
  }
  return ListViewSort__GetFilter(this, 11, v12);
}


bool ListViewSort__IsMatchServantEquipCombineStatusFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        ServantEntity_o *svtEntity,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  _BOOL8 Filter; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v17; // x2

  if ( !userServantEntity )
    return 0;
  Filter = ListViewSort__GetFilter(this, 77, (const MethodInfo *)svtEntity);
  if ( Filter )
  {
    if ( !svtEntity )
      goto LABEL_39;
    if ( !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
      && UserServantEntity__getLimitCntMax(userServantEntity, 0)
      && UserServantEntity__isLimitCountMax(userServantEntity, 0) )
    {
      return 1;
    }
  }
  if ( ListViewSort__GetFilter(this, 78, v11)
    && !UserServantEntity__isLimitCountMax(userServantEntity, 0)
    && UserServantEntity__IsSameSvtEquipToLimitMaxNum(userServantEntity, isWarehouseServantEquip, 0)
    || ListViewSort__GetFilter(this, 79, v12)
    && !UserServantEntity__isLimitCountMax(userServantEntity, 0)
    && UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 0, isWarehouseServantEquip, 0) > 1 )
  {
    return 1;
  }
  Filter = ListViewSort__GetFilter(this, 80, v13);
  if ( Filter )
  {
    if ( !svtEntity )
      goto LABEL_39;
    if ( !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
      && !ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
      && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
      && UserServantEntity__getLimitCntMax(userServantEntity, 0)
      && !UserServantEntity__getLimitCount(userServantEntity, 0) )
    {
      return 1;
    }
  }
  if ( ListViewSort__GetFilter(this, 81, v14) && UserServantEntity__isLevelMax(userServantEntity, 0) )
    return 1;
  Filter = ListViewSort__GetFilter(this, 82, v15);
  if ( Filter )
  {
    if ( !svtEntity )
      goto LABEL_39;
    if ( !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
      && !ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
      && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
      && UserServantEntity__getLimitCntMax(userServantEntity, 0)
      && !UserServantEntity__isLevelMax(userServantEntity, 0) )
    {
      return 1;
    }
  }
  Filter = ListViewSort__GetFilter(this, 83, v17);
  if ( Filter )
  {
    if ( svtEntity )
      return !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          && !ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          && UserServantEntity__getLimitCntMax(userServantEntity, 0)
          && !userServantEntity->fields.exp
          && !UserServantEntity__isLevelMax(userServantEntity, 0);
LABEL_39:
    sub_1C93D2C(Filter, v10);
  }
  return 0;
}


bool ListViewSort__IsMatchServantEquipHaveStatusFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        ServantEntity_o *svtEntity,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  ListViewSort_o *v6; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  bool v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( !svtEntity )
    goto LABEL_15;
  v6 = this;
  this = (ListViewSort_o *)ServantEntity__get_IsSvtEquipExp(svtEntity, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !userServantEntity )
LABEL_15:
    sub_1C93D2C(this, userServantEntity);
  if ( UserServantEntity__getLimitCntMax(userServantEntity, 0) < 1 )
    return 0;
  if ( !ListViewSort__GetFilter(v6, 84, v8)
    || (v10 = 1, UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 1, isWarehouseServantEquip, 0)) )
  {
    if ( !ListViewSort__GetFilter(v6, 85, v9)
      || (v10 = 1, UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 1, isWarehouseServantEquip, 0) <= 0) )
    {
      if ( !ListViewSort__GetFilter(v6, 86, v11)
        || (v10 = 1,
            UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 1, isWarehouseServantEquip, 0) <= 2) )
      {
        if ( !ListViewSort__GetFilter(v6, 87, v12) )
          return 0;
        v10 = 1;
        if ( UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 1, isWarehouseServantEquip, 0) <= 4 )
          return 0;
      }
    }
  }
  return v10;
}


bool ListViewSort__IsMatchServantEquipTypeFilter(
        ListViewSort_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  return svtEntity
      && (ListViewSort__GetFilter(this, 55, method) && ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 56, v5) && ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 54, v6)
       && !ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
       && !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
       || ListViewSort__GetFilter(this, 72, v7) && ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 73, v8) && ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 74, v9) && ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 75, v10) && ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
       || ListViewSort__GetFilter(this, 76, v11) && ServantEntity__get_IsSvtEquipExp(svtEntity, 0));
}


bool ListViewSort__IsMatchServantPossessionStatus(
        ListViewSort_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  char IsServantHaving; // w21
  __int64 v10; // x19
  __int64 v11; // x20
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D32141 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D32141 = 1;
  }
  if ( svtEntity )
  {
    if ( ListViewSort__GetFilter(this, 52, method) )
    {
      v7 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = v7;
      *(_QWORD *)&v14.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsServantHaving = CondType__IsServantHaving(v8, 0);
    }
    else
    {
      IsServantHaving = 0;
    }
    if ( ListViewSort__GetFilter(this, 53, v5) )
    {
      v11 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsServantHaving |= !CondType__IsServantHaving(v12, 0);
    }
  }
  else
  {
    IsServantHaving = 0;
  }
  return IsServantHaving & 1;
}


bool ListViewSort__IsMatchServantStatusFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  return userServantEntity
      && (ListViewSort__GetFilter(this, 21, method) && !UserServantEntity__isLevelMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 22, v5) && !UserServantEntity__isAdjustHpMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 23, v6)
       && UserServantEntity__isAdjustHpMax(userServantEntity, 0)
       && !UserServantEntity__isSecondAdjustHpMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 24, v7) && UserServantEntity__isSecondAdjustHpMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 25, v8) && !UserServantEntity__isAdjustAtkMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 26, v9)
       && UserServantEntity__isAdjustAtkMax(userServantEntity, 0)
       && !UserServantEntity__isSecondAdjustAtkMax(userServantEntity, 0)
       || ListViewSort__GetFilter(this, 27, v10) && UserServantEntity__isSecondAdjustAtkMax(userServantEntity, 0));
}


bool ListViewSort__IsMatchServantSubAttriFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ServantSubAttriFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  const MethodInfo *v10; // x2
  bool v11; // w0
  unsigned int type; // w8
  int32_t DispLimitCount; // w0
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w22
  int32_t v17; // w23
  int32_t LimitCountByDispLimit; // w22
  Il2CppObject *Master_object; // x23
  int32_t ServantLimitCountSealAfter; // w0
  int32_t attri; // w21
  int32_t v22; // w22
  Il2CppObject *v23; // x0
  __int64 v24; // x8
  ServantLimitAddMaster_o *v25; // x20
  const MethodInfo *v26; // x2
  int32_t v27; // w1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4D32147 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D32147 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  entity = 0;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ServantSubAttriFilterKindList;
  if ( !ServantSubAttriFilterKindList )
    goto LABEL_36;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ServantSubAttriFilterKindList,
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(this, v9, v10) )
    return 1;
  v11 = 0;
  if ( userServantEntity && servantEntity )
  {
    type = servantEntity->fields.type;
    if ( type <= 0xC && ((1 << type) & 0x1088) != 0 )
      return 0;
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v16 = DispLimitCount;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v15;
    *(_QWORD *)&v30.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v30, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                              userServantEntity->fields.svtId,
                                                                              0);
    if ( Master_object )
    {
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     (int32_t)ServantSubAttriFilterKindList,
                                     LimitCountByDispLimit,
                                     0);
      attri = servantEntity->fields.attri;
      v22 = ServantLimitCountSealAfter;
      v23 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      *(_QWORD *)&v31.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v25 = (ServantLimitAddMaster_o *)v23;
      *(_QWORD *)&v31.fields.currentCryptoKey = v24;
      ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                v31,
                                                                                0);
      if ( v25 )
      {
        ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)ServantLimitAddMaster__TryGetEntity(
                                                                                  v25,
                                                                                  &entity,
                                                                                  (int32_t)ServantSubAttriFilterKindList,
                                                                                  v22,
                                                                                  0);
        if ( ((unsigned __int8)ServantSubAttriFilterKindList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_36;
          if ( entity->fields.attri != -1 )
            attri = entity->fields.attri;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AttriMaster___);
        if ( ServantSubAttriFilterKindList )
        {
          switch ( AttriMaster__GetIndividualityFromValue((AttriMaster_o *)ServantSubAttriFilterKindList, attri, 0) )
          {
            case 200:
              v27 = 96;
              break;
            case 201:
              v27 = 97;
              break;
            case 202:
              v27 = 95;
              break;
            case 203:
              v27 = 98;
              break;
            case 204:
              v27 = 99;
              break;
            default:
              return 0;
          }
          return ListViewSort__GetFilter(this, v27, v26);
        }
      }
    }
LABEL_36:
    sub_1C93D2C(ServantSubAttriFilterKindList, userServantEntity);
  }
  return v11;
}


bool ListViewSort__IsMatchServantSummonCategory(
        ListViewSort_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  int32_t SummonCategoryId; // w0

  if ( !lineupEntity )
    goto LABEL_9;
  if ( ListViewSort__GetFilter(this, 69, method)
    && !GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0) )
  {
    goto LABEL_8;
  }
  if ( !ListViewSort__GetFilter(this, 70, v5)
    || (SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0), SummonCategoryId != 1) )
  {
    if ( ListViewSort__GetFilter(this, 71, v6)
      && GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0) == 2 )
    {
LABEL_8:
      LOBYTE(SummonCategoryId) = 1;
      return SummonCategoryId;
    }
LABEL_9:
    LOBYTE(SummonCategoryId) = 0;
  }
  return SummonCategoryId;
}


bool ListViewSort__IsMatchServantTypeFilter(ListViewSort_o *this, ServantEntity_o *svtEntity, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  if ( svtEntity )
  {
    if ( ServantEntity__get_IsStatusUp(svtEntity, 0) )
    {
      v6 = 9;
      return ListViewSort__GetFilter(this, v6, v5);
    }
    if ( ServantEntity__get_IsExpUp(svtEntity, 0) )
    {
      v6 = 8;
      return ListViewSort__GetFilter(this, v6, v5);
    }
    if ( ServantEntity__get_IsServant(svtEntity, 0) || ServantEntity__get_IsServantMaterialTd(svtEntity, 0) )
    {
      v6 = 48;
      return ListViewSort__GetFilter(this, v6, v5);
    }
  }
  return 0;
}


bool ListViewSort__IsNotExistClassFilter(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  unsigned int ClassId; // w0
  bool result; // w0

  result = servantEntity
        && !ServantEntity__IsBeastNotPlayable(servantEntity, 0)
        && ((ClassId = ServantEntity__GetClassId(servantEntity, 1, 0, 0), ClassId > 0x21)
         || ((1LL << ClassId) & 0x2128FEFFELL) == 0)
        && !ServantEntity__get_IsAllClass(servantEntity, 0);
  return result;
}


bool ListViewSort__IsSelectedAllTargetFilters(
        ListViewSort_o *this,
        ListViewSort_FilterKind_array *targetFilterKindList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  ListViewSort_o *v5; // x20
  unsigned __int64 v6; // x21

  if ( targetFilterKindList && (max_length = targetFilterKindList->max_length) != 0 )
  {
    if ( (int)max_length < 1 )
    {
      LOBYTE(this) = 1;
    }
    else
    {
      v5 = this;
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C93D34(this);
        this = (ListViewSort_o *)ListViewSort__GetFilter(v5, targetFilterKindList->m_Items[v6], method);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        LODWORD(max_length) = targetFilterKindList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (unsigned __int8)this & 1;
}


bool ListViewSort__IsUnSelectedAllTargetFilters(
        ListViewSort_o *this,
        ListViewSort_FilterKind_array *targetFilterKindList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  ListViewSort_o *v5; // x20
  unsigned __int64 v6; // x21

  if ( targetFilterKindList )
  {
    max_length = targetFilterKindList->max_length;
    if ( max_length )
    {
      if ( (int)max_length < 1 )
      {
        LOBYTE(max_length) = 1;
      }
      else
      {
        v5 = this;
        v6 = 0;
        do
        {
          if ( v6 >= (unsigned int)max_length )
            sub_1C93D34(this);
          this = (ListViewSort_o *)ListViewSort__GetFilter(v5, targetFilterKindList->m_Items[v6], method);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          LODWORD(max_length) = targetFilterKindList->max_length;
          ++v6;
        }
        while ( (__int64)v6 < (int)max_length );
        LOBYTE(max_length) = (unsigned __int8)this ^ 1;
      }
    }
  }
  else
  {
    LOBYTE(max_length) = 0;
  }
  return max_length & 1;
}


void ListViewSort__Load(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *FilterListData; // x0
  const MethodInfo *v14; // x2
  System_String_o *v15; // x0
  int32_t Int; // w23
  System_String_o *v17; // x0
  int32_t v18; // w22
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *String; // x24
  System_String_o *v25; // x0
  int32_t v26; // w21
  System_String_o *v27; // x0
  int32_t v28; // w20
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  ListViewSort_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v37; // x8
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x8
  bool *v42; // x10
  Il2CppObject *value; // x22
  Il2CppObject *key; // x23
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x24
  __int64 v46; // x0
  bool v47; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *v48; // x24
  __int64 v49; // x0
  __int64 v50; // x0
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v52; // x9
  unsigned __int64 v53; // x8
  bool *v54; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v56; // x9
  unsigned __int64 v57; // x8
  bool *v58; // x10
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  const MethodInfo *v61; // x1
  System_String_o *v62; // x0
  ListViewSort_o *v63; // x0
  const MethodInfo *v64; // x2
  int32_t v65; // w20
  Il2CppObject *v66; // x21
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x22
  __int64 v68; // x0
  System_Collections_Generic_Dictionary_int__int__o *v69; // x22
  __int64 v70; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v73; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4D3210F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Value__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_3214/*"BonusKind2Id-"*/);
    sub_1C93AD4(&StringLiteral_6341/*"ExpUpDispType-"*/);
    sub_1C93AD4(&StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2508/*"AutoOrganizationMode-"*/);
    sub_1C93AD4(&StringLiteral_3213/*"BonusKind2-"*/);
    sub_1C93AD4(&StringLiteral_10806/*"PresentBoxSortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10817/*"PriorityKind-"*/);
    sub_1C93AD4(&StringLiteral_7573/*"IconSizeKind-"*/);
    sub_1C93AD4(&StringLiteral_3212/*"BonusKind-"*/);
    sub_1C93AD4(&StringLiteral_4441/*"ChoiceSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2507/*"AutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10122/*"OtherSortKind-"*/);
    sub_1C93AD4(&StringLiteral_12744/*"ScrollBarValue-"*/);
    sub_1C93AD4(&StringLiteral_8030/*"IsClearFilterServantClass20231117-"*/);
    sub_1C93AD4(&StringLiteral_13024/*"SortFilter2-"*/);
    sub_1C93AD4(&StringLiteral_13028/*"SortKind-"*/);
    sub_1C93AD4(&StringLiteral_6340/*"ExpUpDispKind-"*/);
    sub_1C93AD4(&StringLiteral_13029/*"SortOrder-"*/);
    sub_1C93AD4(&StringLiteral_3215/*"BonusKindId-"*/);
    sub_1C93AD4(&StringLiteral_13290/*"SvtEventBonusFilterNew-"*/);
    byte_4D3210F = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  if ( this->fields.isRequestLoad )
  {
    *(_WORD *)&this->fields.isRequestLoad = 256;
    v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13028/*"SortKind-"*/, this->fields.saveKey, 0);
    this->fields.sortKind = UnityEngine_PlayerPrefs__GetInt(v3, this->fields.defaultSortKind, 0);
    v4 = System_String__Concat_64425724((System_String_o *)StringLiteral_13029/*"SortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isAscendingOrder = UnityEngine_PlayerPrefs__GetInt(v4, this->fields.isDefaultAscendingOrder, 0) != 0;
    v5 = System_String__Concat_64425724((System_String_o *)StringLiteral_3212/*"BonusKind-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind = UnityEngine_PlayerPrefs__GetInt(v5, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v6 = System_String__Concat_64425724((System_String_o *)StringLiteral_3215/*"BonusKindId-"*/, this->fields.saveKey, 0);
    this->fields.bonusKindId = UnityEngine_PlayerPrefs__GetInt(
                                 v6,
                                 this->fields.bonusFilterInfoDefault.fields.eventId,
                                 0);
    v7 = System_String__Concat_64425724((System_String_o *)StringLiteral_3213/*"BonusKind2-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind2 = UnityEngine_PlayerPrefs__GetInt(v7, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v8 = System_String__Concat_64425724((System_String_o *)StringLiteral_3214/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind2Id = UnityEngine_PlayerPrefs__GetInt(
                                  v8,
                                  this->fields.bonusFilterInfoDefault.fields.eventId,
                                  0);
    v9 = System_String__Concat_64425724((System_String_o *)StringLiteral_13024/*"SortFilter2-"*/, this->fields.saveKey, 0);
    this->fields.filter2Kind = UnityEngine_PlayerPrefs__GetInt(v9, 0, 0);
    v10 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isSmartSort = UnityEngine_PlayerPrefs__GetInt(v10, 1, 0) == 1;
    v11 = System_String__Concat_64425724((System_String_o *)StringLiteral_4441/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isChoiceSort = UnityEngine_PlayerPrefs__GetInt(v11, 0, 0) == 1;
    FilterListData = ListViewSort__GetFilterListData(this, v12);
    ListViewSort__SetFilterListData(this, FilterListData, v14);
    v15 = System_String__Concat_64425724((System_String_o *)StringLiteral_10806/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v15, 0, 0);
    v17 = System_String__Concat_64425724((System_String_o *)StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
    v18 = UnityEngine_PlayerPrefs__GetInt(v17, 0, 0);
    v19 = System_String__Concat_64425724((System_String_o *)StringLiteral_7573/*"IconSizeKind-"*/, this->fields.saveKey, 0);
    this->fields.iconScaleKind = UnityEngine_PlayerPrefs__GetInt(v19, 0, 0);
    v20 = System_String__Concat_64425724((System_String_o *)StringLiteral_6340/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
    this->fields.expUpDispKind = UnityEngine_PlayerPrefs__GetInt(v20, 0, 0);
    v21 = System_String__Concat_64425724((System_String_o *)StringLiteral_6341/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
    this->fields.expUpDispType = UnityEngine_PlayerPrefs__GetInt(v21, 0, 0);
    v22 = System_String__Concat_64425724((System_String_o *)StringLiteral_12744/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
    this->fields.scrollBarValue = UnityEngine_PlayerPrefs__GetFloat(v22, 0.0, 0);
    v23 = System_String__Concat_64425724((System_String_o *)StringLiteral_13290/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
    String = UnityEngine_PlayerPrefs__GetString(v23, string_TypeInfo->static_fields->Empty, 0);
    v25 = System_String__Concat_64425724((System_String_o *)StringLiteral_2507/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v26 = UnityEngine_PlayerPrefs__GetInt(v25, 0, 0);
    v27 = System_String__Concat_64425724((System_String_o *)StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v28 = UnityEngine_PlayerPrefs__GetInt(v27, 0, 0);
    v29 = System_String__Concat_64425724((System_String_o *)StringLiteral_2508/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
    this->fields.autoOrganizationMode = UnityEngine_PlayerPrefs__GetInt(v29, 0, 0);
    v30 = System_String__Concat_64425724((System_String_o *)StringLiteral_10817/*"PriorityKind-"*/, this->fields.saveKey, 0);
    this->fields.priorityKind = UnityEngine_PlayerPrefs__GetInt(v30, 0, 0);
    v31 = System_String__Concat_64425724((System_String_o *)StringLiteral_10122/*"OtherSortKind-"*/, this->fields.saveKey, 0);
    v32 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetInt(v31, 11, 0);
    isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
    this->fields.otherSortKind = (int)v32;
    if ( !isPresentBoxFilterList )
      goto LABEL_45;
    max_length_low = LODWORD(isPresentBoxFilterList->max_length);
    v37 = 0;
    m_Items = isPresentBoxFilterList->m_Items;
    do
    {
      if ( v37 >= max_length_low )
LABEL_39:
        sub_1C93D34(v32);
      m_Items[v37++] = Int & 1;
      Int >>= 1;
    }
    while ( v37 != 15 );
    isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
    if ( !isPresentBoxRarityFilterList )
      goto LABEL_45;
    v40 = LODWORD(isPresentBoxRarityFilterList->max_length);
    v41 = 0;
    v42 = isPresentBoxRarityFilterList->m_Items;
    do
    {
      if ( v41 >= v40 )
        goto LABEL_39;
      v42[v41++] = v18 & 1;
      v18 >>= 1;
    }
    while ( v41 != 5 );
    v32 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEventBonusFilterData(v32, String, v34);
    if ( !v32 )
      goto LABEL_45;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v71,
      (System_Collections_Generic_Dictionary_object__object__o *)v32,
      (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    v73 = v71;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v73,
              (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__) )
    {
      key = v73.fields._current.fields.key;
      value = v73.fields._current.fields.value;
      svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
      v46 = System_Int32__Parse((System_String_o *)v73.fields._current.fields.key, 0);
      if ( !svtEventBonusFilterDic )
        sub_1C93D2C(v46, (unsigned int)v46);
      v47 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
              v46,
              (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
      v48 = this->fields.svtEventBonusFilterDic;
      if ( v47 )
      {
        v49 = System_Int32__Parse((System_String_o *)key, 0);
        if ( !v48 )
          sub_1C93D2C(v49, (unsigned int)v49);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)v48,
          v49,
          value,
          (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
      }
      else
      {
        v50 = System_Int32__Parse((System_String_o *)key, 0);
        if ( !v48 )
          sub_1C93D2C(v50, (unsigned int)v50);
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)v48,
          v50,
          value,
          (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v73,
      (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
    if ( !isAutoOrganizationFilterList )
      goto LABEL_45;
    v52 = LODWORD(isAutoOrganizationFilterList->max_length);
    v53 = 0;
    v54 = isAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v53 >= v52 )
        goto LABEL_39;
      v54[v53++] = v26 & 1;
      v26 >>= 1;
    }
    while ( v53 != 13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_45:
      sub_1C93D2C(v32, v33);
    v56 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v57 = 0;
    v58 = isWaveBattleAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v57 >= v56 )
        goto LABEL_39;
      v58[v57++] = v28 & 1;
      v28 >>= 1;
    }
    while ( v57 != 7 );
    v59 = System_String__Concat_64425724((System_String_o *)StringLiteral_8030/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v59, 0, 0) != 1 )
    {
      ListViewSort__ClassFilterOffInSameClass(this, method);
      v60 = System_String__Concat_64425724((System_String_o *)StringLiteral_8030/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v60, 1, 0);
    }
  }
  ListViewSort__AdjustmentEventBonusFilter(this, method);
  ListViewSort__InitSvtEquipEffectFilterList(this, v61);
  v62 = System_String__Concat_64425724((System_String_o *)StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  v63 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetString(v62, string_TypeInfo->static_fields->Empty, 0);
  v32 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEquipEffectFilterData(v63, (System_String_o *)v63, v64);
  if ( !v32 )
    goto LABEL_45;
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v71,
    (System_Collections_Generic_Dictionary_object__int__o *)v32,
    (const MethodInfo_35260C8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v72 = v71;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v72,
            (const MethodInfo_362C6A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    v66 = v72.fields._current.fields.key;
    v65 = (int32_t)v72.fields._current.fields.value;
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    v68 = System_Int32__Parse((System_String_o *)v72.fields._current.fields.key, 0);
    if ( !isSvtEquipEffectFilterDic )
      sub_1C93D2C(v68, (unsigned int)v68);
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           isSvtEquipEffectFilterDic,
           v68,
           (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v69 = this->fields.isSvtEquipEffectFilterDic;
      v70 = System_Int32__Parse((System_String_o *)v66, 0);
      if ( !v69 )
        sub_1C93D2C(v70, (unsigned int)v70);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v69,
        v70,
        v65,
        (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v72,
    (const MethodInfo_362C7C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
}


void ListViewSort__ResetAllNormalFilter(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 max_length_low; // x9
  __int64 i; // x10

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, method);
  max_length_low = LODWORD(isFilterList->max_length);
  for ( i = 133; i != 31; --i )
  {
    if ( i - 32 >= max_length_low )
      sub_1C93D34(this);
    *((_BYTE *)&isFilterList->obj.klass + i) = (((_DWORD)i - 32) & 0xFFFFFFFE) == 40;
  }
}


void ListViewSort__Save(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *FilterListDataText; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  System_String_o *v8; // x23
  __int64 v9; // x8
  int32_t v10; // w22
  bool *v11; // x10
  _BOOL4 v12; // w11
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v14; // x9
  __int64 v15; // x8
  int32_t v16; // w24
  bool *v17; // x10
  _BOOL4 v18; // w11
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v20; // x9
  __int64 v21; // x8
  int32_t v22; // w20
  bool *v23; // x10
  _BOOL4 v24; // w11
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v26; // x9
  __int64 v27; // x8
  int32_t v28; // w21
  bool *v29; // x10
  _BOOL4 v30; // w11
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  const MethodInfo *v48; // x1
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0

  if ( (byte_4D32116 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3214/*"BonusKind2Id-"*/);
    sub_1C93AD4(&StringLiteral_6341/*"ExpUpDispType-"*/);
    sub_1C93AD4(&StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2508/*"AutoOrganizationMode-"*/);
    sub_1C93AD4(&StringLiteral_3213/*"BonusKind2-"*/);
    sub_1C93AD4(&StringLiteral_10806/*"PresentBoxSortFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_13025/*"SortFilterLongNew-"*/);
    sub_1C93AD4(&StringLiteral_10817/*"PriorityKind-"*/);
    sub_1C93AD4(&StringLiteral_7573/*"IconSizeKind-"*/);
    sub_1C93AD4(&StringLiteral_3212/*"BonusKind-"*/);
    sub_1C93AD4(&StringLiteral_4441/*"ChoiceSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    sub_1C93AD4(&StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_2507/*"AutoOrganizationFilterNew-"*/);
    sub_1C93AD4(&StringLiteral_10122/*"OtherSortKind-"*/);
    sub_1C93AD4(&StringLiteral_12744/*"ScrollBarValue-"*/);
    sub_1C93AD4(&StringLiteral_13024/*"SortFilter2-"*/);
    sub_1C93AD4(&StringLiteral_13028/*"SortKind-"*/);
    sub_1C93AD4(&StringLiteral_6340/*"ExpUpDispKind-"*/);
    sub_1C93AD4(&StringLiteral_13029/*"SortOrder-"*/);
    sub_1C93AD4(&StringLiteral_3215/*"BonusKindId-"*/);
    byte_4D32116 = 1;
  }
  if ( this->fields.isRequestSave )
  {
    FilterListDataText = ListViewSort__GetFilterListDataText(this, method);
    isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
    if ( !isPresentBoxFilterList )
      goto LABEL_24;
    max_length_low = LODWORD(isPresentBoxFilterList->max_length);
    v8 = FilterListDataText;
    v9 = 0;
    v10 = 0;
    v11 = &isPresentBoxFilterList->m_Items[14];
    do
    {
      if ( v9 + 14 >= max_length_low )
LABEL_23:
        sub_1C93D34(FilterListDataText);
      v12 = v11[v9--];
      v10 = v12 | (2 * v10);
    }
    while ( v9 != -15 );
    isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
    if ( !isPresentBoxRarityFilterList )
      goto LABEL_24;
    v14 = LODWORD(isPresentBoxRarityFilterList->max_length);
    v15 = 0;
    v16 = 0;
    v17 = &isPresentBoxRarityFilterList->m_Items[4];
    do
    {
      if ( v15 + 4 >= v14 )
        goto LABEL_23;
      v18 = v17[v15--];
      v16 = v18 | (2 * v16);
    }
    while ( v15 != -5 );
    isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
    if ( !isAutoOrganizationFilterList )
      goto LABEL_24;
    v20 = LODWORD(isAutoOrganizationFilterList->max_length);
    v21 = 0;
    v22 = 0;
    v23 = &isAutoOrganizationFilterList->m_Items[12];
    do
    {
      if ( v21 + 12 >= v20 )
        goto LABEL_23;
      v24 = v23[v21--];
      v22 = v24 | (2 * v22);
    }
    while ( v21 != -13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_24:
      sub_1C93D2C(FilterListDataText, v4);
    v26 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v27 = 0;
    v28 = 0;
    v29 = &isWaveBattleAutoOrganizationFilterList->m_Items[6];
    do
    {
      if ( v27 + 6 >= v26 )
        goto LABEL_23;
      v30 = v29[v27--];
      v28 = v30 | (2 * v28);
    }
    while ( v27 != -7 );
    if ( ListViewSort__IsChangeSaveData(this, FilterListDataText, v10, v16, v22, v28, v5) )
    {
      v31 = System_String__Concat_64425724((System_String_o *)StringLiteral_13028/*"SortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v31, this->fields.sortKind, 0);
      v32 = System_String__Concat_64425724((System_String_o *)StringLiteral_13029/*"SortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v32, this->fields.isAscendingOrder, 0);
      v33 = System_String__Concat_64425724((System_String_o *)StringLiteral_3212/*"BonusKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v33, this->fields.bonusKind, 0);
      v34 = System_String__Concat_64425724((System_String_o *)StringLiteral_3215/*"BonusKindId-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v34, this->fields.bonusKindId, 0);
      v35 = System_String__Concat_64425724((System_String_o *)StringLiteral_3213/*"BonusKind2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v35, this->fields.bonusKind2, 0);
      v36 = System_String__Concat_64425724((System_String_o *)StringLiteral_3214/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v36, this->fields.bonusKind2Id, 0);
      v37 = System_String__Concat_64425724((System_String_o *)StringLiteral_13025/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetString(v37, v8, 0);
      v38 = System_String__Concat_64425724((System_String_o *)StringLiteral_10806/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v38, v10, 0);
      v39 = System_String__Concat_64425724((System_String_o *)StringLiteral_10805/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v39, v16, 0);
      ListViewSort__SetSvtEquipEffectFilter(this, v40);
      v41 = System_String__Concat_64425724((System_String_o *)StringLiteral_13024/*"SortFilter2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v41, this->fields.filter2Kind, 0);
      v42 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v42, this->fields.isSmartSort, 0);
      v43 = System_String__Concat_64425724((System_String_o *)StringLiteral_4441/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v43, this->fields.isChoiceSort, 0);
      v44 = System_String__Concat_64425724((System_String_o *)StringLiteral_7573/*"IconSizeKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v44, this->fields.iconScaleKind, 0);
      v45 = System_String__Concat_64425724((System_String_o *)StringLiteral_6340/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v45, this->fields.expUpDispKind, 0);
      v46 = System_String__Concat_64425724((System_String_o *)StringLiteral_6341/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v46, this->fields.expUpDispType, 0);
      v47 = System_String__Concat_64425724((System_String_o *)StringLiteral_12744/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetFloat(v47, this->fields.scrollBarValue, 0);
      ListViewSort__SetSvtEventBonusFilter(this, v48);
      v49 = System_String__Concat_64425724((System_String_o *)StringLiteral_2507/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v49, v22, 0);
      v50 = System_String__Concat_64425724((System_String_o *)StringLiteral_15702/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v50, v28, 0);
      v51 = System_String__Concat_64425724((System_String_o *)StringLiteral_2508/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v51, this->fields.autoOrganizationMode, 0);
      v52 = System_String__Concat_64425724((System_String_o *)StringLiteral_10817/*"PriorityKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v52, this->fields.priorityKind, 0);
      v53 = System_String__Concat_64425724((System_String_o *)StringLiteral_10122/*"OtherSortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v53, this->fields.otherSortKind, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void ListViewSort__SaveDefaultSmartSort(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  CombineServantListViewManager_c *v5; // x0
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  CombineServantListViewManager_c *v9; // x0
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  EventServantFatigueListViewManager_c *v13; // x0
  System_String_o *v14; // x19
  PartyServantListViewManager_c *v15; // x0
  System_String_o *v16; // x19
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D3211B & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13013/*"SmartSortOrder-"*/);
    byte_4D3211B = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY = v1->static_fields->SORT_SAVE_KEY;
  v17 = 12;
  v3 = System_Int32__ToString((int32_t)&v17, 0);
  v4 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v3, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v4, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v4, 1, 0);
  v5 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v5 = CombineServantListViewManager_TypeInfo;
  }
  v6 = v5->static_fields->SORT_SAVE_KEY;
  v17 = 13;
  v7 = System_Int32__ToString((int32_t)&v17, 0);
  v8 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v6, v7, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v8, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v8, 1, 0);
  v9 = CombineServantListViewManager_TypeInfo;
  if ( !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v9 = CombineServantListViewManager_TypeInfo;
  }
  v10 = v9->static_fields->SORT_SAVE_KEY;
  v17 = 10;
  v11 = System_Int32__ToString((int32_t)&v17, 0);
  v12 = System_String__Concat_64463988((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v10, v11, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v12, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v12, 1, 0);
  v13 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v13 = EventServantFatigueListViewManager_TypeInfo;
  }
  v14 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v13->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v14, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v14, 1, 0);
  v15 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v15 = PartyServantListViewManager_TypeInfo;
  }
  v16 = System_String__Concat_64425724((System_String_o *)StringLiteral_13013/*"SmartSortOrder-"*/, v15->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v16, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v16, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIconScaleKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4D32119 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7573/*"IconSizeKind-"*/);
    byte_4D32119 = 1;
  }
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_7573/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.iconScaleKind, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIsAscendingOrder(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4D32118 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13029/*"SortOrder-"*/);
    byte_4D32118 = 1;
  }
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13029/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.isAscendingOrder, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveSortKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4D32117 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10122/*"OtherSortKind-"*/);
    sub_1C93AD4(&StringLiteral_13028/*"SortKind-"*/);
    byte_4D32117 = 1;
  }
  v3 = System_String__Concat_64425724((System_String_o *)StringLiteral_13028/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.sortKind, 0);
  v4 = System_String__Concat_64425724((System_String_o *)StringLiteral_10122/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v4, this->fields.otherSortKind, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__Set(ListViewSort_o *this, ListViewSort_o *o, const MethodInfo *method)
{
  ListViewSort_o *v4; // x19
  struct System_Boolean_array *isFilterList; // x13
  struct System_Boolean_array *v6; // x10
  unsigned __int64 max_length_low; // x11
  unsigned __int64 v8; // x9
  bool *m_Items; // x13
  struct System_Boolean_array *isPresentBoxFilterList; // x13
  struct System_Boolean_array *v11; // x10
  unsigned __int64 v12; // x11
  unsigned __int64 v13; // x9
  bool *v14; // x13
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x13
  struct System_Boolean_array *v16; // x10
  unsigned __int64 v17; // x11
  unsigned __int64 v18; // x9
  bool *v19; // x13
  struct System_Boolean_array *isAutoOrganizationFilterList; // x13
  struct System_Boolean_array *v21; // x10
  unsigned __int64 v22; // x11
  unsigned __int64 v23; // x9
  bool *v24; // x13
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x13
  struct System_Boolean_array *v26; // x10
  unsigned __int64 v27; // x11
  unsigned __int64 v28; // x9
  bool *v29; // x13
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t key_high; // w21
  int32_t key; // w22
  __int64 v34; // x1
  bool v35; // w8
  System_Collections_Generic_Dictionary_int__int__o *v36; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *svtEventBonusFilterDic; // x20
  System_Collections_Generic_Dictionary_int__object__o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  _OWORD v45[2]; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4D32125 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor___78956248);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    this = (ListViewSort_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4D32125 = 1;
  }
  memset(&v46, 0, 32);
  if ( !o )
    goto LABEL_45;
  v4->fields.sortKind = o->fields.sortKind;
  v4->fields.otherSortKind = o->fields.otherSortKind;
  v4->fields.isAscendingOrder = o->fields.isAscendingOrder;
  v4->fields.listViewKind = o->fields.listViewKind;
  v4->fields.isBonusKind = o->fields.isBonusKind;
  *(_OWORD *)&v4->fields.bonusKind = *(_OWORD *)&o->fields.bonusKind;
  v4->fields.isSmartSort = o->fields.isSmartSort;
  v4->fields.isChoiceSort = o->fields.isChoiceSort;
  v4->fields.scrollBarValue = o->fields.scrollBarValue;
  *(_OWORD *)&v4->fields.iconScaleKind = *(_OWORD *)&o->fields.iconScaleKind;
  isFilterList = o->fields.isFilterList;
  if ( !isFilterList )
    goto LABEL_45;
  v6 = v4->fields.isFilterList;
  max_length_low = LODWORD(isFilterList->max_length);
  v8 = 0;
  m_Items = isFilterList->m_Items;
  do
  {
    if ( v8 >= max_length_low )
      goto LABEL_44;
    if ( !v6 )
      goto LABEL_45;
    if ( v8 >= LODWORD(v6->max_length) )
LABEL_44:
      sub_1C93D34(this);
    v6->m_Items[v8] = m_Items[v8];
    ++v8;
  }
  while ( v8 != 102 );
  isPresentBoxFilterList = o->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    goto LABEL_45;
  v11 = v4->fields.isPresentBoxFilterList;
  v12 = LODWORD(isPresentBoxFilterList->max_length);
  v13 = 0;
  v14 = isPresentBoxFilterList->m_Items;
  do
  {
    if ( v13 >= v12 )
      goto LABEL_44;
    if ( !v11 )
      goto LABEL_45;
    if ( v13 >= LODWORD(v11->max_length) )
      goto LABEL_44;
    v11->m_Items[v13] = v14[v13];
    ++v13;
  }
  while ( v13 != 15 );
  isPresentBoxRarityFilterList = o->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    goto LABEL_45;
  v16 = v4->fields.isPresentBoxRarityFilterList;
  v17 = LODWORD(isPresentBoxRarityFilterList->max_length);
  v18 = 0;
  v19 = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( v18 >= v17 )
      goto LABEL_44;
    if ( !v16 )
      goto LABEL_45;
    if ( v18 >= LODWORD(v16->max_length) )
      goto LABEL_44;
    v16->m_Items[v18] = v19[v18];
    ++v18;
  }
  while ( v18 != 5 );
  isAutoOrganizationFilterList = o->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    goto LABEL_45;
  v21 = v4->fields.isAutoOrganizationFilterList;
  v22 = LODWORD(isAutoOrganizationFilterList->max_length);
  v23 = 0;
  v24 = isAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v23 >= v22 )
      goto LABEL_44;
    if ( !v21 )
      goto LABEL_45;
    if ( v23 >= LODWORD(v21->max_length) )
      goto LABEL_44;
    v21->m_Items[v23] = v24[v23];
    ++v23;
  }
  while ( v23 != 13 );
  isWaveBattleAutoOrganizationFilterList = o->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    goto LABEL_45;
  v26 = v4->fields.isWaveBattleAutoOrganizationFilterList;
  v27 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
  v28 = 0;
  v29 = isWaveBattleAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v28 >= v27 )
      goto LABEL_44;
    if ( !v26 )
      goto LABEL_45;
    if ( v28 >= LODWORD(v26->max_length) )
      goto LABEL_44;
    v26->m_Items[v28] = v29[v28];
    ++v28;
  }
  while ( v28 != 7 );
  v4->fields.autoOrganizationMode = o->fields.autoOrganizationMode;
  this = (ListViewSort_o *)o->fields.isSvtEquipEffectFilterDic;
  if ( !this )
LABEL_45:
    sub_1C93D2C(this, o);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v45,
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    (const MethodInfo_34B46A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v46.fields._dictionary = v45[0];
  v46.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v45[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v46,
            (const MethodInfo_361C294 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    isSvtEquipEffectFilterDic = v4->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_1C93D2C(0, v30);
    key = (int32_t)v46.fields._current.fields.key;
    key_high = HIDWORD(v46.fields._current.fields.key);
    v35 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            isSvtEquipEffectFilterDic,
            (int32_t)v46.fields._current.fields.key,
            (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v36 = v4->fields.isSvtEquipEffectFilterDic;
    if ( v35 )
    {
      if ( !v36 )
        sub_1C93D2C(0, v34);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v36,
        key,
        key_high,
        (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
    else
    {
      if ( !v36 )
        sub_1C93D2C(0, v34);
      System_Collections_Generic_Dictionary_int__int___Add(
        v36,
        key,
        key_high,
        (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v46,
    (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  svtEventBonusFilterDic = (System_Collections_Generic_IDictionary_TKey__TValue__o *)o->fields.svtEventBonusFilterDic;
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor_55297168(
    v38,
    svtEventBonusFilterDic,
    (const MethodInfo_34BC490 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor___78956248);
  v4->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v38;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.svtEventBonusFilterDic,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void ListViewSort__SetAllNomalFilter(ListViewSort_o *this, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x11
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v5; // x8
  bool *m_Items; // x11

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, isEnable);
  max_length_low = LODWORD(isFilterList->max_length);
  v5 = 0;
  m_Items = isFilterList->m_Items;
  do
  {
    if ( v5 >= max_length_low )
      sub_1C93D34(this);
    m_Items[v5++] = isEnable;
  }
  while ( v5 != 102 );
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetAllSvtEquipEffectFilter(ListViewSort_o *this, bool isEnable, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x22
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x0
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D32121 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D32121 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic
    || (Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
                 isSvtEquipEffectFilterDic,
                 (const MethodInfo_34B3F90 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__),
        v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_59097676(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552),
        !v7) )
  {
    sub_1C93D2C(isSvtEquipEffectFilterDic, isEnable);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    v7,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v12 = v11;
  if ( isEnable )
    v8 = 20;
  else
    v8 = 16;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v12,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v10 = this->fields.isSvtEquipEffectFilterDic;
    if ( !v10 )
      sub_1C93D2C(0, v9);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v10,
      v12.fields._current,
      *(_DWORD *)((char *)&this->klass + v8),
      (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void ListViewSort__SetAscendingOrder(ListViewSort_o *this, bool flag, const MethodInfo *method)
{
  this->fields.isAscendingOrder = flag;
}


void ListViewSort__SetAutoOrganizationMode(ListViewSort_o *this, int32_t mode, const MethodInfo *method)
{
  this->fields.autoOrganizationMode = mode;
}


void ListViewSort__SetBonusKind(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.bonusKind = kind;
}


void ListViewSort__SetBonusKind2(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.bonusKind2 = kind;
}


void ListViewSort__SetBonusKind2Id(ListViewSort_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.bonusKind2Id = id;
}


void ListViewSort__SetBonusKindId(ListViewSort_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.bonusKindId = id;
}


void ListViewSort__SetChoiceSort(ListViewSort_o *this, bool isCheck, const MethodInfo *method)
{
  this->fields.isChoiceSort = isCheck;
}


void ListViewSort__SetEnableEquipRewardUpEffectFilter(ListViewSort_o *this, const MethodInfo *method)
{
  ConstantStrMaster_o *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D32122 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    byte_4D32122 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        (Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                  RewardUpFuncCategory,
                                                  (const MethodInfo_31E8950 *)Method_System_Linq_Enumerable_ToHashSet_int___)) == 0) )
  {
    sub_1C93D2C(Master_object, v4);
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v8,
    (System_Collections_Generic_HashSet_int__o *)Master_object,
    (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v8;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        System_Collections_Generic_Dictionary_int__int___set_Item(
          isSvtEquipEffectFilterDic,
          (int32_t)i.fields._current,
          this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE,
          (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_1C93D2C(0, v6);
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void ListViewSort__SetExpUpDispKind(ListViewSort_o *this, int32_t dispKind, const MethodInfo *method)
{
  this->fields.expUpDispKind = dispKind;
}


void ListViewSort__SetExpUpDispType(ListViewSort_o *this, int32_t dispType, const MethodInfo *method)
{
  this->fields.expUpDispType = dispType;
}


void ListViewSort__SetFilter(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter2Kind(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.filter2Kind = kind;
}


void ListViewSort__SetFilterListData(
        ListViewSort_o *this,
        System_String_o *filterListDataText,
        const MethodInfo *method)
{
  ListViewSort_o *v4; // x19
  System_String_array *v5; // x21
  const MethodInfo *v6; // x2
  ListViewSort_o *v7; // x20
  int v8; // w8
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  unsigned int v11; // w8
  unsigned __int64 v12; // x21
  __int64 v13; // x9
  struct System_Boolean_array *isFilterList; // x10

  v4 = this;
  if ( (byte_4D32110 & 1) == 0 )
  {
    this = (ListViewSort_o *)sub_1C93AD4(&long___TypeInfo);
    byte_4D32110 = 1;
  }
  if ( !filterListDataText )
    goto LABEL_24;
  v5 = System_String__Split(filterListDataText, 0x2Cu, 0, 0);
  this = (ListViewSort_o *)sub_1C93B7C(long___TypeInfo, 2);
  if ( !this )
    goto LABEL_24;
  v7 = this;
  v8 = *(_QWORD *)&this->fields.FILTER_DEFAULT_VALUE;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v5 )
    {
      max_length_low = LODWORD(v5->max_length);
      if ( (__int64)v9 >= (int)max_length_low )
      {
        this = 0;
      }
      else
      {
        if ( v9 >= max_length_low )
          goto LABEL_22;
        this = (ListViewSort_o *)System_Int64__Parse(v5->m_Items[v9], 0);
        v8 = *(_DWORD *)&v7->fields.FILTER_DEFAULT_VALUE;
      }
      if ( v9 >= (unsigned int)v8 )
        goto LABEL_22;
      *((_QWORD *)&v7->fields.manager + v9++) = this;
      if ( (__int64)v9 >= v8 )
        goto LABEL_14;
    }
LABEL_24:
    sub_1C93D2C(this, filterListDataText);
  }
LABEL_14:
  if ( !v8 )
LABEL_22:
    sub_1C93D34(this);
  v11 = 0;
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    isFilterList = v4->fields.isFilterList;
    if ( !isFilterList )
      goto LABEL_24;
    if ( v12 >= LODWORD(isFilterList->max_length) )
      goto LABEL_22;
    isFilterList->m_Items[v12] = ((__int64)*(&v7->fields.manager + v11) & v13) != 0;
    if ( (v12 & 0xFFFFFFFE) == 0x28 )
      ListViewSort__SwitchFilter(v4, v12, v6);
    if ( v12 == 101 )
      break;
    v11 = (unsigned int)++v12 >> 6;
    v13 = 1LL << v12;
    if ( (unsigned int)v12 >> 6 >= *(_DWORD *)&v7->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_22;
  }
}


void ListViewSort__SetFilter_44548120(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isPresentBoxFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_44548172(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isPresentBoxRarityFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_44548404(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isAutoOrganizationFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_44548456(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isWaveBattleAutoOrganizationFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilters(
        ListViewSort_o *this,
        ListViewSort_FilterKind_array *kindList,
        bool isEnable,
        const MethodInfo *method)
{
  int max_length; // w8
  struct System_Boolean_array *isFilterList; // x10
  __int64 v6; // x9
  __int64 v7; // x13

  if ( kindList )
  {
    max_length = kindList->max_length;
    if ( max_length >= 1 )
    {
      isFilterList = this->fields.isFilterList;
      v6 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          goto LABEL_9;
        if ( !isFilterList )
          sub_1C93D2C(this, kindList);
        v7 = kindList->m_Items[v6];
        if ( (unsigned int)v7 >= LODWORD(isFilterList->max_length) )
LABEL_9:
          sub_1C93D34(this);
        ++v6;
        isFilterList->m_Items[v7] = isEnable;
      }
      while ( (int)v6 < max_length );
    }
  }
}


void ListViewSort__SetIconScaleKind(ListViewSort_o *this, int32_t scaleKind, const MethodInfo *method)
{
  this->fields.iconScaleKind = scaleKind;
}


void ListViewSort__SetIsBonusKind(ListViewSort_o *this, bool flag, const MethodInfo *method)
{
  this->fields.isBonusKind = flag;
}


void ListViewSort__SetKind(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.sortKind = kind;
}


void ListViewSort__SetManager(ListViewSort_o *this, ListViewManager_o *manager, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.manager = manager;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewSort__SetOtherSortKind(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.otherSortKind = kind;
}


void ListViewSort__SetPriorityKind(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.priorityKind = kind;
}


void ListViewSort__SetScrollBarValue(ListViewSort_o *this, float value, const MethodInfo *method)
{
  this->fields.scrollBarValue = value;
}


void ListViewSort__SetSmartSort(ListViewSort_o *this, bool isCheck, const MethodInfo *method)
{
  this->fields.isSmartSort = isCheck;
}


void ListViewSort__SetSvtEquipEffectFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int key_high; // x27^4
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4D3211F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C93AD4(&StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/);
    byte_4D3211F = 1;
  }
  memset(&v13, 0, 32);
  *(&v12.fields._getEnumeratorRetType + 1) = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v12,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_34B46A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v13.fields._dictionary = *(_OWORD *)&v12.fields._dictionary;
  v13.fields._current = v12.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v13,
            (const MethodInfo_361C294 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v13.fields._current.fields.key);
    *(&v12.fields._getEnumeratorRetType + 1) = (int32_t)v13.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v12.fields._getEnumeratorRetType + 1), 0);
    LODWORD(v12.fields._dictionary) = key_high;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    if ( !v3 )
      sub_1C93D2C(v8, v9);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      v8,
      (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v13,
    (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v10, 0) )
  {
    v11 = System_String__Concat_64425724((System_String_o *)StringLiteral_13289/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v11, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetSvtEquipEffectFilter_44548224(
        ListViewSort_o *this,
        int32_t categoryId,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  __int64 v8; // x8

  if ( (byte_4D3212E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4D3212E = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
LABEL_10:
    sub_1C93D2C(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
  v8 = 16;
  if ( isEnable )
    v8 = 20;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    isSvtEquipEffectFilterDic,
    categoryId,
    *(_DWORD *)((char *)&this->klass + v8),
    (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
}


void ListViewSort__SetSvtEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *value; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int key; // [xsp+Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4D32120 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1C93AD4(&StringLiteral_13290/*"SvtEventBonusFilterNew-"*/);
    byte_4D32120 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  key = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v11,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    value = v11.fields._current.fields.value;
    key = (int)v11.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    if ( !v3 )
      sub_1C93D2C(v7, v7);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      value,
      (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v11,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v8, 0) )
  {
    v9 = System_String__Concat_64425724((System_String_o *)StringLiteral_13290/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v9, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetSvtEventBonusFilter_44548516(
        ListViewSort_o *this,
        int32_t eventId,
        int32_t objectId,
        bool isHide,
        const MethodInfo *method)
{
  __int64 svtEventBonusFilterDic; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *v10; // x23
  Il2CppObject *Item; // x24
  System_Collections_Generic_List_int__o *v12; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v17; // x20

  if ( (byte_4D3212F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3212F = 1;
  }
  svtEventBonusFilterDic = (__int64)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_23;
  svtEventBonusFilterDic = System_Collections_Generic_Dictionary_int__object___ContainsKey(
                             (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                             eventId,
                             (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
  v10 = this->fields.svtEventBonusFilterDic;
  if ( (svtEventBonusFilterDic & 1) == 0 )
  {
    if ( isHide )
    {
      svtEventBonusFilterDic = sub_1C93B7C(int___TypeInfo, 1);
      if ( !svtEventBonusFilterDic )
        goto LABEL_23;
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
      if ( !*(_DWORD *)(svtEventBonusFilterDic + 24) )
        sub_1C93D34(svtEventBonusFilterDic);
      *(_DWORD *)(svtEventBonusFilterDic + 32) = objectId;
    }
    else
    {
      svtEventBonusFilterDic = sub_1C93B7C(int___TypeInfo, 0);
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
    }
    if ( v10 )
    {
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)v10,
        eventId,
        v16,
        (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      return;
    }
LABEL_23:
    sub_1C93D2C(svtEventBonusFilterDic, *(_QWORD *)&eventId);
  }
  if ( !v10 )
    goto LABEL_23;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
           eventId,
           (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Item,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  if ( !v12 )
    goto LABEL_23;
  if ( isHide )
  {
    svtEventBonusFilterDic = System_Collections_Generic_List_int___Contains(
                               v12,
                               objectId,
                               (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( (svtEventBonusFilterDic & 1) == 0 )
    {
      items = v12->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_23;
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          objectId,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size] = objectId;
      }
    }
  }
  else
  {
    System_Collections_Generic_List_int___Remove(
      v12,
      objectId,
      (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
  }
  v17 = this->fields.svtEventBonusFilterDic;
  svtEventBonusFilterDic = (__int64)System_Collections_Generic_List_int___ToArray(
                                      v12,
                                      (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v17 )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v17,
    eventId,
    (Il2CppObject *)svtEventBonusFilterDic,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
}


void ListViewSort__SetupSortLabelLayout(ListViewSort_o *this, UILabel_o *label, const MethodInfo *method)
{
  int32_t sortKind; // w8
  int32_t v5; // w1
  float v6; // s8
  int32_t v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !label )
    sub_1C93D2C(this, 0);
  sortKind = this->fields.sortKind;
  if ( sortKind == 25 )
    v5 = 18;
  else
    v5 = 22;
  if ( sortKind == 25 )
    v6 = 0.9;
  else
    v6 = 1.0;
  if ( sortKind == 25 )
    v7 = 180;
  else
    v7 = 120;
  UILabel__set_fontSize(label, v5, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, v6, 0);
  UIWidget__set_width((UIWidget_o *)label, v7, 0);
}


void ListViewSort__SwitchFilter(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_44549152(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isPresentBoxFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_44549208(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isPresentBoxRarityFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_44549476(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_44549532(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C93D2C(this, kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C93D34(this);
  isWaveBattleAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_4D32130 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4D32130 = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic
    || (isSvtEquipEffectFilterDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                           isSvtEquipEffectFilterDic,
                                                                                           categoryId,
                                                                                           (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v6 = this->fields.isSvtEquipEffectFilterDic) == 0) )
  {
LABEL_12:
    sub_1C93D2C(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
  }
  v7 = this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE + (_DWORD)isSvtEquipEffectFilterDic;
  if ( v7 >= 0 )
    v8 = this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE + (_DWORD)isSvtEquipEffectFilterDic;
  else
    v8 = v7 + 1;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v6,
    categoryId,
    v7 - (v8 & 0xFFFFFFFE),
    (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
}


bool ListViewSort__UnCheckPresentBoxFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x9
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v4; // x10
  bool *m_Items; // x9
  bool v6; // w11
  bool v7; // cf

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C93D2C(this, method);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C93D34(this);
    if ( m_Items[v4] )
      break;
    v7 = v4++ >= 0xE;
    v6 = !v7;
  }
  while ( v4 != 15 );
  return !v6;
}


bool ListViewSort__UnCheckPresentBoxRarityFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x9
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v4; // x10
  bool *m_Items; // x9
  bool v6; // w11
  bool v7; // cf

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C93D2C(this, method);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C93D34(this);
    if ( m_Items[v4] )
      break;
    v7 = v4++ >= 4;
    v6 = !v7;
  }
  while ( v4 != 5 );
  return !v6;
}


void ListViewSort___BonusFilterGroupingCheck_g__Remove_163_2(
        ListViewSort_BonusFilterInfo_array **bonusFilterInfos,
        EventGroupEntity_array *eventGroupEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TSource__o *v5; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v8; // x21
  unsigned __int64 v9; // x23
  ListViewSort_BonusFilterInfo_array *v10; // x26
  il2cpp_array_size_t v11; // x8
  EventGroupEntity_o *v12; // x28
  unsigned __int64 v13; // x27
  int32_t *v14; // x29
  __int64 v15; // x8
  __int64 v16; // x11
  int32_t v17; // w9
  ListViewSort_BonusFilterInfo_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ListViewSort_BonusFilterInfo_o v25; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v26; // [xsp+18h] [xbp-88h]
  int32_t v27; // [xsp+20h] [xbp-80h]
  __int64 v28; // [xsp+28h] [xbp-78h]
  int32_t v29; // [xsp+30h] [xbp-70h]
  __int64 v30; // [xsp+38h] [xbp-68h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4D32148 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    byte_4D32148 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventGroupEntities, 0) )
  {
    v5 = System_Linq_Enumerable__ToList_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*bonusFilterInfos,
           (const MethodInfo_31E9128 *)Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
    if ( !eventGroupEntities )
      goto LABEL_21;
    max_length = eventGroupEntities->max_length;
    v8 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)v5;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          goto LABEL_22;
        v10 = *bonusFilterInfos;
        if ( !*bonusFilterInfos )
          goto LABEL_21;
        v11 = v10->max_length;
        if ( (int)v11 >= 1 )
          break;
LABEL_17:
        LODWORD(max_length) = eventGroupEntities->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_18;
      }
      v12 = eventGroupEntities->m_Items[v9];
      v13 = 0;
      v14 = &v10->m_Items[0].fields.eventId + 1;
      while ( v13 < (unsigned int)v11 )
      {
        v15 = *(_QWORD *)(v14 - 3);
        v16 = *(_QWORD *)v14;
        v17 = *(v14 - 1);
        v29 = v14[2];
        v28 = v16;
        if ( !v12 )
          goto LABEL_21;
        if ( v17 == v12->fields.eventId )
        {
          v26 = v28;
          v27 = v29;
          if ( !v8 )
            goto LABEL_21;
          *(_QWORD *)&v25.fields.priority = v15;
          v25.fields.eventId = v17;
          HIDWORD(v25.fields.buttonText) = v27;
          *(_QWORD *)(&v25.fields.eventId + 1) = v26;
          v5 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_ListViewSort_BonusFilterInfo___Remove(
                                                               v8,
                                                               &v25,
                                                               (const MethodInfo_39245AC *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
        }
        LODWORD(v11) = v10->max_length;
        ++v13;
        v14 += 6;
        if ( (__int64)v13 >= (int)v11 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C93D34(v5);
    }
LABEL_18:
    if ( !v8 )
LABEL_21:
      sub_1C93D2C(v5, v6);
    v18 = System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ToArray(
            v8,
            (const MethodInfo_3924CD4 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    *bonusFilterInfos = v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)bonusFilterInfos, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
}


int32_t ListViewSort__get_BonusKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.bonusKind;
}


int32_t ListViewSort__get_BonusKind2(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.bonusKind2;
}


int32_t ListViewSort__get_BonusKind2Id(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.bonusKind2Id;
}


int32_t ListViewSort__get_BonusKindId(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.bonusKindId;
}


int32_t ListViewSort__get_Filter2Kind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.filter2Kind;
}


bool ListViewSort__get_IsAscendingOrder(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isAscendingOrder;
}


bool ListViewSort__get_IsBonusKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isBonusKind;
}


bool ListViewSort__get_IsChoiceSort(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isChoiceSort;
}


bool ListViewSort__get_IsRequestLoad(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isRequestLoad;
}


bool ListViewSort__get_IsRequestSave(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isRequestSave;
}


bool ListViewSort__get_IsSmartSort(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.isSmartSort;
}


bool ListViewSort__get_IsWareHouseEquipList(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *saveKey; // x19
  WarehouseListViewManager_c *v4; // x0

  if ( (byte_4D32109 & 1) == 0 )
  {
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    byte_4D32109 = 1;
  }
  if ( this->fields.listViewKind != 1 )
    return 0;
  saveKey = this->fields.saveKey;
  v4 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
  if ( !saveKey )
    sub_1C93D2C(v4, method);
  return System_String__Contains(saveKey, WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY, 0);
}


int32_t ListViewSort__get_Kind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.sortKind;
}


int32_t ListViewSort__get_ListViewKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.listViewKind;
}


int32_t ListViewSort__get_OtherSortKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.otherSortKind;
}


void ListViewSort__set_ListViewKind(ListViewSort_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.listViewKind = value;
}


void ListViewSort_BonusFilterInfo__Deconstruct(
        ListViewSort_BonusFilterInfo_o *this,
        int32_t *outPriority,
        int32_t *outKind,
        int32_t *outEventId,
        System_String_o **outButtonText,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t kind; // w10
  System_String_o *buttonText; // x8
  int32_t eventId; // w11

  kind = this->fields.kind;
  buttonText = this->fields.buttonText;
  eventId = this->fields.eventId;
  *outPriority = this->fields.priority;
  *outKind = kind;
  *outEventId = eventId;
  *outButtonText = buttonText;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)outButtonText,
    (int32_t)buttonText,
    (int32_t)outKind,
    (int32_t)outEventId,
    (System_String_o *)outButtonText,
    (int32_t)method,
    v6,
    v7);
}


void ListViewSort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32149 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D32149 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ListViewSort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewSort___c_TypeInfo->static_fields->__9 = (struct ListViewSort___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ListViewSort___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewSort___c___ctor(ListViewSort___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ListViewSort___c___BonusFilterGroupingCheck_b__163_5(
        ListViewSort___c_o *this,
        System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D3214A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___);
    this = (ListViewSort___c_o *)sub_1C93AD4(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_4D3214A = 1;
  }
  if ( !group )
    sub_1C93D2C(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  return ((*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v7)(
            group,
            *(_QWORD *)(v7 + 8))
        & 0x80000000) == 0
      && System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)group,
           (const MethodInfo_31C4BDC *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___) > 1;
}


int32_t ListViewSort___c___BonusFilterGroupingCheck_b__163_7(
        ListViewSort___c_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.eventId;
}


int32_t ListViewSort___c___BonusFilterGroupingCheck_b__163_8(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *info,
        const MethodInfo *method)
{
  return info->fields.eventId;
}


bool ListViewSort___c___CheckSvtEventBonusFilterDefaultAll_b__204_0(
        ListViewSort___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int____o pair,
        const MethodInfo *method)
{
  struct System_Int32_array *value; // x19

  value = pair.fields.value;
  if ( (byte_4D3214B & 1) == 0 )
  {
    this = (ListViewSort___c_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4D3214B = 1;
  }
  if ( !value )
    sub_1C93D2C(this, *(_QWORD *)&pair.fields.key);
  return LODWORD(value->max_length) == 0;
}


int32_t ListViewSort___c___GetAlignedBonusFilter_b__162_10(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return bonusFilterInfo->fields.kind;
}


int32_t ListViewSort___c___GetAlignedBonusFilter_b__162_11(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return bonusFilterInfo->fields.eventId;
}


bool ListViewSort___c___GetAlignedBonusFilter_b__162_12(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return System_String__IsNullOrEmpty(bonusFilterInfo->fields.buttonText, 0);
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c___GetAlignedBonusFilter_b__162_13(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  struct System_String_o **p_buttonText; // x21
  ListViewSort_BonusFilterInfo_o *result; // x0
  struct System_String_o *ButtonTextFromLocalization; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int128 v15; // q0

  p_buttonText = &bonusFilterInfo->fields.buttonText;
  result = (ListViewSort_BonusFilterInfo_o *)System_String__IsNullOrEmpty(bonusFilterInfo->fields.buttonText, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    ButtonTextFromLocalization = EventFilterMaster__GetButtonTextFromLocalization(
                                   bonusFilterInfo->fields.eventId,
                                   bonusFilterInfo->fields.kind,
                                   0,
                                   0);
    bonusFilterInfo->fields.buttonText = ButtonTextFromLocalization;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)p_buttonText,
      (int32_t)ButtonTextFromLocalization,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v15;
  return result;
}


int32_t ListViewSort___c___GetAlignedBonusFilter_b__162_14(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return bonusFilterInfo->fields.priority;
}


int32_t ListViewSort___c___GetAlignedBonusFilter_b__162_15(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return bonusFilterInfo->fields.eventId;
}


int32_t ListViewSort___c___GetAlignedBonusFilter_b__162_9(
        ListViewSort___c_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  return bonusFilterInfo->fields.priority;
}


bool ListViewSort___c___IsMatchServantAttriFilter_b__254_0(
        ListViewSort___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return (unsigned int)(e - 300) < 0x64;
}


int32_t ListViewSort___c___IsMatchServantAttriFilter_b__254_1(
        ListViewSort___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return -e;
}


bool ListViewSort___c___IsMatchServantAttriFilter_b__254_2(
        ListViewSort___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return (unsigned int)(e - 300) < 0x64;
}


bool ListViewSort___c___IsMatchServantAttriFilter_b__254_3(
        ListViewSort___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return (unsigned int)(e - 300) < 0x64;
}


bool ListViewSort___c___IsMatchServantAttriSecondFilter_b__256_0(
        ListViewSort___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return e > 302;
}


void ListViewSort___c__DisplayClass162_0___ctor(ListViewSort___c__DisplayClass162_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__1(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v7; // q0
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             2,
             eventId,
             0,
             v4);
  v7 = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v7;
  return result;
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__2(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v7; // q0
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             3,
             eventId,
             0,
             v4);
  v7 = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v7;
  return result;
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__3(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v7; // q0
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             4,
             eventId,
             0,
             v4);
  v7 = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v7;
  return result;
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__4(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v7; // q0
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             6,
             eventId,
             0,
             v4);
  v7 = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v7;
  return result;
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__5(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v7; // q0
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             7,
             eventId,
             0,
             v4);
  v7 = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v7;
  return result;
}


bool ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__7(
        ListViewSort___c__DisplayClass162_0_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  struct ListViewSort_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, bonusFilterInfo);
  return bonusFilterInfo->fields.eventId == _4__this->fields.bonusKindId
      && bonusFilterInfo->fields.kind == _4__this->fields.bonusKind;
}


bool ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_b__8(
        ListViewSort___c__DisplayClass162_0_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  struct ListViewSort_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, bonusFilterInfo);
  return bonusFilterInfo->fields.eventId == _4__this->fields.bonusKind2Id
      && bonusFilterInfo->fields.kind == _4__this->fields.bonusKind2;
}


void ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
        ListViewSort___c__DisplayClass162_0_o *this,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isNumbering,
        const MethodInfo *method)
{
  ListViewSort___c_c *v7; // x0
  System_Func_ListViewSort_BonusFilterInfo__bool__o *_9__162_12; // x21
  Il2CppObject *v9; // x22
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x20
  ListViewSort___c_c *v18; // x0
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *_9__162_13; // x21
  Il2CppObject *v20; // x22
  struct ListViewSort___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Func_TSource__TResult__o *v29; // x1
  __int64 v30; // x21
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  __int64 v32; // x1
  ListViewSort___c_c *v33; // x0
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_14; // x22
  Il2CppObject *v35; // x23
  struct ListViewSort___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  ListViewSort___c_c *v44; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_15; // x22
  Il2CppObject *v47; // x23
  struct ListViewSort___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x19
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *v56; // x22

  if ( (byte_4D3214D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____79099264);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__);
    sub_1C93AD4(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__);
    sub_1C93AD4(&Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__);
    sub_1C93AD4(&ListViewSort___c__DisplayClass162_1_TypeInfo);
    sub_1C93AD4(&ListViewSort___c_TypeInfo);
    byte_4D3214D = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
  {
    if ( !isNumbering )
      goto LABEL_12;
    v7 = ListViewSort___c_TypeInfo;
    if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
      v7 = ListViewSort___c_TypeInfo;
    }
    _9__162_12 = v7->static_fields->__9__162_12;
    if ( !_9__162_12 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = ListViewSort___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__162_12 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
        _9__162_12,
        v9,
        Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__,
        0);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
      static_fields->__9__162_12 = _9__162_12;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__162_12,
        (int32_t)_9__162_12,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    if ( System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo__52194232(
           (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
           (System_Func_TSource__bool__o *)_9__162_12,
           (const MethodInfo_31C6BB8 *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____79099264) >= 2 )
    {
      v30 = sub_1C93D20(ListViewSort___c__DisplayClass162_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0);
      if ( !v30 )
        goto LABEL_35;
      *(_DWORD *)(v30 + 16) = 0;
      v33 = ListViewSort___c_TypeInfo;
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v33 = ListViewSort___c_TypeInfo;
      }
      _9__162_14 = v33->static_fields->__9__162_14;
      if ( !_9__162_14 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = ListViewSort___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__162_14 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_14,
          v35,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__,
          0);
        v36 = ListViewSort___c_TypeInfo->static_fields;
        v36->__9__162_14 = _9__162_14;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36->__9__162_14, (int32_t)_9__162_14, v37, v38, v39, v40, v41, v42);
      }
      v43 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
              (System_Func_TSource__TKey__o *)_9__162_14,
              (const MethodInfo_31D4004 *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
      v44 = ListViewSort___c_TypeInfo;
      v45 = v43;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v44 = ListViewSort___c_TypeInfo;
      }
      _9__162_15 = v44->static_fields->__9__162_15;
      if ( !_9__162_15 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = ListViewSort___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v44->static_fields->__9;
        _9__162_15 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_15,
          v47,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__,
          0);
        v48 = ListViewSort___c_TypeInfo->static_fields;
        v48->__9__162_15 = _9__162_15;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->__9__162_15, (int32_t)_9__162_15, v49, v50, v51, v52, v53, v54);
      }
      v55 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
              v45,
              (System_Func_TSource__TKey__o *)_9__162_15,
              (const MethodInfo_31E31AC *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
      v56 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
        v56,
        (Il2CppObject *)v30,
        Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__,
        0);
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
      v29 = (System_Func_TSource__TResult__o *)v56;
    }
    else
    {
LABEL_12:
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      v18 = ListViewSort___c_TypeInfo;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v18 = ListViewSort___c_TypeInfo;
      }
      _9__162_13 = v18->static_fields->__9__162_13;
      if ( !_9__162_13 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = ListViewSort___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__162_13 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_1C93D20(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
          _9__162_13,
          v20,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__,
          0);
        v21 = ListViewSort___c_TypeInfo->static_fields;
        v21->__9__162_13 = _9__162_13;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21->__9__162_13, (int32_t)_9__162_13, v22, v23, v24, v25, v26, v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos;
      v29 = (System_Func_TSource__TResult__o *)_9__162_13;
    }
    v31 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo_(
                                                           v28,
                                                           v29,
                                                           (const MethodInfo_31DCCC0 *)Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    if ( allBonusFilterInfoList )
    {
      System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
        allBonusFilterInfoList,
        v31,
        (const MethodInfo_3922F94 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
      return;
    }
LABEL_35:
    sub_1C93D2C(v31, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_0_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t type,
        const MethodInfo *method)
{
  void *eventFilterMaster; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool IsQuestOpenEvent; // w8
  int v19; // w8
  __int64 v20; // x1
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v22; // [xsp+8h] [xbp-58h]
  struct System_String_o *v23; // [xsp+18h] [xbp-48h] BYREF
  EventFilterEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4D3214C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3214C = 1;
  }
  entity = 0;
  v23 = 0;
  eventFilterMaster = this->fields.eventFilterMaster;
  if ( !eventFilterMaster )
LABEL_11:
    sub_1C93D2C(eventFilterMaster, *(_QWORD *)&kind);
  v23 = 0;
  *((_QWORD *)&v22 + 1) = (unsigned int)eventId;
  if ( EventFilterMaster__TryGetEntity_42713324((EventFilterMaster_o *)eventFilterMaster, &entity, eventId, type, 0) )
  {
    eventFilterMaster = entity;
    if ( !entity )
      goto LABEL_11;
    LODWORD(v22) = entity->fields.priority;
    if ( kind == 4 )
    {
      IsQuestOpenEvent = EventFilterEntity__IsQuestOpenEvent(entity, 0);
      eventFilterMaster = entity;
      if ( IsQuestOpenEvent )
        v19 = 5;
      else
        v19 = 4;
      DWORD1(v22) = v19;
      if ( !entity )
        goto LABEL_11;
    }
    else
    {
      DWORD1(v22) = kind;
    }
    v20 = *((_QWORD *)eventFilterMaster + 4);
  }
  else
  {
    LODWORD(v22) = 0;
    DWORD1(v22) = kind;
    v20 = StringLiteral_1/*""*/;
  }
  v23 = (struct System_String_o *)v20;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23, v20, v12, v13, v14, v15, v16, v17);
  retstr->fields.buttonText = v23;
  *(_OWORD *)&retstr->fields.priority = v22;
  return result;
}


void ListViewSort___c__DisplayClass162_1___ctor(ListViewSort___c__DisplayClass162_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ListViewSort_BonusFilterInfo_o *ListViewSort___c__DisplayClass162_1___GetAlignedBonusFilter_b__16(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort___c__DisplayClass162_1_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  struct System_String_o **p_buttonText; // x21
  ListViewSort_BonusFilterInfo_o *result; // x0
  int32_t eventId; // w0
  int32_t kind; // w1
  int32_t v11; // w2
  struct System_String_o *ButtonTextFromLocalization; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int128 v19; // q0

  p_buttonText = &bonusFilterInfo->fields.buttonText;
  result = (ListViewSort_BonusFilterInfo_o *)System_String__IsNullOrEmpty(bonusFilterInfo->fields.buttonText, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    kind = bonusFilterInfo->fields.kind;
    eventId = bonusFilterInfo->fields.eventId;
    v11 = this->fields.count + 1;
    this->fields.count = v11;
    ButtonTextFromLocalization = EventFilterMaster__GetButtonTextFromLocalization(eventId, kind, v11, 0);
    bonusFilterInfo->fields.buttonText = ButtonTextFromLocalization;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)p_buttonText,
      (int32_t)ButtonTextFromLocalization,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v19;
  return result;
}


void ListViewSort___c__DisplayClass163_0___ctor(ListViewSort___c__DisplayClass163_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_b__4(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_o *bonusFilterInfo,
        const MethodInfo *method)
{
  EventGroupMaster_o *eventGroupMaster; // x0

  eventGroupMaster = this->fields.eventGroupMaster;
  if ( !eventGroupMaster )
    sub_1C93D2C(0, bonusFilterInfo);
  return EventGroupMaster__GetEventGroupId(eventGroupMaster, bonusFilterInfo->fields.eventId, 0);
}


System_Collections_Generic_List_EventGroupEntity__o *ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_b__6(
        ListViewSort___c__DisplayClass163_0_o *this,
        System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *group,
        const MethodInfo *method)
{
  ListViewSort___c__DisplayClass163_0_o *v4; // x20
  System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__c *klass; // x8
  EventGroupMaster_o *eventGroupMaster; // x20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4D32150 & 1) == 0 )
  {
    this = (ListViewSort___c__DisplayClass163_0_o *)sub_1C93AD4(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_4D32150 = 1;
  }
  if ( !group )
    goto LABEL_12;
  klass = group->klass;
  eventGroupMaster = v4->fields.eventGroupMaster;
  v7 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C69E5C(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  this = (ListViewSort___c__DisplayClass163_0_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v9)(
                                                    group,
                                                    *(_QWORD *)(v9 + 8));
  if ( !eventGroupMaster )
LABEL_12:
    sub_1C93D2C(this, group);
  return EventGroupMaster__GetEntitiesByGroupId(eventGroupMaster, (int32_t)this, 0);
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array *eventFilterEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x0

  if ( (byte_4D3214E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    byte_4D3214E = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventFilterEntities, 0) )
  {
    allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
    if ( !allBonusFilterInfoList )
      sub_1C93D2C(0, v5);
    System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
      allBonusFilterInfoList,
      (System_Collections_Generic_IEnumerable_T__o *)eventFilterEntities,
      (const MethodInfo_3922F94 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
  }
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Replace_1(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array **bonusFilterInfos,
        EventGroupEntity_o *eventGroupEntities,
        const MethodInfo *method)
{
  ListViewSort_BonusFilterInfo_array *v4; // x8
  ListViewSort___c__DisplayClass163_0_o *v7; // x21
  __int64 v8; // x22
  unsigned __int64 v9; // x23
  unsigned __int64 max_length_low; // x9
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ListViewSort_BonusFilterInfo_array *v17; // x8
  EventFilterEntity_o *v18; // x9
  char *v19; // x0
  struct System_String_o *buttonText; // x1
  ListViewSort_BonusFilterInfo_array *v21; // x8
  int32_t id; // w9
  char *v23; // x8
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  v4 = *bonusFilterInfos;
  if ( !*bonusFilterInfos )
    goto LABEL_11;
  v7 = this;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v4->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      return;
    if ( v9 >= max_length_low )
      goto LABEL_20;
    if ( !eventGroupEntities )
      goto LABEL_11;
    if ( v4->m_Items[v8].fields.eventId == eventGroupEntities->fields.eventId )
      break;
LABEL_10:
    ++v9;
    ++v8;
    if ( !v4 )
      goto LABEL_11;
  }
  this = (ListViewSort___c__DisplayClass163_0_o *)v7->fields.eventFilterMaster;
  if ( !this )
    goto LABEL_11;
  this = (ListViewSort___c__DisplayClass163_0_o *)EventFilterMaster__TryGetEntity_42713324(
                                                    (EventFilterMaster_o *)this,
                                                    &entity,
                                                    eventGroupEntities->fields.id,
                                                    1,
                                                    0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = *bonusFilterInfos;
    goto LABEL_10;
  }
  v17 = *bonusFilterInfos;
  if ( !*bonusFilterInfos )
    goto LABEL_11;
  v18 = entity;
  if ( !entity )
    goto LABEL_11;
  if ( (unsigned int)v9 >= LODWORD(v17->max_length) )
    goto LABEL_20;
  v19 = (char *)v17 + v8 * 24;
  *((_DWORD *)v19 + 8) = entity->fields.priority;
  buttonText = v18->fields.buttonText;
  *((_QWORD *)v19 + 6) = buttonText;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v17->m_Items[v8].fields.buttonText,
    (int32_t)buttonText,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = *bonusFilterInfos;
  if ( !*bonusFilterInfos || !entity )
LABEL_11:
    sub_1C93D2C(this, bonusFilterInfos);
  if ( (unsigned int)v9 >= LODWORD(v21->max_length) )
LABEL_20:
    sub_1C93D34(this);
  id = entity->fields.id;
  v23 = (char *)v21 + v8 * 24;
  *((_DWORD *)v23 + 9) = 0;
  *((_DWORD *)v23 + 10) = id;
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array **eventFilterEntities,
        System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *eventGroupEntities,
        const MethodInfo *method)
{
  System_Object_array *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  EventGroupEntity_o *v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct EventFilterMaster_o *eventFilterMaster; // x8
  EventGroupEntity_array *v16; // x21
  int32_t id; // w2
  const MethodInfo *v18; // x3
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3214F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo);
    byte_4D3214F = 1;
  }
  entity = 0;
  IsNullOrEmpty = (System_Object_array *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)*eventFilterEntities,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !eventGroupEntities )
      goto LABEL_18;
    klass = eventGroupEntities->klass;
    v10 = *(unsigned __int16 *)&eventGroupEntities->klass->_2.rank;
    if ( *(_WORD *)&eventGroupEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C69E5C(
              eventGroupEntities,
              System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo,
              0);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *, _QWORD))v12)(
           eventGroupEntities,
           *(_QWORD *)(v12 + 8)) >= 2 )
    {
      v13 = (EventGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
                                    (const MethodInfo_31CC378 *)Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
      v14 = System_Linq_Enumerable__Skip_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
              1,
              (const MethodInfo_31E1F84 *)Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
      IsNullOrEmpty = System_Linq_Enumerable__ToArray_object_(
                        v14,
                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
      eventFilterMaster = this->fields.eventFilterMaster;
      v16 = (EventGroupEntity_array *)IsNullOrEmpty;
      if ( v13 )
      {
        id = v13->fields.id;
        if ( eventFilterMaster )
          goto LABEL_14;
      }
      else
      {
        id = -1;
        if ( eventFilterMaster )
        {
LABEL_14:
          if ( EventFilterMaster__TryGetEntity_42713324(this->fields.eventFilterMaster, &entity, id, 1, 0) )
          {
            ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Replace_1(
              this,
              eventFilterEntities,
              v13,
              v18);
            ListViewSort___BonusFilterGroupingCheck_g__Remove_163_2(eventFilterEntities, v16, 0);
          }
          return;
        }
      }
LABEL_18:
      sub_1C93D2C(IsNullOrEmpty, v8);
    }
  }
}


void ListViewSort___c__DisplayClass254_0___ctor(ListViewSort___c__DisplayClass254_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort___c__DisplayClass254_0___IsMatchServantAttriFilter_b__4(
        ListViewSort___c__DisplayClass254_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *removeIndividuality; // x0

  if ( (byte_4D32151 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D32151 = 1;
  }
  removeIndividuality = this->fields.removeIndividuality;
  if ( !removeIndividuality )
    sub_1C93D2C(0, *(_QWORD *)&e);
  return !System_Collections_Generic_List_int___Contains(
            removeIndividuality,
            e,
            (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
}