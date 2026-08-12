void ListViewSort___ctor(ListViewSort_o *this, int32_t sortKind, bool isAscendingOrder, const MethodInfo *method)
{
  Il2CppClass *v7; // x0
  struct System_Boolean_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Boolean_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Boolean_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_Dictionary_int__int__o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_Dictionary_int__object__o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Boolean_array *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Boolean_array *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x1
  bool v58; // w21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_String_o *v65; // x8
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  const MethodInfo *v72; // x1
  __int128 v73; // [xsp+18h] [xbp-78h]
  System_String_o *v74; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5972023 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_5972023 = 1;
  }
  v7 = bool___TypeInfo;
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v8 = (struct System_Boolean_array *)sub_2213B20(v7, 105);
  this->fields.isFilterList = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.isFilterList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v29,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v29;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v36,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v36;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v50;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v73 = 0u;
  v74 = 0;
  *(_QWORD *)((char *)&v73 + 4) = 0xFFFFFFFF00000001LL;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
  v58 = isAscendingOrder;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v74, (int32_t)v74, v59, v60, v61, v62, v63, v64);
  v65 = v74;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v73;
  this->fields.bonusFilterInfoDefault.fields.buttonText = v65;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sortKind = 3;
  this->fields.defaultSortKind = sortKind;
  this->fields.isDefaultAscendingOrder = v58;
  this->fields.isAscendingOrder = 1;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.listViewKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.filter2Kind = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v72);
  this->fields.sortKind = sortKind;
  this->fields.isAscendingOrder = v58;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.isBonusKind = 0;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
}


void ListViewSort___ctor_50854784(
        ListViewSort_o *this,
        System_String_o *saveKey,
        int32_t sortKind,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  bool v8; // w23
  Il2CppClass *v9; // x0
  struct System_Boolean_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Boolean_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Boolean_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_Dictionary_int__int__o *v31; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_Dictionary_int__object__o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Boolean_array *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Boolean_array *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_String_o *v66; // x8
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x0
  __int128 v81; // [xsp+18h] [xbp-78h]
  System_String_o *v82; // [xsp+28h] [xbp-68h] BYREF

  v8 = isAscendingOrder;
  if ( (byte_5972024 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_5972024 = 1;
  }
  v9 = bool___TypeInfo;
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v10 = (struct System_Boolean_array *)sub_2213B20(v9, 105);
  this->fields.isFilterList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isFilterList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v52;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v81 = 0u;
  v82 = 0;
  *(_QWORD *)((char *)&v81 + 4) = 0xFFFFFFFF00000001LL;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82, (int32_t)v82, v60, v61, v62, v63, v64, v65);
  v66 = v82;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v81;
  this->fields.bonusFilterInfoDefault.fields.buttonText = v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sortKind = 3;
  this->fields.defaultSortKind = sortKind;
  this->fields.isDefaultAscendingOrder = v8;
  this->fields.isAscendingOrder = 1;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.listViewKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.filter2Kind = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v73);
  this->fields.saveKey = saveKey;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.saveKey, (int32_t)saveKey, v74, v75, v76, v77, v78, v79);
  v80 = this->fields.saveKey;
  this->fields.sortKind = sortKind;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.isAscendingOrder = v8;
  this->fields.isBonusKind = 0;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  if ( !System_String__IsNullOrEmpty(v80, 0) )
    this->fields.isRequestLoad = 1;
}


void ListViewSort___ctor_50855524(ListViewSort_o *this, ListViewSort_o *o, const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  struct System_Boolean_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Boolean_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Boolean_array *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_Dictionary_int__int__o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_Dictionary_int__object__o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Boolean_array *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Boolean_array *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_String_o *v62; // x8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x2
  __int128 v70; // [xsp+8h] [xbp-68h]
  System_String_o *v71; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972025 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_5972025 = 1;
  }
  v5 = bool___TypeInfo;
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v6 = (struct System_Boolean_array *)sub_2213B20(v5, 105);
  this->fields.isFilterList = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.isFilterList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxFilterList,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPresentBoxRarityFilterList,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v27,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isSvtEquipEffectFilterDic,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v34,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v34;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEventBonusFilterDic,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isAutoOrganizationFilterList,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v70 = 0u;
  v71 = 0;
  *(_QWORD *)((char *)&v70 + 4) = 0xFFFFFFFF00000001LL;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71, (int32_t)v71, v56, v57, v58, v59, v60, v61);
  v62 = v71;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v70;
  this->fields.bonusFilterInfoDefault.fields.buttonText = v62;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText,
    0,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  System_Object___ctor((Il2CppObject *)this, 0);
  ListViewSort__Set(this, o, v69);
}


void ListViewSort__AdjustmentEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *svtEventBonusFilterDic; // x0
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t currentKey; // w22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_597202A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597202A = 1;
  }
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  memset(&v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  if ( !svtEventBonusFilterDic )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         svtEventBonusFilterDic,
         (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) < 1 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !svtEventBonusFilterDic
    || (svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                           (EventMaster_o *)svtEventBonusFilterDic,
                                                                                           0,
                                                                                           0,
                                                                                           0)) == 0 )
  {
LABEL_32:
    sub_2213CDC(svtEventBonusFilterDic, method);
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)svtEventBonusFilterDic;
  if ( svtEventBonusFilterDic->fields._count <= 0 )
  {
    svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
    {
      System_Collections_Generic_Dictionary_int__object___Clear(
        svtEventBonusFilterDic,
        (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
      ListViewSort__SetSvtEventBonusFilter(this, v16);
      return;
    }
    goto LABEL_32;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_32;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                                                     svtEventBonusFilterDic,
                                                                                     (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)svtEventBonusFilterDic,
    (const MethodInfo_437DCDC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
  v19 = v17;
  v17.fields._dictionary = 0;
  *(_QWORD *)&v17.fields._index = &v19;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_415904C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__) )
  {
    currentKey = (int32_t)v19.fields._currentKey;
    v8 = System_Collections_Generic_HashSet_int___Contains(
           v5,
           (int32_t)v19.fields._currentKey,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( !v8 )
    {
      if ( !v6
        || (items = v6->fields._items,
            v11 = Method_System_Collections_Generic_List_int__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v8, v9);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          currentKey,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = currentKey;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_4159048 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
  if ( !v6 )
    goto LABEL_32;
  if ( v6->fields._size > 0 )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      v6,
      (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17.fields._dictionary = 0;
    *(_QWORD *)&v17.fields._index = &v18;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v18,
              (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v14 = this->fields.svtEventBonusFilterDic;
      if ( !v14 )
        sub_2213CDC(0, v13);
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)v14,
        v18.fields._current,
        (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v18,
      (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    ListViewSort__SetSvtEventBonusFilter(this, v15);
  }
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
  __int64 v7; // x1
  __int64 *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v23; // x19
  System_Collections_Generic_IEnumerable_TSource__o **v24; // x25
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2
  ListViewSort_BonusFilterInfo_array *v32; // x1
  const MethodInfo *v33; // x2
  ListViewSort_BonusFilterInfo_array *v34; // x1
  const MethodInfo *v35; // x2
  ListViewSort_BonusFilterInfo_array *v36; // x1
  const MethodInfo *v37; // x2
  ListViewSort_BonusFilterInfo_array *v38; // x1
  const MethodInfo *v39; // x2
  ListViewSort_BonusFilterInfo_array *v40; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *v42; // x26
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v43; // x0
  __int64 v44; // x1
  ListViewSort___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x26
  struct ListViewSort___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__163_5; // x27
  Il2CppObject *v49; // x19
  struct ListViewSort___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x19
  System_Func_object__object__o *v58; // x26
  __int64 v59; // x8
  void *v60; // x26
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  System_Collections_IEnumerator_c **v66; // x21
  System_Collections_Generic_IEnumerator_List_EventGroupEntity___c **v67; // x19
  const MethodInfo_389085C **v68; // x23
  const MethodInfo_3893234 **v69; // x22
  __int64 i; // x26
  __int64 v71; // x8
  System_Collections_IEnumerator_c *v72; // x1
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x8
  System_Collections_Generic_IEnumerator_List_EventGroupEntity___c *v79; // x1
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x26
  ListViewSort___c_c *v85; // x0
  struct ListViewSort___c_StaticFields *v86; // x8
  System_Func_object__int__o *_9__163_7; // x27
  Il2CppObject *v88; // x28
  struct ListViewSort___c_StaticFields *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x27
  ListViewSort___c_c *v98; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x28
  struct ListViewSort___c_StaticFields *v100; // x8
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__163_8; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x26
  __int64 v103; // x28
  System_Collections_Generic_IEnumerable_TSource__o **v104; // x24
  System_Collections_IEnumerator_c **v105; // x25
  const MethodInfo_3893234 **v106; // x21
  const MethodInfo_389085C **v107; // x22
  System_Collections_Generic_IEnumerator_List_EventGroupEntity___c **v108; // x23
  Il2CppObject *v109; // x19
  struct ListViewSort___c_StaticFields *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  const MethodInfo *v119; // x3
  const MethodInfo *v120; // x3
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x3
  __int64 v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v133; // [xsp+30h] [xbp-80h]
  __int64 v134; // [xsp+48h] [xbp-68h]

  if ( (byte_5972041 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventGroupEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
    sub_2213A60(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
    sub_2213A60(&System_Func_EventGroupEntity__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_2213A60(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__);
    sub_2213A60(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__);
    sub_2213A60(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__);
    sub_2213A60(&ListViewSort___c__DisplayClass163_0_TypeInfo);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_5972041 = 1;
  }
  v6 = sub_2213CCC(ListViewSort___c__DisplayClass163_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (__int64 *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !v6 )
    goto LABEL_76;
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)Master_object, v10, v11, v12, v13, v14, v15);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v6 + 24) = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v23,
    (const MethodInfo_451E714 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v6 + 16) = v23;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v23, v25, v26, v27, v28, v29, v30);
  if ( *combineCampaignFilterEntities )
    v32 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*combineCampaignFilterEntities,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v32 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v32,
    v31);
  if ( *campaignEventFilterEntities )
    v34 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*campaignEventFilterEntities,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v34 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v34,
    v33);
  if ( *eventFilterEntities )
    v36 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*eventFilterEntities,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v36 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v36,
    v35);
  if ( *finishEventFilterEntities )
    v38 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*finishEventFilterEntities,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v38 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v38,
    v37);
  if ( *servantFilterEntities )
    v40 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*servantFilterEntities,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v40 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v40,
    v39);
  v41 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
  v42 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__int____ctor(
    v42,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__,
    0);
  v43 = System_Linq_Enumerable__GroupBy_ListViewSort_BonusFilterInfo__int_(
          v41,
          (System_Func_TSource__TKey__o *)v42,
          (const MethodInfo_3883430 *)Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
  v45 = ListViewSort___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v44);
    v45 = ListViewSort___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__163_5 = (System_Func_object__bool__o *)static_fields->__9__163_5;
  if ( !_9__163_5 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v44);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__163_5 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    System_Func_object__bool____ctor(_9__163_5, v49, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__, 0);
    v50 = ListViewSort___c_TypeInfo->static_fields;
    v50->__9__163_5 = (struct System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__o *)_9__163_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->__9__163_5, (int32_t)_9__163_5, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__Where_object_(
          v46,
          (System_Func_TSource__bool__o *)_9__163_5,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
  v58 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
  System_Func_object__object____ctor(
    v58,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__,
    0);
  Master_object = (__int64 *)System_Linq_Enumerable__Select_object__object_(
                               v57,
                               (System_Func_TSource__TResult__o *)v58,
                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
  if ( !Master_object )
LABEL_76:
    sub_2213CDC(Master_object, v9);
  v59 = *Master_object;
  v60 = Master_object;
  v61 = *(unsigned __int16 *)(*Master_object + 302);
  if ( *(_WORD *)(*Master_object + 302) )
  {
    v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_List_EventGroupEntity___c **)v62 - 1) != System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_32;
    }
    v63 = v59 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_32:
    v63 = sub_224BC3C(Master_object, System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo, 0);
  }
  v64 = (*(__int64 (__fastcall **)(void *, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
  v134 = v64;
  if ( !v64 )
    sub_2213CDC(0, v65);
  v66 = &System_Collections_IEnumerator_TypeInfo;
  v67 = &System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo;
  v68 = (const MethodInfo_389085C **)&Method_System_Linq_Enumerable_Select_EventGroupEntity__int___;
  v69 = (const MethodInfo_3893234 **)&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___;
  for ( i = v64; ; i = v134 )
  {
    v71 = *(_QWORD *)i;
    v72 = *v66;
    v73 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != v72 )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_40;
      }
      v75 = v71 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_40:
      v75 = sub_224BC3C(i, v72, 0);
    }
    v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(i, *(_QWORD *)(v75 + 8));
    if ( (v76 & 1) == 0 )
      break;
    if ( !v134 )
      sub_2213CDC(v76, v77);
    v78 = *(_QWORD *)v134;
    v79 = *v67;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v134 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v134 + 302LL) )
    {
      v81 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_List_EventGroupEntity___c **)v81 - 1) != v79 )
      {
        --v80;
        v81 += 4;
        if ( !v80 )
          goto LABEL_48;
      }
      v82 = v78 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_48:
      v82 = sub_224BC3C(v134, v79, 0);
    }
    v84 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(
                                                                 v134,
                                                                 *(_QWORD *)(v82 + 8));
    v85 = ListViewSort___c_TypeInfo;
    if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v83);
      v85 = ListViewSort___c_TypeInfo;
    }
    v86 = v85->static_fields;
    _9__163_7 = (System_Func_object__int__o *)v86->__9__163_7;
    if ( !_9__163_7 )
    {
      if ( !*(&v85->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v85, v83);
        v86 = ListViewSort___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)v86->__9;
      _9__163_7 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__163_7, v88, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__, 0);
      v89 = ListViewSort___c_TypeInfo->static_fields;
      v89->__9__163_7 = (struct System_Func_EventGroupEntity__int__o *)_9__163_7;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v89->__9__163_7,
        (int32_t)_9__163_7,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    v97 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v84,
                                                                 (System_Func_TSource__TResult__o *)_9__163_7,
                                                                 *v68);
    v98 = ListViewSort___c_TypeInfo;
    v99 = *v24;
    if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v96);
      v98 = ListViewSort___c_TypeInfo;
    }
    v100 = v98->static_fields;
    _9__163_8 = v100->__9__163_8;
    if ( !_9__163_8 )
    {
      if ( !*(&v98->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v98, v96);
        v100 = ListViewSort___c_TypeInfo->static_fields;
      }
      v133 = v84;
      v102 = v99;
      v103 = v6;
      v104 = v24;
      v105 = v66;
      v106 = v69;
      v107 = v68;
      v108 = v67;
      v109 = (Il2CppObject *)v100->__9;
      _9__163_8 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__int____ctor(
        _9__163_8,
        v109,
        Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__,
        0);
      v110 = ListViewSort___c_TypeInfo->static_fields;
      v110->__9__163_8 = _9__163_8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v110->__9__163_8,
        (int32_t)_9__163_8,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      v67 = v108;
      v68 = v107;
      v69 = v106;
      v66 = v105;
      v24 = v104;
      v6 = v103;
      v99 = v102;
      v84 = v133;
    }
    v117 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__int_(
                                                                  v99,
                                                                  (System_Func_TSource__TResult__o *)_9__163_8,
                                                                  *v69);
    v118 = System_Linq_Enumerable__Intersect_int_(
             v97,
             v117,
             (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
    if ( System_Linq_Enumerable__Count_int_(
           v118,
           (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___) >= 2 )
    {
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        combineCampaignFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v84,
        v119);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        campaignEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v84,
        v120);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        eventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v84,
        v121);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        finishEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v84,
        v122);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        servantFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v84,
        v123);
    }
  }
  if ( v134 )
  {
    v124 = *(_QWORD *)v134;
    v125 = *(unsigned __int16 *)(*(_QWORD *)v134 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v134 + 302LL) )
    {
      v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v126 - 1) != System_IDisposable_TypeInfo )
      {
        --v125;
        v126 += 4;
        if ( !v125 )
          goto LABEL_71;
      }
      v127 = v124 + 16LL * *v126 + 312;
    }
    else
    {
LABEL_71:
      v127 = sub_224BC3C(v134, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v127)(v134, *(_QWORD *)(v127 + 8));
  }
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
  unsigned __int64 v15; // x21
  int32_t *p_eventId; // x25

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !bonusFilterInfos )
    sub_2213CDC(IsNullOrEmpty, v12);
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
        sub_2213CE4(IsNullOrEmpty);
      if ( *p_eventId == kindId && *(p_eventId - 1) == kind )
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
  char *v19; // x8
  int v20; // w9
  FilterKindList_c *v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_T__o *v26; // x0
  int32_t v27; // w1
  __int64 v28; // x24
  unsigned __int64 v29; // x22
  struct System_Boolean_array *isFilterList; // x8
  const MethodInfo *v31; // x2

  if ( (byte_597204B & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_597204B = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  v9 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v8);
  if ( !v7 )
    goto LABEL_42;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
    (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
    (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 66;
  }
  if ( servantFilterKind == 14 )
  {
    v21 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v8);
      v21 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v21->static_fields->ClassExtra1FilterKindList,
      (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    v22 = v7->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v7->fields._version;
    if ( v22 )
    {
      v24 = v7->fields._size;
      if ( (unsigned int)v24 < LODWORD(v22->max_length) )
      {
        v19 = (char *)v22 + 4 * v24;
        v7->fields._size = v24 + 1;
        v20 = 67;
        goto LABEL_29;
      }
      v25 = v23[4];
      v26 = v7;
      v27 = 67;
LABEL_32:
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v26,
        v27,
        *(const MethodInfo_4469A88 **)(*(_QWORD *)(v25 + 192) + 112LL));
      goto LABEL_33;
    }
LABEL_42:
    sub_2213CDC(v9, v8);
  }
  if ( servantFilterKind != 13 )
  {
    if ( servantFilterKind == 12 )
    {
      v14 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v8);
        v14 = FilterKindList_TypeInfo;
      }
      System_Collections_Generic_List_Int32Enum___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)v14->static_fields->ClassExtra1FilterKindList,
        (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      System_Collections_Generic_List_Int32Enum___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
        (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      System_Collections_Generic_List_Int32Enum___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
        (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    }
    goto LABEL_33;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v8);
    v15 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v15->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v16 = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v7->fields._version;
  if ( !v16 )
    goto LABEL_42;
  v18 = v7->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    v25 = v17[4];
    v26 = v7;
    v27 = 68;
    goto LABEL_32;
  }
  v19 = (char *)v16 + 4 * v18;
  v7->fields._size = v18 + 1;
  v20 = 68;
LABEL_29:
  *((_DWORD *)v19 + 8) = v20;
LABEL_33:
  v28 = 136;
  while ( 1 )
  {
    v29 = v28 - 32;
    v9 = (FilterKindList_c *)System_Collections_Generic_List_Int32Enum___Contains(
                               v7,
                               v28 - 32,
                               (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      isFilterList = this->fields.isFilterList;
      if ( !isFilterList )
        goto LABEL_42;
      if ( v29 >= LODWORD(isFilterList->max_length) )
        sub_2213CE4(v9);
      if ( this->fields.FILTER_DEFAULT_VALUE != (((v29 & 0x7FFFFFFE) == 40)
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
  unsigned int v6; // w10
  const MethodInfo *v7; // x2

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, *(_QWORD *)&eventId);
  v6 = 104;
  while ( 1 )
  {
    if ( LODWORD(isFilterList->max_length) <= 0x68 )
      sub_2213CE4(this);
    if ( this->fields.FILTER_DEFAULT_VALUE != (((v6 & 0x7FFFFFFE) == 40) ^ isFilterList->m_Items[v6]) )
      break;
    if ( --v6 == -1 )
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
  struct System_Boolean_array *isPresentBoxFilterList; // x11
  __int64 max_length_low; // x8
  unsigned __int64 v4; // x9
  bool v5; // w10
  bool *m_Items; // x11
  bool v7; // cc

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_2213CDC(this, method);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  do
  {
    if ( max_length_low == v4 )
      sub_2213CE4(this);
    if ( !m_Items[v4] )
      break;
    v7 = v4++ > 0xD;
    v5 = v7;
  }
  while ( v4 != 15 );
  return v5;
}


bool ListViewSort__CheckPresentBoxRarityFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x11
  __int64 max_length_low; // x8
  unsigned __int64 v4; // x9
  bool v5; // w10
  bool *m_Items; // x11
  bool v7; // cc

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_2213CDC(this, method);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( max_length_low == v4 )
      sub_2213CE4(this);
    if ( !m_Items[v4] )
      break;
    v7 = v4++ > 3;
    v5 = v7;
  }
  while ( v4 != 5 );
  return v5;
}


bool ListViewSort__CheckSvtEquipEffectFilterDefaultAll(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  bool v4; // w0
  bool v5; // w19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+10h] [xbp-50h] BYREF

  if ( (byte_597204C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_597204C = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  memset(&v7, 0, 32);
  if ( !isSvtEquipEffectFilterDic )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v7,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  do
    v4 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v7,
           (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
  while ( v4 && this->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE == HIDWORD(v7.fields._current.fields.key) );
  v5 = !v4;
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v7,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__CheckSvtEventBonusFilterDefaultAll(ListViewSort_o *this, int32_t eventId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x19
  Il2CppObject *Value_int__object; // x0
  ListViewSort___c_c *v8; // x0
  struct ListViewSort___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__204_0; // x20
  Il2CppObject *v11; // x21
  struct ListViewSort___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_597204D & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_int__int_____);
    sub_2213A60(&Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
    sub_2213A60(&System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    sub_2213A60(&Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_597204D = 1;
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
                          (const MethodInfo_381447C *)Method_BasicHelper_GetValue_int__int_____);
    if ( Value_int__object )
      return LODWORD(Value_int__object[1].monitor) == 0;
    return 1;
  }
  v8 = ListViewSort___c_TypeInfo;
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, *(_QWORD *)&eventId);
    v8 = ListViewSort___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__204_0 = (System_Func_T__TResult__o *)static_fields->__9__204_0;
  if ( !_9__204_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, *(_QWORD *)&eventId);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__204_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__204_0,
      v11,
      Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__,
      0);
    v12 = ListViewSort___c_TypeInfo->static_fields;
    v12->__9__204_0 = (struct System_Func_KeyValuePair_int__int_____bool__o *)_9__204_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__204_0, (int32_t)_9__204_0, v13, v14, v15, v16, v17, v18);
  }
  return System_Linq_Enumerable__All_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)svtEventBonusFilterDic,
           (System_Func_TSource__bool__o *)_9__204_0,
           (const MethodInfo_3863DDC *)Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
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

  if ( (byte_597205D & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_597205D = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, *(_QWORD *)&filterKind);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    sub_2213CDC(0, *(_QWORD *)&filterKind);
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(this, v7, v8) )
    return 1;
  if ( filterKind <= 6 )
  {
    if ( (unsigned int)filterKind < 3 )
    {
      v11 = 65;
      return ListViewSort__GetFilter(this, v11, v9);
    }
    if ( (unsigned int)(filterKind - 7) >= 0xFFFFFFFC )
    {
      v11 = 66;
      return ListViewSort__GetFilter(this, v11, v9);
    }
    return 0;
  }
  if ( (unsigned int)(filterKind - 61) > 0xFFFFFFFB )
  {
    v11 = 67;
    return ListViewSort__GetFilter(this, v11, v9);
  }
  if ( (unsigned int)(filterKind - 65) < 0xFFFFFFFC )
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

  if ( (byte_597203D & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_597203D = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v3 = FilterKindList_TypeInfo;
  }
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)v3->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList
    || (v5 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_2213CDC(ClassFilterKindList, method);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7
    || (isFilterList->m_Items[7] = 0, max_length == 8)
    || (isFilterList->m_Items[8] = 0, max_length <= 9) )
  {
    sub_2213CE4(ClassFilterKindList);
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

  if ( (byte_597203E & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_597203E = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v3 = FilterKindList_TypeInfo;
  }
  ClassFilterKindList = (System_Collections_Generic_List_T__o *)v3->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList
    || (v5 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_2213CDC(ClassFilterKindList, method);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7 || (isFilterList->m_Items[7] = 0, max_length <= 0x1C) )
    sub_2213CE4(ClassFilterKindList);
  isFilterList->m_Items[28] = 0;
}


void ListViewSort__Clear(ListViewSort_o *this, const MethodInfo *method)
{
  this->fields.listViewKind = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.sortKind = 3;
  this->fields.isAscendingOrder = 1;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.filter2Kind = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
}


void ListViewSort__ClearFilter(ListViewSort_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  __int64 v8; // x8
  __int64 max_length_low; // x9
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  __int64 v12; // x9
  __int64 v13; // x8
  bool *v14; // x10
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  __int64 v16; // x9
  __int64 v17; // x8
  bool *v18; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  __int64 v20; // x9
  __int64 v21; // x8
  bool *v22; // x10

  if ( (byte_597203A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    byte_597203A = 1;
  }
  ListViewSort__SetAllNomalFilter(this, this->fields.FILTER_DEFAULT_VALUE, v2);
  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    goto LABEL_22;
  v8 = 0;
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  m_Items = isPresentBoxFilterList->m_Items;
  do
  {
    if ( max_length_low == v8 )
LABEL_21:
      sub_2213CE4(svtEventBonusFilterDic);
    m_Items[v8++] = 0;
  }
  while ( v8 != 15 );
  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    goto LABEL_22;
  v12 = LODWORD(isPresentBoxRarityFilterList->max_length);
  v13 = 0;
  v14 = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( v12 == v13 )
      goto LABEL_21;
    v14[v13++] = 0;
  }
  while ( v13 != 5 );
  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    goto LABEL_22;
  v16 = LODWORD(isAutoOrganizationFilterList->max_length);
  v17 = 0;
  v18 = isAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v16 == v17 )
      goto LABEL_21;
    v18[v17++] = 0;
  }
  while ( v17 != 13 );
  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    goto LABEL_22;
  v20 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
  v21 = 0;
  v22 = isWaveBattleAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v20 == v21 )
      goto LABEL_21;
    v22[v21++] = 0;
  }
  while ( v21 != 7 );
  ListViewSort__SetAllSvtEquipEffectFilter(this, 0, v6);
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
LABEL_22:
    sub_2213CDC(svtEventBonusFilterDic, v5);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
}


System_Collections_Generic_Dictionary_string__int__o *ListViewSort__ConvertJsonToSvtEquipEffectFilterData(
        ListViewSort_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *key; // x20
  System_String_o *v9; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_597202B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_597202B = 1;
  }
  result = 0;
  memset(&v14, 0, sizeof(v14));
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(json, 0) )
    json = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
  Dictionary = JsonManager__getDictionary(json, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v14,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v14.fields._current.fields.value )
        sub_2213CDC(0, v7);
      key = v14.fields._current.fields.key;
      v9 = (System_String_o *)((__int64 (*)(void))v14.fields._current.fields.value->klass->vtable[3].methodPtr)();
      v10 = System_Int32__TryParse(v9, &result, 0);
      if ( v10 )
      {
        if ( !v4 )
          sub_2213CDC(v10, v11);
        System_Collections_Generic_Dictionary_object__int___Add(
          v4,
          key,
          result,
          (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v14,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v4;
}


System_Collections_Generic_Dictionary_string__int____o *ListViewSort__ConvertJsonToSvtEventBonusFilterData(
        ListViewSort_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *value; // x22
  System_Collections_IList_c *v10; // x23
  Il2CppObject *key; // x20
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  System_Collections_ICollection_c **v17; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  unsigned __int64 i; // x23
  __int64 v22; // x8
  __int64 v23; // x9
  System_Collections_ICollection_c **v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  unsigned __int64 v36; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_597202C & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&System_Collections_ICollection_TypeInfo);
    sub_2213A60(&System_Collections_IList_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_597202C = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
  if ( System_String__IsNullOrEmpty(json, 0) )
    json = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
  Dictionary = JsonManager__getDictionary(json, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v38,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v39 = v38;
    v38.fields._dictionary = 0;
    *(_QWORD *)&v38.fields._version = &v39;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v39,
             (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( !v7 )
        break;
      value = v39.fields._current.fields.value;
      if ( !v39.fields._current.fields.value )
        sub_2213CDC(v7, v8);
      v10 = System_Collections_IList_TypeInfo;
      key = v39.fields._current.fields.key;
      v12 = sub_2213BB4(v39.fields._current.fields.value, System_Collections_IList_TypeInfo);
      v14 = v12;
      if ( !v12 )
      {
        sub_221405C(value, v10, v13);
LABEL_45:
        sub_2213CDC(v26, v27);
      }
      v15 = *(_QWORD *)v12;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v17 = (System_Collections_ICollection_c **)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *(v17 - 1) != System_Collections_ICollection_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = v15 + 16LL * (*(_DWORD *)v17 + 1) + 312;
      }
      else
      {
LABEL_16:
        v18 = sub_224BC3C(v12, System_Collections_ICollection_TypeInfo, 1);
      }
      v19 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
      v20 = sub_2213B20(int___TypeInfo, v19);
      for ( i = 0; ; ++i )
      {
        v22 = *(_QWORD *)v14;
        v23 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v24 = (System_Collections_ICollection_c **)(*(_QWORD *)(v22 + 176) + 8LL);
          while ( *(v24 - 1) != System_Collections_ICollection_TypeInfo )
          {
            --v23;
            v24 += 2;
            if ( !v23 )
              goto LABEL_23;
          }
          v25 = v22 + 16LL * (*(_DWORD *)v24 + 1) + 312;
        }
        else
        {
LABEL_23:
          v25 = sub_224BC3C(v14, System_Collections_ICollection_TypeInfo, 1);
        }
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v14, *(_QWORD *)(v25 + 8));
        if ( (__int64)i >= (int)v26 )
          break;
        v28 = *(_QWORD *)v14;
        v29 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v30 - 1) != System_Collections_IList_TypeInfo )
          {
            --v29;
            v30 += 4;
            if ( !v29 )
              goto LABEL_30;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_30:
          v31 = sub_224BC3C(v14, System_Collections_IList_TypeInfo, 0);
        }
        v33 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v31)(
                                v14,
                                (unsigned int)i,
                                *(_QWORD *)(v31 + 8));
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v32);
        v34 = System_Convert__ToInt32(v33, 0);
        if ( !v20 )
          sub_2213CDC(v34, v35);
        if ( i >= *(unsigned int *)(v20 + 24) )
          sub_2213CE4(v34);
        v36 = v20 + 4 * i;
        *(_DWORD *)(v36 + 32) = v34;
      }
      if ( !v4 )
        goto LABEL_45;
      System_Collections_Generic_Dictionary_object__object___Add(
        v4,
        key,
        (Il2CppObject *)v20,
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__int____Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v39,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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

  if ( (byte_5972027 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3328/*"BonusKind2Id-"*/);
    sub_2213A60(&StringLiteral_6579/*"ExpUpDispType-"*/);
    sub_2213A60(&StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/);
    sub_2213A60(&StringLiteral_2610/*"AutoOrganizationMode-"*/);
    sub_2213A60(&StringLiteral_3327/*"BonusKind2-"*/);
    sub_2213A60(&StringLiteral_13476/*"SortFilterLongNew-"*/);
    sub_2213A60(&StringLiteral_11207/*"PriorityKind-"*/);
    sub_2213A60(&StringLiteral_7856/*"IconSizeKind-"*/);
    sub_2213A60(&StringLiteral_3326/*"BonusKind-"*/);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    sub_2213A60(&StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_2609/*"AutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_10471/*"OtherSortKind-"*/);
    sub_2213A60(&StringLiteral_13475/*"SortFilter2-"*/);
    sub_2213A60(&StringLiteral_13479/*"SortKind-"*/);
    sub_2213A60(&StringLiteral_6578/*"ExpUpDispKind-"*/);
    sub_2213A60(&StringLiteral_13474/*"SortFilter-"*/);
    sub_2213A60(&StringLiteral_13480/*"SortOrder-"*/);
    sub_2213A60(&StringLiteral_3329/*"BonusKindId-"*/);
    sub_2213A60(&StringLiteral_13749/*"SvtEventBonusFilterNew-"*/);
    byte_5972027 = 1;
  }
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_13479/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_13480/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_3326/*"BonusKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_3329/*"BonusKindId-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v6, 0);
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_3327/*"BonusKind2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
  v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_3328/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v8, 0);
  v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_13474/*"SortFilter-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
  v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_13475/*"SortFilter2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v10, 0);
  v11 = System_String__Concat_75651716((System_String_o *)StringLiteral_13476/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
  v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v12, 0);
  v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_7856/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
  v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_6578/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
  v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_6579/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
  v16 = System_String__Concat_75651716((System_String_o *)StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v16, 0);
  v17 = System_String__Concat_75651716((System_String_o *)StringLiteral_13749/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v17, 0);
  v18 = System_String__Concat_75651716((System_String_o *)StringLiteral_2609/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v18, 0);
  v19 = System_String__Concat_75651716((System_String_o *)StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v19, 0);
  v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_2610/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v20, 0);
  v21 = System_String__Concat_75651716((System_String_o *)StringLiteral_11207/*"PriorityKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v21, 0);
  v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_10471/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
  ListViewSort__InitLoad(this, v23);
}


void ListViewSort__Finalize(ListViewSort_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void ListViewSort__FirstLoginSave(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  int v3; // w8
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  CombineServantListViewManager_c *v11; // x0
  struct CombineServantListViewManager_StaticFields *static_fields; // x8
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  SvtEqCombineListViewManager_c *v23; // x0
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x19
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x19
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x19
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x19
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x19
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x19
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x1
  ServantCostumeListViewManager_c *v55; // x0
  System_String_o *v56; // x0
  __int64 v57; // x1
  ServantOperationListViewManager_c *v58; // x0
  struct ServantOperationListViewManager_StaticFields *v59; // x8
  System_String_o *v60; // x19
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x19
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  const MethodInfo *v66; // x0
  int v67; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5972033 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&ServantCostumeListViewManager_TypeInfo);
    sub_2213A60(&ServantOperationListViewManager_TypeInfo);
    sub_2213A60(&SvtEqCombineListViewManager_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    byte_5972033 = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  v3 = *(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1);
  v67 = 0;
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v1);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY = v2->static_fields->SORT_SAVE_KEY;
  v67 = 1;
  v5 = System_Int32__ToString((int32_t)&v67, 0);
  v6 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v5, 0);
  UnityEngine_PlayerPrefs__SetInt(v6, 1, 0);
  v67 = 2;
  v7 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v8 = System_Int32__ToString((int32_t)&v67, 0);
  v9 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v7, v8, 0);
  UnityEngine_PlayerPrefs__SetInt(v9, 1, 0);
  v11 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v10);
    v11 = CombineServantListViewManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  v67 = 1;
  v13 = static_fields->SORT_SAVE_KEY;
  v14 = System_Int32__ToString((int32_t)&v67, 0);
  v15 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v13, v14, 0);
  UnityEngine_PlayerPrefs__SetInt(v15, 1, 0);
  v67 = 2;
  v16 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = System_Int32__ToString((int32_t)&v67, 0);
  v18 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v16, v17, 0);
  UnityEngine_PlayerPrefs__SetInt(v18, 1, 0);
  v19 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 4;
  v20 = System_Int32__ToString((int32_t)&v67, 0);
  v21 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v19, v20, 0);
  UnityEngine_PlayerPrefs__SetInt(v21, 1, 0);
  v23 = SvtEqCombineListViewManager_TypeInfo;
  if ( !*(&SvtEqCombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEqCombineListViewManager_TypeInfo, v22);
    v23 = SvtEqCombineListViewManager_TypeInfo;
  }
  v24 = v23->static_fields->SORT_SAVE_KEY;
  v67 = 1;
  v25 = System_Int32__ToString((int32_t)&v67, 0);
  v26 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v24, v25, 0);
  UnityEngine_PlayerPrefs__SetInt(v26, 1, 0);
  v27 = SvtEqCombineListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 2;
  v28 = System_Int32__ToString((int32_t)&v67, 0);
  v29 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v27, v28, 0);
  UnityEngine_PlayerPrefs__SetInt(v29, 1, 0);
  v30 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 3;
  v31 = System_Int32__ToString((int32_t)&v67, 0);
  v32 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v30, v31, 0);
  UnityEngine_PlayerPrefs__SetInt(v32, 1, 0);
  v33 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 9;
  v34 = System_Int32__ToString((int32_t)&v67, 0);
  v35 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v33, v34, 0);
  UnityEngine_PlayerPrefs__SetInt(v35, 1, 0);
  v36 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 8;
  v37 = System_Int32__ToString((int32_t)&v67, 0);
  v38 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v36, v37, 0);
  UnityEngine_PlayerPrefs__SetInt(v38, 1, 0);
  v39 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 5;
  v40 = System_Int32__ToString((int32_t)&v67, 0);
  v41 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v39, v40, 0);
  UnityEngine_PlayerPrefs__SetInt(v41, 1, 0);
  v42 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 7;
  v43 = System_Int32__ToString((int32_t)&v67, 0);
  v44 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v42, v43, 0);
  UnityEngine_PlayerPrefs__SetInt(v44, 1, 0);
  v45 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 11;
  v46 = System_Int32__ToString((int32_t)&v67, 0);
  v47 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v45, v46, 0);
  UnityEngine_PlayerPrefs__SetInt(v47, 1, 0);
  v48 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 12;
  v49 = System_Int32__ToString((int32_t)&v67, 0);
  v50 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v48, v49, 0);
  UnityEngine_PlayerPrefs__SetInt(v50, 1, 0);
  v51 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 13;
  v52 = System_Int32__ToString((int32_t)&v67, 0);
  v53 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v51, v52, 0);
  UnityEngine_PlayerPrefs__SetInt(v53, 1, 0);
  v55 = ServantCostumeListViewManager_TypeInfo;
  if ( !*(&ServantCostumeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo, v54);
    v55 = ServantCostumeListViewManager_TypeInfo;
  }
  v56 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v55->static_fields->SORT_SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__SetInt(v56, 1, 0);
  v58 = ServantOperationListViewManager_TypeInfo;
  if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v57);
    v58 = ServantOperationListViewManager_TypeInfo;
  }
  v59 = v58->static_fields;
  v67 = 1;
  v60 = v59->SORT_SAVE_KEY;
  v61 = System_Int32__ToString((int32_t)&v67, 0);
  v62 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v60, v61, 0);
  UnityEngine_PlayerPrefs__SetInt(v62, 1, 0);
  v63 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v67 = 2;
  v64 = System_Int32__ToString((int32_t)&v67, 0);
  v65 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v63, v64, 0);
  UnityEngine_PlayerPrefs__SetInt(v65, 1, 0);
  ListViewSort__SaveDefaultSmartSort(v66);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v22; // x28
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x5
  System_Func_int__ListViewSort_BonusFilterInfo__o *v39; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  ListViewSort_BonusFilterInfo_array *v41; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v42; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  ListViewSort_BonusFilterInfo_array *v44; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v45; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  ListViewSort_BonusFilterInfo_array *v47; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v48; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  ListViewSort_BonusFilterInfo_array *v50; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  ListViewSort_BonusFilterInfo_array *v53; // x0
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  __int64 v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct ListViewSort_BonusFilterInfo_array *items; // x8
  _QWORD *v74; // x9
  int32_t size; // w10
  char *v76; // x8
  int32_t v77; // w9
  MissionNaviTransitionBoardItem_c *klass; // x10
  const MethodInfo_451F02C *v79; // x2
  System_Collections_Generic_List_T__o *v80; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v81; // x23
  System_Collections_Generic_List_T__o *v82; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v83; // x23
  __int64 v84; // x1
  ListViewSort___c_c *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x19
  struct ListViewSort___c_StaticFields *static_fields; // x8
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_9; // x20
  Il2CppObject *v89; // x21
  struct ListViewSort___c_StaticFields *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v97; // x0
  __int64 v98; // x1
  ListViewSort___c_c *v99; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v100; // x19
  struct ListViewSort___c_StaticFields *v101; // x9
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_10; // x20
  Il2CppObject *v103; // x21
  struct ListViewSort___c_StaticFields *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v111; // x0
  __int64 v112; // x1
  ListViewSort___c_c *v113; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v114; // x19
  struct ListViewSort___c_StaticFields *v115; // x9
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_11; // x20
  Il2CppObject *v117; // x21
  struct ListViewSort___c_StaticFields *v118; // x0
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  MissionNaviTransitionBoardItem_o v129; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_5972040 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___);
    sub_2213A60(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__);
    sub_2213A60(&ListViewSort___c__DisplayClass162_0_TypeInfo);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    sub_2213A60(&StringLiteral_12221/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/);
    byte_5972040 = 1;
  }
  memset(&v129, 0, 48);
  v13 = sub_2213CCC(ListViewSort___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_53;
  *(_QWORD *)(v13 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v22,
    (const MethodInfo_451E714 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v13 + 24) = v22;
  v23 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **)(v13 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)v22, v24, v25, v26, v27, v28, v29);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Master_object, v32, v33, v34, v35, v36, v37);
  if ( combineCampaignIds )
  {
    v39 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v39,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__,
      0);
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)combineCampaignIds,
                                                                 (System_Func_TSource__TResult__o *)v39,
                                                                 (const MethodInfo_388E560 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v41 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v40,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v41 = 0;
  }
  v129.fields.sortValue0B = (int64_t)v41;
  if ( campaignIds )
  {
    v42 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v42,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__,
      0);
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)campaignIds,
                                                                 (System_Func_TSource__TResult__o *)v42,
                                                                 (const MethodInfo_388E560 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v44 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v43,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v44 = 0;
  }
  v129.fields.sortValue0 = (int64_t)v44;
  if ( eventIds )
  {
    v45 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v45,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__,
      0);
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                                 (System_Func_TSource__TResult__o *)v45,
                                                                 (const MethodInfo_388E560 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v47 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v46,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v47 = 0;
  }
  *(_QWORD *)&v129.fields.sortIndex = v47;
  if ( finishEventIds )
  {
    v48 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v48,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__,
      0);
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)finishEventIds,
                                                                 (System_Func_TSource__TResult__o *)v48,
                                                                 (const MethodInfo_388E560 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v50 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v49,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v50 = 0;
  }
  *(_QWORD *)&v129.fields.selectNum = v50;
  if ( servantFilterIds )
  {
    v51 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v51,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__,
      0);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)servantFilterIds,
                                                                 (System_Func_TSource__TResult__o *)v51,
                                                                 (const MethodInfo_388E560 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v53 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v52,
            (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v53 = 0;
  }
  v129.monitor = v53;
  ListViewSort__BonusFilterGroupingCheck(
    (ListViewSort_BonusFilterInfo_array **)&v129.fields.sortValue0B,
    (ListViewSort_BonusFilterInfo_array **)&v129.fields.sortValue0,
    (ListViewSort_BonusFilterInfo_array **)&v129.fields.sortIndex,
    (ListViewSort_BonusFilterInfo_array **)&v129.fields,
    (ListViewSort_BonusFilterInfo_array **)&v129.monitor,
    v38);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v129.fields.sortValue0B,
    0,
    v54);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v129.fields.sortValue0,
    0,
    v55);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v129.fields.sortIndex,
    1,
    v56);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v129.fields.selectNum,
    0,
    v57);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v129.monitor,
    1,
    v58);
  if ( !isQuestStart && ListViewSort__get_IsWareHouseEquipList(this, v59) )
  {
    v129.klass = 0;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    v129.klass = (MissionNaviTransitionBoardItem_c *)LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/, 0);
    sub_2213A04(&v129, (int32_t)v129.klass, v61, v62, v63, v64, v65, v66);
    v14 = *v23;
    if ( *v23 )
    {
      items = v14->fields._items;
      v74 = Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__;
      ++v14->fields._version;
      if ( items )
      {
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v79 = *(const MethodInfo_451F02C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL);
          *(_OWORD *)&v129.fields.sortValue1 = 0x800000000uLL;
          v129.fields.sortValue1B = (int64_t)v129.klass;
          System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddWithResize(
            v14,
            (ListViewSort_BonusFilterInfo_o *)&v129.fields.sortValue1,
            v79);
        }
        else
        {
          v76 = (char *)items + 24 * size;
          v77 = size + 1;
          klass = v129.klass;
          v14->fields._size = v77;
          *((_QWORD *)v76 + 6) = klass;
          *((_OWORD *)v76 + 2) = 0x800000000uLL;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 48), 0, v67, v68, v69, v70, v71, v72);
        }
        goto LABEL_30;
      }
    }
LABEL_53:
    sub_2213CDC(v14, v15);
  }
LABEL_30:
  v80 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v81 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v81,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v80,
          (System_Func_T__bool__o *)v81,
          (const MethodInfo_38102B8 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v82 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v83 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v83,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v82,
          (System_Func_T__bool__o *)v83,
          (const MethodInfo_38102B8 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind2 = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v85 = ListViewSort___c_TypeInfo;
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)*v23;
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v84);
    v85 = ListViewSort___c_TypeInfo;
  }
  static_fields = v85->static_fields;
  _9__162_9 = static_fields->__9__162_9;
  if ( !_9__162_9 )
  {
    if ( !*(&v85->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v85, v84);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)static_fields->__9;
    _9__162_9 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_9,
      v89,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__,
      0);
    v90 = ListViewSort___c_TypeInfo->static_fields;
    v90->__9__162_9 = _9__162_9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->__9__162_9, (int32_t)_9__162_9, v91, v92, v93, v94, v95, v96);
  }
  v97 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
          v86,
          (System_Func_TSource__TKey__o *)_9__162_9,
          (const MethodInfo_38893F8 *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
  v99 = ListViewSort___c_TypeInfo;
  v100 = v97;
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v98);
    v99 = ListViewSort___c_TypeInfo;
  }
  v101 = v99->static_fields;
  _9__162_10 = v101->__9__162_10;
  if ( !_9__162_10 )
  {
    if ( !*(&v99->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v99, v98);
      v101 = ListViewSort___c_TypeInfo->static_fields;
    }
    v103 = (Il2CppObject *)v101->__9;
    _9__162_10 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_10,
      v103,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__,
      0);
    v104 = ListViewSort___c_TypeInfo->static_fields;
    v104->__9__162_10 = _9__162_10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v104->__9__162_10,
      (int32_t)_9__162_10,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
  v111 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
           v100,
           (System_Func_TSource__TKey__o *)_9__162_10,
           (const MethodInfo_389AE28 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  v113 = ListViewSort___c_TypeInfo;
  v114 = v111;
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v112);
    v113 = ListViewSort___c_TypeInfo;
  }
  v115 = v113->static_fields;
  _9__162_11 = v115->__9__162_11;
  if ( !_9__162_11 )
  {
    if ( !*(&v113->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v113, v112);
      v115 = ListViewSort___c_TypeInfo->static_fields;
    }
    v117 = (Il2CppObject *)v115->__9;
    _9__162_11 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_11,
      v117,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__,
      0);
    v118 = ListViewSort___c_TypeInfo->static_fields;
    v118->__9__162_11 = _9__162_11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v118->__9__162_11,
      (int32_t)_9__162_11,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
  }
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
                                                                v114,
                                                                (System_Func_TSource__TKey__o *)_9__162_11,
                                                                (const MethodInfo_389AE28 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  return System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
           v125,
           (const MethodInfo_389BF70 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
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
  ListViewSort_BonusFilterInfo_array *v11; // x2
  bool v12; // w3
  int32_t v13; // w0
  __int128 v14; // q0
  ListViewSort_BonusFilterInfo_o v15; // [xsp+8h] [xbp-68h] BYREF
  ListViewSort_BonusFilterInfo_o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5972043 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_5972043 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
    return this->fields.bonusFilterInfoDefault.fields.buttonText;
  if ( isQuestStart )
  {
    bonusKind = this->fields.bonusKind;
    bonusKindId = this->fields.bonusKindId;
    v11 = bonusFilterInfos;
    v12 = 1;
  }
  else
  {
    bonusKind = this->fields.bonusKind2;
    bonusKindId = this->fields.bonusKind2Id;
    v11 = bonusFilterInfos;
    v12 = 0;
  }
  v13 = ListViewSort__BonusFilterKindIndex(bonusKindId, bonusKind, v11, v12, 0, v7);
  v14 = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
  v16.fields.buttonText = this->fields.bonusFilterInfoDefault.fields.buttonText;
  *(_OWORD *)&v16.fields.priority = v14;
  BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
    &v15,
    bonusFilterInfos,
    v13,
    &v16,
    (const MethodInfo_3814F38 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
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
  __int64 v8; // x0
  il2cpp_array_size_t max_length; // x8

  if ( kind != 7 )
  {
    if ( kind == 4 )
    {
      if ( !eventIdList || !eventIdList->max_length )
        goto LABEL_19;
    }
    else if ( kind != 3
           || id != campaignId
           || !campaignId
           || !campaignServantIdList
           || !campaignServantIdList->max_length )
    {
LABEL_19:
      LODWORD(v8) = -1;
      return v8;
    }
    LODWORD(v8) = 0;
    return v8;
  }
  if ( !servantFilterIdList )
    goto LABEL_19;
  max_length = servantFilterIdList->max_length;
  if ( !max_length || (int)max_length < 1 )
    goto LABEL_19;
  v8 = 0;
  while ( servantFilterIdList->m_Items[v8] != id )
  {
    if ( (_DWORD)max_length == (_DWORD)++v8 )
      goto LABEL_19;
  }
  return v8;
}


int32_t ListViewSort__GetExpUpDispKind(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.expUpDispKind;
}


int32_t ListViewSort__GetExpUpDispType(ListViewSort_o *this, const MethodInfo *method)
{
  return this->fields.expUpDispType;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetFilter(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_2213CE4(this);
  return isFilterList->m_Items[kind];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetFilterKindText(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  int v4; // w8
  __int64 *v5; // x8
  System_String_o *result; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_597204F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12312/*"SERVANT_SORT_FILTER_NP_QUICK"*/);
    sub_2213A60(&StringLiteral_12276/*"SERVANT_SORT_FILTER_KIND_2"*/);
    sub_2213A60(&StringLiteral_12357/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/);
    sub_2213A60(&StringLiteral_12268/*"SERVANT_SORT_FILTER_CHOICE"*/);
    sub_2213A60(&StringLiteral_12306/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/);
    sub_2213A60(&StringLiteral_12327/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/);
    sub_2213A60(&StringLiteral_12293/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/);
    sub_2213A60(&StringLiteral_12356/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/);
    sub_2213A60(&StringLiteral_12334/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/);
    sub_2213A60(&StringLiteral_12360/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/);
    sub_2213A60(&StringLiteral_12281/*"SERVANT_SORT_FILTER_KIND_6"*/);
    sub_2213A60(&StringLiteral_12311/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/);
    sub_2213A60(&StringLiteral_12272/*"SERVANT_SORT_FILTER_HP_SECOND"*/);
    sub_2213A60(&StringLiteral_12296/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/);
    sub_2213A60(&StringLiteral_12313/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/);
    sub_2213A60(&StringLiteral_12345/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/);
    sub_2213A60(&StringLiteral_12361/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/);
    sub_2213A60(&StringLiteral_12285/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/);
    sub_2213A60(&StringLiteral_12244/*"SERVANT_SORT_FILTER_ADD_PARAM_1"*/);
    sub_2213A60(&StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_2213A60(&StringLiteral_12358/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/);
    sub_2213A60(&StringLiteral_12282/*"SERVANT_SORT_FILTER_KIND_7"*/);
    sub_2213A60(&StringLiteral_12278/*"SERVANT_SORT_FILTER_KIND_3"*/);
    sub_2213A60(&StringLiteral_12271/*"SERVANT_SORT_FILTER_HP_FIRST"*/);
    sub_2213A60(&StringLiteral_12310/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/);
    sub_2213A60(&StringLiteral_12249/*"SERVANT_SORT_FILTER_CAN_SELECT"*/);
    sub_2213A60(&StringLiteral_12326/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/);
    sub_2213A60(&StringLiteral_12247/*"SERVANT_SORT_FILTER_ATK_FIRST"*/);
    sub_2213A60(&StringLiteral_12295/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/);
    sub_2213A60(&StringLiteral_12304/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/);
    sub_2213A60(&StringLiteral_12347/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/);
    sub_2213A60(&StringLiteral_12308/*"SERVANT_SORT_FILTER_NP_ARTS"*/);
    sub_2213A60(&StringLiteral_12321/*"SERVANT_SORT_FILTER_SAME_CLASS"*/);
    sub_2213A60(&StringLiteral_12283/*"SERVANT_SORT_FILTER_KIND_8"*/);
    sub_2213A60(&StringLiteral_12344/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/);
    sub_2213A60(&StringLiteral_12245/*"SERVANT_SORT_FILTER_ADD_PARAM_2"*/);
    sub_2213A60(&StringLiteral_12363/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/);
    sub_2213A60(&StringLiteral_12298/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/);
    sub_2213A60(&StringLiteral_12322/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/);
    sub_2213A60(&StringLiteral_12338/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/);
    sub_2213A60(&StringLiteral_12343/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/);
    sub_2213A60(&StringLiteral_12324/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/);
    sub_2213A60(&StringLiteral_12288/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/);
    sub_2213A60(&StringLiteral_12325/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/);
    sub_2213A60(&StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_2213A60(&StringLiteral_12274/*"SERVANT_SORT_FILTER_KIND_10"*/);
    sub_2213A60(&StringLiteral_12332/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/);
    sub_2213A60(&StringLiteral_12273/*"SERVANT_SORT_FILTER_KIND_1"*/);
    sub_2213A60(&StringLiteral_12297/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/);
    sub_2213A60(&StringLiteral_12359/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/);
    sub_2213A60(&StringLiteral_12279/*"SERVANT_SORT_FILTER_KIND_4"*/);
    sub_2213A60(&StringLiteral_12294/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/);
    sub_2213A60(&StringLiteral_12270/*"SERVANT_SORT_FILTER_HPMAX"*/);
    sub_2213A60(&StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_2213A60(&StringLiteral_12336/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/);
    sub_2213A60(&StringLiteral_12300/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/);
    sub_2213A60(&StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_2213A60(&StringLiteral_12329/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/);
    sub_2213A60(&StringLiteral_12335/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/);
    sub_2213A60(&StringLiteral_12323/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/);
    sub_2213A60(&StringLiteral_12286/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/);
    sub_2213A60(&StringLiteral_12340/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/);
    sub_2213A60(&StringLiteral_12355/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    sub_2213A60(&StringLiteral_12307/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/);
    sub_2213A60(&StringLiteral_12248/*"SERVANT_SORT_FILTER_ATK_SECOND"*/);
    sub_2213A60(&StringLiteral_12362/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/);
    sub_2213A60(&StringLiteral_12292/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/);
    sub_2213A60(&StringLiteral_12350/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/);
    sub_2213A60(&StringLiteral_12309/*"SERVANT_SORT_FILTER_NP_BUSTER"*/);
    sub_2213A60(&StringLiteral_12287/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/);
    sub_2213A60(&StringLiteral_12346/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/);
    sub_2213A60(&StringLiteral_12342/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/);
    sub_2213A60(&StringLiteral_12337/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/);
    sub_2213A60(&StringLiteral_12341/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/);
    sub_2213A60(&StringLiteral_12290/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/);
    sub_2213A60(&StringLiteral_12330/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/);
    sub_2213A60(&StringLiteral_12284/*"SERVANT_SORT_FILTER_KIND_9"*/);
    sub_2213A60(&StringLiteral_12333/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/);
    sub_2213A60(&StringLiteral_12328/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/);
    sub_2213A60(&StringLiteral_12229/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/);
    sub_2213A60(&StringLiteral_12269/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/);
    sub_2213A60(&StringLiteral_12331/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/);
    sub_2213A60(&StringLiteral_12349/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/);
    sub_2213A60(&StringLiteral_12280/*"SERVANT_SORT_FILTER_KIND_5"*/);
    sub_2213A60(&StringLiteral_12339/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/);
    sub_2213A60(&StringLiteral_12230/*"SERVANT_SORT_COSTUME_OPEN"*/);
    sub_2213A60(&StringLiteral_12301/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/);
    sub_2213A60(&StringLiteral_12289/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/);
    sub_2213A60(&StringLiteral_12246/*"SERVANT_SORT_FILTER_ATKMAX"*/);
    sub_2213A60(&StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_2213A60(&StringLiteral_12299/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/);
    sub_2213A60(&StringLiteral_12305/*"SERVANT_SORT_FILTER_LV_MAX"*/);
    sub_2213A60(&StringLiteral_12348/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/);
    byte_597204F = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  switch ( kind )
  {
    case 0:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12273/*"SERVANT_SORT_FILTER_KIND_1"*/;
      goto LABEL_283;
    case 1:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12276/*"SERVANT_SORT_FILTER_KIND_2"*/;
      goto LABEL_283;
    case 2:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12278/*"SERVANT_SORT_FILTER_KIND_3"*/;
      goto LABEL_283;
    case 3:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12279/*"SERVANT_SORT_FILTER_KIND_4"*/;
      goto LABEL_283;
    case 4:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12280/*"SERVANT_SORT_FILTER_KIND_5"*/;
      goto LABEL_283;
    case 5:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12281/*"SERVANT_SORT_FILTER_KIND_6"*/;
      goto LABEL_283;
    case 6:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12282/*"SERVANT_SORT_FILTER_KIND_7"*/;
      goto LABEL_283;
    case 7:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12283/*"SERVANT_SORT_FILTER_KIND_8"*/;
      goto LABEL_283;
    case 8:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12284/*"SERVANT_SORT_FILTER_KIND_9"*/;
      goto LABEL_283;
    case 9:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12274/*"SERVANT_SORT_FILTER_KIND_10"*/;
      goto LABEL_283;
    case 10:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12301/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/;
      goto LABEL_283;
    case 11:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12299/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/;
      goto LABEL_283;
    case 12:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12300/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/;
      goto LABEL_283;
    case 21:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12306/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/;
      goto LABEL_283;
    case 22:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12271/*"SERVANT_SORT_FILTER_HP_FIRST"*/;
      goto LABEL_283;
    case 23:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12272/*"SERVANT_SORT_FILTER_HP_SECOND"*/;
      goto LABEL_283;
    case 24:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12270/*"SERVANT_SORT_FILTER_HPMAX"*/;
      goto LABEL_283;
    case 25:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12247/*"SERVANT_SORT_FILTER_ATK_FIRST"*/;
      goto LABEL_283;
    case 26:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12248/*"SERVANT_SORT_FILTER_ATK_SECOND"*/;
      goto LABEL_283;
    case 27:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12246/*"SERVANT_SORT_FILTER_ATKMAX"*/;
      goto LABEL_283;
    case 28:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12321/*"SERVANT_SORT_FILTER_SAME_CLASS"*/;
      goto LABEL_283;
    case 29:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12249/*"SERVANT_SORT_FILTER_CAN_SELECT"*/;
      goto LABEL_283;
    case 30:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12269/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/;
      goto LABEL_283;
    case 31:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12307/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/;
      goto LABEL_283;
    case 32:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12229/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/;
      goto LABEL_283;
    case 33:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12230/*"SERVANT_SORT_COSTUME_OPEN"*/;
      goto LABEL_283;
    case 34:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
      goto LABEL_283;
    case 35:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/;
      goto LABEL_283;
    case 36:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/;
      goto LABEL_283;
    case 37:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/;
      goto LABEL_283;
    case 38:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/;
      goto LABEL_283;
    case 39:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12268/*"SERVANT_SORT_FILTER_CHOICE"*/;
      goto LABEL_283;
    case 42:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12309/*"SERVANT_SORT_FILTER_NP_BUSTER"*/;
      goto LABEL_283;
    case 43:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12308/*"SERVANT_SORT_FILTER_NP_ARTS"*/;
      goto LABEL_283;
    case 44:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12312/*"SERVANT_SORT_FILTER_NP_QUICK"*/;
      goto LABEL_283;
    case 45:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12311/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/;
      goto LABEL_283;
    case 46:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12310/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/;
      goto LABEL_283;
    case 47:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12313/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/;
      goto LABEL_283;
    case 48:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12304/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/;
      goto LABEL_283;
    case 49:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12298/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/;
      goto LABEL_283;
    case 50:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12330/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/;
      goto LABEL_283;
    case 51:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12329/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/;
      goto LABEL_283;
    case 52:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12350/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/;
      goto LABEL_283;
    case 53:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12355/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/;
      goto LABEL_283;
    case 54:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12349/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/;
      goto LABEL_283;
    case 55:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12347/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/;
      goto LABEL_283;
    case 56:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12343/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/;
      goto LABEL_283;
    case 57:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12292/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/;
      goto LABEL_283;
    case 58:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12293/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/;
      goto LABEL_283;
    case 59:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12286/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/;
      goto LABEL_283;
    case 60:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12287/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/;
      goto LABEL_283;
    case 61:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12285/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/;
      goto LABEL_283;
    case 62:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12288/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/;
      goto LABEL_283;
    case 63:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12289/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/;
      goto LABEL_283;
    case 64:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12290/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/;
      goto LABEL_283;
    case 65:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12297/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/;
      goto LABEL_283;
    case 66:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12296/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/;
      goto LABEL_283;
    case 67:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12294/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/;
      goto LABEL_283;
    case 68:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12295/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/;
      goto LABEL_283;
    case 69:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12356/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/;
      goto LABEL_283;
    case 70:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12357/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/;
      goto LABEL_283;
    case 71:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12358/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/;
      goto LABEL_283;
    case 72:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12348/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/;
      goto LABEL_283;
    case 73:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12342/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/;
      goto LABEL_283;
    case 74:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12345/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/;
      goto LABEL_283;
    case 75:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12346/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/;
      goto LABEL_283;
    case 76:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12344/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/;
      goto LABEL_283;
    case 77:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12339/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/;
      goto LABEL_283;
    case 78:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12337/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/;
      goto LABEL_283;
    case 79:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12336/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/;
      goto LABEL_283;
    case 80:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12341/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/;
      goto LABEL_283;
    case 81:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12338/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/;
      goto LABEL_283;
    case 82:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12335/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/;
      goto LABEL_283;
    case 83:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12340/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/;
      goto LABEL_283;
    case 84:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12334/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/;
      goto LABEL_283;
    case 85:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12331/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/;
      goto LABEL_283;
    case 86:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12332/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/;
      goto LABEL_283;
    case 87:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12333/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/;
      goto LABEL_283;
    case 88:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12327/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/;
      goto LABEL_283;
    case 89:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12326/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/;
      goto LABEL_283;
    case 90:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12323/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/;
      goto LABEL_283;
    case 91:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12324/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/;
      goto LABEL_283;
    case 92:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12325/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/;
      goto LABEL_283;
    case 93:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12322/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/;
      goto LABEL_283;
    case 94:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12328/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/;
      goto LABEL_283;
    case 95:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12361/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/;
      goto LABEL_283;
    case 96:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12362/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/;
      goto LABEL_283;
    case 97:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12360/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/;
      goto LABEL_283;
    case 98:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12363/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/;
      goto LABEL_283;
    case 99:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12359/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/;
      goto LABEL_283;
    case 102:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12244/*"SERVANT_SORT_FILTER_ADD_PARAM_1"*/;
      goto LABEL_283;
    case 103:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12245/*"SERVANT_SORT_FILTER_ADD_PARAM_2"*/;
      goto LABEL_283;
    case 104:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12305/*"SERVANT_SORT_FILTER_LV_MAX"*/;
LABEL_283:
      result = LocalizationManager__Get((System_String_o *)*v5, 0);
      break;
    default:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      if ( !byte_596B976 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        byte_596B976 = 1;
      }
      v7 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v7 = LocalizationManager_TypeInfo;
      }
      result = v7->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *ListViewSort__GetFilterListData(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *saveKey; // x1
  System_String_o *v4; // x20
  System_String_o *v6; // x0
  int32_t Int; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597202D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13476/*"SortFilterLongNew-"*/);
    sub_2213A60(&StringLiteral_13474/*"SortFilter-"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597202D = 1;
  }
  saveKey = this->fields.saveKey;
  Int = 0;
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_13476/*"SortFilterLongNew-"*/, saveKey, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v4, 0) )
    return UnityEngine_PlayerPrefs__GetString(v4, (System_String_o *)StringLiteral_1/*""*/, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_13474/*"SortFilter-"*/, this->fields.saveKey, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v6, 0, 0);
  return System_Int32__ToString((int32_t)&Int, 0);
}


System_String_o *ListViewSort__GetFilterListDataText(ListViewSort_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 i; // x11

  if ( (byte_5972035 & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_String_Join_long___);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_5972035 = 1;
  }
  v3 = sub_2213B20(long___TypeInfo, 2);
  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
LABEL_13:
    sub_2213CDC(v3, v4);
  v4 = v3;
  for ( i = 0; i != 105; ++i )
  {
    if ( i >= LODWORD(isFilterList->max_length) )
LABEL_12:
      sub_2213CE4(v3);
    if ( ((i & 0x7E) == 40) != isFilterList->m_Items[i] )
    {
      if ( !v3 )
        goto LABEL_13;
      if ( (unsigned int)i >> 6 >= *(_DWORD *)(v3 + 24) )
        goto LABEL_12;
      *(_QWORD *)(v3 + 32 + 8LL * ((unsigned int)i >> 6)) |= 1LL << i;
    }
  }
  return System_String__Join_long_(
           (System_String_o *)StringLiteral_869/*","*/,
           (System_Collections_Generic_IEnumerable_T__o *)v3,
           (const MethodInfo_398ABD0 *)Method_System_String_Join_long___);
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetFilter_50882236(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_2213CE4(this);
  return isPresentBoxFilterList->m_Items[kind];
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetFilter_50882284(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_2213CE4(this);
  return isPresentBoxRarityFilterList->m_Items[kind];
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetFilter_50882528(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
  return isAutoOrganizationFilterList->m_Items[kind];
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetFilter_50882576(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetOtherUserPriorityKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int v4; // w8
  __int64 *v5; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_5972055 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10144/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/);
    sub_2213A60(&StringLiteral_10146/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/);
    sub_2213A60(&StringLiteral_10145/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/);
    sub_2213A60(&StringLiteral_10143/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/);
    sub_2213A60(&StringLiteral_10140/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/);
    sub_2213A60(&StringLiteral_10142/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/);
    sub_2213A60(&StringLiteral_10141/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/);
    byte_5972055 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( kind <= 2 )
  {
    switch ( kind )
    {
      case 0:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10145/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      case 1:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10143/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      case 2:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10144/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
  }
  else
  {
    if ( kind <= 4 )
    {
      if ( kind == 3 )
      {
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10142/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/;
      }
      else
      {
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10140/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
    if ( kind == 5 )
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10146/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
    if ( kind == 6 )
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10141/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
  }
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v6 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    v6 = LocalizationManager_TypeInfo;
  }
  return v6->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetPresentBoxFilterKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int v4; // w8
  __int64 *v5; // x8
  LocalizationManager_c *v6; // x0
  System_String_o *result; // x0

  if ( (byte_5972050 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10843/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_10845/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/);
    sub_2213A60(&StringLiteral_10862/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_10852/*"PRESENT_BOX_FILTER_ITEM_STONE"*/);
    sub_2213A60(&StringLiteral_10861/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/);
    sub_2213A60(&StringLiteral_10859/*"PRESENT_BOX_FILTER_SERVANT"*/);
    sub_2213A60(&StringLiteral_10850/*"PRESENT_BOX_FILTER_ITEM_MANA"*/);
    sub_2213A60(&StringLiteral_10846/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/);
    sub_2213A60(&StringLiteral_10860/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_10849/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/);
    sub_2213A60(&StringLiteral_10863/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/);
    sub_2213A60(&StringLiteral_10851/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/);
    sub_2213A60(&StringLiteral_10847/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/);
    sub_2213A60(&StringLiteral_10848/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/);
    sub_2213A60(&StringLiteral_10853/*"PRESENT_BOX_FILTER_OTHER"*/);
    byte_5972050 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  switch ( kind )
  {
    case 0:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10859/*"PRESENT_BOX_FILTER_SERVANT"*/;
      goto LABEL_56;
    case 1:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10860/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 2:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10863/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/;
      goto LABEL_56;
    case 3:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10861/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/;
      goto LABEL_56;
    case 4:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10862/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 5:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10843/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/;
      goto LABEL_56;
    case 6:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10845/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/;
      goto LABEL_56;
    case 7:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10849/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/;
      goto LABEL_56;
    case 8:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10847/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/;
      goto LABEL_56;
    case 9:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10851/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/;
      goto LABEL_56;
    case 10:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10852/*"PRESENT_BOX_FILTER_ITEM_STONE"*/;
      goto LABEL_56;
    case 11:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10850/*"PRESENT_BOX_FILTER_ITEM_MANA"*/;
      goto LABEL_56;
    case 12:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10846/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/;
      goto LABEL_56;
    case 13:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10848/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/;
      goto LABEL_56;
    case 14:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10853/*"PRESENT_BOX_FILTER_OTHER"*/;
LABEL_56:
      result = LocalizationManager__Get((System_String_o *)*v5, 0);
      break;
    default:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      if ( !byte_596B976 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        byte_596B976 = 1;
      }
      v6 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v6 = LocalizationManager_TypeInfo;
      }
      result = v6->static_fields->unknownNameText;
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetPresentBoxRarityFilterKindText(
        ListViewSort_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int v4; // w8
  __int64 *v5; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_5972051 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10855/*"PRESENT_BOX_FILTER_RARITY_2"*/);
    sub_2213A60(&StringLiteral_10854/*"PRESENT_BOX_FILTER_RARITY_1"*/);
    sub_2213A60(&StringLiteral_10856/*"PRESENT_BOX_FILTER_RARITY_3"*/);
    sub_2213A60(&StringLiteral_10858/*"PRESENT_BOX_FILTER_RARITY_5"*/);
    sub_2213A60(&StringLiteral_10857/*"PRESENT_BOX_FILTER_RARITY_4"*/);
    byte_5972051 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( kind <= 1 )
  {
    if ( !kind )
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10854/*"PRESENT_BOX_FILTER_RARITY_1"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
    if ( kind == 1 )
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_10855/*"PRESENT_BOX_FILTER_RARITY_2"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
  }
  else
  {
    switch ( kind )
    {
      case 2:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10856/*"PRESENT_BOX_FILTER_RARITY_3"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      case 3:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10857/*"PRESENT_BOX_FILTER_RARITY_4"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      case 4:
        if ( !v4 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v5 = &StringLiteral_10858/*"PRESENT_BOX_FILTER_RARITY_5"*/;
        return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
  }
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
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

  if ( (byte_5972056 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18263/*"btn_list_extremely_small"*/);
    sub_2213A60(&StringLiteral_18264/*"btn_list_normal"*/);
    sub_2213A60(&StringLiteral_18265/*"btn_list_small"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972056 = 1;
  }
  if ( (unsigned int)scaleKind > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_52CA898 + (unsigned int)scaleKind);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetSortKindText(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  int v4; // w8
  __int64 *v5; // x8
  LocalizationManager_c *v6; // x0
  System_String_o *result; // x0

  if ( (byte_597204E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12394/*"SERVANT_SORT_KIND_USE_STATUS"*/);
    sub_2213A60(&StringLiteral_12390/*"SERVANT_SORT_KIND_RARITY"*/);
    sub_2213A60(&StringLiteral_12367/*"SERVANT_SORT_KIND_AMOUNT"*/);
    sub_2213A60(&StringLiteral_12385/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/);
    sub_2213A60(&StringLiteral_12377/*"SERVANT_SORT_KIND_FRIENDSHIP"*/);
    sub_2213A60(&StringLiteral_12383/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/);
    sub_2213A60(&StringLiteral_12368/*"SERVANT_SORT_KIND_ATK"*/);
    sub_2213A60(&StringLiteral_12374/*"SERVANT_SORT_KIND_CREATE"*/);
    sub_2213A60(&StringLiteral_12380/*"SERVANT_SORT_KIND_HP_ADJUST"*/);
    sub_2213A60(&StringLiteral_12386/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/);
    sub_2213A60(&StringLiteral_12372/*"SERVANT_SORT_KIND_COST"*/);
    sub_2213A60(&StringLiteral_12369/*"SERVANT_SORT_KIND_ATK_ADJUST"*/);
    sub_2213A60(&StringLiteral_12393/*"SERVANT_SORT_KIND_USER_LEVEL"*/);
    sub_2213A60(&StringLiteral_12381/*"SERVANT_SORT_KIND_ID"*/);
    sub_2213A60(&StringLiteral_12379/*"SERVANT_SORT_KIND_HP"*/);
    sub_2213A60(&StringLiteral_12389/*"SERVANT_SORT_KIND_PARTY"*/);
    sub_2213A60(&StringLiteral_12388/*"SERVANT_SORT_KIND_NP_LEVEL"*/);
    sub_2213A60(&StringLiteral_12373/*"SERVANT_SORT_KIND_COSTUME"*/);
    sub_2213A60(&StringLiteral_12391/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/);
    sub_2213A60(&StringLiteral_12375/*"SERVANT_SORT_KIND_DISP_NO"*/);
    sub_2213A60(&StringLiteral_12392/*"SERVANT_SORT_KIND_SERVANT_NAME"*/);
    sub_2213A60(&StringLiteral_12370/*"SERVANT_SORT_KIND_BUDDY_POINT"*/);
    sub_2213A60(&StringLiteral_12384/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/);
    sub_2213A60(&StringLiteral_12382/*"SERVANT_SORT_KIND_LEVEL"*/);
    sub_2213A60(&StringLiteral_12376/*"SERVANT_SORT_KIND_EVENT_ORDER"*/);
    sub_2213A60(&StringLiteral_12378/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/);
    sub_2213A60(&StringLiteral_12371/*"SERVANT_SORT_KIND_CLASS"*/);
    sub_2213A60(&StringLiteral_12387/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/);
    byte_597204E = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  switch ( kind )
  {
    case 0:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12389/*"SERVANT_SORT_KIND_PARTY"*/;
      goto LABEL_95;
    case 1:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12374/*"SERVANT_SORT_KIND_CREATE"*/;
      goto LABEL_95;
    case 2:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12390/*"SERVANT_SORT_KIND_RARITY"*/;
      goto LABEL_95;
    case 3:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12382/*"SERVANT_SORT_KIND_LEVEL"*/;
      goto LABEL_95;
    case 4:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12388/*"SERVANT_SORT_KIND_NP_LEVEL"*/;
      goto LABEL_95;
    case 5:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12379/*"SERVANT_SORT_KIND_HP"*/;
      goto LABEL_95;
    case 6:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12368/*"SERVANT_SORT_KIND_ATK"*/;
      goto LABEL_95;
    case 7:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12372/*"SERVANT_SORT_KIND_COST"*/;
      goto LABEL_95;
    case 8:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12371/*"SERVANT_SORT_KIND_CLASS"*/;
      goto LABEL_95;
    case 9:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12383/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/;
      goto LABEL_95;
    case 10:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12377/*"SERVANT_SORT_KIND_FRIENDSHIP"*/;
      goto LABEL_95;
    case 11:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12385/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/;
      goto LABEL_95;
    case 12:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12393/*"SERVANT_SORT_KIND_USER_LEVEL"*/;
      goto LABEL_95;
    case 13:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12381/*"SERVANT_SORT_KIND_ID"*/;
      goto LABEL_95;
    case 14:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12367/*"SERVANT_SORT_KIND_AMOUNT"*/;
      goto LABEL_95;
    case 15:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12380/*"SERVANT_SORT_KIND_HP_ADJUST"*/;
      goto LABEL_95;
    case 16:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12369/*"SERVANT_SORT_KIND_ATK_ADJUST"*/;
      goto LABEL_95;
    case 19:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12373/*"SERVANT_SORT_KIND_COSTUME"*/;
      goto LABEL_95;
    case 20:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12378/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 21:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12386/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 22:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12387/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/;
      goto LABEL_95;
    case 23:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12384/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/;
      goto LABEL_95;
    case 24:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12376/*"SERVANT_SORT_KIND_EVENT_ORDER"*/;
      goto LABEL_95;
    case 25:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12391/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/;
      goto LABEL_95;
    case 26:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12392/*"SERVANT_SORT_KIND_SERVANT_NAME"*/;
      goto LABEL_95;
    case 27:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12375/*"SERVANT_SORT_KIND_DISP_NO"*/;
      goto LABEL_95;
    case 28:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12370/*"SERVANT_SORT_KIND_BUDDY_POINT"*/;
      goto LABEL_95;
    case 29:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v5 = &StringLiteral_12394/*"SERVANT_SORT_KIND_USE_STATUS"*/;
LABEL_95:
      result = LocalizationManager__Get((System_String_o *)*v5, 0);
      break;
    default:
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      if ( !byte_596B976 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        byte_596B976 = 1;
      }
      v6 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v6 = LocalizationManager_TypeInfo;
      }
      result = v6->static_fields->unknownNameText;
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetSvtEqFilter2Text(ListViewSort_o *this, int32_t type, const MethodInfo *method)
{
  int32_t v4; // w19
  int32_t filter2Kind; // t1
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19

  if ( (byte_5972053 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12238/*"SERVANT_SORT_FILTER2_EQUIP_"*/);
    sub_2213A60(&StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    byte_5972053 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
    v8 = (System_String_o *)StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_12238/*"SERVANT_SORT_FILTER2_EQUIP_"*/, v6, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  }
  return LocalizationManager__Get(v8, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ListViewSort__GetSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0

  if ( (byte_5972045 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_5972045 = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         isSvtEquipEffectFilterDic,
         categoryId,
         (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( isSvtEquipEffectFilterDic )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               isSvtEquipEffectFilterDic,
               categoryId,
               (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE;
LABEL_8:
    sub_2213CDC(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
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

  if ( (byte_5972047 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_5972047 = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                                     eventId,
                                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_8:
    sub_2213CDC(svtEventBonusFilterDic, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetSvtFilter2Text(ListViewSort_o *this, int32_t type, const MethodInfo *method)
{
  int32_t v5; // w19
  int32_t filter2Kind; // t1
  System_String_o *v7; // x0
  __int64 *v8; // x8
  System_String_o *v9; // x19
  __int64 v10; // x1

  if ( (byte_5972052 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12241/*"SERVANT_SORT_FILTER2_NP_"*/);
    sub_2213A60(&StringLiteral_13290/*"Servant_SORT_FILTER2_EXCEED_"*/);
    sub_2213A60(&StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_2213A60(&StringLiteral_12243/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/);
    sub_2213A60(&StringLiteral_12239/*"SERVANT_SORT_FILTER2_EXCEED_"*/);
    sub_2213A60(&StringLiteral_12240/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/);
    byte_5972052 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v5 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
    goto LABEL_12;
  if ( type <= 3 )
  {
    if ( type == 2 )
    {
      v7 = System_Int32__ToString(v5, 0);
      v8 = &StringLiteral_12240/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/;
    }
    else
    {
      if ( type != 3 )
        goto LABEL_12;
      v7 = System_Int32__ToString(v5, 0);
      v8 = &StringLiteral_12243/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/;
    }
LABEL_18:
    v9 = System_String__Concat_75651716((System_String_o *)*v8, v7, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    return LocalizationManager__Get(v9, 0);
  }
  switch ( type )
  {
    case 4:
      v7 = System_Int32__ToString(v5, 0);
      v8 = &StringLiteral_12241/*"SERVANT_SORT_FILTER2_NP_"*/;
      goto LABEL_18;
    case 6:
      v7 = System_Int32__ToString(v5, 0);
      v8 = &StringLiteral_12239/*"SERVANT_SORT_FILTER2_EXCEED_"*/;
      goto LABEL_18;
    case 8:
      v7 = System_Int32__ToString(v5, 0);
      v8 = &StringLiteral_13290/*"Servant_SORT_FILTER2_EXCEED_"*/;
      goto LABEL_18;
  }
LABEL_12:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
  v9 = (System_String_o *)StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  return LocalizationManager__Get(v9, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ListViewSort__GetSvtOperationFilter2Text(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  int32_t v4; // w19
  int32_t filter2Kind; // t1
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19

  if ( (byte_5972054 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_2213A60(&StringLiteral_12242/*"SERVANT_SORT_FILTER2_OPERATION_"*/);
    byte_5972054 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    v8 = (System_String_o *)StringLiteral_12237/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_12242/*"SERVANT_SORT_FILTER2_OPERATION_"*/, v6, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  }
  return LocalizationManager__Get(v8, 0);
}


void ListViewSort__IncrementBonusFilter(
        ListViewSort_o *this,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isQuestStart,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  int32_t v10; // w0
  struct System_String_o *buttonText; // x9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_String_o *v18; // x1
  int32_t v19; // w0
  struct System_String_o *v20; // x9
  ListViewSort_BonusFilterInfo_o v21; // [xsp+0h] [xbp-70h] BYREF
  struct System_String_o *v22; // [xsp+18h] [xbp-58h] BYREF
  ListViewSort_BonusFilterInfo_o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5972042 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_5972042 = 1;
  }
  v22 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
  {
    if ( isQuestStart )
    {
      v10 = ListViewSort__BonusFilterKindIndex(
              this->fields.bonusKindId,
              this->fields.bonusKind,
              bonusFilterInfos,
              1,
              0,
              v9);
      buttonText = this->fields.bonusFilterInfoDefault.fields.buttonText;
      *(_OWORD *)&v23.fields.priority = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
      v23.fields.buttonText = buttonText;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v21,
        bonusFilterInfos,
        v10 + 1,
        &v23,
        (const MethodInfo_3814F38 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      v18 = v21.fields.buttonText;
      *(_QWORD *)&this->fields.bonusKind = *(_QWORD *)&v21.fields.kind;
    }
    else
    {
      v19 = ListViewSort__BonusFilterKindIndex(
              this->fields.bonusKind2Id,
              this->fields.bonusKind2,
              bonusFilterInfos,
              0,
              nowTime,
              v9);
      v20 = this->fields.bonusFilterInfoDefault.fields.buttonText;
      *(_OWORD *)&v23.fields.priority = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
      v23.fields.buttonText = v20;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v21,
        bonusFilterInfos,
        v19 + 1,
        &v23,
        (const MethodInfo_3814F38 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      v18 = v21.fields.buttonText;
      *(_QWORD *)&this->fields.bonusKind2 = *(_QWORD *)&v21.fields.kind;
    }
    v22 = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  }
}


void ListViewSort__InitLoad(ListViewSort_o *this, const MethodInfo *method)
{
  int32_t defaultSortKind; // w8
  bool isDefaultAscendingOrder; // w9

  *(_WORD *)&this->fields.isRequestLoad = 1;
  this->fields.isAscendingOrder = 1;
  this->fields.sortKind = 3;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  this->fields.listViewKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.filter2Kind = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
  defaultSortKind = this->fields.defaultSortKind;
  isDefaultAscendingOrder = this->fields.isDefaultAscendingOrder;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_E9D910;
  this->fields.sortKind = defaultSortKind;
  this->fields.isAscendingOrder = isDefaultAscendingOrder;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
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
  __int64 v19; // x21
  __int64 v20; // x8

  if ( (byte_5972026 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5972026 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v8);
    isSvtEquipEffectFilterDic = **(void ***)(v10 + 184);
    if ( !isSvtEquipEffectFilterDic )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)isSvtEquipEffectFilterDic,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
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
        (const MethodInfo_3F92DA0 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
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
          if ( (unsigned int)v19 >= v17 )
            sub_2213CE4(isSvtEquipEffectFilterDic);
          v20 = *((_QWORD *)v18 + v19 + 4);
          if ( !v20 )
            break;
          isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
          if ( !isSvtEquipEffectFilterDic )
            break;
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)isSvtEquipEffectFilterDic,
            *(_DWORD *)(v20 + 16),
            this->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE,
            (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          v17 = *((_DWORD *)v18 + 6);
          if ( (int)++v19 >= v17 )
            return;
        }
LABEL_31:
        sub_2213CDC(isSvtEquipEffectFilterDic, v7);
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
  _BOOL4 isSmartSort; // w26
  System_String_o *v28; // x0
  bool v29; // w25
  _BOOL4 isChoiceSort; // w25
  System_String_o *v31; // x0
  int32_t iconScaleKind; // w25
  System_String_o *v33; // x0
  int32_t expUpDispKind; // w25
  System_String_o *v35; // x0
  int32_t expUpDispType; // w25
  System_String_o *v37; // x0
  float scrollBarValue; // s8
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  int32_t autoOrganizationMode; // w20
  System_String_o *v50; // x0
  int32_t priorityKind; // w20
  System_String_o *v52; // x0
  int32_t otherSortKind; // w20
  System_String_o *v54; // x0

  if ( (byte_597202E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3328/*"BonusKind2Id-"*/);
    sub_2213A60(&StringLiteral_6579/*"ExpUpDispType-"*/);
    sub_2213A60(&StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/);
    sub_2213A60(&StringLiteral_2610/*"AutoOrganizationMode-"*/);
    sub_2213A60(&StringLiteral_3327/*"BonusKind2-"*/);
    sub_2213A60(&StringLiteral_11193/*"PresentBoxSortFilterNew-"*/);
    sub_2213A60(&StringLiteral_11207/*"PriorityKind-"*/);
    sub_2213A60(&StringLiteral_7856/*"IconSizeKind-"*/);
    sub_2213A60(&StringLiteral_3326/*"BonusKind-"*/);
    sub_2213A60(&StringLiteral_4593/*"ChoiceSortOrder-"*/);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    sub_2213A60(&StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_2609/*"AutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_10471/*"OtherSortKind-"*/);
    sub_2213A60(&StringLiteral_13180/*"ScrollBarValue-"*/);
    sub_2213A60(&StringLiteral_13475/*"SortFilter2-"*/);
    sub_2213A60(&StringLiteral_13479/*"SortKind-"*/);
    sub_2213A60(&StringLiteral_6578/*"ExpUpDispKind-"*/);
    sub_2213A60(&StringLiteral_13480/*"SortOrder-"*/);
    sub_2213A60(&StringLiteral_3329/*"BonusKindId-"*/);
    byte_597202E = 1;
  }
  sortKind = this->fields.sortKind;
  v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_13479/*"SortKind-"*/, this->fields.saveKey, 0);
  if ( sortKind != UnityEngine_PlayerPrefs__GetInt(v14, this->fields.defaultSortKind, 0) )
    return 1;
  isAscendingOrder = this->fields.isAscendingOrder;
  v16 = System_String__Concat_75651716((System_String_o *)StringLiteral_13480/*"SortOrder-"*/, this->fields.saveKey, 0);
  if ( isAscendingOrder == (UnityEngine_PlayerPrefs__GetInt(v16, this->fields.isDefaultAscendingOrder, 0) == 0) )
    return 1;
  bonusKind = this->fields.bonusKind;
  v18 = System_String__Concat_75651716((System_String_o *)StringLiteral_3326/*"BonusKind-"*/, this->fields.saveKey, 0);
  if ( bonusKind != UnityEngine_PlayerPrefs__GetInt(v18, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  bonusKindId = this->fields.bonusKindId;
  v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_3329/*"BonusKindId-"*/, this->fields.saveKey, 0);
  if ( bonusKindId != UnityEngine_PlayerPrefs__GetInt(v20, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2 = this->fields.bonusKind2;
  v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_3327/*"BonusKind2-"*/, this->fields.saveKey, 0);
  if ( bonusKind2 != UnityEngine_PlayerPrefs__GetInt(v22, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2Id = this->fields.bonusKind2Id;
  v24 = System_String__Concat_75651716((System_String_o *)StringLiteral_3328/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  if ( bonusKind2Id != UnityEngine_PlayerPrefs__GetInt(v24, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  filter2Kind = this->fields.filter2Kind;
  v26 = System_String__Concat_75651716((System_String_o *)StringLiteral_13475/*"SortFilter2-"*/, this->fields.saveKey, 0);
  if ( filter2Kind != UnityEngine_PlayerPrefs__GetInt(v26, 0, 0) )
    return 1;
  isSmartSort = this->fields.isSmartSort;
  v28 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  v29 = 1;
  if ( isSmartSort == (UnityEngine_PlayerPrefs__GetInt(v28, 1, 0) == 1) )
  {
    isChoiceSort = this->fields.isChoiceSort;
    v31 = System_String__Concat_75651716((System_String_o *)StringLiteral_4593/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
    if ( isChoiceSort == (UnityEngine_PlayerPrefs__GetInt(v31, 0, 0) == 1) )
    {
      iconScaleKind = this->fields.iconScaleKind;
      v33 = System_String__Concat_75651716((System_String_o *)StringLiteral_7856/*"IconSizeKind-"*/, this->fields.saveKey, 0);
      if ( iconScaleKind == UnityEngine_PlayerPrefs__GetInt(v33, 0, 0) )
      {
        expUpDispKind = this->fields.expUpDispKind;
        v35 = System_String__Concat_75651716((System_String_o *)StringLiteral_6578/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
        if ( expUpDispKind == UnityEngine_PlayerPrefs__GetInt(v35, 0, 0) )
        {
          expUpDispType = this->fields.expUpDispType;
          v37 = System_String__Concat_75651716((System_String_o *)StringLiteral_6579/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
          if ( expUpDispType == UnityEngine_PlayerPrefs__GetInt(v37, 0, 0) )
          {
            scrollBarValue = this->fields.scrollBarValue;
            v39 = System_String__Concat_75651716((System_String_o *)StringLiteral_13180/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
            if ( scrollBarValue == UnityEngine_PlayerPrefs__GetFloat(v39, 0.0, 0) )
            {
              v41 = ListViewSort__GetFilterListData(this, v40);
              if ( !filterListData )
                sub_2213CDC(v41, v42);
              if ( System_String__Equals_75686512(filterListData, v41, 0) )
              {
                v43 = System_String__Concat_75651716((System_String_o *)StringLiteral_11193/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
                if ( UnityEngine_PlayerPrefs__GetInt(v43, 0, 0) == presentBoxfilterListData )
                {
                  v44 = System_String__Concat_75651716((System_String_o *)StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
                  if ( UnityEngine_PlayerPrefs__GetInt(v44, 0, 0) == presentBoxfilterRarityListData
                    && !ListViewSort__IsChangeSvtEquipEffectFilter(this, v45)
                    && !ListViewSort__IsChangeSvtEventBonusFilter(this, v46) )
                  {
                    v47 = System_String__Concat_75651716((System_String_o *)StringLiteral_2609/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
                    if ( UnityEngine_PlayerPrefs__GetInt(v47, 0, 0) == autoOrganizationFilterListData )
                    {
                      v48 = System_String__Concat_75651716(
                              (System_String_o *)StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/,
                              this->fields.saveKey,
                              0);
                      if ( UnityEngine_PlayerPrefs__GetInt(v48, 0, 0) == waveBattleAutoOrganizationFilterListData )
                      {
                        autoOrganizationMode = this->fields.autoOrganizationMode;
                        v50 = System_String__Concat_75651716(
                                (System_String_o *)StringLiteral_2610/*"AutoOrganizationMode-"*/,
                                this->fields.saveKey,
                                0);
                        if ( autoOrganizationMode == UnityEngine_PlayerPrefs__GetInt(v50, 0, 0) )
                        {
                          priorityKind = this->fields.priorityKind;
                          v52 = System_String__Concat_75651716(
                                  (System_String_o *)StringLiteral_11207/*"PriorityKind-"*/,
                                  this->fields.saveKey,
                                  0);
                          if ( priorityKind == UnityEngine_PlayerPrefs__GetInt(v52, 0, 0) )
                          {
                            otherSortKind = this->fields.otherSortKind;
                            v54 = System_String__Concat_75651716(
                                    (System_String_o *)StringLiteral_10471/*"OtherSortKind-"*/,
                                    this->fields.saveKey,
                                    0);
                            return otherSortKind != UnityEngine_PlayerPrefs__GetInt(v54, 11, 0);
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
    return 1;
  }
  return v29;
}


bool ListViewSort__IsChangeSvtEquipEffectFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *saveKey; // x1
  System_String_o *v4; // x0
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_string__int__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__int__o *v11; // x20
  int32_t key; // w21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t Item; // w22
  Il2CppObject *v17; // x1
  _OWORD v19[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-70h] BYREF
  int32_t v21; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_5972036 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/);
    byte_5972036 = 1;
  }
  saveKey = this->fields.saveKey;
  v21 = 0;
  memset(&v20, 0, 32);
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/, saveKey, 0);
  String = UnityEngine_PlayerPrefs__GetString(v4, **(System_String_o ***)(qword_5984390 + 184), 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v7) )
      return 1;
  }
  else
  {
    v9 = ListViewSort__ConvertJsonToSvtEquipEffectFilterData((ListViewSort_o *)IsNullOrEmpty, String, v8);
    if ( !this->fields.isSvtEquipEffectFilterDic )
      sub_2213CDC(v9, v10);
    v11 = (System_Collections_Generic_Dictionary_object__int__o *)v9;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v19,
      this->fields.isSvtEquipEffectFilterDic,
      (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    *(_OWORD *)&v20.fields._dictionary = v19[0];
    v20.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v19[1];
    *(_QWORD *)&v19[0] = 0;
    *((_QWORD *)&v19[0] + 1) = &v20;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v20,
              (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
    {
      key = (int32_t)v20.fields._current.fields.key;
      v21 = (int32_t)v20.fields._current.fields.key;
      v13 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
      if ( !v11 )
        sub_2213CDC(v13, v13);
      if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
             v11,
             v13,
             (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
      {
        isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
        if ( !isSvtEquipEffectFilterDic )
          sub_2213CDC(0, v14);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 isSvtEquipEffectFilterDic,
                 key,
                 (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v21 = key;
        v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__int___get_Item(
                       v11,
                       v17,
                       (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
        &v20,
        (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v20,
      (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  }
  return 0;
}


bool ListViewSort__IsChangeSvtEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *saveKey; // x1
  System_String_o *v4; // x0
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_string__int____o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int32_t key; // w21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *Item; // x22
  Il2CppObject *v17; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-80h] BYREF
  int32_t v21; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_5972037 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_2213A60(&StringLiteral_13749/*"SvtEventBonusFilterNew-"*/);
    byte_5972037 = 1;
  }
  saveKey = this->fields.saveKey;
  v21 = 0;
  memset(&v20, 0, sizeof(v20));
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_13749/*"SvtEventBonusFilterNew-"*/, saveKey, 0);
  String = UnityEngine_PlayerPrefs__GetString(v4, **(System_String_o ***)(qword_5984390 + 184), 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v7) )
      return 1;
  }
  else
  {
    v9 = ListViewSort__ConvertJsonToSvtEventBonusFilterData((ListViewSort_o *)IsNullOrEmpty, String, v8);
    if ( !this->fields.svtEventBonusFilterDic )
      sub_2213CDC(v9, v10);
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)v9;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v19,
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    v20 = v19;
    v19.fields._dictionary = 0;
    *(_QWORD *)&v19.fields._version = &v20;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v20,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
    {
      key = (int32_t)v20.fields._current.fields.key;
      v21 = (int32_t)v20.fields._current.fields.key;
      v13 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
      if ( !v11 )
        sub_2213CDC(v13, v13);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v11,
             v13,
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__) )
      {
        svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
        if ( !svtEventBonusFilterDic )
          sub_2213CDC(0, v14);
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                 key,
                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
        v21 = key;
        v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__object___get_Item(
                       v11,
                       v17,
                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__int____get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v20,
        (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v20,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
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

  if ( (byte_5972044 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972044 = 1;
  }
  if ( kind != 3 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v10 = (EventCampaignMaster_o *)Instance;
  if ( nowTime <= 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
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
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( Instance )
          return nowTime > *(_QWORD *)(Instance + 104);
      }
LABEL_19:
      sub_2213CDC(Instance, v8);
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

  if ( (byte_5972046 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972046 = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
               eventId,
               (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_71723804(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)Item,
        (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
      if ( v9 )
        return System_Collections_Generic_List_int___Contains(
                 v9,
                 objectId,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_2213CDC(svtEventBonusFilterDic, *(_QWORD *)&eventId);
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
      case 9:
        v4 = 58;
        return ListViewSort__GetFilter(this, v4, method);
      case 23:
        v4 = 60;
        return ListViewSort__GetFilter(this, v4, method);
      case 11:
        v4 = 59;
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
  ListViewSort_o *v6; // x0
  int32_t v7; // w1
  bool result; // w0

  if ( !servantEntity )
    return 0;
  if ( ServantEntity__IsBeastNotPlayable(servantEntity, 0) )
  {
LABEL_3:
    v6 = this;
    v7 = 64;
    return ListViewSort__GetFilter(v6, v7, v5);
  }
  else
  {
    switch ( ServantEntity__GetClassId(servantEntity, 1, 0, 0) )
    {
      case 1:
      case 13:
        v6 = this;
        v7 = 0;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 2:
      case 14:
        v6 = this;
        v7 = 1;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 3:
      case 15:
        v6 = this;
        v7 = 2;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 4:
      case 16:
        v6 = this;
        v7 = 3;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 5:
      case 17:
        v6 = this;
        v7 = 4;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 6:
      case 18:
        v6 = this;
        v7 = 5;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 7:
      case 19:
        v6 = this;
        v7 = 6;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 8:
        v6 = this;
        v7 = 57;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 9:
        v6 = this;
        v7 = 58;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 10:
        v6 = this;
        v7 = 61;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 11:
        v6 = this;
        v7 = 59;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 23:
        v6 = this;
        v7 = 60;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 25:
        v6 = this;
        v7 = 62;
        return ListViewSort__GetFilter(v6, v7, v5);
      case 28:
        v6 = this;
        v7 = 63;
        return ListViewSort__GetFilter(v6, v7, v5);
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
  bool v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  unsigned __int8 v13; // w23
  bool v14; // w23
  const MethodInfo *v15; // x2
  bool v16; // w22
  const MethodInfo *v17; // x2
  bool v18; // w22
  ListViewSort_FilterKind_array *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_5972057 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_5972057 = 1;
  }
  if ( !servantEntity )
    return 0;
  v5 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !ListViewSort__GetFilter(this, 65, v6) )
  {
    v10 = 0;
    v13 = 0;
    if ( !ListViewSort__GetFilter(this, 66, v7) )
      goto LABEL_15;
    goto LABEL_11;
  }
  IsThreeKnights = ServantEntity__IsThreeKnights(servantEntity, 0);
  v10 = IsThreeKnights;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v9);
  if ( !v5 )
    goto LABEL_35;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
    (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v13 = v10;
  if ( ListViewSort__GetFilter(this, 66, v11) )
  {
LABEL_11:
    IsThreeKnights = ServantEntity__IsFourCavalry(servantEntity, 0);
    v14 = IsThreeKnights;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v9);
    if ( !v5 )
      goto LABEL_35;
    v13 = v14 || v10;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
      (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
LABEL_15:
  if ( ListViewSort__GetFilter(this, 67, v12) )
  {
    IsThreeKnights = ServantEntity__IsExtra1(servantEntity, 0);
    v16 = IsThreeKnights;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v9);
    if ( !v5 )
      goto LABEL_35;
    v13 |= v16;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
      (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    if ( !ListViewSort__GetFilter(this, 68, v17) )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_31;
      goto LABEL_29;
    }
  }
  else
  {
    IsThreeKnights = ListViewSort__GetFilter(this, 68, v15);
    if ( !IsThreeKnights )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_30;
LABEL_29:
      IsThreeKnights = ServantEntity__get_IsAllClass(servantEntity, 0);
      if ( IsThreeKnights )
      {
LABEL_30:
        if ( v5 )
          goto LABEL_31;
LABEL_35:
        sub_2213CDC(IsThreeKnights, v9);
      }
      return 0;
    }
  }
  IsThreeKnights = ServantEntity__IsExtra2(servantEntity, 0);
  v18 = IsThreeKnights;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v9);
  if ( !v5 )
    goto LABEL_35;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( ((v18 | v13) & 1) == 0 )
    goto LABEL_29;
LABEL_31:
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           v5,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(this, v19, v20)
      || ListViewSort__IsMatchClassFilter(this, servantEntity, v21);
}


bool ListViewSort__IsMatchNPEffectFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t ServantId; // w20
  int32_t DispLimitCount; // w0
  __int64 v7; // x1
  bool TreasureDeviceInfo; // w8
  TreasureDvcEntity_o *v9; // x0
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972059 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5972059 = 1;
  }
  tdInfo = 0;
  if ( userServantEntity )
  {
    ServantId = UserServantEntity__GetServantId(userServantEntity, -1, 0);
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    TreasureDeviceInfo = UserServantEntity__GetTreasureDeviceInfo(
                           userServantEntity,
                           &tdInfo,
                           ServantId,
                           -1,
                           DispLimitCount,
                           0,
                           0);
    LOBYTE(v9) = 0;
    if ( TreasureDeviceInfo )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !tdInfo || !Master_object )
        sub_2213CDC(Master_object, v11);
      v9 = TreasureDvcMaster__GetEntityCheckServantOverwrite(
             (TreasureDvcMaster_o *)Master_object,
             ServantId,
             tdInfo->fields.id,
             0);
      if ( v9 )
        LOBYTE(v9) = ListViewSort__IsMatchNPEffectFilter_50895960(this, v9, v12);
    }
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  return (unsigned __int8)v9 & 1;
}


bool ListViewSort__IsMatchNPEffectFilter_50895960(
        ListViewSort_o *this,
        TreasureDvcEntity_o *tdEntity,
        const MethodInfo *method)
{
  int64_t EffectFlag; // x1
  const MethodInfo *v5; // x2

  if ( !tdEntity )
    return 0;
  EffectFlag = TreasureDvcEntity__GetEffectFlag(tdEntity, 0);
  return ListViewSort__IsMatchNPEffectFilter_50896388(this, EffectFlag, v5);
}


bool ListViewSort__IsMatchNPEffectFilter_50896008(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  __int64 v8; // x23
  ServantTreasureDvcMaster_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  __int64 v13; // x1
  ServantTreasureDvcEntity_o *v14; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x23
  TreasureDvcMaster_o *v19; // x20
  TreasureDvcEntity_o *v20; // x0
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_597205A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597205A = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v9 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v23.fields.currentCryptoKey = v7;
  *(_QWORD *)&v23.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v9, v10, 1, 0);
  if ( !EntityFromSvtIdOnly )
    return 0;
  v14 = EntityFromSvtIdOnly;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v19 = (TreasureDvcMaster_o *)v15;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v24.fields.currentCryptoKey = v17;
  *(_QWORD *)&v24.fields.fakeValue = v18;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
  if ( !v19 )
LABEL_18:
    sub_2213CDC(v10, v11);
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v19, v10, v14->fields.treasureDeviceId, 0);
  if ( v20 )
    return ListViewSort__IsMatchNPEffectFilter_50895960(this, v20, v21);
  return 0;
}


bool ListViewSort__IsMatchNPEffectFilter_50896388(ListViewSort_o *this, int64_t npEffectFlag, const MethodInfo *method)
{
  int32_t v4; // w1

  if ( (unsigned __int64)(npEffectFlag + 1) > 3 )
    return 0;
  switch ( (_DWORD)npEffectFlag )
  {
    case 0xFFFFFFFF:
      v4 = 47;
      break;
    case 1:
      v4 = 46;
      break;
    case 2:
      v4 = 45;
      break;
    default:
      return 0;
  }
  return ListViewSort__GetFilter(this, v4, method);
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
  unsigned int v10; // w8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0;
  if ( !userServantEntity )
    return 0;
  DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
  TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, DispLimitCount, 0, 0);
  v9 = 0;
  if ( TreasureDeviceInfo )
  {
    if ( !tdInfo )
      sub_2213CDC(0, v6);
    v10 = tdInfo->fields.cardId - 1;
    if ( v10 <= 2 )
      return ListViewSort__GetFilter(this, dword_EDA68C[v10], v7);
    return 0;
  }
  return v9;
}


bool ListViewSort__IsMatchNPTypeFilter_50895384(ListViewSort_o *this, int32_t npType, const MethodInfo *method)
{
  return (unsigned int)(npType - 1) <= 2 && ListViewSort__GetFilter(this, dword_EDA68C[npType - 1], method);
}


bool ListViewSort__IsMatchNPTypeFilter_50895420(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantTreasureDvcMaster_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v13; // x2
  unsigned int v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5972058 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5972058 = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v9 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v9, v10, 1, 0);
  if ( EntityFromSvtIdOnly && (v14 = EntityFromSvtIdOnly->fields.cardId - 1, v14 <= 2) )
    return ListViewSort__GetFilter(this, dword_EDA68C[v14], v13);
  else
    return 0;
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
  int v12; // w20
  ListViewSort_FilterKind_array *v13; // x0
  const MethodInfo *v14; // x2
  _BOOL4 IsUnSelectedAllTargetFilters; // w0
  bool result; // w0
  bool v17; // w21
  unsigned int type; // w8
  __int64 v19; // x1
  int32_t DispLimitCount; // w24
  __int64 v21; // x25
  __int64 v22; // x26
  __int64 v23; // x1
  int32_t v24; // w25
  int32_t LimitCountByDispLimit; // w25
  __int64 v26; // x1
  int32_t ServantId; // w24
  int ServantLimitCountSealAfter; // w25
  System_Collections_Generic_List_int__o *v29; // x23
  const MethodInfo *v30; // x2
  __int64 v31; // x25
  System_Collections_Generic_IEnumerable_TSource__o *individuality; // x26
  ListViewSort___c_c *v33; // x0
  struct ListViewSort___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__254_0; // x27
  Il2CppObject *v36; // x28
  struct ListViewSort___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_T__o *v45; // x26
  ListViewSort___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x27
  struct ListViewSort___c_StaticFields *v48; // x8
  System_Func_int__int__o *_9__254_1; // x28
  Il2CppObject *v50; // x29
  struct ListViewSort___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x27
  ListViewSort___c_c *v60; // x8
  struct ListViewSort___c_StaticFields *v61; // x9
  System_Func_int__bool__o *_9__254_2; // x28
  Il2CppObject *v63; // x29
  struct ListViewSort___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x27
  ListViewSort___c_c *v79; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x22
  struct ListViewSort___c_StaticFields *v81; // x8
  System_Func_int__bool__o *_9__254_3; // x27
  Il2CppObject *v83; // x28
  struct ListViewSort___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x22
  System_Func_int__bool__o *v92; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  __int64 v94; // x1
  IndividualityPersonalityEntity_o *v95; // [xsp+0h] [xbp-80h] BYREF
  IndividualityPolicyEntity_o *v96; // [xsp+8h] [xbp-78h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  ServantLimitEntity_o *v98; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_597205E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__);
    sub_2213A60(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__);
    sub_2213A60(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__);
    sub_2213A60(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__);
    sub_2213A60(&ListViewSort___c__DisplayClass254_0_TypeInfo);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_597205E = 1;
  }
  v7 = FilterKindList_TypeInfo;
  entity = 0;
  v98 = 0;
  v95 = 0;
  v96 = 0;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, userServantEntity);
    v7 = FilterKindList_TypeInfo;
  }
  ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ServantAttriFirstFilterKindList;
  if ( !ServantAttriFirstFilterKindList )
    goto LABEL_87;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ServantAttriFirstFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                              this,
                                                                              v9,
                                                                              v10);
  ServantAttriSecondFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList;
  if ( !ServantAttriSecondFilterKindList )
    goto LABEL_87;
  v12 = (int)ServantAttriFirstFilterKindList;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ServantAttriSecondFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v22 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    *(_QWORD *)&v99.fields.currentCryptoKey = v21;
    *(_QWORD *)&v99.fields.fakeValue = v22;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v99, 0);
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v23);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v24, 0);
    ServantId = UserServantEntity__GetServantId(userServantEntity, -1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !ServantAttriFirstFilterKindList )
      goto LABEL_87;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)ServantAttriFirstFilterKindList,
                                   ServantId,
                                   LimitCountByDispLimit,
                                   0);
    v29 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( ServantLimitCountSealAfter >= 11 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userServantEntity);
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      if ( !ServantAttriFirstFilterKindList )
        goto LABEL_87;
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)ServantLimitAddMaster__TryGetEntity(
                                                                                  (ServantLimitAddMaster_o *)ServantAttriFirstFilterKindList,
                                                                                  &entity,
                                                                                  ServantId,
                                                                                  ServantLimitCountSealAfter,
                                                                                  0);
      if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) != 0 )
      {
        v31 = sub_2213CCC(ListViewSort___c__DisplayClass254_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v31, 0);
        if ( !entity )
          goto LABEL_87;
        individuality = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.individuality;
        v33 = ListViewSort___c_TypeInfo;
        if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, userServantEntity);
          v33 = ListViewSort___c_TypeInfo;
        }
        static_fields = v33->static_fields;
        _9__254_0 = static_fields->__9__254_0;
        if ( !_9__254_0 )
        {
          if ( !*(&v33->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v33, userServantEntity);
            static_fields = ListViewSort___c_TypeInfo->static_fields;
          }
          v36 = (Il2CppObject *)static_fields->__9;
          _9__254_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_0,
            v36,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__,
            0);
          v37 = ListViewSort___c_TypeInfo->static_fields;
          v37->__9__254_0 = _9__254_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v37->__9__254_0,
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
                (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v44,
                                                                                    (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
        if ( !entity )
          goto LABEL_87;
        v45 = ServantAttriFirstFilterKindList;
        v46 = ListViewSort___c_TypeInfo;
        v47 = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.individuality;
        if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, userServantEntity);
          v46 = ListViewSort___c_TypeInfo;
        }
        v48 = v46->static_fields;
        _9__254_1 = v48->__9__254_1;
        if ( !_9__254_1 )
        {
          if ( !*(&v46->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v46, userServantEntity);
            v48 = ListViewSort___c_TypeInfo->static_fields;
          }
          v50 = (Il2CppObject *)v48->__9;
          _9__254_1 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(_9__254_1, v50, Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__, 0);
          v51 = ListViewSort___c_TypeInfo->static_fields;
          v51->__9__254_1 = _9__254_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v51->__9__254_1,
            (int32_t)_9__254_1,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
        }
        v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                     v47,
                                                                     (System_Func_TSource__TResult__o *)_9__254_1,
                                                                     (const MethodInfo_388D7F0 *)Method_System_Linq_Enumerable_Select_int__int___);
        v60 = ListViewSort___c_TypeInfo;
        if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v58);
          v60 = ListViewSort___c_TypeInfo;
        }
        v61 = v60->static_fields;
        _9__254_2 = v61->__9__254_2;
        if ( !_9__254_2 )
        {
          if ( !*(&v60->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v60, v58);
            v61 = ListViewSort___c_TypeInfo->static_fields;
          }
          v63 = (Il2CppObject *)v61->__9;
          _9__254_2 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_2,
            v63,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__,
            0);
          v64 = ListViewSort___c_TypeInfo->static_fields;
          v64->__9__254_2 = _9__254_2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v64->__9__254_2,
            (int32_t)_9__254_2,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
        }
        v71 = System_Linq_Enumerable__Where_int_(
                v59,
                (System_Func_TSource__bool__o *)_9__254_2,
                (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v71,
                                                                                    (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
        if ( !v31 )
          goto LABEL_87;
        *(_QWORD *)(v31 + 16) = ServantAttriFirstFilterKindList;
        v78 = v31 + 16;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v31 + 16),
          (int32_t)ServantAttriFirstFilterKindList,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        if ( !v45 )
          goto LABEL_87;
        if ( v45->fields._size > 0 )
          goto LABEL_52;
        if ( !*(_QWORD *)v78 )
          goto LABEL_87;
        if ( *(int *)(*(_QWORD *)v78 + 24LL) >= 1 )
        {
LABEL_52:
          v79 = ListViewSort___c_TypeInfo;
          v80 = (System_Collections_Generic_IEnumerable_TSource__o *)servantEntity->fields.individuality;
          if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, userServantEntity);
            v79 = ListViewSort___c_TypeInfo;
          }
          v81 = v79->static_fields;
          _9__254_3 = v81->__9__254_3;
          if ( !_9__254_3 )
          {
            if ( !*(&v79->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v79, userServantEntity);
              v81 = ListViewSort___c_TypeInfo->static_fields;
            }
            v83 = (Il2CppObject *)v81->__9;
            _9__254_3 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              _9__254_3,
              v83,
              Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__,
              0);
            v84 = ListViewSort___c_TypeInfo->static_fields;
            v84->__9__254_3 = _9__254_3;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v84->__9__254_3,
              (int32_t)_9__254_3,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90);
          }
          v91 = System_Linq_Enumerable__Where_int_(
                  v80,
                  (System_Func_TSource__bool__o *)_9__254_3,
                  (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
          v92 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v92,
            (Il2CppObject *)v31,
            Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__,
            0);
          v93 = System_Linq_Enumerable__Where_int_(
                  v91,
                  (System_Func_TSource__bool__o *)v92,
                  (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__Concat_int_(
                                                                                      v93,
                                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                                                      (const MethodInfo_3875F9C *)Method_System_Linq_Enumerable_Concat_int___);
          if ( !v29 )
            goto LABEL_87;
          System_Collections_Generic_List_int___AddRange(
            v29,
            (System_Collections_Generic_IEnumerable_T__o *)ServantAttriFirstFilterKindList,
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
          ServantLimitCountSealAfter = 0;
          goto LABEL_62;
        }
      }
      ServantLimitCountSealAfter = 0;
    }
    if ( !v29 )
      goto LABEL_87;
LABEL_62:
    if ( v29->fields._size )
      return ((v12 & 1) != 0 || ListViewSort__IsMatchServantAttriFirstFilter(this, v29, v30))
          && (v17 || ListViewSort__IsMatchServantAttriSecondFilter(this, v29, v30));
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userServantEntity);
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    if ( ServantAttriFirstFilterKindList )
    {
      if ( !ServantLimitMaster__TryGetEntity(
              (ServantLimitMaster_o *)ServantAttriFirstFilterKindList,
              &v98,
              ServantId,
              ServantLimitCountSealAfter,
              0) )
        goto LABEL_81;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v94);
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
      if ( v98 )
      {
        if ( ServantAttriFirstFilterKindList )
        {
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPolicyMaster__TryGetEntityByPolicyValue(
                                                                                      (IndividualityPolicyMaster_o *)ServantAttriFirstFilterKindList,
                                                                                      &v96,
                                                                                      v98->fields.policy,
                                                                                      0);
          if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) != 0 )
          {
            if ( !v96 )
              goto LABEL_87;
            System_Collections_Generic_List_int___AddRange(
              v29,
              (System_Collections_Generic_IEnumerable_T__o *)v96->fields.individuality,
              (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userServantEntity);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
          if ( v98 && ServantAttriFirstFilterKindList )
          {
            ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPersonalityMaster__TryGetEntityByPersonalityValue(
                                                                                        (IndividualityPersonalityMaster_o *)ServantAttriFirstFilterKindList,
                                                                                        &v95,
                                                                                        v98->fields.personality,
                                                                                        0);
            if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) == 0 )
              goto LABEL_81;
            if ( v95 )
            {
              System_Collections_Generic_List_int___AddRange(
                v29,
                (System_Collections_Generic_IEnumerable_T__o *)v95->fields.individuality,
                (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_81:
              if ( !v29->fields._size )
                return 0;
              return ((v12 & 1) != 0 || ListViewSort__IsMatchServantAttriFirstFilter(this, v29, v30))
                  && (v17 || ListViewSort__IsMatchServantAttriSecondFilter(this, v29, v30));
            }
          }
        }
      }
    }
LABEL_87:
    sub_2213CDC(ServantAttriFirstFilterKindList, userServantEntity);
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
  bool v6; // w20
  bool Filter; // w0
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_597205F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    this = (ListViewSort_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_597205F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !individuality )
    sub_2213CDC(this, individuality);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    individuality,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v9,
           (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v6 )
      break;
    switch ( v9.fields._current )
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
          goto LABEL_13;
        break;
    }
  }
LABEL_13:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6;
}


bool ListViewSort__IsMatchServantAttriSecondFilter(
        ListViewSort_o *this,
        System_Collections_Generic_List_int__o *individuality,
        const MethodInfo *method)
{
  ListViewSort___c_c *v5; // x0
  struct ListViewSort___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__256_0; // x21
  Il2CppObject *v8; // x22
  struct ListViewSort___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  bool v21; // w20
  bool Filter; // w0
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972060 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_5972060 = 1;
  }
  v5 = ListViewSort___c_TypeInfo;
  memset(&v24, 0, sizeof(v24));
  if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, individuality);
    v5 = ListViewSort___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__256_0 = static_fields->__9__256_0;
  if ( !_9__256_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, individuality);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__256_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__256_0, v8, Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__, 0);
    v9 = ListViewSort___c_TypeInfo->static_fields;
    v9->__9__256_0 = _9__256_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__256_0, (int32_t)_9__256_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)individuality,
          (System_Func_TSource__bool__o *)_9__256_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v17 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v16,
                                                    (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v17 )
    sub_2213CDC(0, v18);
  if ( !v17->fields._size )
    return ListViewSort__GetFilter(this, 94, v19);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v17,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  do
  {
    v21 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v21 )
      break;
    if ( v24.fields._current == 305 )
    {
      Filter = ListViewSort__GetFilter(this, 92, v20);
    }
    else if ( v24.fields._current == 304 )
    {
      Filter = ListViewSort__GetFilter(this, 93, v20);
    }
    else
    {
      Filter = v24.fields._current == 303
             ? ListViewSort__GetFilter(this, 91, v20)
             : ListViewSort__GetFilter(this, 94, v20);
    }
  }
  while ( !Filter );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v21;
}


bool ListViewSort__IsMatchServantCollectionStatus(
        ListViewSort_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  __int64 v8; // x20
  __int64 v9; // x23
  int64_t userIdNumber; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  unsigned int status; // w8
  ListViewSort_o *v15; // x0
  int32_t v16; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_597205C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597205C = 1;
  }
  entity = 0;
  if ( !svtEntity )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v7 = NetworkManager_TypeInfo;
  }
  v9 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = v7->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !Master_object )
    goto LABEL_26;
  v11 = UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          userIdNumber,
          v11,
          0);
  if ( (v11 & 1) != 0 )
  {
    if ( entity )
    {
      status = entity->fields.status;
      if ( status < 2 )
      {
        v15 = this;
        v16 = 11;
      }
      else
      {
        if ( status != 2 )
          return 0;
        v15 = this;
        v16 = 12;
      }
      return ListViewSort__GetFilter(v15, v16, v13);
    }
LABEL_26:
    sub_2213CDC(v11, v12);
  }
  return ListViewSort__GetFilter(this, 11, v13);
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
    sub_2213CDC(Filter, v10);
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
    sub_2213CDC(this, userServantEntity);
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

  if ( !svtEntity )
    return 0;
  return ListViewSort__GetFilter(this, 55, method) && ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0)
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
      || ListViewSort__GetFilter(this, 76, v11) && ServantEntity__get_IsSvtEquipExp(svtEntity, 0);
}


bool ListViewSort__IsMatchServantPossessionStatus(
        ListViewSort_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x1
  int32_t v10; // w21
  char IsServantHaving; // w21
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x20
  __int64 v16; // x1
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_597205B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597205B = 1;
  }
  if ( !svtEntity )
  {
    IsServantHaving = 0;
    return IsServantHaving & 1;
  }
  if ( !ListViewSort__GetFilter(this, 52, method) )
  {
    IsServantHaving = 0;
    if ( !ListViewSort__GetFilter(this, 53, v6) )
      return IsServantHaving & 1;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  IsServantHaving = CondType__IsServantHaving(v10, 0);
  if ( ListViewSort__GetFilter(this, 53, v12) )
  {
LABEL_13:
    v15 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v14 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v16);
    IsServantHaving |= !CondType__IsServantHaving(v17, 0);
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
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( !userServantEntity )
    return 0;
  if ( ListViewSort__GetFilter(this, 21, method) && !UserServantEntity__isLevelMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 104, v5) && UserServantEntity__isLevelMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 22, v6) && !UserServantEntity__IsAdjustHpMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 23, v7)
    && UserServantEntity__IsAdjustHpMax(userServantEntity, 0)
    && !UserServantEntity__IsSecondAdjustHpMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 102, v8)
    && UserServantEntity__IsSecondAdjustHpMax(userServantEntity, 0)
    && !UserServantEntity__IsAddParam1Max(userServantEntity, 0) )
  {
    return 1;
  }
  if ( ListViewSort__GetFilter(this, 24, v9) )
  {
    if ( ConstantMaster__IsFlag20260802(0) )
    {
      if ( UserServantEntity__IsAddParam1Max(userServantEntity, 0) )
        return 1;
    }
    else if ( UserServantEntity__IsSecondAdjustHpMax(userServantEntity, 0) )
    {
      return 1;
    }
  }
  if ( ListViewSort__GetFilter(this, 25, v10) && !UserServantEntity__IsAdjustAtkMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 26, v12)
    && UserServantEntity__IsAdjustAtkMax(userServantEntity, 0)
    && !UserServantEntity__IsSecondAdjustAtkMax(userServantEntity, 0)
    || ListViewSort__GetFilter(this, 103, v13)
    && UserServantEntity__IsSecondAdjustAtkMax(userServantEntity, 0)
    && !UserServantEntity__IsAddParam2Max(userServantEntity, 0) )
  {
    return 1;
  }
  if ( ListViewSort__GetFilter(this, 27, v14) )
  {
    if ( ConstantMaster__IsFlag20260802(0) )
    {
      if ( UserServantEntity__IsAddParam2Max(userServantEntity, 0) )
        return 1;
    }
    else if ( UserServantEntity__IsSecondAdjustAtkMax(userServantEntity, 0) )
    {
      return 1;
    }
  }
  return 0;
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
  __int64 v14; // x1
  int32_t DispLimitCount; // w22
  __int64 v16; // x23
  __int64 v17; // x24
  __int64 v18; // x1
  int32_t v19; // w23
  int32_t LimitCountByDispLimit; // w22
  __int64 v21; // x1
  int32_t ServantId; // w21
  int32_t ServantLimitCountSealAfter; // w22
  int32_t attri; // w20
  const MethodInfo *v25; // x2
  unsigned int v26; // w8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5972061 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AttriMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5972061 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  entity = 0;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, userServantEntity);
    v7 = FilterKindList_TypeInfo;
  }
  ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ServantSubAttriFilterKindList;
  if ( !ServantSubAttriFilterKindList )
    goto LABEL_31;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ServantSubAttriFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(this, v9, v10) )
    return 1;
  v11 = 0;
  if ( userServantEntity && servantEntity )
  {
    type = servantEntity->fields.type;
    if ( type <= 0xC && ((1 << type) & 0x1088) != 0 )
      return 0;
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    v16 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v28.fields.currentCryptoKey = v16;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v18);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v19, 0);
    ServantId = UserServantEntity__GetServantId(userServantEntity, -1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( ServantSubAttriFilterKindList )
    {
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)ServantSubAttriFilterKindList,
                                     ServantId,
                                     LimitCountByDispLimit,
                                     0);
      attri = servantEntity->fields.attri;
      ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      if ( ServantSubAttriFilterKindList )
      {
        ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)ServantLimitAddMaster__TryGetEntity(
                                                                                  (ServantLimitAddMaster_o *)ServantSubAttriFilterKindList,
                                                                                  &entity,
                                                                                  ServantId,
                                                                                  ServantLimitCountSealAfter,
                                                                                  0);
        if ( ((unsigned __int8)ServantSubAttriFilterKindList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_31;
          if ( entity->fields.attri != -1 )
            attri = entity->fields.attri;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userServantEntity);
        ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AttriMaster___);
        if ( ServantSubAttriFilterKindList )
        {
          v26 = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)ServantSubAttriFilterKindList, attri, 0) - 200;
          if ( v26 <= 4 )
            return ListViewSort__GetFilter(this, dword_EDA698[v26], v25);
          return 0;
        }
      }
    }
LABEL_31:
    sub_2213CDC(ServantSubAttriFilterKindList, userServantEntity);
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
  {
    LOBYTE(SummonCategoryId) = 0;
    return SummonCategoryId;
  }
  if ( ListViewSort__GetFilter(this, 69, method)
    && !GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0) )
  {
    goto LABEL_8;
  }
  if ( !ListViewSort__GetFilter(this, 70, v5)
    || (SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0), SummonCategoryId != 1) )
  {
    if ( !ListViewSort__GetFilter(this, 71, v6)
      || GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0) != 2 )
    {
      LOBYTE(SummonCategoryId) = 0;
      return SummonCategoryId;
    }
LABEL_8:
    LOBYTE(SummonCategoryId) = 1;
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
  unsigned int v5; // w8

  if ( servantEntity )
  {
    if ( ServantEntity__IsBeastNotPlayable(servantEntity, 0) )
      return 0;
    v5 = ServantEntity__GetClassId(servantEntity, 1, 0, 0) - 1;
    return (v5 >= 0x21 || ((0x10947F7FFuLL >> v5) & 1) == 0) && !ServantEntity__get_IsAllClass(servantEntity, 0);
  }
  else
  {
    return 0;
  }
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
          sub_2213CE4(this);
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
            sub_2213CE4(this);
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
  _BOOL4 isRequestLoad; // w8
  System_String_o *saveKey; // x1
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t Int; // w0
  System_String_o *v8; // x8
  System_String_o *v9; // x1
  System_String_o *v10; // x0
  int32_t v11; // w0
  System_String_o *v12; // x1
  bool v13; // zf
  System_String_o *v14; // x0
  bool v15; // w8
  System_String_o *v16; // x0
  int32_t v17; // w0
  System_String_o *v18; // x8
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  int32_t v21; // w0
  System_String_o *v22; // x8
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  int32_t v25; // w0
  System_String_o *v26; // x8
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  int32_t v29; // w0
  System_String_o *v30; // x8
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  int32_t v33; // w0
  System_String_o *v34; // x8
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  int32_t v37; // w0
  System_String_o *v38; // x1
  System_String_o *v39; // x0
  bool v40; // w8
  System_String_o *v41; // x0
  const MethodInfo *v42; // x1
  System_String_o *FilterListData; // x0
  const MethodInfo *v44; // x2
  System_String_o *v45; // x0
  int32_t v46; // w23
  System_String_o *v47; // x0
  int32_t v48; // w22
  System_String_o *v49; // x0
  int32_t v50; // w0
  System_String_o *v51; // x1
  System_String_o *v52; // x0
  int32_t v53; // w0
  System_String_o *v54; // x1
  System_String_o *v55; // x0
  int32_t v56; // w0
  System_String_o *v57; // x1
  System_String_o *v58; // x0
  float Float; // s0
  System_String_o *v60; // x1
  System_String_o *v61; // x0
  System_String_o *String; // x24
  System_String_o *v63; // x0
  int32_t v64; // w21
  System_String_o *v65; // x0
  int32_t v66; // w20
  System_String_o *v67; // x0
  int32_t v68; // w0
  System_String_o *v69; // x1
  System_String_o *v70; // x0
  int32_t v71; // w0
  System_String_o *v72; // x1
  System_String_o *v73; // x0
  ListViewSort_o *v74; // x0
  __int64 v75; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x8
  const MethodInfo *v77; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  __int64 max_length_low; // x9
  __int64 v80; // x8
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  __int64 v83; // x9
  __int64 v84; // x8
  bool *v85; // x10
  Il2CppObject *value; // x22
  Il2CppObject *key; // x23
  struct System_Collections_Generic_Dictionary_int__int____o *v88; // x24
  __int64 v89; // x0
  bool v90; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *v91; // x24
  __int64 v92; // x0
  __int64 v93; // x0
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  __int64 v95; // x9
  __int64 v96; // x8
  bool *v97; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  __int64 v99; // x9
  __int64 v100; // x8
  bool *v101; // x10
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  const MethodInfo *v104; // x1
  System_String_o *v105; // x0
  ListViewSort_o *v106; // x0
  const MethodInfo *v107; // x2
  int32_t v108; // w20
  Il2CppObject *v109; // x21
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x22
  __int64 v111; // x0
  System_Collections_Generic_Dictionary_int__int__o *v112; // x22
  __int64 v113; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v114; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v115; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v116; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_5972028 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Value__);
    sub_2213A60(&StringLiteral_3328/*"BonusKind2Id-"*/);
    sub_2213A60(&StringLiteral_6579/*"ExpUpDispType-"*/);
    sub_2213A60(&StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/);
    sub_2213A60(&StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/);
    sub_2213A60(&StringLiteral_2610/*"AutoOrganizationMode-"*/);
    sub_2213A60(&StringLiteral_3327/*"BonusKind2-"*/);
    sub_2213A60(&StringLiteral_11193/*"PresentBoxSortFilterNew-"*/);
    sub_2213A60(&StringLiteral_11207/*"PriorityKind-"*/);
    sub_2213A60(&StringLiteral_7856/*"IconSizeKind-"*/);
    sub_2213A60(&StringLiteral_3326/*"BonusKind-"*/);
    sub_2213A60(&StringLiteral_4593/*"ChoiceSortOrder-"*/);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    sub_2213A60(&StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_2609/*"AutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_10471/*"OtherSortKind-"*/);
    sub_2213A60(&StringLiteral_13180/*"ScrollBarValue-"*/);
    sub_2213A60(&StringLiteral_8328/*"IsClearFilterServantClass20231117-"*/);
    sub_2213A60(&StringLiteral_13475/*"SortFilter2-"*/);
    sub_2213A60(&StringLiteral_13479/*"SortKind-"*/);
    sub_2213A60(&StringLiteral_6578/*"ExpUpDispKind-"*/);
    sub_2213A60(&StringLiteral_13480/*"SortOrder-"*/);
    sub_2213A60(&StringLiteral_3329/*"BonusKindId-"*/);
    sub_2213A60(&StringLiteral_13749/*"SvtEventBonusFilterNew-"*/);
    byte_5972028 = 1;
  }
  isRequestLoad = this->fields.isRequestLoad;
  memset(&v116, 0, sizeof(v116));
  memset(&v115, 0, sizeof(v115));
  if ( isRequestLoad )
  {
    saveKey = this->fields.saveKey;
    v5 = (System_String_o *)StringLiteral_13479/*"SortKind-"*/;
    *(_WORD *)&this->fields.isRequestLoad = 256;
    v6 = System_String__Concat_75651716(v5, saveKey, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v6, this->fields.defaultSortKind, 0);
    v8 = (System_String_o *)StringLiteral_13480/*"SortOrder-"*/;
    v9 = this->fields.saveKey;
    this->fields.sortKind = Int;
    v10 = System_String__Concat_75651716(v8, v9, 0);
    v11 = UnityEngine_PlayerPrefs__GetInt(v10, this->fields.isDefaultAscendingOrder, 0);
    v12 = this->fields.saveKey;
    v13 = v11 == 0;
    v14 = (System_String_o *)StringLiteral_3326/*"BonusKind-"*/;
    v15 = !v13;
    this->fields.isAscendingOrder = v15;
    v16 = System_String__Concat_75651716(v14, v12, 0);
    v17 = UnityEngine_PlayerPrefs__GetInt(v16, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v18 = (System_String_o *)StringLiteral_3329/*"BonusKindId-"*/;
    v19 = this->fields.saveKey;
    this->fields.bonusKind = v17;
    v20 = System_String__Concat_75651716(v18, v19, 0);
    v21 = UnityEngine_PlayerPrefs__GetInt(v20, this->fields.bonusFilterInfoDefault.fields.eventId, 0);
    v22 = (System_String_o *)StringLiteral_3327/*"BonusKind2-"*/;
    v23 = this->fields.saveKey;
    this->fields.bonusKindId = v21;
    v24 = System_String__Concat_75651716(v22, v23, 0);
    v25 = UnityEngine_PlayerPrefs__GetInt(v24, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v26 = (System_String_o *)StringLiteral_3328/*"BonusKind2Id-"*/;
    v27 = this->fields.saveKey;
    this->fields.bonusKind2 = v25;
    v28 = System_String__Concat_75651716(v26, v27, 0);
    v29 = UnityEngine_PlayerPrefs__GetInt(v28, this->fields.bonusFilterInfoDefault.fields.eventId, 0);
    v30 = (System_String_o *)StringLiteral_13475/*"SortFilter2-"*/;
    v31 = this->fields.saveKey;
    this->fields.bonusKind2Id = v29;
    v32 = System_String__Concat_75651716(v30, v31, 0);
    v33 = UnityEngine_PlayerPrefs__GetInt(v32, 0, 0);
    v34 = (System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/;
    v35 = this->fields.saveKey;
    this->fields.filter2Kind = v33;
    v36 = System_String__Concat_75651716(v34, v35, 0);
    v37 = UnityEngine_PlayerPrefs__GetInt(v36, 1, 0);
    v38 = this->fields.saveKey;
    v13 = v37 == 1;
    v39 = (System_String_o *)StringLiteral_4593/*"ChoiceSortOrder-"*/;
    v40 = v13;
    this->fields.isSmartSort = v40;
    v41 = System_String__Concat_75651716(v39, v38, 0);
    this->fields.isChoiceSort = UnityEngine_PlayerPrefs__GetInt(v41, 0, 0) == 1;
    FilterListData = ListViewSort__GetFilterListData(this, v42);
    ListViewSort__SetFilterListData(this, FilterListData, v44);
    v45 = System_String__Concat_75651716((System_String_o *)StringLiteral_11193/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
    v46 = UnityEngine_PlayerPrefs__GetInt(v45, 0, 0);
    v47 = System_String__Concat_75651716((System_String_o *)StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
    v48 = UnityEngine_PlayerPrefs__GetInt(v47, 0, 0);
    v49 = System_String__Concat_75651716((System_String_o *)StringLiteral_7856/*"IconSizeKind-"*/, this->fields.saveKey, 0);
    v50 = UnityEngine_PlayerPrefs__GetInt(v49, 0, 0);
    v51 = this->fields.saveKey;
    this->fields.iconScaleKind = v50;
    v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_6578/*"ExpUpDispKind-"*/, v51, 0);
    v53 = UnityEngine_PlayerPrefs__GetInt(v52, 0, 0);
    v54 = this->fields.saveKey;
    this->fields.expUpDispKind = v53;
    v55 = System_String__Concat_75651716((System_String_o *)StringLiteral_6579/*"ExpUpDispType-"*/, v54, 0);
    v56 = UnityEngine_PlayerPrefs__GetInt(v55, 0, 0);
    v57 = this->fields.saveKey;
    this->fields.expUpDispType = v56;
    v58 = System_String__Concat_75651716((System_String_o *)StringLiteral_13180/*"ScrollBarValue-"*/, v57, 0);
    Float = UnityEngine_PlayerPrefs__GetFloat(v58, 0.0, 0);
    v60 = this->fields.saveKey;
    this->fields.scrollBarValue = Float;
    v61 = System_String__Concat_75651716((System_String_o *)StringLiteral_13749/*"SvtEventBonusFilterNew-"*/, v60, 0);
    String = UnityEngine_PlayerPrefs__GetString(v61, **(System_String_o ***)(qword_5984390 + 184), 0);
    v63 = System_String__Concat_75651716((System_String_o *)StringLiteral_2609/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v64 = UnityEngine_PlayerPrefs__GetInt(v63, 0, 0);
    v65 = System_String__Concat_75651716((System_String_o *)StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v66 = UnityEngine_PlayerPrefs__GetInt(v65, 0, 0);
    v67 = System_String__Concat_75651716((System_String_o *)StringLiteral_2610/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
    v68 = UnityEngine_PlayerPrefs__GetInt(v67, 0, 0);
    v69 = this->fields.saveKey;
    this->fields.autoOrganizationMode = v68;
    v70 = System_String__Concat_75651716((System_String_o *)StringLiteral_11207/*"PriorityKind-"*/, v69, 0);
    v71 = UnityEngine_PlayerPrefs__GetInt(v70, 0, 0);
    v72 = this->fields.saveKey;
    this->fields.priorityKind = v71;
    v73 = System_String__Concat_75651716((System_String_o *)StringLiteral_10471/*"OtherSortKind-"*/, v72, 0);
    v74 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetInt(v73, 11, 0);
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    this->fields.otherSortKind = (int)v74;
    if ( !svtEventBonusFilterDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
    if ( !isPresentBoxFilterList )
      goto LABEL_52;
    max_length_low = LODWORD(isPresentBoxFilterList->max_length);
    v80 = 0;
    m_Items = isPresentBoxFilterList->m_Items;
    do
    {
      if ( max_length_low == v80 )
LABEL_46:
        sub_2213CE4(v74);
      m_Items[v80++] = v46 & 1;
      v46 >>= 1;
    }
    while ( v80 != 15 );
    isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
    if ( !isPresentBoxRarityFilterList )
      goto LABEL_52;
    v83 = LODWORD(isPresentBoxRarityFilterList->max_length);
    v84 = 0;
    v85 = isPresentBoxRarityFilterList->m_Items;
    do
    {
      if ( v83 == v84 )
        goto LABEL_46;
      v85[v84++] = v48 & 1;
      v48 >>= 1;
    }
    while ( v84 != 5 );
    v74 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEventBonusFilterData(v74, String, v77);
    if ( !v74 )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v114,
      (System_Collections_Generic_Dictionary_object__object__o *)v74,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    v116 = v114;
    v114.fields._dictionary = 0;
    *(_QWORD *)&v114.fields._version = &v116;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v116,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__) )
    {
      key = v116.fields._current.fields.key;
      value = v116.fields._current.fields.value;
      v88 = this->fields.svtEventBonusFilterDic;
      v89 = System_Int32__Parse((System_String_o *)v116.fields._current.fields.key, 0);
      if ( !v88 )
        sub_2213CDC(v89, (unsigned int)v89);
      v90 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)v88,
              v89,
              (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
      v91 = this->fields.svtEventBonusFilterDic;
      if ( v90 )
      {
        v92 = System_Int32__Parse((System_String_o *)key, 0);
        if ( !v91 )
          sub_2213CDC(v92, (unsigned int)v92);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)v91,
          v92,
          value,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
      }
      else
      {
        v93 = System_Int32__Parse((System_String_o *)key, 0);
        if ( !v91 )
          sub_2213CDC(v93, (unsigned int)v93);
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)v91,
          v93,
          value,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v116,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
    if ( !isAutoOrganizationFilterList )
      goto LABEL_52;
    v95 = LODWORD(isAutoOrganizationFilterList->max_length);
    v96 = 0;
    v97 = isAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v95 == v96 )
        goto LABEL_46;
      v97[v96++] = v64 & 1;
      v64 >>= 1;
    }
    while ( v96 != 13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_52:
      sub_2213CDC(v74, v75);
    v99 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v100 = 0;
    v101 = isWaveBattleAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v99 == v100 )
        goto LABEL_46;
      v101[v100++] = v66 & 1;
      v66 >>= 1;
    }
    while ( v100 != 7 );
    v102 = System_String__Concat_75651716((System_String_o *)StringLiteral_8328/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v102, 0, 0) != 1 )
    {
      ListViewSort__ClassFilterOffInSameClass(this, method);
      v103 = System_String__Concat_75651716((System_String_o *)StringLiteral_8328/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v103, 1, 0);
    }
  }
  ListViewSort__AdjustmentEventBonusFilter(this, method);
  ListViewSort__InitSvtEquipEffectFilterList(this, v104);
  v105 = System_String__Concat_75651716((System_String_o *)StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  v106 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetString(v105, **(System_String_o ***)(qword_5984390 + 184), 0);
  v74 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEquipEffectFilterData(v106, (System_String_o *)v106, v107);
  if ( !v74 )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v114,
    (System_Collections_Generic_Dictionary_object__int__o *)v74,
    (const MethodInfo_3FF4498 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v115 = v114;
  v114.fields._dictionary = 0;
  *(_QWORD *)&v114.fields._version = &v115;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v115,
            (const MethodInfo_4167460 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    v109 = v115.fields._current.fields.key;
    v108 = (int32_t)v115.fields._current.fields.value;
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    v111 = System_Int32__Parse((System_String_o *)v115.fields._current.fields.key, 0);
    if ( !isSvtEquipEffectFilterDic )
      sub_2213CDC(v111, (unsigned int)v111);
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           isSvtEquipEffectFilterDic,
           v111,
           (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v112 = this->fields.isSvtEquipEffectFilterDic;
      v113 = System_Int32__Parse((System_String_o *)v109, 0);
      if ( !v112 )
        sub_2213CDC(v113, (unsigned int)v113);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v112,
        v113,
        v108,
        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v115,
    (const MethodInfo_4167584 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
}


void ListViewSort__ResetAllNormalFilter(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 max_length_low; // x9
  __int64 i; // x10

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, method);
  max_length_low = LODWORD(isFilterList->max_length);
  for ( i = 136; i != 31; --i )
  {
    if ( max_length_low <= 0x68 )
      sub_2213CE4(this);
    *((_BYTE *)&isFilterList->obj.klass + i) = (((_DWORD)i - 32) & 0x7FFFFFFE) == 40;
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

  if ( (byte_597202F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3328/*"BonusKind2Id-"*/);
    sub_2213A60(&StringLiteral_6579/*"ExpUpDispType-"*/);
    sub_2213A60(&StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/);
    sub_2213A60(&StringLiteral_2610/*"AutoOrganizationMode-"*/);
    sub_2213A60(&StringLiteral_3327/*"BonusKind2-"*/);
    sub_2213A60(&StringLiteral_11193/*"PresentBoxSortFilterNew-"*/);
    sub_2213A60(&StringLiteral_13476/*"SortFilterLongNew-"*/);
    sub_2213A60(&StringLiteral_11207/*"PriorityKind-"*/);
    sub_2213A60(&StringLiteral_7856/*"IconSizeKind-"*/);
    sub_2213A60(&StringLiteral_3326/*"BonusKind-"*/);
    sub_2213A60(&StringLiteral_4593/*"ChoiceSortOrder-"*/);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    sub_2213A60(&StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_2609/*"AutoOrganizationFilterNew-"*/);
    sub_2213A60(&StringLiteral_10471/*"OtherSortKind-"*/);
    sub_2213A60(&StringLiteral_13180/*"ScrollBarValue-"*/);
    sub_2213A60(&StringLiteral_13475/*"SortFilter2-"*/);
    sub_2213A60(&StringLiteral_13479/*"SortKind-"*/);
    sub_2213A60(&StringLiteral_6578/*"ExpUpDispKind-"*/);
    sub_2213A60(&StringLiteral_13480/*"SortOrder-"*/);
    sub_2213A60(&StringLiteral_3329/*"BonusKindId-"*/);
    byte_597202F = 1;
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
      if ( max_length_low <= 0xE )
LABEL_23:
        sub_2213CE4(FilterListDataText);
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
      if ( v14 <= 4 )
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
      if ( v20 <= 0xC )
        goto LABEL_23;
      v24 = v23[v21--];
      v22 = v24 | (2 * v22);
    }
    while ( v21 != -13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_24:
      sub_2213CDC(FilterListDataText, v4);
    v26 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v27 = 0;
    v28 = 0;
    v29 = &isWaveBattleAutoOrganizationFilterList->m_Items[6];
    do
    {
      if ( v26 <= 6 )
        goto LABEL_23;
      v30 = v29[v27--];
      v28 = v30 | (2 * v28);
    }
    while ( v27 != -7 );
    if ( ListViewSort__IsChangeSaveData(this, FilterListDataText, v10, v16, v22, v28, v5) )
    {
      v31 = System_String__Concat_75651716((System_String_o *)StringLiteral_13479/*"SortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v31, this->fields.sortKind, 0);
      v32 = System_String__Concat_75651716((System_String_o *)StringLiteral_13480/*"SortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v32, this->fields.isAscendingOrder, 0);
      v33 = System_String__Concat_75651716((System_String_o *)StringLiteral_3326/*"BonusKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v33, this->fields.bonusKind, 0);
      v34 = System_String__Concat_75651716((System_String_o *)StringLiteral_3329/*"BonusKindId-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v34, this->fields.bonusKindId, 0);
      v35 = System_String__Concat_75651716((System_String_o *)StringLiteral_3327/*"BonusKind2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v35, this->fields.bonusKind2, 0);
      v36 = System_String__Concat_75651716((System_String_o *)StringLiteral_3328/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v36, this->fields.bonusKind2Id, 0);
      v37 = System_String__Concat_75651716((System_String_o *)StringLiteral_13476/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetString(v37, v8, 0);
      v38 = System_String__Concat_75651716((System_String_o *)StringLiteral_11193/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v38, v10, 0);
      v39 = System_String__Concat_75651716((System_String_o *)StringLiteral_11192/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v39, v16, 0);
      ListViewSort__SetSvtEquipEffectFilter(this, v40);
      v41 = System_String__Concat_75651716((System_String_o *)StringLiteral_13475/*"SortFilter2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v41, this->fields.filter2Kind, 0);
      v42 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v42, this->fields.isSmartSort, 0);
      v43 = System_String__Concat_75651716((System_String_o *)StringLiteral_4593/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v43, this->fields.isChoiceSort, 0);
      v44 = System_String__Concat_75651716((System_String_o *)StringLiteral_7856/*"IconSizeKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v44, this->fields.iconScaleKind, 0);
      v45 = System_String__Concat_75651716((System_String_o *)StringLiteral_6578/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v45, this->fields.expUpDispKind, 0);
      v46 = System_String__Concat_75651716((System_String_o *)StringLiteral_6579/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v46, this->fields.expUpDispType, 0);
      v47 = System_String__Concat_75651716((System_String_o *)StringLiteral_13180/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetFloat(v47, this->fields.scrollBarValue, 0);
      ListViewSort__SetSvtEventBonusFilter(this, v48);
      v49 = System_String__Concat_75651716((System_String_o *)StringLiteral_2609/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v49, v22, 0);
      v50 = System_String__Concat_75651716((System_String_o *)StringLiteral_16215/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v50, v28, 0);
      v51 = System_String__Concat_75651716((System_String_o *)StringLiteral_2610/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v51, this->fields.autoOrganizationMode, 0);
      v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_11207/*"PriorityKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v52, this->fields.priorityKind, 0);
      v53 = System_String__Concat_75651716((System_String_o *)StringLiteral_10471/*"OtherSortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v53, this->fields.otherSortKind, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void ListViewSort__SaveDefaultSmartSort(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  int v3; // w8
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x1
  CombineServantListViewManager_c *v8; // x0
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  __int64 v12; // x1
  CombineServantListViewManager_c *v13; // x0
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  __int64 v17; // x1
  EventServantFatigueListViewManager_c *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x1
  PartyServantListViewManager_c *v21; // x0
  System_String_o *v22; // x19
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972034 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_13463/*"SmartSortOrder-"*/);
    byte_5972034 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  v3 = *(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1);
  v23 = 0;
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v1);
    v2 = CombineServantListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY = v2->static_fields->SORT_SAVE_KEY;
  v23 = 12;
  v5 = System_Int32__ToString((int32_t)&v23, 0);
  v6 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v5, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v6, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v6, 1, 0);
  v8 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v7);
    v8 = CombineServantListViewManager_TypeInfo;
  }
  v9 = v8->static_fields->SORT_SAVE_KEY;
  v23 = 13;
  v10 = System_Int32__ToString((int32_t)&v23, 0);
  v11 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v9, v10, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v11, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v11, 1, 0);
  v13 = CombineServantListViewManager_TypeInfo;
  if ( !*(&CombineServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo, v12);
    v13 = CombineServantListViewManager_TypeInfo;
  }
  v14 = v13->static_fields->SORT_SAVE_KEY;
  v23 = 10;
  v15 = System_Int32__ToString((int32_t)&v23, 0);
  v16 = System_String__Concat_75694928((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v14, v15, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v16, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v16, 1, 0);
  v18 = EventServantFatigueListViewManager_TypeInfo;
  if ( !*(&EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo, v17);
    v18 = EventServantFatigueListViewManager_TypeInfo;
  }
  v19 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v18->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v19, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v19, 1, 0);
  v21 = PartyServantListViewManager_TypeInfo;
  if ( !*(&PartyServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo, v20);
    v21 = PartyServantListViewManager_TypeInfo;
  }
  v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_13463/*"SmartSortOrder-"*/, v21->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v22, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v22, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIconScaleKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_5972032 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7856/*"IconSizeKind-"*/);
    byte_5972032 = 1;
  }
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_7856/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.iconScaleKind, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIsAscendingOrder(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_5972031 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13480/*"SortOrder-"*/);
    byte_5972031 = 1;
  }
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_13480/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.isAscendingOrder, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveSortKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_5972030 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10471/*"OtherSortKind-"*/);
    sub_2213A60(&StringLiteral_13479/*"SortKind-"*/);
    byte_5972030 = 1;
  }
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_13479/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.sortKind, 0);
  v4 = System_String__Concat_75651716((System_String_o *)StringLiteral_10471/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v4, this->fields.otherSortKind, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__Set(ListViewSort_o *this, ListViewSort_o *o, const MethodInfo *method)
{
  ListViewSort_o *v4; // x19
  struct System_Boolean_array *isFilterList; // x13
  struct System_Boolean_array *v6; // x10
  unsigned __int64 v7; // x9
  __int64 max_length_low; // x11
  bool *m_Items; // x13
  struct System_Boolean_array *isPresentBoxFilterList; // x13
  struct System_Boolean_array *v11; // x10
  __int64 v12; // x11
  unsigned __int64 v13; // x9
  bool *v14; // x13
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x13
  struct System_Boolean_array *v16; // x10
  __int64 v17; // x11
  unsigned __int64 v18; // x9
  bool *v19; // x13
  struct System_Boolean_array *isAutoOrganizationFilterList; // x13
  struct System_Boolean_array *v21; // x10
  __int64 v22; // x11
  unsigned __int64 v23; // x9
  bool *v24; // x13
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x13
  struct System_Boolean_array *v26; // x10
  __int64 v27; // x11
  unsigned __int64 v28; // x9
  bool *v29; // x13
  __int128 v30; // q0
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t key_high; // w21
  int32_t key; // w22
  __int64 v35; // x1
  bool v36; // w8
  System_Collections_Generic_Dictionary_int__int__o *v37; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *svtEventBonusFilterDic; // x20
  System_Collections_Generic_Dictionary_int__object__o *v39; // x21
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  _OWORD v46[2]; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_597203F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor___91596832);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    this = (ListViewSort_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_597203F = 1;
  }
  memset(&v47, 0, 32);
  if ( !o )
    goto LABEL_45;
  v4->fields.sortKind = o->fields.sortKind;
  v4->fields.otherSortKind = o->fields.otherSortKind;
  *(_WORD *)&v4->fields.isAscendingOrder = *(_WORD *)&o->fields.isAscendingOrder;
  v4->fields.listViewKind = o->fields.listViewKind;
  *(_OWORD *)&v4->fields.bonusKind = *(_OWORD *)&o->fields.bonusKind;
  *(_WORD *)&v4->fields.isSmartSort = *(_WORD *)&o->fields.isSmartSort;
  v4->fields.scrollBarValue = o->fields.scrollBarValue;
  *(_OWORD *)&v4->fields.iconScaleKind = *(_OWORD *)&o->fields.iconScaleKind;
  isFilterList = o->fields.isFilterList;
  if ( !isFilterList )
    goto LABEL_45;
  v6 = v4->fields.isFilterList;
  v7 = 0;
  max_length_low = LODWORD(isFilterList->max_length);
  m_Items = isFilterList->m_Items;
  do
  {
    if ( max_length_low == v7 )
      goto LABEL_44;
    if ( !v6 )
      goto LABEL_45;
    if ( v7 >= LODWORD(v6->max_length) )
LABEL_44:
      sub_2213CE4(this);
    v6->m_Items[v7] = m_Items[v7];
    ++v7;
  }
  while ( v7 != 105 );
  isPresentBoxFilterList = o->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    goto LABEL_45;
  v11 = v4->fields.isPresentBoxFilterList;
  v12 = LODWORD(isPresentBoxFilterList->max_length);
  v13 = 0;
  v14 = isPresentBoxFilterList->m_Items;
  do
  {
    if ( v12 == v13 )
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
    if ( v17 == v18 )
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
    if ( v22 == v23 )
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
    if ( v27 == v28 )
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
    sub_2213CDC(this, o);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v46,
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  v30 = v46[0];
  *(_QWORD *)&v46[0] = 0;
  *((_QWORD *)&v46[0] + 1) = &v47;
  *(_OWORD *)&v47.fields._dictionary = v30;
  v47.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v46[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v47,
            (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    isSvtEquipEffectFilterDic = v4->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_2213CDC(0, v31);
    key = (int32_t)v47.fields._current.fields.key;
    key_high = HIDWORD(v47.fields._current.fields.key);
    v36 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            isSvtEquipEffectFilterDic,
            (int32_t)v47.fields._current.fields.key,
            (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v37 = v4->fields.isSvtEquipEffectFilterDic;
    if ( v36 )
    {
      if ( !v37 )
        sub_2213CDC(0, v35);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v37,
        key,
        key_high,
        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
    else
    {
      if ( !v37 )
        sub_2213CDC(0, v35);
      System_Collections_Generic_Dictionary_int__int___Add(
        v37,
        key,
        key_high,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v47,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  svtEventBonusFilterDic = (System_Collections_Generic_IDictionary_TKey__TValue__o *)o->fields.svtEventBonusFilterDic;
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor_66698200(
    v39,
    svtEventBonusFilterDic,
    (const MethodInfo_3F9BBD8 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor___91596832);
  v4->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.svtEventBonusFilterDic,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetAllNomalFilter(ListViewSort_o *this, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x11
  __int64 max_length_low; // x9
  __int64 v5; // x8
  bool *m_Items; // x11

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, isEnable);
  max_length_low = LODWORD(isFilterList->max_length);
  v5 = 0;
  m_Items = isFilterList->m_Items;
  do
  {
    if ( max_length_low == v5 )
      sub_2213CE4(this);
    m_Items[v5++] = isEnable;
  }
  while ( v5 != 105 );
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
  __int64 v11; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_int__o *v12; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_597203B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597203B = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  memset(&v13, 0, sizeof(v13));
  if ( !isSvtEquipEffectFilterDic
    || (Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
                 isSvtEquipEffectFilterDic,
                 (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__),
        v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_71723804(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480),
        !v7) )
  {
    sub_2213CDC(isSvtEquipEffectFilterDic, isEnable);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    v7,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  if ( isEnable )
    v8 = 20;
  else
    v8 = 16;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v10 = this->fields.isSvtEquipEffectFilterDic;
    if ( !v10 )
      sub_2213CDC(0, v9);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v10,
      v13.fields._current,
      *(_DWORD *)((char *)&this->klass + v8),
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int v3; // w8
  ConstantStrMaster_o *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597203C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    byte_597203C = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v9, 0, sizeof(v9));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        (Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                  RewardUpFuncCategory,
                                                  (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___)) == 0) )
  {
    sub_2213CDC(Master_object, v5);
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v9,
    (System_Collections_Generic_HashSet_int__o *)Master_object,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v9,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_2213CDC(0, v7);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      isSvtEquipEffectFilterDic,
      (int32_t)v9.fields._current,
      this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE,
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void ListViewSort__SetExpUpDispKind(ListViewSort_o *this, int32_t dispKind, const MethodInfo *method)
{
  this->fields.expUpDispKind = dispKind;
}


void ListViewSort__SetExpUpDispType(ListViewSort_o *this, int32_t dispType, const MethodInfo *method)
{
  this->fields.expUpDispType = dispType;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetFilter(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_2213CE4(this);
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
  __int64 v7; // x8
  ListViewSort_o *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 i; // x21
  struct System_Boolean_array *isFilterList; // x8

  v4 = this;
  if ( (byte_5972029 & 1) == 0 )
  {
    this = (ListViewSort_o *)sub_2213A60(&long___TypeInfo);
    byte_5972029 = 1;
  }
  if ( !filterListDataText )
    goto LABEL_23;
  v5 = System_String__Split(filterListDataText, 0x2Cu, 0, 0);
  this = (ListViewSort_o *)sub_2213B20(long___TypeInfo, 2);
  if ( !this )
    goto LABEL_23;
  v7 = *(_QWORD *)&this->fields.FILTER_DEFAULT_VALUE;
  v8 = this;
  if ( (int)v7 >= 1 )
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
        LODWORD(v7) = *(_DWORD *)&v8->fields.FILTER_DEFAULT_VALUE;
      }
      if ( v9 >= (unsigned int)v7 )
LABEL_22:
        sub_2213CE4(this);
      LODWORD(v7) = *(_DWORD *)&v8->fields.FILTER_DEFAULT_VALUE;
      *((_QWORD *)&v8->fields.manager + v9++) = this;
      if ( (__int64)v9 >= (int)v7 )
        goto LABEL_14;
    }
LABEL_23:
    sub_2213CDC(this, filterListDataText);
  }
LABEL_14:
  for ( i = 0; i != 105; ++i )
  {
    if ( (unsigned int)i >> 6 >= *(_DWORD *)&v8->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_22;
    isFilterList = v4->fields.isFilterList;
    if ( !isFilterList )
      goto LABEL_23;
    if ( i >= LODWORD(isFilterList->max_length) )
      goto LABEL_22;
    isFilterList->m_Items[i] = ((__int64)*(&v8->fields.manager + ((unsigned int)i >> 6)) & (1LL << i)) != 0;
    if ( (i & 0xFFFFFFFE) == 0x28 )
      ListViewSort__SwitchFilter(v4, i, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetFilter_50883064(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isPresentBoxFilterList->m_Items[kind] = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetFilter_50883116(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isPresentBoxRarityFilterList->m_Items[kind] = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetFilter_50883348(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isAutoOrganizationFilterList->m_Items[kind] = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetFilter_50883400(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isWaveBattleAutoOrganizationFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilters(
        ListViewSort_o *this,
        ListViewSort_FilterKind_array *kindList,
        bool isEnable,
        const MethodInfo *method)
{
  int max_length; // w8
  struct System_Boolean_array *isFilterList; // x9
  int32_t *m_Items; // x11
  __int64 v7; // x12

  if ( kindList )
  {
    max_length = kindList->max_length;
    if ( max_length >= 1 )
    {
      isFilterList = this->fields.isFilterList;
      m_Items = kindList->m_Items;
      do
      {
        if ( !isFilterList )
          sub_2213CDC(this, kindList);
        v7 = *m_Items;
        if ( (unsigned int)v7 >= LODWORD(isFilterList->max_length) )
          sub_2213CE4(this);
        --max_length;
        ++m_Items;
        isFilterList->m_Items[v7] = isEnable;
      }
      while ( max_length );
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.manager = manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
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
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  int v13; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v15; // [xsp+10h] [xbp-80h]
  int key; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5972038 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/);
    byte_5972038 = 1;
  }
  key = 0;
  memset(&v17, 0, 32);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    sub_2213CDC(0, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v17,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  v14 = 0;
  v15 = &v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v17,
            (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v17.fields._current.fields.key);
    key = (int)v17.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    v13 = key_high;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
    if ( !v3 )
      sub_2213CDC(v8, v9);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      v8,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v17,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
  v11 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v11, 0) )
  {
    v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_13748/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v12, v11, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetSvtEquipEffectFilter_50883168(
        ListViewSort_o *this,
        int32_t categoryId,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  __int64 v8; // x8

  if ( (byte_5972048 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_5972048 = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
LABEL_10:
    sub_2213CDC(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
  v8 = 16;
  if ( isEnable )
    v8 = 20;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    isSvtEquipEffectFilterDic,
    categoryId,
    *(_DWORD *)((char *)&this->klass + v8),
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
}


void ListViewSort__SetSvtEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *value; // x21
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  int key; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5972039 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_2213A60(&StringLiteral_13749/*"SvtEventBonusFilterNew-"*/);
    byte_5972039 = 1;
  }
  key = 0;
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    sub_2213CDC(0, v4);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    value = v12.fields._current.fields.value;
    key = (int)v12.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    if ( !v3 )
      sub_2213CDC(v7, v7);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      value,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v12,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v9 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v9, 0) )
  {
    v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_13749/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v10, v9, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SetSvtEventBonusFilter_50883460(
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

  if ( (byte_5972049 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972049 = 1;
  }
  svtEventBonusFilterDic = (__int64)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_24;
  svtEventBonusFilterDic = System_Collections_Generic_Dictionary_int__object___ContainsKey(
                             (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                             eventId,
                             (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
  v10 = this->fields.svtEventBonusFilterDic;
  if ( (svtEventBonusFilterDic & 1) == 0 )
  {
    if ( isHide )
    {
      svtEventBonusFilterDic = sub_2213B20(int___TypeInfo, 1);
      if ( !svtEventBonusFilterDic )
        goto LABEL_24;
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
      if ( !*(_DWORD *)(svtEventBonusFilterDic + 24) )
        sub_2213CE4(svtEventBonusFilterDic);
      *(_DWORD *)(svtEventBonusFilterDic + 32) = objectId;
    }
    else
    {
      svtEventBonusFilterDic = sub_2213B20(int___TypeInfo, 0);
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
    }
    if ( v10 )
    {
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)v10,
        eventId,
        v16,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      return;
    }
    goto LABEL_24;
  }
  if ( !v10 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
           eventId,
           (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  v12 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Item,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  if ( isHide )
  {
    if ( !v12 )
      goto LABEL_24;
    svtEventBonusFilterDic = System_Collections_Generic_List_int___Contains(
                               v12,
                               objectId,
                               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( (svtEventBonusFilterDic & 1) == 0 )
    {
      items = v12->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_24;
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          objectId,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    if ( !v12 )
      goto LABEL_24;
    System_Collections_Generic_List_int___Remove(
      v12,
      objectId,
      (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
  }
  v17 = this->fields.svtEventBonusFilterDic;
  svtEventBonusFilterDic = (__int64)System_Collections_Generic_List_int___ToArray(
                                      v12,
                                      (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v17 )
LABEL_24:
    sub_2213CDC(svtEventBonusFilterDic, *(_QWORD *)&eventId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v17,
    eventId,
    (Il2CppObject *)svtEventBonusFilterDic,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
}


void ListViewSort__SetupSortLabelLayout(ListViewSort_o *this, UILabel_o *label, const MethodInfo *method)
{
  int32_t v4; // w20
  int32_t v5; // w1
  float v6; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  if ( this->fields.sortKind != 25 )
  {
    if ( label )
    {
      v6 = 1.0;
      v4 = 120;
      v5 = 22;
      goto LABEL_6;
    }
LABEL_7:
    sub_2213CDC(this, label);
  }
  if ( !label )
    goto LABEL_7;
  v4 = 180;
  v5 = 18;
  v6 = *(float *)"fff?";
LABEL_6:
  UILabel__set_fontSize(label, v5, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, v6, 0);
  UIWidget__set_width((UIWidget_o *)label, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchFilter(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchFilter_50884100(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isPresentBoxFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchFilter_50884156(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isPresentBoxRarityFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchFilter_50884420(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchFilter_50884476(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_2213CE4(this);
  isWaveBattleAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


// local variable allocation has failed, the output may be wrong!
void ListViewSort__SwitchSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x8
  int v7; // w9
  int32_t v8; // w2

  if ( (byte_597204A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_597204A = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic
    || (isSvtEquipEffectFilterDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                           isSvtEquipEffectFilterDic,
                                                                                           categoryId,
                                                                                           (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v6 = this->fields.isSvtEquipEffectFilterDic) == 0) )
  {
LABEL_12:
    sub_2213CDC(isSvtEquipEffectFilterDic, *(_QWORD *)&categoryId);
  }
  v7 = this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE + (_DWORD)isSvtEquipEffectFilterDic;
  if ( v7 >= 0 )
    v8 = v7 & 1;
  else
    v8 = -(v7 & 1);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v6,
    categoryId,
    v8,
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
}


bool ListViewSort__UnCheckPresentBoxFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x11
  __int64 max_length_low; // x8
  unsigned __int64 v4; // x9
  bool v5; // w10
  bool *m_Items; // x11
  bool v7; // cc

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_2213CDC(this, method);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  do
  {
    if ( max_length_low == v4 )
      sub_2213CE4(this);
    if ( m_Items[v4] )
      break;
    v7 = v4++ > 0xD;
    v5 = v7;
  }
  while ( v4 != 15 );
  return v5;
}


bool ListViewSort__UnCheckPresentBoxRarityFilterAll(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x11
  __int64 max_length_low; // x8
  unsigned __int64 v4; // x9
  bool v5; // w10
  bool *m_Items; // x11
  bool v7; // cc

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_2213CDC(this, method);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( max_length_low == v4 )
      sub_2213CE4(this);
    if ( m_Items[v4] )
      break;
    v7 = v4++ > 3;
    v5 = v7;
  }
  while ( v4 != 5 );
  return v5;
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
  unsigned __int64 v12; // x27
  int32_t *v13; // x29
  EventGroupEntity_o *v14; // x28
  int32_t v15; // w8
  int32_t v16; // w10
  __int64 v17; // x11
  ListViewSort_BonusFilterInfo_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ListViewSort_BonusFilterInfo_o v25; // [xsp+0h] [xbp-90h] BYREF
  __int64 v26; // [xsp+18h] [xbp-78h]
  int32_t v27; // [xsp+20h] [xbp-70h]
  __int64 v28; // [xsp+28h] [xbp-68h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_5972062 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    byte_5972062 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventGroupEntities, 0) )
  {
    v5 = System_Linq_Enumerable__ToList_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*bonusFilterInfos,
           (const MethodInfo_38A10F4 *)Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
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
      v12 = 0;
      v13 = &v10->m_Items[0].fields.eventId + 1;
      v14 = eventGroupEntities->m_Items[v9];
      while ( v12 < (unsigned int)v11 )
      {
        if ( !v14 )
          goto LABEL_21;
        v15 = *(v13 - 1);
        if ( v15 == v14->fields.eventId )
        {
          if ( !v8 )
            goto LABEL_21;
          v16 = v13[2];
          v17 = *(_QWORD *)(v13 - 3);
          v26 = *(_QWORD *)v13;
          v27 = v16;
          *(_QWORD *)&v25.fields.priority = v17;
          v25.fields.eventId = v15;
          *(_QWORD *)(&v25.fields.eventId + 1) = v26;
          HIDWORD(v25.fields.buttonText) = v16;
          v5 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_ListViewSort_BonusFilterInfo___Remove(
                                                               v8,
                                                               &v25,
                                                               (const MethodInfo_45207A8 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
        }
        LODWORD(v11) = v10->max_length;
        ++v12;
        v13 += 6;
        if ( (__int64)v12 >= (int)v11 )
          goto LABEL_17;
      }
LABEL_22:
      sub_2213CE4(v5);
    }
LABEL_18:
    if ( !v8 )
LABEL_21:
      sub_2213CDC(v5, v6);
    v18 = System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ToArray(
            v8,
            (const MethodInfo_4520E70 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    *bonusFilterInfos = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)bonusFilterInfos, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_5972022 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_5972022 = 1;
  }
  if ( this->fields.listViewKind != 1 )
    return 0;
  saveKey = this->fields.saveKey;
  v4 = WarehouseListViewManager_TypeInfo;
  if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, method);
  if ( !saveKey )
    sub_2213CDC(v4, method);
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
  bool v6; // w6
  bool v7; // w7
  int32_t kind; // w10
  int32_t eventId; // w11
  System_String_o *buttonText; // x8

  kind = this->fields.kind;
  eventId = this->fields.eventId;
  buttonText = this->fields.buttonText;
  *outPriority = this->fields.priority;
  *outKind = kind;
  *outEventId = eventId;
  *outButtonText = buttonText;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)outButtonText,
    (int32_t)buttonText,
    (System_String_o *)outKind,
    (System_String_o *)outEventId,
    (int32_t)outButtonText,
    (int32_t)method,
    v6,
    v7);
}


void ListViewSort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972063 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_5972063 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ListViewSort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewSort___c_TypeInfo->static_fields->__9 = (struct ListViewSort___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ListViewSort___c_TypeInfo->static_fields,
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

  if ( (byte_5972064 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___);
    this = (ListViewSort___c_o *)sub_2213A60(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_5972064 = 1;
  }
  if ( !group )
    sub_2213CDC(this, group);
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
    v7 = sub_224BC3C(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  return ((*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v7)(
            group,
            *(_QWORD *)(v7 + 8))
        & 0x80000000) == 0
      && System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)group,
           (const MethodInfo_3879F34 *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___) > 1;
}


int32_t ListViewSort___c___BonusFilterGroupingCheck_b__163_7(
        ListViewSort___c_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
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
  if ( (byte_5972065 & 1) == 0 )
  {
    this = (ListViewSort___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_5972065 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&pair.fields.key);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o *buttonText; // x8

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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_buttonText,
      (int32_t)ButtonTextFromLocalization,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = buttonText;
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
  struct System_String_o *buttonText; // x8
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             2,
             eventId,
             0,
             v4);
  buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = buttonText;
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
  struct System_String_o *buttonText; // x8
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             3,
             eventId,
             0,
             v4);
  buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = buttonText;
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
  struct System_String_o *buttonText; // x8
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             4,
             eventId,
             0,
             v4);
  buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = buttonText;
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
  struct System_String_o *buttonText; // x8
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             6,
             eventId,
             0,
             v4);
  buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = buttonText;
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
  struct System_String_o *buttonText; // x8
  ListViewSort_BonusFilterInfo_o v8; // [xsp+8h] [xbp-28h] BYREF

  result = ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__GetBonusFilterInfo_0(
             &v8,
             this,
             7,
             eventId,
             0,
             v4);
  buttonText = v8.fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&v8.fields.priority;
  retstr->fields.buttonText = buttonText;
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
    sub_2213CDC(this, bonusFilterInfo);
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
    sub_2213CDC(this, bonusFilterInfo);
  return bonusFilterInfo->fields.eventId == _4__this->fields.bonusKind2Id
      && bonusFilterInfo->fields.kind == _4__this->fields.bonusKind2;
}


void ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
        ListViewSort___c__DisplayClass162_0_o *this,
        ListViewSort_BonusFilterInfo_array *bonusFilterInfos,
        bool isNumbering,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ListViewSort___c_c *v8; // x0
  struct ListViewSort___c_StaticFields *static_fields; // x8
  System_Func_ListViewSort_BonusFilterInfo__bool__o *_9__162_12; // x21
  Il2CppObject *v11; // x22
  struct ListViewSort___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x20
  ListViewSort___c_c *v20; // x0
  struct ListViewSort___c_StaticFields *v21; // x8
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *_9__162_13; // x21
  Il2CppObject *v23; // x22
  struct ListViewSort___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Func_TSource__TResult__o *v32; // x1
  __int64 v33; // x21
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  __int64 v35; // x1
  ListViewSort___c_c *v36; // x0
  struct ListViewSort___c_StaticFields *v37; // x8
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_14; // x22
  Il2CppObject *v39; // x23
  struct ListViewSort___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  ListViewSort___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x19
  struct ListViewSort___c_StaticFields *v51; // x9
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_15; // x22
  Il2CppObject *v53; // x23
  struct ListViewSort___c_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x19
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *v62; // x22

  if ( (byte_5972067 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____91751200);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__);
    sub_2213A60(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__);
    sub_2213A60(&Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__);
    sub_2213A60(&ListViewSort___c__DisplayClass162_1_TypeInfo);
    sub_2213A60(&ListViewSort___c_TypeInfo);
    byte_5972067 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0) )
  {
    if ( !isNumbering )
      goto LABEL_12;
    v8 = ListViewSort___c_TypeInfo;
    if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v7);
      v8 = ListViewSort___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__162_12 = static_fields->__9__162_12;
    if ( !_9__162_12 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        static_fields = ListViewSort___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__162_12 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
        _9__162_12,
        v11,
        Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__,
        0);
      v12 = ListViewSort___c_TypeInfo->static_fields;
      v12->__9__162_12 = _9__162_12;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->__9__162_12,
        (int32_t)_9__162_12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo__59227448(
           (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
           (System_Func_TSource__bool__o *)_9__162_12,
           (const MethodInfo_387BD38 *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____91751200) >= 2 )
    {
      v33 = sub_2213CCC(ListViewSort___c__DisplayClass162_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0);
      if ( !v33 )
        goto LABEL_35;
      v36 = ListViewSort___c_TypeInfo;
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      *(_DWORD *)(v33 + 16) = 0;
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, v35);
        v36 = ListViewSort___c_TypeInfo;
      }
      v37 = v36->static_fields;
      _9__162_14 = v37->__9__162_14;
      if ( !_9__162_14 )
      {
        if ( !*(&v36->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v36, v35);
          v37 = ListViewSort___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)v37->__9;
        _9__162_14 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_14,
          v39,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__,
          0);
        v40 = ListViewSort___c_TypeInfo->static_fields;
        v40->__9__162_14 = _9__162_14;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v40->__9__162_14,
          (int32_t)_9__162_14,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      v47 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
              (System_Func_TSource__TKey__o *)_9__162_14,
              (const MethodInfo_38893F8 *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
      v49 = ListViewSort___c_TypeInfo;
      v50 = v47;
      if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v48);
        v49 = ListViewSort___c_TypeInfo;
      }
      v51 = v49->static_fields;
      _9__162_15 = v51->__9__162_15;
      if ( !_9__162_15 )
      {
        if ( !*(&v49->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v49, v48);
          v51 = ListViewSort___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v51->__9;
        _9__162_15 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_15,
          v53,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__,
          0);
        v54 = ListViewSort___c_TypeInfo->static_fields;
        v54->__9__162_15 = _9__162_15;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v54->__9__162_15,
          (int32_t)_9__162_15,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      v61 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
              v50,
              (System_Func_TSource__TKey__o *)_9__162_15,
              (const MethodInfo_389AE28 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
      v62 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
        v62,
        (Il2CppObject *)v33,
        Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__,
        0);
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v61;
      v32 = (System_Func_TSource__TResult__o *)v62;
    }
    else
    {
LABEL_12:
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      v20 = ListViewSort___c_TypeInfo;
      if ( !*(&ListViewSort___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo, v7);
        v20 = ListViewSort___c_TypeInfo;
      }
      v21 = v20->static_fields;
      _9__162_13 = v21->__9__162_13;
      if ( !_9__162_13 )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v20, v7);
          v21 = ListViewSort___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v21->__9;
        _9__162_13 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_2213CCC(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
          _9__162_13,
          v23,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__,
          0);
        v24 = ListViewSort___c_TypeInfo->static_fields;
        v24->__9__162_13 = _9__162_13;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v24->__9__162_13,
          (int32_t)_9__162_13,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos;
      v32 = (System_Func_TSource__TResult__o *)_9__162_13;
    }
    v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo_(
                                                           v31,
                                                           v32,
                                                           (const MethodInfo_3893558 *)Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    if ( allBonusFilterInfoList )
    {
      System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
        allBonusFilterInfoList,
        v34,
        (const MethodInfo_451F290 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
      return;
    }
LABEL_35:
    sub_2213CDC(v34, v35);
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
  EventFilterMaster_o *eventFilterMaster; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // zf
  int v19; // w8
  struct System_String_o *v20; // x1
  ListViewSort_BonusFilterInfo_o *result; // x0
  struct System_String_o *v22; // x8
  __int128 v23; // [xsp+8h] [xbp-58h]
  struct System_String_o *v24; // [xsp+18h] [xbp-48h] BYREF
  EventFilterEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5972066 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972066 = 1;
  }
  eventFilterMaster = this->fields.eventFilterMaster;
  entity = 0;
  v24 = 0;
  if ( !eventFilterMaster )
LABEL_11:
    sub_2213CDC(eventFilterMaster, *(_QWORD *)&kind);
  v24 = 0;
  *((_QWORD *)&v23 + 1) = (unsigned int)eventId;
  if ( EventFilterMaster__TryGetEntity_48991628(eventFilterMaster, &entity, eventId, type, 0) )
  {
    eventFilterMaster = (EventFilterMaster_o *)entity;
    if ( !entity )
      goto LABEL_11;
    LODWORD(v23) = entity->fields.priority;
    if ( kind == 4 )
    {
      v18 = !EventFilterEntity__IsQuestOpenEvent(entity, 0);
      eventFilterMaster = (EventFilterMaster_o *)entity;
      if ( v18 )
        v19 = 4;
      else
        v19 = 5;
      DWORD1(v23) = v19;
      if ( !entity )
        goto LABEL_11;
    }
    else
    {
      DWORD1(v23) = kind;
    }
    v20 = *(struct System_String_o **)&eventFilterMaster->fields.revision;
  }
  else
  {
    LODWORD(v23) = 0;
    DWORD1(v23) = kind;
    v20 = (struct System_String_o *)StringLiteral_1/*""*/;
  }
  v24 = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24, (int32_t)v20, v12, v13, v14, v15, v16, v17);
  v22 = v24;
  *(_OWORD *)&retstr->fields.priority = v23;
  retstr->fields.buttonText = v22;
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_String_o *buttonText; // x8

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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_buttonText,
      (int32_t)ButtonTextFromLocalization,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = buttonText;
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
    sub_2213CDC(0, bonusFilterInfo);
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
  if ( (byte_597206A & 1) == 0 )
  {
    this = (ListViewSort___c__DisplayClass163_0_o *)sub_2213A60(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_597206A = 1;
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
    v9 = sub_224BC3C(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  this = (ListViewSort___c__DisplayClass163_0_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v9)(
                                                    group,
                                                    *(_QWORD *)(v9 + 8));
  if ( !eventGroupMaster )
LABEL_12:
    sub_2213CDC(this, group);
  return EventGroupMaster__GetEntitiesByGroupId(eventGroupMaster, (int32_t)this, 0);
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array *eventFilterEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x0

  if ( (byte_5972068 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    byte_5972068 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventFilterEntities, 0) )
  {
    allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
    if ( !allBonusFilterInfoList )
      sub_2213CDC(0, v5);
    System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
      allBonusFilterInfoList,
      (System_Collections_Generic_IEnumerable_T__o *)eventFilterEntities,
      (const MethodInfo_451F290 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o *buttonText; // x1
  int32_t priority; // w9
  MissionNaviTransitionBoardItem_o *p_buttonText; // x0
  ListViewSort_BonusFilterInfo_array *v20; // x8
  int32_t id; // w9
  char *v22; // x8
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = *bonusFilterInfos;
  entity = 0;
  if ( !v4 )
    goto LABEL_10;
  v7 = this;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v4->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      return;
    if ( v9 >= max_length_low )
      goto LABEL_19;
    if ( !eventGroupEntities )
      goto LABEL_10;
    if ( v4->m_Items[v8].fields.eventId == eventGroupEntities->fields.eventId )
    {
      this = (ListViewSort___c__DisplayClass163_0_o *)v7->fields.eventFilterMaster;
      if ( !this )
        goto LABEL_10;
      this = (ListViewSort___c__DisplayClass163_0_o *)EventFilterMaster__TryGetEntity_48991628(
                                                        (EventFilterMaster_o *)this,
                                                        &entity,
                                                        eventGroupEntities->fields.id,
                                                        1,
                                                        0);
      v4 = *bonusFilterInfos;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    ++v9;
    ++v8;
    if ( !v4 )
      goto LABEL_10;
  }
  if ( !v4 || !entity )
    goto LABEL_10;
  if ( (unsigned int)v9 >= LODWORD(v4->max_length) )
    goto LABEL_19;
  buttonText = entity->fields.buttonText;
  priority = entity->fields.priority;
  v4->m_Items[v8].fields.buttonText = buttonText;
  p_buttonText = (MissionNaviTransitionBoardItem_o *)&v4->m_Items[v8].fields.buttonText;
  LODWORD(p_buttonText[-1].fields._NaviAction_k__BackingField) = priority;
  sub_2213A04(p_buttonText, (int32_t)buttonText, v11, v12, v13, v14, v15, v16);
  v20 = *bonusFilterInfos;
  if ( !*bonusFilterInfos || !entity )
LABEL_10:
    sub_2213CDC(this, bonusFilterInfos);
  if ( (unsigned int)v9 >= LODWORD(v20->max_length) )
LABEL_19:
    sub_2213CE4(this);
  id = entity->fields.id;
  v22 = (char *)v20 + v8 * 24;
  *((_DWORD *)v22 + 9) = 0;
  *((_DWORD *)v22 + 10) = id;
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array **eventFilterEntities,
        System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *eventGroupEntities,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v7; // x0
  System_Object_array *IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  EventGroupEntity_o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct EventFilterMaster_o *eventFilterMaster; // x8
  EventGroupEntity_array *v17; // x21
  int32_t id; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972069 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
    sub_2213A60(&System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo);
    byte_5972069 = 1;
  }
  v7 = (System_Collections_ICollection_o *)*eventFilterEntities;
  entity = 0;
  IsNullOrEmpty = (System_Object_array *)BasicHelper__IsNullOrEmpty(v7, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !eventGroupEntities )
      goto LABEL_18;
    klass = eventGroupEntities->klass;
    v11 = *(unsigned __int16 *)&eventGroupEntities->klass->_2.rank;
    if ( *(_WORD *)&eventGroupEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_224BC3C(
              eventGroupEntities,
              System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo,
              0);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *, _QWORD))v13)(
           eventGroupEntities,
           *(_QWORD *)(v13 + 8)) >= 2 )
    {
      v14 = (EventGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
                                    (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
      v15 = System_Linq_Enumerable__Skip_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
              1,
              (const MethodInfo_3899B4C *)Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
      IsNullOrEmpty = System_Linq_Enumerable__ToArray_object_(
                        v15,
                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
      eventFilterMaster = this->fields.eventFilterMaster;
      v17 = (EventGroupEntity_array *)IsNullOrEmpty;
      if ( v14 )
      {
        id = v14->fields.id;
        if ( eventFilterMaster )
          goto LABEL_14;
      }
      else
      {
        id = -1;
        if ( eventFilterMaster )
        {
LABEL_14:
          if ( EventFilterMaster__TryGetEntity_48991628(this->fields.eventFilterMaster, &entity, id, 1, 0) )
          {
            ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Replace_1(
              this,
              eventFilterEntities,
              v14,
              v19);
            ListViewSort___BonusFilterGroupingCheck_g__Remove_163_2(eventFilterEntities, v17, v20);
          }
          return;
        }
      }
LABEL_18:
      sub_2213CDC(IsNullOrEmpty, v9);
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

  if ( (byte_597206B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_597206B = 1;
  }
  removeIndividuality = this->fields.removeIndividuality;
  if ( !removeIndividuality )
    sub_2213CDC(0, *(_QWORD *)&e);
  return !System_Collections_Generic_List_int___Contains(
            removeIndividuality,
            e,
            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
}