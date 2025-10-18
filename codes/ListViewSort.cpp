void ListViewSort___ctor(ListViewSort_o *this, int32_t sortKind, bool isAscendingOrder, const MethodInfo *method)
{
  bool v6; // w22
  struct System_Boolean_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Boolean_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Boolean_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Boolean_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Boolean_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  __int128 v33; // [xsp+18h] [xbp-78h]
  struct System_String_o *v34; // [xsp+28h] [xbp-68h] BYREF

  v6 = isAscendingOrder;
  if ( (byte_4C44718 & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4C44718 = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v7 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 102);
  this->fields.isFilterList = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isFilterList, (int32_t)v7, v8, v9);
  v10 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxFilterList, (int32_t)v10, v11, v12);
  v13 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxRarityFilterList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isSvtEquipEffectFilterDic, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtEventBonusFilterDic, (int32_t)v19, v20, v21);
  v22 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isAutoOrganizationFilterList, (int32_t)v22, v23, v24);
  v25 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList, (int32_t)v25, v26, v27);
  LODWORD(v33) = 0;
  HIDWORD(v33) = 0;
  *(_QWORD *)((char *)&v33 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C36FFC((CGThumbnailListItem_o *)&v34, (int32_t)v34, v28, v29);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v34;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText, 0, v30, v31);
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
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v32);
  this->fields.sortKind = sortKind;
  this->fields.isAscendingOrder = v6;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
}


void ListViewSort___ctor_43838564(
        ListViewSort_o *this,
        System_String_o *saveKey,
        int32_t sortKind,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  bool v8; // w23
  struct System_Boolean_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Boolean_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Boolean_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__int__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Boolean_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Boolean_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int128 v37; // [xsp+18h] [xbp-78h]
  struct System_String_o *v38; // [xsp+28h] [xbp-68h] BYREF

  v8 = isAscendingOrder;
  if ( (byte_4C44719 & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4C44719 = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v9 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 102);
  this->fields.isFilterList = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isFilterList, (int32_t)v9, v10, v11);
  v12 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxFilterList, (int32_t)v12, v13, v14);
  v15 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxRarityFilterList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isSvtEquipEffectFilterDic, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtEventBonusFilterDic, (int32_t)v21, v22, v23);
  v24 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isAutoOrganizationFilterList, (int32_t)v24, v25, v26);
  v27 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList, (int32_t)v27, v28, v29);
  LODWORD(v37) = 0;
  HIDWORD(v37) = 0;
  *(_QWORD *)((char *)&v37 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C36FFC((CGThumbnailListItem_o *)&v38, (int32_t)v38, v30, v31);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v38;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v37;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText, 0, v32, v33);
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
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, v34);
  this->fields.saveKey = saveKey;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.saveKey, (int32_t)saveKey, v35, v36);
  this->fields.sortKind = sortKind;
  this->fields.isAscendingOrder = v8;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.filter2Kind = 0;
  *(_WORD *)&this->fields.isSmartSort = 0;
  *(_QWORD *)&this->fields.iconScaleKind = 0;
  this->fields.expUpDispType = 0;
  *(_QWORD *)&this->fields.otherSortKind = 11;
  if ( !System_String__IsNullOrEmpty(this->fields.saveKey, 0) )
    this->fields.isRequestLoad = 1;
}


void ListViewSort___ctor_43839288(ListViewSort_o *this, ListViewSort_o *o, const MethodInfo *method)
{
  struct System_Boolean_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Boolean_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Boolean_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_int__int__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Boolean_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Boolean_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  __int128 v31; // [xsp+8h] [xbp-68h]
  struct System_String_o *v32; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C4471A & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/);
    byte_4C4471A = 1;
  }
  this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE = 1;
  v5 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 102);
  this->fields.isFilterList = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isFilterList, (int32_t)v5, v6, v7);
  v8 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 15);
  this->fields.isPresentBoxFilterList = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxFilterList, (int32_t)v8, v9, v10);
  v11 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 5);
  this->fields.isPresentBoxRarityFilterList = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPresentBoxRarityFilterList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.isSvtEquipEffectFilterDic = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isSvtEquipEffectFilterDic, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtEventBonusFilterDic, (int32_t)v17, v18, v19);
  v20 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 13);
  this->fields.isAutoOrganizationFilterList = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isAutoOrganizationFilterList, (int32_t)v20, v21, v22);
  v23 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, 7);
  this->fields.isWaveBattleAutoOrganizationFilterList = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isWaveBattleAutoOrganizationFilterList, (int32_t)v23, v24, v25);
  LODWORD(v31) = 0;
  HIDWORD(v31) = 0;
  *(_QWORD *)((char *)&v31 + 4) = 0xFFFFFFFF00000001LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11708/*"SERVANT_SORT_BONUS_KIND_ALL"*/, 0);
  sub_1C36FFC((CGThumbnailListItem_o *)&v32, (int32_t)v32, v26, v27);
  this->fields.bonusFilterInfoDefault.fields.buttonText = v32;
  *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bonusFilterInfoDefault.fields.buttonText, 0, v28, v29);
  System_Object___ctor((Il2CppObject *)this, 0);
  ListViewSort__Set(this, o, v30);
}


void ListViewSort__AdjustmentEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *svtEventBonusFilterDic; // x0
  System_Collections_Generic_HashSet_int__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t current; // w22
  _BOOL8 v7; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  struct System_Collections_Generic_Dictionary_int__int____o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4C4471F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4471F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  memset(&i, 0, sizeof(i));
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         svtEventBonusFilterDic,
         (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__int____get_Count__) < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
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
        (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
      goto LABEL_29;
    }
LABEL_34:
    sub_1C372B4(svtEventBonusFilterDic);
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  svtEventBonusFilterDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                                                     svtEventBonusFilterDic,
                                                                                     (const MethodInfo_33FA244 *)Method_System_Collections_Generic_Dictionary_int__int____get_Keys__);
  if ( !svtEventBonusFilterDic )
    goto LABEL_34;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v13,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)svtEventBonusFilterDic,
    (const MethodInfo_36BE198 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int____GetEnumerator__);
  v15 = v13;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v15,
            (const MethodInfo_3551EC8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____MoveNext__) )
  {
    current = v15.fields._current;
    v7 = System_Collections_Generic_HashSet_int___Contains(
           v4,
           v15.fields._current,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( !v7 )
    {
      if ( !v5 )
        sub_1C372B4(v7);
      items = v5->fields._items;
      v9 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C372B4(v7);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          current,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = current;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v15,
    (const MethodInfo_3551EC4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int____Dispose__);
  if ( !v5 )
    goto LABEL_34;
  if ( v5->fields._size <= 0 )
    return;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    v5,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v13;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)v11,
          i.fields._current,
          (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__int____Remove__) )
  {
    v11 = this->fields.svtEventBonusFilterDic;
    if ( !v11 )
      sub_1C372B4(0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_29:
  ListViewSort__SetSvtEventBonusFilter(this, v12);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  ListViewSort_BonusFilterInfo_array *v17; // x1
  const MethodInfo *v18; // x2
  ListViewSort_BonusFilterInfo_array *v19; // x1
  const MethodInfo *v20; // x2
  ListViewSort_BonusFilterInfo_array *v21; // x1
  const MethodInfo *v22; // x2
  ListViewSort_BonusFilterInfo_array *v23; // x1
  const MethodInfo *v24; // x2
  ListViewSort_BonusFilterInfo_array *v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *v27; // x20
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v28; // x0
  ListViewSort___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x25
  System_Func_object__bool__o *_9__163_5; // x19
  Il2CppObject *v32; // x20
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__object__o *v37; // x20
  __int64 v38; // x8
  void *v39; // x25
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  ListViewSort___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x27
  System_Func_object__int__o *_9__163_7; // x28
  Il2CppObject *v56; // x19
  struct ListViewSort___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v60; // x0
  ListViewSort___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x28
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__163_8; // x19
  Il2CppObject *v65; // x20
  struct ListViewSort___c_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0

  if ( (byte_4C44735 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_EventGroupEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
    sub_1C37058(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
    sub_1C37058(&System_Func_EventGroupEntity__int__TypeInfo);
    sub_1C37058(&System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C37058(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__);
    sub_1C37058(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__);
    sub_1C37058(&Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__);
    sub_1C37058(&ListViewSort___c__DisplayClass163_0_TypeInfo);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C44735 = 1;
  }
  v6 = sub_1C372A4(ListViewSort___c__DisplayClass163_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64 *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !v6 )
    goto LABEL_69;
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)Master_object, v8, v9);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v6 + 24) = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v13,
    (const MethodInfo_384DFF4 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v6 + 16) = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v13, v14, v15);
  if ( *combineCampaignFilterEntities )
    v17 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*combineCampaignFilterEntities,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v17 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v17,
    v16);
  if ( *campaignEventFilterEntities )
    v19 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*campaignEventFilterEntities,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v19 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v19,
    v18);
  if ( *eventFilterEntities )
    v21 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*eventFilterEntities,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v21 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v21,
    v20);
  if ( *finishEventFilterEntities )
    v23 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*finishEventFilterEntities,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v23 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v23,
    v22);
  if ( *servantFilterEntities )
    v25 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            (System_Collections_Generic_IEnumerable_TSource__o *)*servantFilterEntities,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  else
    v25 = 0;
  ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
    (ListViewSort___c__DisplayClass163_0_o *)v6,
    v25,
    v24);
  v26 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
  v27 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__int____ctor(
    v27,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__4__,
    0);
  v28 = System_Linq_Enumerable__GroupBy_ListViewSort_BonusFilterInfo__int_(
          v26,
          (System_Func_TSource__TKey__o *)v27,
          (const MethodInfo_3112278 *)Method_System_Linq_Enumerable_GroupBy_ListViewSort_BonusFilterInfo__int___);
  v29 = ListViewSort___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v29 = ListViewSort___c_TypeInfo;
  }
  _9__163_5 = (System_Func_object__bool__o *)v29->static_fields->__9__163_5;
  if ( !_9__163_5 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = ListViewSort___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__163_5 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__TypeInfo);
    System_Func_object__bool____ctor(_9__163_5, v32, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_5__, 0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__163_5 = (struct System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___bool__o *)_9__163_5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__163_5, (int32_t)_9__163_5, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_object_(
          v30,
          (System_Func_TSource__bool__o *)_9__163_5,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_IGrouping_int__ListViewSort_BonusFilterInfo____);
  v37 = (System_Func_object__object__o *)sub_1C372A4(System_Func_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity___TypeInfo);
  System_Func_object__object____ctor(
    v37,
    (Il2CppObject *)v6,
    Method_ListViewSort___c__DisplayClass163_0__BonusFilterGroupingCheck_b__6__,
    0);
  Master_object = (__int64 *)System_Linq_Enumerable__Select_object__object_(
                               v36,
                               (System_Func_TSource__TResult__o *)v37,
                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_IGrouping_int__ListViewSort_BonusFilterInfo___List_EventGroupEntity____);
  if ( !Master_object )
LABEL_69:
    sub_1C372B4(Master_object);
  v38 = *Master_object;
  v39 = Master_object;
  v40 = *(unsigned __int16 *)(*Master_object + 302);
  if ( *(_WORD *)(*Master_object + 302) )
  {
    v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_List_EventGroupEntity___c **)v41 - 1) != System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_32;
    }
    v42 = v38 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_32:
    v42 = sub_1C87870(Master_object, System_Collections_Generic_IEnumerable_List_EventGroupEntity___TypeInfo, 0);
  }
  v43 = (*(__int64 (__fastcall **)(void *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
  if ( !v43 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_39;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_39:
      v47 = sub_1C87870(v43, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v43;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_List_EventGroupEntity___c **)v50 - 1) != System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_46;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_46:
      v51 = sub_1C87870(v43, System_Collections_Generic_IEnumerator_List_EventGroupEntity___TypeInfo, 0);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
    v53 = ListViewSort___c_TypeInfo;
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
    if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
      v53 = ListViewSort___c_TypeInfo;
    }
    _9__163_7 = (System_Func_object__int__o *)v53->static_fields->__9__163_7;
    if ( !_9__163_7 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = ListViewSort___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v53->static_fields->__9;
      _9__163_7 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__163_7, v56, Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_7__, 0);
      v57 = ListViewSort___c_TypeInfo->static_fields;
      v57->__9__163_7 = (struct System_Func_EventGroupEntity__int__o *)_9__163_7;
      sub_1C36FFC((CGThumbnailListItem_o *)&v57->__9__163_7, (int32_t)_9__163_7, v58, v59);
    }
    v60 = System_Linq_Enumerable__Select_object__int_(
            v54,
            (System_Func_TSource__TResult__o *)_9__163_7,
            (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_EventGroupEntity__int___);
    v61 = ListViewSort___c_TypeInfo;
    v62 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 16);
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
    if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
      v61 = ListViewSort___c_TypeInfo;
    }
    _9__163_8 = v61->static_fields->__9__163_8;
    if ( !_9__163_8 )
    {
      if ( !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v61 = ListViewSort___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v61->static_fields->__9;
      _9__163_8 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__int____ctor(
        _9__163_8,
        v65,
        Method_ListViewSort___c__BonusFilterGroupingCheck_b__163_8__,
        0);
      v66 = ListViewSort___c_TypeInfo->static_fields;
      v66->__9__163_8 = _9__163_8;
      sub_1C36FFC((CGThumbnailListItem_o *)&v66->__9__163_8, (int32_t)_9__163_8, v67, v68);
    }
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__int_(
                                                                 v62,
                                                                 (System_Func_TSource__TResult__o *)_9__163_8,
                                                                 (const MethodInfo_3120798 *)Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__int___);
    v70 = System_Linq_Enumerable__Intersect_int_(
            v63,
            v69,
            (const MethodInfo_3112308 *)Method_System_Linq_Enumerable_Intersect_int___);
    if ( System_Linq_Enumerable__Count_int_(v70, (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___) >= 2 )
    {
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        combineCampaignFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v54,
        v71);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        campaignEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v54,
        v72);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        eventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v54,
        v73);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        finishEventFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v54,
        v74);
      ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        (ListViewSort___c__DisplayClass163_0_o *)v6,
        servantFilterEntities,
        (System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *)v54,
        v75);
    }
  }
  v76 = *(_QWORD *)v43;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_66;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_66:
    v79 = sub_1C87870(v43, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v43, *(_QWORD *)(v79 + 8));
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
  const MethodInfo *v12; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x20
  int32_t *p_eventId; // x25

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bonusFilterInfos, 0);
  if ( IsNullOrEmpty )
    goto LABEL_11;
  if ( !bonusFilterInfos )
    sub_1C372B4(IsNullOrEmpty);
  max_length = bonusFilterInfos->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_11:
    LODWORD(v14) = -1;
  }
  else
  {
    v14 = 0;
    p_eventId = &bonusFilterInfos->m_Items[0].fields.eventId;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C372BC(IsNullOrEmpty);
      if ( *(p_eventId - 1) == kind && *p_eventId == kindId )
      {
        if ( !isQuestStart )
          break;
        IsNullOrEmpty = ListViewSort__IsFinishedCampaignId(kindId, kind, nowTime, v12);
        if ( !IsNullOrEmpty )
          break;
      }
      LODWORD(max_length) = bonusFilterInfos->max_length;
      ++v14;
      p_eventId += 6;
      if ( (__int64)v14 >= (int)max_length )
        goto LABEL_11;
    }
  }
  return v14;
}


bool ListViewSort__CheckBonusSelectSummonFilterDefaultAll(
        ListViewSort_o *this,
        int32_t servantFilterKind,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v7; // x21
  FilterKindList_c *v8; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x10
  FilterKindList_c *v13; // x0
  FilterKindList_c *v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  int32_t v18; // w9
  char *v19; // x8
  int v20; // w10
  FilterKindList_c *v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  int32_t v26; // w1
  __int64 v27; // x24
  unsigned __int64 v28; // x22
  const MethodInfo *v29; // x1
  struct System_Boolean_array *isFilterList; // x8
  const MethodInfo *v31; // x2

  if ( (byte_4C4473F & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4C4473F = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v7 )
    goto LABEL_42;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
    (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
    (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  items = v7->fields._items;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      65,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
  v12 = v7->fields._size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      66,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 66;
  }
  if ( servantFilterKind != 14 )
  {
    if ( servantFilterKind != 13 )
    {
      if ( servantFilterKind == 12 )
      {
        v13 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v13 = FilterKindList_TypeInfo;
        }
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)v13->static_fields->ClassExtra1FilterKindList,
          (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
          (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
          (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      }
      goto LABEL_33;
    }
    v21 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v21 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v21->static_fields->ClassExtra2FilterKindList,
      (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    v22 = v7->fields._items;
    v23 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v7->fields._version;
    if ( v22 )
    {
      v24 = v7->fields._size;
      if ( (unsigned int)v24 < LODWORD(v22->max_length) )
      {
        v18 = v24 + 1;
        v19 = (char *)v22 + 4 * v24;
        v20 = 68;
        goto LABEL_29;
      }
      v25 = v23[4];
      v26 = 68;
LABEL_32:
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v7,
        v26,
        *(const MethodInfo_378882C **)(*(_QWORD *)(v25 + 192) + 112LL));
      goto LABEL_33;
    }
LABEL_42:
    sub_1C372B4(v8);
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v14->static_fields->ClassExtra1FilterKindList,
    (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v15 = v7->fields._items;
  v16 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v7->fields._version;
  if ( !v15 )
    goto LABEL_42;
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    v25 = v16[4];
    v26 = 67;
    goto LABEL_32;
  }
  v18 = v17 + 1;
  v19 = (char *)v15 + 4 * v17;
  v20 = 67;
LABEL_29:
  v7->fields._size = v18;
  *((_DWORD *)v19 + 8) = v20;
LABEL_33:
  v27 = 133;
  while ( 1 )
  {
    v28 = v27 - 32;
    v8 = (FilterKindList_c *)System_Collections_Generic_List_Int32Enum___Contains(
                               v7,
                               v27 - 32,
                               (const MethodInfo_3788BA4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      isFilterList = this->fields.isFilterList;
      if ( !isFilterList )
        goto LABEL_42;
      if ( v28 >= LODWORD(isFilterList->max_length) )
        sub_1C372BC(v8);
      if ( this->fields.FILTER_DEFAULT_VALUE != (((v28 & 0xFFFFFFFE) == 40)
                                               ^ (*((_BYTE *)&isFilterList->obj.klass + v27) != 0)) )
        return 0;
    }
    if ( --v27 == 31 )
    {
      if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(this, v29) )
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
    sub_1C372B4(this);
  v6 = 133;
  while ( 1 )
  {
    if ( v6 - 32 >= (unsigned __int64)LODWORD(isFilterList->max_length) )
      sub_1C372BC(this);
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
    sub_1C372B4(this);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C372BC(this);
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
    sub_1C372B4(this);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C372BC(this);
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

  if ( (byte_4C44740 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C44740 = 1;
  }
  memset(&v7, 0, 32);
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v6,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v7.fields._dictionary = v6[0];
  v7.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v6[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v7,
            (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
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
    (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
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
  const MethodInfo *v13; // x3

  if ( (byte_4C44741 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_int__int_____);
    sub_1C37058(&Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
    sub_1C37058(&System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    sub_1C37058(&Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C44741 = 1;
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
                          (const MethodInfo_30D59A4 *)Method_BasicHelper_GetValue_int__int_____);
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
    _9__204_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_int__int_____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__204_0,
      v10,
      Method_ListViewSort___c__CheckSvtEventBonusFilterDefaultAll_b__204_0__,
      0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__204_0 = (struct System_Func_KeyValuePair_int__int_____bool__o *)_9__204_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__204_0, (int32_t)_9__204_0, v12, v13);
  }
  return System_Linq_Enumerable__All_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)svtEventBonusFilterDic,
           (System_Func_TSource__bool__o *)_9__204_0,
           (const MethodInfo_30F1110 *)Method_System_Linq_Enumerable_All_KeyValuePair_int__int______);
}


bool ListViewSort__CheckSvtGroupFilter(ListViewSort_o *this, int32_t filterKind, const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  int32_t v11; // w1

  if ( (byte_4C44751 & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C44751 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    sub_1C372B4(0);
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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

  if ( (byte_4C44731 & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C44731 = 1;
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
                                                (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_1C372B4(ClassFilterKindList);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7
    || (isFilterList->m_Items[7] = 0, max_length == 8)
    || (isFilterList->m_Items[8] = 0, max_length <= 9) )
  {
    sub_1C372BC(ClassFilterKindList);
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

  if ( (byte_4C44732 & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C44732 = 1;
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
                                                (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v5, 0, v6),
        (ClassFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList) == 0)
    || (v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                ClassFilterKindList,
                                                (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        ListViewSort__SetFilters(this, v7, 0, v8),
        (isFilterList = this->fields.isFilterList) == 0) )
  {
    sub_1C372B4(ClassFilterKindList);
  }
  max_length = isFilterList->max_length;
  if ( max_length <= 7 || (isFilterList->m_Items[7] = 0, max_length <= 0x1C) )
    sub_1C372BC(ClassFilterKindList);
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
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
}


void ListViewSort__ClearFilter(ListViewSort_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  const MethodInfo *v5; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x8
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x8
  bool *v13; // x10
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x8
  bool *v17; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x8
  bool *v21; // x10

  ListViewSort__SetAllNomalFilter(this, this->fields.FILTER_DEFAULT_VALUE, v2);
  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    goto LABEL_19;
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v8 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  do
  {
    if ( v8 >= max_length_low )
LABEL_18:
      sub_1C372BC(v4);
    m_Items[v8++] = 0;
  }
  while ( v8 != 15 );
  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    goto LABEL_19;
  v11 = LODWORD(isPresentBoxRarityFilterList->max_length);
  v12 = 0;
  v13 = isPresentBoxRarityFilterList->m_Items;
  do
  {
    if ( v12 >= v11 )
      goto LABEL_18;
    v13[v12++] = 0;
  }
  while ( v12 != 5 );
  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    goto LABEL_19;
  v15 = LODWORD(isAutoOrganizationFilterList->max_length);
  v16 = 0;
  v17 = isAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v16 >= v15 )
      goto LABEL_18;
    v17[v16++] = 0;
  }
  while ( v16 != 13 );
  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_19:
    sub_1C372B4(v4);
  v19 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
  v20 = 0;
  v21 = isWaveBattleAutoOrganizationFilterList->m_Items;
  do
  {
    if ( v20 >= v19 )
      goto LABEL_18;
    v21[v20++] = 0;
  }
  while ( v20 != 7 );
  ListViewSort__SetAllSvtEquipEffectFilter(this, 0, v5);
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
  Il2CppObject *key; // x20
  System_String_o *v9; // x0
  _BOOL8 v10; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C44720 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4C44720 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
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
      &v12,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v14 = v12;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v14,
              (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v14.fields._current.fields.value )
        sub_1C372B4(0);
      key = v14.fields._current.fields.key;
      v9 = (System_String_o *)((__int64 (*)(void))v14.fields._current.fields.value->klass->vtable[3].methodPtr)();
      v10 = System_Int32__TryParse(v9, &result, 0);
      if ( v10 )
      {
        if ( !v4 )
          sub_1C372B4(v10);
        System_Collections_Generic_Dictionary_object__int___Add(
          v4,
          key,
          result,
          (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v14,
      (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  Il2CppObject *value; // x22
  Il2CppObject *key; // x20
  __int64 v11; // x0
  __int64 v12; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  System_Collections_ICollection_c **v15; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x22
  unsigned __int64 i; // x23
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_ICollection_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  Il2CppObject *v29; // x24
  __int64 v30; // x0
  unsigned __int64 v31; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C44721 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C37058(&System_Collections_ICollection_TypeInfo);
    sub_1C37058(&System_Collections_IList_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4C44721 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__int_____ctor__);
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
      &v33,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v34,
             (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( !v8 )
        break;
      value = v34.fields._current.fields.value;
      if ( !v34.fields._current.fields.value )
        sub_1C372B4(v8);
      key = v34.fields._current.fields.key;
      v11 = sub_1C37194(v34.fields._current.fields.value, System_Collections_IList_TypeInfo);
      v12 = v11;
      if ( !v11 )
      {
        sub_1C37574(value);
LABEL_46:
        sub_1C372B4(v24);
      }
      v13 = *(_QWORD *)v11;
      v14 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
      {
        v15 = (System_Collections_ICollection_c **)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *(v15 - 1) != System_Collections_ICollection_TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * (*(_DWORD *)v15 + 1) + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_1C87870(v11, System_Collections_ICollection_TypeInfo, 1);
      }
      v17 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8));
      v18 = sub_1C37100(int___TypeInfo, v17);
      for ( i = 0; ; ++i )
      {
        v20 = *(_QWORD *)v12;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v22 = (System_Collections_ICollection_c **)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *(v22 - 1) != System_Collections_ICollection_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_24;
          }
          v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
        }
        else
        {
LABEL_24:
          v23 = sub_1C87870(v12, System_Collections_ICollection_TypeInfo, 1);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
        if ( (__int64)i >= (int)v24 )
          break;
        v25 = *(_QWORD *)v12;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IList_c **)v27 - 1) != System_Collections_IList_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_31;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_31:
          v28 = sub_1C87870(v12, System_Collections_IList_TypeInfo, 0);
        }
        v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v28)(
                                v12,
                                (unsigned int)i,
                                *(_QWORD *)(v28 + 8));
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v30 = System_Convert__ToInt32(v29, 0);
        if ( !v18 )
          sub_1C372B4(v30);
        if ( i >= *(unsigned int *)(v18 + 24) )
          sub_1C372BC(v30);
        v31 = v18 + 4 * i;
        *(_DWORD *)(v31 + 32) = v30;
      }
      if ( !v4 )
        goto LABEL_46;
      System_Collections_Generic_Dictionary_object__object___Add(
        v4,
        key,
        (Il2CppObject *)v18,
        (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__int____Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v34,
      (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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

  if ( (byte_4C4471C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3199/*"BonusKind2Id-"*/);
    sub_1C37058(&StringLiteral_6308/*"ExpUpDispType-"*/);
    sub_1C37058(&StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/);
    sub_1C37058(&StringLiteral_2499/*"AutoOrganizationMode-"*/);
    sub_1C37058(&StringLiteral_3198/*"BonusKind2-"*/);
    sub_1C37058(&StringLiteral_12928/*"SortFilterLongNew-"*/);
    sub_1C37058(&StringLiteral_10740/*"PriorityKind-"*/);
    sub_1C37058(&StringLiteral_7530/*"IconSizeKind-"*/);
    sub_1C37058(&StringLiteral_3197/*"BonusKind-"*/);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    sub_1C37058(&StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_2498/*"AutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_10066/*"OtherSortKind-"*/);
    sub_1C37058(&StringLiteral_12927/*"SortFilter2-"*/);
    sub_1C37058(&StringLiteral_12931/*"SortKind-"*/);
    sub_1C37058(&StringLiteral_6307/*"ExpUpDispKind-"*/);
    sub_1C37058(&StringLiteral_12926/*"SortFilter-"*/);
    sub_1C37058(&StringLiteral_12932/*"SortOrder-"*/);
    sub_1C37058(&StringLiteral_3200/*"BonusKindId-"*/);
    sub_1C37058(&StringLiteral_13195/*"SvtEventBonusFilterNew-"*/);
    byte_4C4471C = 1;
  }
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_12931/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
  v4 = System_String__Concat_63561656((System_String_o *)StringLiteral_12932/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0);
  v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_3197/*"BonusKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_3200/*"BonusKindId-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v6, 0);
  v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_3198/*"BonusKind2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
  v8 = System_String__Concat_63561656((System_String_o *)StringLiteral_3199/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v8, 0);
  v9 = System_String__Concat_63561656((System_String_o *)StringLiteral_12926/*"SortFilter-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
  v10 = System_String__Concat_63561656((System_String_o *)StringLiteral_12927/*"SortFilter2-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v10, 0);
  v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_12928/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
  v12 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v12, 0);
  v13 = System_String__Concat_63561656((System_String_o *)StringLiteral_7530/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
  v14 = System_String__Concat_63561656((System_String_o *)StringLiteral_6307/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
  v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_6308/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
  v16 = System_String__Concat_63561656((System_String_o *)StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v16, 0);
  v17 = System_String__Concat_63561656((System_String_o *)StringLiteral_13195/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v17, 0);
  v18 = System_String__Concat_63561656((System_String_o *)StringLiteral_2498/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v18, 0);
  v19 = System_String__Concat_63561656((System_String_o *)StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v19, 0);
  v20 = System_String__Concat_63561656((System_String_o *)StringLiteral_2499/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v20, 0);
  v21 = System_String__Concat_63561656((System_String_o *)StringLiteral_10740/*"PriorityKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__DeleteKey(v21, 0);
  v22 = System_String__Concat_63561656((System_String_o *)StringLiteral_10066/*"OtherSortKind-"*/, this->fields.saveKey, 0);
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

  if ( (byte_4C44728 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&ServantCostumeListViewManager_TypeInfo);
    sub_1C37058(&ServantOperationListViewManager_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&WarehouseListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    byte_4C44728 = 1;
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
  v4 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v3, 0);
  UnityEngine_PlayerPrefs__SetInt(v4, 1, 0);
  v5 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v6 = System_Int32__ToString((int32_t)&v59, 0);
  v7 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v5, v6, 0);
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
  v11 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v9, v10, 0);
  UnityEngine_PlayerPrefs__SetInt(v11, 1, 0);
  v12 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v13 = System_Int32__ToString((int32_t)&v59, 0);
  v14 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v12, v13, 0);
  UnityEngine_PlayerPrefs__SetInt(v14, 1, 0);
  v15 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 4;
  v16 = System_Int32__ToString((int32_t)&v59, 0);
  v17 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v15, v16, 0);
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
  v21 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v19, v20, 0);
  UnityEngine_PlayerPrefs__SetInt(v21, 1, 0);
  v22 = SvtEqCombineListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v23 = System_Int32__ToString((int32_t)&v59, 0);
  v24 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v22, v23, 0);
  UnityEngine_PlayerPrefs__SetInt(v24, 1, 0);
  v25 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 3;
  v26 = System_Int32__ToString((int32_t)&v59, 0);
  v27 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v25, v26, 0);
  UnityEngine_PlayerPrefs__SetInt(v27, 1, 0);
  v28 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 9;
  v29 = System_Int32__ToString((int32_t)&v59, 0);
  v30 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v28, v29, 0);
  UnityEngine_PlayerPrefs__SetInt(v30, 1, 0);
  v31 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 8;
  v32 = System_Int32__ToString((int32_t)&v59, 0);
  v33 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v31, v32, 0);
  UnityEngine_PlayerPrefs__SetInt(v33, 1, 0);
  v34 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 5;
  v35 = System_Int32__ToString((int32_t)&v59, 0);
  v36 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v34, v35, 0);
  UnityEngine_PlayerPrefs__SetInt(v36, 1, 0);
  v37 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 7;
  v38 = System_Int32__ToString((int32_t)&v59, 0);
  v39 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v37, v38, 0);
  UnityEngine_PlayerPrefs__SetInt(v39, 1, 0);
  v40 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 11;
  v41 = System_Int32__ToString((int32_t)&v59, 0);
  v42 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v40, v41, 0);
  UnityEngine_PlayerPrefs__SetInt(v42, 1, 0);
  v43 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 12;
  v44 = System_Int32__ToString((int32_t)&v59, 0);
  v45 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v43, v44, 0);
  UnityEngine_PlayerPrefs__SetInt(v45, 1, 0);
  v46 = CombineServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 13;
  v47 = System_Int32__ToString((int32_t)&v59, 0);
  v48 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v46, v47, 0);
  UnityEngine_PlayerPrefs__SetInt(v48, 1, 0);
  v49 = ServantCostumeListViewManager_TypeInfo;
  if ( !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v49 = ServantCostumeListViewManager_TypeInfo;
  }
  v50 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v49->static_fields->SORT_SAVE_KEY, 0);
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
  v54 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v52, v53, 0);
  UnityEngine_PlayerPrefs__SetInt(v54, 1, 0);
  v55 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v59 = 2;
  v56 = System_Int32__ToString((int32_t)&v59, 0);
  v57 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v55, v56, 0);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v17; // x28
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Master_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5
  System_Func_int__ListViewSort_BonusFilterInfo__o *v25; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  ListViewSort_BonusFilterInfo_array *v27; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v28; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  ListViewSort_BonusFilterInfo_array *v30; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v31; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  ListViewSort_BonusFilterInfo_array *v33; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v34; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  ListViewSort_BonusFilterInfo_array *v36; // x0
  System_Func_int__ListViewSort_BonusFilterInfo__o *v37; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  ListViewSort_BonusFilterInfo_array *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct ListViewSort_BonusFilterInfo_array *items; // x8
  _QWORD *v51; // x10
  __int64 size; // x9
  __int128 v53; // q0
  CGThumbnailListItem_o *v54; // x0
  const MethodInfo_384E910 *v55; // x2
  System_Collections_Generic_List_T__o *v56; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v57; // x23
  System_Collections_Generic_List_T__o *v58; // x20
  System_Func_ListViewSort_BonusFilterInfo__bool__o *v59; // x23
  ListViewSort___c_c *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_9; // x20
  Il2CppObject *v63; // x21
  struct ListViewSort___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x0
  ListViewSort___c_c *v68; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_10; // x20
  Il2CppObject *v71; // x21
  struct ListViewSort___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x0
  ListViewSort___c_c *v76; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_11; // x20
  Il2CppObject *v79; // x21
  struct ListViewSort___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  CGThumbnailListItem_o v87; // [xsp+50h] [xbp-D0h] BYREF

  if ( (byte_4C44734 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___);
    sub_1C37058(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__);
    sub_1C37058(&ListViewSort___c__DisplayClass162_0_TypeInfo);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    sub_1C37058(&StringLiteral_11713/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/);
    byte_4C44734 = 1;
  }
  memset(&v87, 0, 48);
  v13 = sub_1C372A4(ListViewSort___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_53;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v15, v16);
  v17 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Collections_Generic_List_ListViewSort_BonusFilterInfo__TypeInfo);
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo____ctor(
    v17,
    (const MethodInfo_384DFF4 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ctor__);
  *(_QWORD *)(v13 + 24) = v17;
  v18 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o **)(v13 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v17, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventFilterMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Master_object, v22, v23);
  if ( combineCampaignIds )
  {
    v25 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v25,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__1__,
      0);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)combineCampaignIds,
                                                                 (System_Func_TSource__TResult__o *)v25,
                                                                 (const MethodInfo_311BC50 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v27 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v26,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v27 = 0;
  }
  v87.fields.sortValue0B = (int64_t)v27;
  if ( campaignIds )
  {
    v28 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v28,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__2__,
      0);
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)campaignIds,
                                                                 (System_Func_TSource__TResult__o *)v28,
                                                                 (const MethodInfo_311BC50 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v30 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v29,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v30 = 0;
  }
  v87.fields.sortValue0 = (int64_t)v30;
  if ( eventIds )
  {
    v31 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v31,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__3__,
      0);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                                 (System_Func_TSource__TResult__o *)v31,
                                                                 (const MethodInfo_311BC50 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v33 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v32,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v33 = 0;
  }
  *(_QWORD *)&v87.fields.sortIndex = v33;
  if ( finishEventIds )
  {
    v34 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v34,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__4__,
      0);
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)finishEventIds,
                                                                 (System_Func_TSource__TResult__o *)v34,
                                                                 (const MethodInfo_311BC50 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v36 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v35,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v36 = 0;
  }
  *(_QWORD *)&v87.fields.selectNum = v36;
  if ( servantFilterIds )
  {
    v37 = (System_Func_int__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_int__ListViewSort_BonusFilterInfo__TypeInfo);
    System_Func_int__ListViewSort_BonusFilterInfo____ctor(
      v37,
      (Il2CppObject *)v13,
      Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__5__,
      0);
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__ListViewSort_BonusFilterInfo_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)servantFilterIds,
                                                                 (System_Func_TSource__TResult__o *)v37,
                                                                 (const MethodInfo_311BC50 *)Method_System_Linq_Enumerable_Select_int__ListViewSort_BonusFilterInfo___);
    v39 = System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
            v38,
            (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
  }
  else
  {
    v39 = 0;
  }
  v87.monitor = v39;
  ListViewSort__BonusFilterGroupingCheck(
    (ListViewSort_BonusFilterInfo_array **)&v87.fields.sortValue0B,
    (ListViewSort_BonusFilterInfo_array **)&v87.fields.sortValue0,
    (ListViewSort_BonusFilterInfo_array **)&v87.fields.sortIndex,
    (ListViewSort_BonusFilterInfo_array **)&v87.fields,
    (ListViewSort_BonusFilterInfo_array **)&v87.monitor,
    v24);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v87.fields.sortValue0B,
    0,
    v40);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v87.fields.sortValue0,
    0,
    v41);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v87.fields.sortIndex,
    1,
    v42);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    *(ListViewSort_BonusFilterInfo_array **)&v87.fields.selectNum,
    0,
    v43);
  ListViewSort___c__DisplayClass162_0___GetAlignedBonusFilter_g__Add_6(
    (ListViewSort___c__DisplayClass162_0_o *)v13,
    (ListViewSort_BonusFilterInfo_array *)v87.monitor,
    1,
    v44);
  if ( !isQuestStart && ListViewSort__get_IsWareHouseEquipList(this, v45) )
  {
    v87.klass = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v87.klass = (CGThumbnailListItem_c *)LocalizationManager__Get((System_String_o *)StringLiteral_11713/*"SERVANT_SORT_BONUS_KIND_CLOSE_EVENT"*/, 0);
    sub_1C36FFC(&v87, (int32_t)v87.klass, v46, v47);
    v14 = *v18;
    if ( *v18 )
    {
      *(_OWORD *)&v87.fields.sortValue1 = 0x800000000uLL;
      v87.fields.sortValue1B = (int64_t)v87.klass;
      items = v14->fields._items;
      v51 = Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Add__;
      ++v14->fields._version;
      if ( items )
      {
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v55 = *(const MethodInfo_384E910 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL);
          *(_OWORD *)&v87.fields.sortValue2B = *(_OWORD *)&v87.fields.sortValue1;
          *(_QWORD *)&v87.fields.isTermination = v87.fields.sortValue1B;
          System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddWithResize(
            v14,
            (ListViewSort_BonusFilterInfo_o *)&v87.fields.sortValue2B,
            v55);
        }
        else
        {
          v14->fields._size = size + 1;
          v53 = *(_OWORD *)&v87.fields.sortValue1;
          v54 = (CGThumbnailListItem_o *)((char *)items + 24 * size);
          v54->fields.sortValue1 = v87.fields.sortValue1B;
          v54 = (CGThumbnailListItem_o *)((char *)v54 + 48);
          *(_OWORD *)&v54[-1].fields._Type_k__BackingField = v53;
          sub_1C36FFC(v54, 0, v48, v49);
        }
        goto LABEL_30;
      }
    }
LABEL_53:
    sub_1C372B4(v14);
  }
LABEL_30:
  v56 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v57 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v57,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__7__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v56,
          (System_Func_T__bool__o *)v57,
          (const MethodInfo_30D14A0 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v58 = *(System_Collections_Generic_List_T__o **)(v13 + 24);
  v59 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
  System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
    v59,
    (Il2CppObject *)v13,
    Method_ListViewSort___c__DisplayClass162_0__GetAlignedBonusFilter_b__8__,
    0);
  if ( !BasicHelper__Any_ListViewSort_BonusFilterInfo_(
          v58,
          (System_Func_T__bool__o *)v59,
          (const MethodInfo_30D14A0 *)Method_BasicHelper_Any_ListViewSort_BonusFilterInfo___) )
    *(_QWORD *)&this->fields.bonusKind2 = *(_QWORD *)&this->fields.bonusFilterInfoDefault.fields.kind;
  v60 = ListViewSort___c_TypeInfo;
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)*v18;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v60 = ListViewSort___c_TypeInfo;
  }
  _9__162_9 = v60->static_fields->__9__162_9;
  if ( !_9__162_9 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = ListViewSort___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v60->static_fields->__9;
    _9__162_9 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_9,
      v63,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_9__,
      0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__162_9 = _9__162_9;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__162_9, (int32_t)_9__162_9, v65, v66);
  }
  v67 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
          v61,
          (System_Func_TSource__TKey__o *)_9__162_9,
          (const MethodInfo_3117B4C *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
  v68 = ListViewSort___c_TypeInfo;
  v69 = v67;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v68 = ListViewSort___c_TypeInfo;
  }
  _9__162_10 = v68->static_fields->__9__162_10;
  if ( !_9__162_10 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = ListViewSort___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__162_10 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_10,
      v71,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_10__,
      0);
    v72 = ListViewSort___c_TypeInfo->static_fields;
    v72->__9__162_10 = _9__162_10;
    sub_1C36FFC((CGThumbnailListItem_o *)&v72->__9__162_10, (int32_t)_9__162_10, v73, v74);
  }
  v75 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
          v69,
          (System_Func_TSource__TKey__o *)_9__162_10,
          (const MethodInfo_3126788 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  v76 = ListViewSort___c_TypeInfo;
  v77 = v75;
  if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
    v76 = ListViewSort___c_TypeInfo;
  }
  _9__162_11 = v76->static_fields->__9__162_11;
  if ( !_9__162_11 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = ListViewSort___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__162_11 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    System_Func_ListViewSort_BonusFilterInfo__int____ctor(
      _9__162_11,
      v79,
      Method_ListViewSort___c__GetAlignedBonusFilter_b__162_11__,
      0);
    v80 = ListViewSort___c_TypeInfo->static_fields;
    v80->__9__162_11 = _9__162_11;
    sub_1C36FFC((CGThumbnailListItem_o *)&v80->__9__162_11, (int32_t)_9__162_11, v81, v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
                                                               v77,
                                                               (System_Func_TSource__TKey__o *)_9__162_11,
                                                               (const MethodInfo_3126788 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
  return System_Linq_Enumerable__ToArray_ListViewSort_BonusFilterInfo_(
           v83,
           (const MethodInfo_31276B0 *)Method_System_Linq_Enumerable_ToArray_ListViewSort_BonusFilterInfo___);
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

  if ( (byte_4C44737 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_4C44737 = 1;
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
    (const MethodInfo_30D6500 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
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
    sub_1C372B4(this);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C372BC(this);
  return isFilterList->m_Items[kind];
}


System_String_o *ListViewSort__GetFilterKindText(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 *v4; // x8
  LocalizationManager_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_4C44743 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11801/*"SERVANT_SORT_FILTER_NP_QUICK"*/);
    sub_1C37058(&StringLiteral_11766/*"SERVANT_SORT_FILTER_KIND_2"*/);
    sub_1C37058(&StringLiteral_11846/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/);
    sub_1C37058(&StringLiteral_11758/*"SERVANT_SORT_FILTER_CHOICE"*/);
    sub_1C37058(&StringLiteral_11795/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/);
    sub_1C37058(&StringLiteral_11816/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/);
    sub_1C37058(&StringLiteral_11783/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/);
    sub_1C37058(&StringLiteral_11845/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/);
    sub_1C37058(&StringLiteral_11823/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/);
    sub_1C37058(&StringLiteral_11849/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/);
    sub_1C37058(&StringLiteral_11771/*"SERVANT_SORT_FILTER_KIND_6"*/);
    sub_1C37058(&StringLiteral_11800/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/);
    sub_1C37058(&StringLiteral_11762/*"SERVANT_SORT_FILTER_HP_SECOND"*/);
    sub_1C37058(&StringLiteral_11786/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/);
    sub_1C37058(&StringLiteral_11802/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/);
    sub_1C37058(&StringLiteral_11834/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/);
    sub_1C37058(&StringLiteral_11850/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/);
    sub_1C37058(&StringLiteral_11775/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/);
    sub_1C37058(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C37058(&StringLiteral_11847/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/);
    sub_1C37058(&StringLiteral_11772/*"SERVANT_SORT_FILTER_KIND_7"*/);
    sub_1C37058(&StringLiteral_11768/*"SERVANT_SORT_FILTER_KIND_3"*/);
    sub_1C37058(&StringLiteral_11761/*"SERVANT_SORT_FILTER_HP_FIRST"*/);
    sub_1C37058(&StringLiteral_11799/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/);
    sub_1C37058(&StringLiteral_11739/*"SERVANT_SORT_FILTER_CAN_SELECT"*/);
    sub_1C37058(&StringLiteral_11815/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/);
    sub_1C37058(&StringLiteral_11737/*"SERVANT_SORT_FILTER_ATK_FIRST"*/);
    sub_1C37058(&StringLiteral_11785/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/);
    sub_1C37058(&StringLiteral_11794/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/);
    sub_1C37058(&StringLiteral_11836/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/);
    sub_1C37058(&StringLiteral_11797/*"SERVANT_SORT_FILTER_NP_ARTS"*/);
    sub_1C37058(&StringLiteral_11810/*"SERVANT_SORT_FILTER_SAME_CLASS"*/);
    sub_1C37058(&StringLiteral_11773/*"SERVANT_SORT_FILTER_KIND_8"*/);
    sub_1C37058(&StringLiteral_11833/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/);
    sub_1C37058(&StringLiteral_11852/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/);
    sub_1C37058(&StringLiteral_11788/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/);
    sub_1C37058(&StringLiteral_11811/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/);
    sub_1C37058(&StringLiteral_11827/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/);
    sub_1C37058(&StringLiteral_11832/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/);
    sub_1C37058(&StringLiteral_11813/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/);
    sub_1C37058(&StringLiteral_11778/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/);
    sub_1C37058(&StringLiteral_11814/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/);
    sub_1C37058(&StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C37058(&StringLiteral_11764/*"SERVANT_SORT_FILTER_KIND_10"*/);
    sub_1C37058(&StringLiteral_11821/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/);
    sub_1C37058(&StringLiteral_11763/*"SERVANT_SORT_FILTER_KIND_1"*/);
    sub_1C37058(&StringLiteral_11787/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/);
    sub_1C37058(&StringLiteral_11848/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/);
    sub_1C37058(&StringLiteral_11769/*"SERVANT_SORT_FILTER_KIND_4"*/);
    sub_1C37058(&StringLiteral_11784/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/);
    sub_1C37058(&StringLiteral_11760/*"SERVANT_SORT_FILTER_HPMAX"*/);
    sub_1C37058(&StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C37058(&StringLiteral_11825/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/);
    sub_1C37058(&StringLiteral_11790/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/);
    sub_1C37058(&StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C37058(&StringLiteral_11818/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/);
    sub_1C37058(&StringLiteral_11824/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/);
    sub_1C37058(&StringLiteral_11812/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/);
    sub_1C37058(&StringLiteral_11776/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/);
    sub_1C37058(&StringLiteral_11829/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/);
    sub_1C37058(&StringLiteral_11844/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    sub_1C37058(&StringLiteral_11796/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/);
    sub_1C37058(&StringLiteral_11738/*"SERVANT_SORT_FILTER_ATK_SECOND"*/);
    sub_1C37058(&StringLiteral_11851/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/);
    sub_1C37058(&StringLiteral_11782/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/);
    sub_1C37058(&StringLiteral_11839/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/);
    sub_1C37058(&StringLiteral_11798/*"SERVANT_SORT_FILTER_NP_BUSTER"*/);
    sub_1C37058(&StringLiteral_11777/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/);
    sub_1C37058(&StringLiteral_11835/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/);
    sub_1C37058(&StringLiteral_11831/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/);
    sub_1C37058(&StringLiteral_11826/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/);
    sub_1C37058(&StringLiteral_11830/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/);
    sub_1C37058(&StringLiteral_11780/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/);
    sub_1C37058(&StringLiteral_11819/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/);
    sub_1C37058(&StringLiteral_11774/*"SERVANT_SORT_FILTER_KIND_9"*/);
    sub_1C37058(&StringLiteral_11822/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/);
    sub_1C37058(&StringLiteral_11817/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/);
    sub_1C37058(&StringLiteral_11721/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/);
    sub_1C37058(&StringLiteral_11759/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/);
    sub_1C37058(&StringLiteral_11820/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/);
    sub_1C37058(&StringLiteral_11838/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/);
    sub_1C37058(&StringLiteral_11770/*"SERVANT_SORT_FILTER_KIND_5"*/);
    sub_1C37058(&StringLiteral_11828/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/);
    sub_1C37058(&StringLiteral_11722/*"SERVANT_SORT_COSTUME_OPEN"*/);
    sub_1C37058(&StringLiteral_11791/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/);
    sub_1C37058(&StringLiteral_11779/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/);
    sub_1C37058(&StringLiteral_11736/*"SERVANT_SORT_FILTER_ATKMAX"*/);
    sub_1C37058(&StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_1C37058(&StringLiteral_11789/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/);
    sub_1C37058(&StringLiteral_11837/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/);
    byte_4C44743 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11763/*"SERVANT_SORT_FILTER_KIND_1"*/;
      goto LABEL_281;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11766/*"SERVANT_SORT_FILTER_KIND_2"*/;
      goto LABEL_281;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11768/*"SERVANT_SORT_FILTER_KIND_3"*/;
      goto LABEL_281;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11769/*"SERVANT_SORT_FILTER_KIND_4"*/;
      goto LABEL_281;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11770/*"SERVANT_SORT_FILTER_KIND_5"*/;
      goto LABEL_281;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11771/*"SERVANT_SORT_FILTER_KIND_6"*/;
      goto LABEL_281;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11772/*"SERVANT_SORT_FILTER_KIND_7"*/;
      goto LABEL_281;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11773/*"SERVANT_SORT_FILTER_KIND_8"*/;
      goto LABEL_281;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11774/*"SERVANT_SORT_FILTER_KIND_9"*/;
      goto LABEL_281;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11764/*"SERVANT_SORT_FILTER_KIND_10"*/;
      goto LABEL_281;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11791/*"SERVANT_SORT_FILTER_KIND_COLLECTION_NOT_GET"*/;
      goto LABEL_281;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11789/*"SERVANT_SORT_FILTER_KIND_COLLECTION_FIND"*/;
      goto LABEL_281;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11790/*"SERVANT_SORT_FILTER_KIND_COLLECTION_GET"*/;
      goto LABEL_281;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11795/*"SERVANT_SORT_FILTER_LV_NOTMAX"*/;
      goto LABEL_281;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11761/*"SERVANT_SORT_FILTER_HP_FIRST"*/;
      goto LABEL_281;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11762/*"SERVANT_SORT_FILTER_HP_SECOND"*/;
      goto LABEL_281;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11760/*"SERVANT_SORT_FILTER_HPMAX"*/;
      goto LABEL_281;
    case 25:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11737/*"SERVANT_SORT_FILTER_ATK_FIRST"*/;
      goto LABEL_281;
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11738/*"SERVANT_SORT_FILTER_ATK_SECOND"*/;
      goto LABEL_281;
    case 27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11736/*"SERVANT_SORT_FILTER_ATKMAX"*/;
      goto LABEL_281;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11810/*"SERVANT_SORT_FILTER_SAME_CLASS"*/;
      goto LABEL_281;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11739/*"SERVANT_SORT_FILTER_CAN_SELECT"*/;
      goto LABEL_281;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11759/*"SERVANT_SORT_FILTER_EXIST_NOT_OPEN_COSTUME"*/;
      goto LABEL_281;
    case 31:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11796/*"SERVANT_SORT_FILTER_NOT_HAVE_ITEM"*/;
      goto LABEL_281;
    case 32:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11721/*"SERVANT_SORT_COSTUME_NOT_OPEN"*/;
      goto LABEL_281;
    case 33:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11722/*"SERVANT_SORT_COSTUME_OPEN"*/;
      goto LABEL_281;
    case 34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
      goto LABEL_281;
    case 35:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/;
      goto LABEL_281;
    case 36:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/;
      goto LABEL_281;
    case 37:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/;
      goto LABEL_281;
    case 38:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/;
      goto LABEL_281;
    case 39:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11758/*"SERVANT_SORT_FILTER_CHOICE"*/;
      goto LABEL_281;
    case 42:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11798/*"SERVANT_SORT_FILTER_NP_BUSTER"*/;
      goto LABEL_281;
    case 43:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11797/*"SERVANT_SORT_FILTER_NP_ARTS"*/;
      goto LABEL_281;
    case 44:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11801/*"SERVANT_SORT_FILTER_NP_QUICK"*/;
      goto LABEL_281;
    case 45:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11800/*"SERVANT_SORT_FILTER_NP_ENEMY_ONE"*/;
      goto LABEL_281;
    case 46:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11799/*"SERVANT_SORT_FILTER_NP_ENEMY_ALL"*/;
      goto LABEL_281;
    case 47:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11802/*"SERVANT_SORT_FILTER_NP_SUPPORT"*/;
      goto LABEL_281;
    case 48:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11794/*"SERVANT_SORT_FILTER_KIND_SERVANT"*/;
      goto LABEL_281;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11788/*"SERVANT_SORT_FILTER_KIND_COLLECTION_ENCOUNT"*/;
      goto LABEL_281;
    case 50:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11819/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_TREASURE_DEVICE"*/;
      goto LABEL_281;
    case 51:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11818/*"SERVANT_SORT_FILTER_SERVANT_EFFECT_SKILL"*/;
      goto LABEL_281;
    case 52:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11839/*"SERVANT_SORT_FILTER_SERVANT_HAVE"*/;
      goto LABEL_281;
    case 53:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11844/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/;
      goto LABEL_281;
    case 54:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11838/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_NORMAL"*/;
      goto LABEL_281;
    case 55:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11836/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_FRIENDSHIP"*/;
      goto LABEL_281;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11832/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CHOCOLATE"*/;
      goto LABEL_281;
    case 57:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11782/*"SERVANT_SORT_FILTER_KIND_CLASS_8"*/;
      goto LABEL_281;
    case 58:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11783/*"SERVANT_SORT_FILTER_KIND_CLASS_9"*/;
      goto LABEL_281;
    case 59:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11776/*"SERVANT_SORT_FILTER_KIND_CLASS_11"*/;
      goto LABEL_281;
    case 60:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11777/*"SERVANT_SORT_FILTER_KIND_CLASS_23"*/;
      goto LABEL_281;
    case 61:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11775/*"SERVANT_SORT_FILTER_KIND_CLASS_10"*/;
      goto LABEL_281;
    case 62:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11778/*"SERVANT_SORT_FILTER_KIND_CLASS_25"*/;
      goto LABEL_281;
    case 63:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11779/*"SERVANT_SORT_FILTER_KIND_CLASS_28"*/;
      goto LABEL_281;
    case 64:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11780/*"SERVANT_SORT_FILTER_KIND_CLASS_33"*/;
      goto LABEL_281;
    case 65:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11787/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_THREE_KNIGHT"*/;
      goto LABEL_281;
    case 66:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11786/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_FOUR_CAVALRY"*/;
      goto LABEL_281;
    case 67:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11784/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA1"*/;
      goto LABEL_281;
    case 68:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11785/*"SERVANT_SORT_FILTER_KIND_CLASS_GROUP_EXTRA2"*/;
      goto LABEL_281;
    case 69:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11845/*"SERVANT_SORT_FILTER_SERVANT_NOT_LIMITED"*/;
      goto LABEL_281;
    case 70:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11846/*"SERVANT_SORT_FILTER_SERVANT_PERIOD_LIMITED"*/;
      goto LABEL_281;
    case 71:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11847/*"SERVANT_SORT_FILTER_SERVANT_STORY_LIMITED"*/;
      goto LABEL_281;
    case 72:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11837/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_MANA_PRI"*/;
      goto LABEL_281;
    case 73:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11831/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_CAMPAIGN"*/;
      goto LABEL_281;
    case 74:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11834/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_LIMITED"*/;
      goto LABEL_281;
    case 75:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11835/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EVENT_REWARD"*/;
      goto LABEL_281;
    case 76:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11833/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_TYPE_EQUIP_EXP"*/;
      goto LABEL_281;
    case 77:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11828/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_LIMIT_MAX"*/;
      goto LABEL_281;
    case 78:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11826/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT_MAX"*/;
      goto LABEL_281;
    case 79:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11825/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_LIMIT"*/;
      goto LABEL_281;
    case 80:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11830/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_LIMIT"*/;
      goto LABEL_281;
    case 81:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11827/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_COMBINE"*/;
      goto LABEL_281;
    case 82:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11824/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_CAN_COMBINE"*/;
      goto LABEL_281;
    case 83:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11829/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_STATUS_NOT_COMBINE"*/;
      goto LABEL_281;
    case 84:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11823/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_NOT"*/;
      goto LABEL_281;
    case 85:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11820/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_1"*/;
      goto LABEL_281;
    case 86:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11821/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_3"*/;
      goto LABEL_281;
    case 87:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11822/*"SERVANT_SORT_FILTER_SERVANT_EQUIP_HAVE_STATUS_5"*/;
      goto LABEL_281;
    case 88:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11816/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_ORDER"*/;
      goto LABEL_281;
    case 89:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11815/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_NEUTRALITY"*/;
      goto LABEL_281;
    case 90:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11812/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_CHAOS"*/;
      goto LABEL_281;
    case 91:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11813/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_GOODNESS"*/;
      goto LABEL_281;
    case 92:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11814/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_MEAN"*/;
      goto LABEL_281;
    case 93:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11811/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_BADNESS"*/;
      goto LABEL_281;
    case 94:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11817/*"SERVANT_SORT_FILTER_SERVANT_ATTRI_OTHER"*/;
      goto LABEL_281;
    case 95:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11850/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_HUMAN"*/;
      goto LABEL_281;
    case 96:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11851/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_SKY"*/;
      goto LABEL_281;
    case 97:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11849/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_GROUND"*/;
      goto LABEL_281;
    case 98:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11852/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_STAR"*/;
      goto LABEL_281;
    case 99:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11848/*"SERVANT_SORT_FILTER_SERVANT_SUB_ATTRI_BEAST"*/;
LABEL_281:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C3E2C9 )
      {
        sub_1C37058(&LocalizationManager_TypeInfo);
        byte_4C3E2C9 = 1;
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

  if ( (byte_4C44722 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12928/*"SortFilterLongNew-"*/);
    sub_1C37058(&StringLiteral_12926/*"SortFilter-"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44722 = 1;
  }
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_12928/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
    return UnityEngine_PlayerPrefs__GetString(v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_12926/*"SortFilter-"*/, this->fields.saveKey, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v5, 0, 0);
  return System_Int32__ToString((int32_t)&Int, 0);
}


System_String_o *ListViewSort__GetFilterListDataText(ListViewSort_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 i; // x11

  if ( (byte_4C4472A & 1) == 0 )
  {
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_String_Join_long___);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C4472A = 1;
  }
  v3 = sub_1C37100(long___TypeInfo, 2);
  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
LABEL_13:
    sub_1C372B4(v3);
  for ( i = 0; i != 102; ++i )
  {
    if ( i >= LODWORD(isFilterList->max_length) )
LABEL_12:
      sub_1C372BC(v3);
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
           (System_String_o *)StringLiteral_811/*","*/,
           (System_Collections_Generic_IEnumerable_T__o *)v3,
           (const MethodInfo_3192F5C *)Method_System_String_Join_long___);
}


bool ListViewSort__GetFilter_43866292(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C372BC(this);
  return isPresentBoxFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_43866340(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C372BC(this);
  return isPresentBoxRarityFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_43866584(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
  return isAutoOrganizationFilterList->m_Items[kind];
}


bool ListViewSort__GetFilter_43866632(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
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

  if ( (byte_4C44749 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_9746/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/);
    sub_1C37058(&StringLiteral_9748/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/);
    sub_1C37058(&StringLiteral_9747/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/);
    sub_1C37058(&StringLiteral_9745/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/);
    sub_1C37058(&StringLiteral_9742/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/);
    sub_1C37058(&StringLiteral_9744/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/);
    sub_1C37058(&StringLiteral_9743/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/);
    byte_4C44749 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9747/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/;
      goto LABEL_32;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9745/*"OTHER_USER_SORT_PRIORITY_KIND_FRIEND_POINT_UP"*/;
      goto LABEL_32;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9746/*"OTHER_USER_SORT_PRIORITY_KIND_MASTER_EXP_UP"*/;
      goto LABEL_32;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9744/*"OTHER_USER_SORT_PRIORITY_KIND_EQUIP_EXP_UP"*/;
      goto LABEL_32;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9742/*"OTHER_USER_SORT_PRIORITY_KIND_BOND_UP"*/;
      goto LABEL_32;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9748/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_9743/*"OTHER_USER_SORT_PRIORITY_KIND_DROP_UP"*/;
LABEL_32:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C3E2C9 )
      {
        sub_1C37058(&LocalizationManager_TypeInfo);
        byte_4C3E2C9 = 1;
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

  if ( (byte_4C44744 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10410/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/);
    sub_1C37058(&StringLiteral_10412/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/);
    sub_1C37058(&StringLiteral_10429/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_10419/*"PRESENT_BOX_FILTER_ITEM_STONE"*/);
    sub_1C37058(&StringLiteral_10428/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/);
    sub_1C37058(&StringLiteral_10426/*"PRESENT_BOX_FILTER_SERVANT"*/);
    sub_1C37058(&StringLiteral_10417/*"PRESENT_BOX_FILTER_ITEM_MANA"*/);
    sub_1C37058(&StringLiteral_10413/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/);
    sub_1C37058(&StringLiteral_10427/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_10416/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/);
    sub_1C37058(&StringLiteral_10430/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/);
    sub_1C37058(&StringLiteral_10418/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/);
    sub_1C37058(&StringLiteral_10414/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/);
    sub_1C37058(&StringLiteral_10415/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/);
    sub_1C37058(&StringLiteral_10420/*"PRESENT_BOX_FILTER_OTHER"*/);
    byte_4C44744 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10426/*"PRESENT_BOX_FILTER_SERVANT"*/;
      goto LABEL_56;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10427/*"PRESENT_BOX_FILTER_SERVANT_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10430/*"PRESENT_BOX_FILTER_SERVANT_STATUS_UP"*/;
      goto LABEL_56;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10428/*"PRESENT_BOX_FILTER_SERVANT_EQUIP"*/;
      goto LABEL_56;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10429/*"PRESENT_BOX_FILTER_SERVANT_EQUIP_COMBINE_MATERIAL"*/;
      goto LABEL_56;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10410/*"PRESENT_BOX_FILTER_COMMAND_CODE"*/;
      goto LABEL_56;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10412/*"PRESENT_BOX_FILTER_ITEM_AP_RECOVER"*/;
      goto LABEL_56;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10416/*"PRESENT_BOX_FILTER_ITEM_LV_UP"*/;
      goto LABEL_56;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10414/*"PRESENT_BOX_FILTER_ITEM_GACHA_TICKET"*/;
      goto LABEL_56;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10418/*"PRESENT_BOX_FILTER_ITEM_SELECT"*/;
      goto LABEL_56;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10419/*"PRESENT_BOX_FILTER_ITEM_STONE"*/;
      goto LABEL_56;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10417/*"PRESENT_BOX_FILTER_ITEM_MANA"*/;
      goto LABEL_56;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10413/*"PRESENT_BOX_FILTER_ITEM_EVENT"*/;
      goto LABEL_56;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10415/*"PRESENT_BOX_FILTER_ITEM_IMPORTANT"*/;
      goto LABEL_56;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10420/*"PRESENT_BOX_FILTER_OTHER"*/;
LABEL_56:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C3E2C9 )
      {
        sub_1C37058(&LocalizationManager_TypeInfo);
        byte_4C3E2C9 = 1;
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

  if ( (byte_4C44745 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10422/*"PRESENT_BOX_FILTER_RARITY_2"*/);
    sub_1C37058(&StringLiteral_10421/*"PRESENT_BOX_FILTER_RARITY_1"*/);
    sub_1C37058(&StringLiteral_10423/*"PRESENT_BOX_FILTER_RARITY_3"*/);
    sub_1C37058(&StringLiteral_10425/*"PRESENT_BOX_FILTER_RARITY_5"*/);
    sub_1C37058(&StringLiteral_10424/*"PRESENT_BOX_FILTER_RARITY_4"*/);
    byte_4C44745 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10421/*"PRESENT_BOX_FILTER_RARITY_1"*/;
      goto LABEL_26;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10422/*"PRESENT_BOX_FILTER_RARITY_2"*/;
      goto LABEL_26;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10423/*"PRESENT_BOX_FILTER_RARITY_3"*/;
      goto LABEL_26;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10424/*"PRESENT_BOX_FILTER_RARITY_4"*/;
      goto LABEL_26;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10425/*"PRESENT_BOX_FILTER_RARITY_5"*/;
LABEL_26:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C3E2C9 )
      {
        sub_1C37058(&LocalizationManager_TypeInfo);
        byte_4C3E2C9 = 1;
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

  if ( (byte_4C4474A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17494/*"btn_list_extremely_small"*/);
    sub_1C37058(&StringLiteral_17495/*"btn_list_normal"*/);
    sub_1C37058(&StringLiteral_17496/*"btn_list_small"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4474A = 1;
  }
  if ( (unsigned int)scaleKind > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_466A8B0 + scaleKind);
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

  if ( (byte_4C44742 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11883/*"SERVANT_SORT_KIND_USE_STATUS"*/);
    sub_1C37058(&StringLiteral_11879/*"SERVANT_SORT_KIND_RARITY"*/);
    sub_1C37058(&StringLiteral_11856/*"SERVANT_SORT_KIND_AMOUNT"*/);
    sub_1C37058(&StringLiteral_11874/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/);
    sub_1C37058(&StringLiteral_11866/*"SERVANT_SORT_KIND_FRIENDSHIP"*/);
    sub_1C37058(&StringLiteral_11872/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/);
    sub_1C37058(&StringLiteral_11857/*"SERVANT_SORT_KIND_ATK"*/);
    sub_1C37058(&StringLiteral_11863/*"SERVANT_SORT_KIND_CREATE"*/);
    sub_1C37058(&StringLiteral_11869/*"SERVANT_SORT_KIND_HP_ADJUST"*/);
    sub_1C37058(&StringLiteral_11875/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/);
    sub_1C37058(&StringLiteral_11861/*"SERVANT_SORT_KIND_COST"*/);
    sub_1C37058(&StringLiteral_11858/*"SERVANT_SORT_KIND_ATK_ADJUST"*/);
    sub_1C37058(&StringLiteral_11882/*"SERVANT_SORT_KIND_USER_LEVEL"*/);
    sub_1C37058(&StringLiteral_11870/*"SERVANT_SORT_KIND_ID"*/);
    sub_1C37058(&StringLiteral_11868/*"SERVANT_SORT_KIND_HP"*/);
    sub_1C37058(&StringLiteral_11878/*"SERVANT_SORT_KIND_PARTY"*/);
    sub_1C37058(&StringLiteral_11877/*"SERVANT_SORT_KIND_NP_LEVEL"*/);
    sub_1C37058(&StringLiteral_11862/*"SERVANT_SORT_KIND_COSTUME"*/);
    sub_1C37058(&StringLiteral_11880/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/);
    sub_1C37058(&StringLiteral_11864/*"SERVANT_SORT_KIND_DISP_NO"*/);
    sub_1C37058(&StringLiteral_11881/*"SERVANT_SORT_KIND_SERVANT_NAME"*/);
    sub_1C37058(&StringLiteral_11859/*"SERVANT_SORT_KIND_BUDDY_POINT"*/);
    sub_1C37058(&StringLiteral_11873/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/);
    sub_1C37058(&StringLiteral_11871/*"SERVANT_SORT_KIND_LEVEL"*/);
    sub_1C37058(&StringLiteral_11865/*"SERVANT_SORT_KIND_EVENT_ORDER"*/);
    sub_1C37058(&StringLiteral_11867/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/);
    sub_1C37058(&StringLiteral_11860/*"SERVANT_SORT_KIND_CLASS"*/);
    sub_1C37058(&StringLiteral_11876/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/);
    byte_4C44742 = 1;
  }
  switch ( kind )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11878/*"SERVANT_SORT_KIND_PARTY"*/;
      goto LABEL_95;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11863/*"SERVANT_SORT_KIND_CREATE"*/;
      goto LABEL_95;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11879/*"SERVANT_SORT_KIND_RARITY"*/;
      goto LABEL_95;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11871/*"SERVANT_SORT_KIND_LEVEL"*/;
      goto LABEL_95;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11877/*"SERVANT_SORT_KIND_NP_LEVEL"*/;
      goto LABEL_95;
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11868/*"SERVANT_SORT_KIND_HP"*/;
      goto LABEL_95;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11857/*"SERVANT_SORT_KIND_ATK"*/;
      goto LABEL_95;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11861/*"SERVANT_SORT_KIND_COST"*/;
      goto LABEL_95;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11860/*"SERVANT_SORT_KIND_CLASS"*/;
      goto LABEL_95;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11872/*"SERVANT_SORT_KIND_LIMIT_COUNT"*/;
      goto LABEL_95;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11866/*"SERVANT_SORT_KIND_FRIENDSHIP"*/;
      goto LABEL_95;
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11874/*"SERVANT_SORT_KIND_LOGIN_ACCESS"*/;
      goto LABEL_95;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11882/*"SERVANT_SORT_KIND_USER_LEVEL"*/;
      goto LABEL_95;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11870/*"SERVANT_SORT_KIND_ID"*/;
      goto LABEL_95;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11856/*"SERVANT_SORT_KIND_AMOUNT"*/;
      goto LABEL_95;
    case 15:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11869/*"SERVANT_SORT_KIND_HP_ADJUST"*/;
      goto LABEL_95;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11858/*"SERVANT_SORT_KIND_ATK_ADJUST"*/;
      goto LABEL_95;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11862/*"SERVANT_SORT_KIND_COSTUME"*/;
      goto LABEL_95;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11867/*"SERVANT_SORT_KIND_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11875/*"SERVANT_SORT_KIND_NOT_HAVING_COSTUME"*/;
      goto LABEL_95;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11876/*"SERVANT_SORT_KIND_NOT_HAVING_ITEM"*/;
      goto LABEL_95;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11873/*"SERVANT_SORT_KIND_LIMIT_COUNT_2"*/;
      goto LABEL_95;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11865/*"SERVANT_SORT_KIND_EVENT_ORDER"*/;
      goto LABEL_95;
    case 25:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11880/*"SERVANT_SORT_KIND_RECOVERY_FATIGUE"*/;
      goto LABEL_95;
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11881/*"SERVANT_SORT_KIND_SERVANT_NAME"*/;
      goto LABEL_95;
    case 27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11864/*"SERVANT_SORT_KIND_DISP_NO"*/;
      goto LABEL_95;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11859/*"SERVANT_SORT_KIND_BUDDY_POINT"*/;
      goto LABEL_95;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11883/*"SERVANT_SORT_KIND_USE_STATUS"*/;
LABEL_95:
      result = LocalizationManager__Get((System_String_o *)*v4, 0);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C3E2C9 )
      {
        sub_1C37058(&LocalizationManager_TypeInfo);
        byte_4C3E2C9 = 1;
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

  if ( (byte_4C44747 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11730/*"SERVANT_SORT_FILTER2_EQUIP_"*/);
    sub_1C37058(&StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    byte_4C44747 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_11730/*"SERVANT_SORT_FILTER2_EQUIP_"*/, v6, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0);
}


bool ListViewSort__GetSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0

  if ( (byte_4C44739 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C44739 = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         isSvtEquipEffectFilterDic,
         categoryId,
         (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( isSvtEquipEffectFilterDic )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               isSvtEquipEffectFilterDic,
               categoryId,
               (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE;
LABEL_8:
    sub_1C372B4(isSvtEquipEffectFilterDic);
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


System_Int32_array *ListViewSort__GetSvtEventBonusFilterInt(
        ListViewSort_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0

  if ( (byte_4C4473B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4C4473B = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                                     eventId,
                                     (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_8:
    sub_1C372B4(svtEventBonusFilterDic);
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

  if ( (byte_4C44746 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11733/*"SERVANT_SORT_FILTER2_NP_"*/);
    sub_1C37058(&StringLiteral_12750/*"Servant_SORT_FILTER2_EXCEED_"*/);
    sub_1C37058(&StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_1C37058(&StringLiteral_11735/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/);
    sub_1C37058(&StringLiteral_11731/*"SERVANT_SORT_FILTER2_EXCEED_"*/);
    sub_1C37058(&StringLiteral_11732/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/);
    byte_4C44746 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v5 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
LABEL_6:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (System_String_o *)StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    switch ( type )
    {
      case 2:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11732/*"SERVANT_SORT_FILTER2_LIMIT_UP_"*/;
        break;
      case 3:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11735/*"SERVANT_SORT_FILTER2_SKILL_UP_"*/;
        break;
      case 4:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11733/*"SERVANT_SORT_FILTER2_NP_"*/;
        break;
      case 6:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_11731/*"SERVANT_SORT_FILTER2_EXCEED_"*/;
        break;
      case 8:
        v7 = System_Int32__ToString(v5, 0);
        v8 = &StringLiteral_12750/*"Servant_SORT_FILTER2_EXCEED_"*/;
        break;
      default:
        goto LABEL_6;
    }
    v9 = System_String__Concat_63561656((System_String_o *)*v8, v7, 0);
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

  if ( (byte_4C44748 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/);
    sub_1C37058(&StringLiteral_11734/*"SERVANT_SORT_FILTER2_OPERATION_"*/);
    byte_4C44748 = 1;
  }
  filter2Kind = this->fields.filter2Kind;
  v4 = (_DWORD)this + 80;
  if ( filter2Kind < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_11729/*"SERVANT_SORT_FILTER2_DEFAULT"*/;
  }
  else
  {
    v6 = System_Int32__ToString(v4, 0);
    v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_11734/*"SERVANT_SORT_FILTER2_OPERATION_"*/, v6, 0);
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
  int32_t v10; // w0
  __int128 v11; // q0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *buttonText; // x1
  int32_t v15; // w0
  __int128 v16; // q0
  ListViewSort_BonusFilterInfo_o v17; // [xsp+0h] [xbp-70h] BYREF
  struct System_String_o *v18; // [xsp+18h] [xbp-58h] BYREF
  ListViewSort_BonusFilterInfo_o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C44736 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
    byte_4C44736 = 1;
  }
  v18 = 0;
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
      v11 = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
      v19.fields.buttonText = this->fields.bonusFilterInfoDefault.fields.buttonText;
      *(_OWORD *)&v19.fields.priority = v11;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v17,
        bonusFilterInfos,
        v10 + 1,
        &v19,
        (const MethodInfo_30D6500 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      buttonText = v17.fields.buttonText;
      *(_QWORD *)&this->fields.bonusKind = *(_QWORD *)&v17.fields.kind;
    }
    else
    {
      v15 = ListViewSort__BonusFilterKindIndex(
              this->fields.bonusKind2Id,
              this->fields.bonusKind2,
              bonusFilterInfos,
              0,
              nowTime,
              v9);
      v16 = *(_OWORD *)&this->fields.bonusFilterInfoDefault.fields.priority;
      v19.fields.buttonText = this->fields.bonusFilterInfoDefault.fields.buttonText;
      *(_OWORD *)&v19.fields.priority = v16;
      BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        &v17,
        bonusFilterInfos,
        v15 + 1,
        &v19,
        (const MethodInfo_30D6500 *)Method_BasicHelper_IndexValue_ListViewSort_BonusFilterInfo___);
      buttonText = v17.fields.buttonText;
      *(_QWORD *)&this->fields.bonusKind2 = *(_QWORD *)&v17.fields.kind;
    }
    v18 = buttonText;
    sub_1C36FFC((CGThumbnailListItem_o *)&v18, (int32_t)buttonText, v12, v13);
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
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
  this->fields.autoOrganizationMode = 0;
  ListViewSort__ClearFilter(this, method);
  defaultSortKind = this->fields.defaultSortKind;
  isDefaultAscendingOrder = this->fields.isDefaultAscendingOrder;
  this->fields.isBonusKind = 0;
  *(_OWORD *)&this->fields.bonusKind = xmmword_C0F840;
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
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  void *isSvtEquipEffectFilterDic; // x0
  Il2CppObject *MasterData_object; // x0
  FunctionCategoryMaster_o *v12; // x20
  int32_t listViewKind; // w8
  int v14; // w9
  int32_t v15; // w21
  int v16; // w8
  void *v17; // x20
  unsigned int v18; // w21
  __int64 v19; // x8

  if ( (byte_4C4471B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C4471B = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(v7);
    isSvtEquipEffectFilterDic = **(void ***)(v9 + 184);
    if ( !isSvtEquipEffectFilterDic )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)isSvtEquipEffectFilterDic,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    if ( MasterData_object )
    {
      v12 = (FunctionCategoryMaster_o *)MasterData_object;
      isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
      if ( !isSvtEquipEffectFilterDic )
        goto LABEL_31;
      listViewKind = this->fields.listViewKind;
      v14 = listViewKind == 3 ? 2 : 1;
      v15 = listViewKind ? v14 : 4;
      System_Collections_Generic_Dictionary_int__int___Clear(
        (System_Collections_Generic_Dictionary_int__int__o *)isSvtEquipEffectFilterDic,
        (const MethodInfo_33F1C4C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
      isSvtEquipEffectFilterDic = FunctionCategoryMaster__GetEntitiesByFlag(v12, v15, 0);
      if ( !isSvtEquipEffectFilterDic )
        goto LABEL_31;
      v16 = *((_DWORD *)isSvtEquipEffectFilterDic + 6);
      v17 = isSvtEquipEffectFilterDic;
      if ( v16 >= 1 )
      {
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= v16 )
            sub_1C372BC(isSvtEquipEffectFilterDic);
          v19 = *((_QWORD *)v17 + (int)v18 + 4);
          if ( !v19 )
            break;
          isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
          if ( !isSvtEquipEffectFilterDic )
            break;
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)isSvtEquipEffectFilterDic,
            *(_DWORD *)(v19 + 16),
            this->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE,
            (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          v16 = *((_DWORD *)v17 + 6);
          if ( (int)++v18 >= v16 )
            return;
        }
LABEL_31:
        sub_1C372B4(isSvtEquipEffectFilterDic);
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
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  int32_t autoOrganizationMode; // w20
  System_String_o *v48; // x0
  int32_t priorityKind; // w20
  System_String_o *v50; // x0
  int32_t otherSortKind; // w20
  System_String_o *v52; // x0

  if ( (byte_4C44723 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3199/*"BonusKind2Id-"*/);
    sub_1C37058(&StringLiteral_6308/*"ExpUpDispType-"*/);
    sub_1C37058(&StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C37058(&StringLiteral_2499/*"AutoOrganizationMode-"*/);
    sub_1C37058(&StringLiteral_3198/*"BonusKind2-"*/);
    sub_1C37058(&StringLiteral_10729/*"PresentBoxSortFilterNew-"*/);
    sub_1C37058(&StringLiteral_10740/*"PriorityKind-"*/);
    sub_1C37058(&StringLiteral_7530/*"IconSizeKind-"*/);
    sub_1C37058(&StringLiteral_3197/*"BonusKind-"*/);
    sub_1C37058(&StringLiteral_4421/*"ChoiceSortOrder-"*/);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    sub_1C37058(&StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_2498/*"AutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_10066/*"OtherSortKind-"*/);
    sub_1C37058(&StringLiteral_12646/*"ScrollBarValue-"*/);
    sub_1C37058(&StringLiteral_12927/*"SortFilter2-"*/);
    sub_1C37058(&StringLiteral_12931/*"SortKind-"*/);
    sub_1C37058(&StringLiteral_6307/*"ExpUpDispKind-"*/);
    sub_1C37058(&StringLiteral_12932/*"SortOrder-"*/);
    sub_1C37058(&StringLiteral_3200/*"BonusKindId-"*/);
    byte_4C44723 = 1;
  }
  sortKind = this->fields.sortKind;
  v14 = System_String__Concat_63561656((System_String_o *)StringLiteral_12931/*"SortKind-"*/, this->fields.saveKey, 0);
  if ( sortKind != UnityEngine_PlayerPrefs__GetInt(v14, this->fields.defaultSortKind, 0) )
    return 1;
  isAscendingOrder = this->fields.isAscendingOrder;
  v16 = System_String__Concat_63561656((System_String_o *)StringLiteral_12932/*"SortOrder-"*/, this->fields.saveKey, 0);
  if ( isAscendingOrder == (UnityEngine_PlayerPrefs__GetInt(v16, this->fields.isDefaultAscendingOrder, 0) == 0) )
    return 1;
  bonusKind = this->fields.bonusKind;
  v18 = System_String__Concat_63561656((System_String_o *)StringLiteral_3197/*"BonusKind-"*/, this->fields.saveKey, 0);
  if ( bonusKind != UnityEngine_PlayerPrefs__GetInt(v18, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  bonusKindId = this->fields.bonusKindId;
  v20 = System_String__Concat_63561656((System_String_o *)StringLiteral_3200/*"BonusKindId-"*/, this->fields.saveKey, 0);
  if ( bonusKindId != UnityEngine_PlayerPrefs__GetInt(v20, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2 = this->fields.bonusKind2;
  v22 = System_String__Concat_63561656((System_String_o *)StringLiteral_3198/*"BonusKind2-"*/, this->fields.saveKey, 0);
  if ( bonusKind2 != UnityEngine_PlayerPrefs__GetInt(v22, this->fields.bonusFilterInfoDefault.fields.eventId, 0) )
    return 1;
  bonusKind2Id = this->fields.bonusKind2Id;
  v24 = System_String__Concat_63561656((System_String_o *)StringLiteral_3199/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
  if ( bonusKind2Id != UnityEngine_PlayerPrefs__GetInt(v24, this->fields.bonusFilterInfoDefault.fields.kind, 0) )
    return 1;
  filter2Kind = this->fields.filter2Kind;
  v26 = System_String__Concat_63561656((System_String_o *)StringLiteral_12927/*"SortFilter2-"*/, this->fields.saveKey, 0);
  if ( filter2Kind != UnityEngine_PlayerPrefs__GetInt(v26, 0, 0) )
    return 1;
  isSmartSort = this->fields.isSmartSort;
  v28 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
  if ( isSmartSort != (UnityEngine_PlayerPrefs__GetInt(v28, 1, 0) == 1) )
    return 1;
  isChoiceSort = this->fields.isChoiceSort;
  v30 = System_String__Concat_63561656((System_String_o *)StringLiteral_4421/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
  if ( isChoiceSort != (UnityEngine_PlayerPrefs__GetInt(v30, 0, 0) == 1) )
    return 1;
  iconScaleKind = this->fields.iconScaleKind;
  v32 = System_String__Concat_63561656((System_String_o *)StringLiteral_7530/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  if ( iconScaleKind != UnityEngine_PlayerPrefs__GetInt(v32, 0, 0) )
    return 1;
  expUpDispKind = this->fields.expUpDispKind;
  v34 = System_String__Concat_63561656((System_String_o *)StringLiteral_6307/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
  if ( expUpDispKind != UnityEngine_PlayerPrefs__GetInt(v34, 0, 0) )
    return 1;
  expUpDispType = this->fields.expUpDispType;
  v36 = System_String__Concat_63561656((System_String_o *)StringLiteral_6308/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
  if ( expUpDispType != UnityEngine_PlayerPrefs__GetInt(v36, 0, 0) )
    return 1;
  scrollBarValue = this->fields.scrollBarValue;
  v38 = System_String__Concat_63561656((System_String_o *)StringLiteral_12646/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
  if ( scrollBarValue != UnityEngine_PlayerPrefs__GetFloat(v38, 0.0, 0) )
    return 1;
  v40 = ListViewSort__GetFilterListData(this, v39);
  if ( !filterListData )
    sub_1C372B4(v40);
  if ( !System_String__Equals_63596960(filterListData, v40, 0) )
    return 1;
  v41 = System_String__Concat_63561656((System_String_o *)StringLiteral_10729/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v41, 0, 0) != presentBoxfilterListData )
    return 1;
  v42 = System_String__Concat_63561656((System_String_o *)StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v42, 0, 0) != presentBoxfilterRarityListData )
    return 1;
  if ( ListViewSort__IsChangeSvtEquipEffectFilter(this, v43) )
    return 1;
  if ( ListViewSort__IsChangeSvtEventBonusFilter(this, v44) )
    return 1;
  v45 = System_String__Concat_63561656((System_String_o *)StringLiteral_2498/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v45, 0, 0) != autoOrganizationFilterListData )
    return 1;
  v46 = System_String__Concat_63561656((System_String_o *)StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v46, 0, 0) != waveBattleAutoOrganizationFilterListData )
    return 1;
  autoOrganizationMode = this->fields.autoOrganizationMode;
  v48 = System_String__Concat_63561656((System_String_o *)StringLiteral_2499/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
  if ( autoOrganizationMode != UnityEngine_PlayerPrefs__GetInt(v48, 0, 0) )
    return 1;
  priorityKind = this->fields.priorityKind;
  v50 = System_String__Concat_63561656((System_String_o *)StringLiteral_10740/*"PriorityKind-"*/, this->fields.saveKey, 0);
  if ( priorityKind != UnityEngine_PlayerPrefs__GetInt(v50, 0, 0) )
    return 1;
  otherSortKind = this->fields.otherSortKind;
  v52 = System_String__Concat_63561656((System_String_o *)StringLiteral_10066/*"OtherSortKind-"*/, this->fields.saveKey, 0);
  return otherSortKind != UnityEngine_PlayerPrefs__GetInt(v52, 11, 0);
}


bool ListViewSort__IsChangeSvtEquipEffectFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_Dictionary_string__int__o *v8; // x0
  System_Collections_Generic_Dictionary_object__int__o *v9; // x20
  int32_t key; // w21
  Il2CppObject *v11; // x0
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t Item; // w22
  Il2CppObject *v14; // x1
  _OWORD v16[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-70h] BYREF
  int32_t v18; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4C4472B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/);
    byte_4C4472B = 1;
  }
  v18 = 0;
  memset(&v17, 0, 32);
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
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
      sub_1C372B4(v8);
    v9 = (System_Collections_Generic_Dictionary_object__int__o *)v8;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v16,
      this->fields.isSvtEquipEffectFilterDic,
      (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    *(_OWORD *)&v17.fields._dictionary = v16[0];
    v17.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v16[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v17,
              (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
    {
      key = (int32_t)v17.fields._current.fields.key;
      v18 = (int32_t)v17.fields._current.fields.key;
      v11 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0);
      if ( !v9 )
        sub_1C372B4(v11);
      if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
             v9,
             v11,
             (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
      {
        isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
        if ( !isSvtEquipEffectFilterDic )
          sub_1C372B4(0);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 isSvtEquipEffectFilterDic,
                 key,
                 (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v18 = key;
        v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__int___get_Item(
                       v9,
                       v14,
                       (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
        &v17,
        (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v17,
      (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
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
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int32_t key; // w21
  Il2CppObject *v11; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-80h] BYREF
  int32_t v18; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_4C4472C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_13195/*"SvtEventBonusFilterNew-"*/);
    byte_4C4472C = 1;
  }
  v18 = 0;
  memset(&v17, 0, sizeof(v17));
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_13195/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
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
      sub_1C372B4(v8);
    v9 = (System_Collections_Generic_Dictionary_object__object__o *)v8;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v16,
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v17,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
    {
      key = (int32_t)v17.fields._current.fields.key;
      v18 = (int32_t)v17.fields._current.fields.key;
      v11 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0);
      if ( !v9 )
        sub_1C372B4(v11);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v9,
             v11,
             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__int____ContainsKey__) )
      {
        svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
        if ( !svtEventBonusFilterDic )
          sub_1C372B4(0);
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                 key,
                 (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
        v18 = key;
        v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0);
        if ( Item == System_Collections_Generic_Dictionary_object__object___get_Item(
                       v9,
                       v14,
                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__int____get_Item__) )
          continue;
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v17,
        (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
      return 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v17,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  }
  return 0;
}


bool ListViewSort__IsFinishedCampaignId(int32_t eventId, int32_t kind, int64_t nowTime, const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  EventCampaignMaster_o *v9; // x22
  __int64 v10; // x8

  if ( (byte_4C44738 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C44738 = 1;
  }
  if ( kind != 3 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v9 = (EventCampaignMaster_o *)Instance;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0);
    nowTime = Instance;
  }
  if ( !v9 )
    goto LABEL_19;
  Instance = (int64_t)EventCampaignMaster__getData(v9, eventId, 0);
  if ( Instance )
  {
    v10 = *(_QWORD *)(Instance + 40);
    if ( !v10 )
      goto LABEL_19;
    if ( *(_QWORD *)(v10 + 24) )
    {
      if ( MasterData_object )
      {
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              eventId,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( Instance )
          return nowTime > *(_QWORD *)(Instance + 104);
      }
LABEL_19:
      sub_1C372B4(Instance);
    }
  }
  return 1;
}


bool ListViewSort__IsHideSvtEventBonusFilter(
        ListViewSort_o *this,
        int32_t eventId,
        int32_t objectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_int__o *v9; // x20

  if ( (byte_4C4473A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4473A = 1;
  }
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
         eventId,
         (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
    if ( svtEventBonusFilterDic )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
               eventId,
               (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
      v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_58218708(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)Item,
        (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
      if ( v9 )
        return System_Collections_Generic_List_int___Contains(
                 v9,
                 objectId,
                 (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C372B4(svtEventBonusFilterDic);
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
  unsigned __int8 v9; // w22
  const MethodInfo *v10; // x2
  bool v11; // w23
  const MethodInfo *v12; // x2
  bool v13; // w23
  bool v14; // w23
  ListViewSort_FilterKind_array *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4C4474B & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4C4474B = 1;
  }
  if ( !servantEntity )
    return 0;
  v5 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( ListViewSort__GetFilter(this, 65, v6) )
  {
    IsThreeKnights = ServantEntity__IsThreeKnights(servantEntity, 0);
    v9 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ThreeKnightsFilterKindList,
      (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  else
  {
    v9 = 0;
  }
  if ( ListViewSort__GetFilter(this, 66, v7) )
  {
    IsThreeKnights = ServantEntity__IsFourCavalry(servantEntity, 0);
    v11 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    v9 |= v11;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->FourCavalryFilterKindList,
      (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  if ( ListViewSort__GetFilter(this, 67, v10) )
  {
    IsThreeKnights = ServantEntity__IsExtra1(servantEntity, 0);
    v13 = IsThreeKnights;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    if ( !v5 )
      goto LABEL_33;
    v9 |= v13;
    System_Collections_Generic_List_Int32Enum___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
      (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  IsThreeKnights = ListViewSort__GetFilter(this, 68, v12);
  if ( !IsThreeKnights )
  {
    if ( (v9 & 1) != 0 )
      goto LABEL_28;
LABEL_27:
    IsThreeKnights = ServantEntity__get_IsAllClass(servantEntity, 0);
    if ( IsThreeKnights )
    {
LABEL_28:
      if ( v5 )
        goto LABEL_29;
LABEL_33:
      sub_1C372B4(IsThreeKnights);
    }
    return 0;
  }
  IsThreeKnights = ServantEntity__IsExtra2(servantEntity, 0);
  v14 = IsThreeKnights;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v5 )
    goto LABEL_33;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_3788A38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( ((v9 | v14) & 1) == 0 )
    goto LABEL_27;
LABEL_29:
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           v5,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(this, v15, v16)
      || ListViewSort__IsMatchClassFilter(this, servantEntity, v17);
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
  const MethodInfo *v13; // x2
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C4474D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4474D = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v11 = (TreasureDvcMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v16, 0);
      if ( !tdInfo || !v11 )
        sub_1C372B4(v12);
      v7 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v11, v12, tdInfo->fields.id, 0);
      if ( v7 )
        LOBYTE(v7) = ListViewSort__IsMatchNPEffectFilter_43882108(this, v7, v13);
    }
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return (unsigned __int8)v7 & 1;
}


bool ListViewSort__IsMatchNPEffectFilter_43882108(
        ListViewSort_o *this,
        TreasureDvcEntity_o *tdEntity,
        const MethodInfo *method)
{
  int64_t EffectFlag; // x1
  const MethodInfo *v5; // x2

  if ( !tdEntity )
    return 0;
  EffectFlag = TreasureDvcEntity__GetEffectFlag(tdEntity, 0);
  return ListViewSort__IsMatchNPEffectFilter_43882536(this, EffectFlag, v5);
}


bool ListViewSort__IsMatchNPEffectFilter_43882156(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTreasureDvcMaster_o *v8; // x21
  __int64 v9; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  ServantTreasureDvcEntity_o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  TreasureDvcMaster_o *v15; // x20
  TreasureDvcEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C4474E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4474E = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v8 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v8, v9, 1, 0);
  if ( !EntityFromSvtIdOnly )
    return 0;
  v11 = EntityFromSvtIdOnly;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v15 = (TreasureDvcMaster_o *)v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0);
  if ( !v15 )
LABEL_18:
    sub_1C372B4(v9);
  v16 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v15, v9, v11->fields.treasureDeviceId, 0);
  if ( v16 )
    return ListViewSort__IsMatchNPEffectFilter_43882108(this, v16, v17);
  return 0;
}


bool ListViewSort__IsMatchNPEffectFilter_43882536(ListViewSort_o *this, int64_t npEffectFlag, const MethodInfo *method)
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
  const MethodInfo *v6; // x2
  bool TreasureDeviceInfo; // w8
  bool v8; // w0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-18h] BYREF

  tdInfo = 0;
  if ( userServantEntity )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
    TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, DispLimitCount, 0, 0);
    v8 = 0;
    if ( TreasureDeviceInfo )
    {
      if ( !tdInfo )
        sub_1C372B4(0);
      return ListViewSort__IsMatchNPTypeFilter_43881512(this, tdInfo->fields.cardId, v6);
    }
  }
  else
  {
    return 0;
  }
  return v8;
}


bool ListViewSort__IsMatchNPTypeFilter_43881512(ListViewSort_o *this, int32_t npType, const MethodInfo *method)
{
  return (unsigned int)(npType - 1) <= 2 && ListViewSort__GetFilter(this, dword_C4900C[npType - 1], method);
}


bool ListViewSort__IsMatchNPTypeFilter_43881548(
        ListViewSort_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTreasureDvcMaster_o *v8; // x20
  __int64 v9; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4C4474C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4474C = 1;
  }
  if ( !servantEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v8 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v13, 0);
  if ( !v8 )
    sub_1C372B4(v9);
  EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v8, v9, 1, 0);
  return EntityFromSvtIdOnly
      && ListViewSort__IsMatchNPTypeFilter_43881512(this, EntityFromSvtIdOnly->fields.cardId, v11);
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
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  ListViewSort___c_c *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x27
  System_Func_int__int__o *_9__254_1; // x28
  Il2CppObject *v44; // x29
  struct ListViewSort___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  ListViewSort___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x27
  System_Func_int__bool__o *_9__254_2; // x28
  Il2CppObject *v52; // x29
  struct ListViewSort___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x25
  __int64 v60; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x28
  ListViewSort___c_c *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  System_Func_int__bool__o *_9__254_3; // x27
  Il2CppObject *v65; // x28
  struct ListViewSort___c_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x24
  System_Func_int__bool__o *v70; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  Il2CppObject *v72; // x0
  __int64 v73; // x24
  __int64 v74; // x26
  ServantLimitMaster_o *v75; // x20
  System_Collections_Generic_List_T__o *v76; // [xsp+0h] [xbp-90h]
  __int64 v77; // [xsp+8h] [xbp-88h]
  IndividualityPersonalityEntity_o *v78; // [xsp+10h] [xbp-80h] BYREF
  IndividualityPolicyEntity_o *v79; // [xsp+18h] [xbp-78h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  ServantLimitEntity_o *v81; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4C44752 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&System_Func_int__int__TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__);
    sub_1C37058(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__);
    sub_1C37058(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__);
    sub_1C37058(&Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__);
    sub_1C37058(&ListViewSort___c__DisplayClass254_0_TypeInfo);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C44752 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  entity = 0;
  v81 = 0;
  v78 = 0;
  v79 = 0;
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
                                          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    *(_QWORD *)&v82.fields.currentCryptoKey = v21;
    *(_QWORD *)&v82.fields.fakeValue = v20;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v82, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v22, v23, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                userServantEntity->fields.svtId,
                                                                                0);
    if ( !Master_object )
      goto LABEL_92;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   (int32_t)ServantAttriFirstFilterKindList,
                                   LimitCountByDispLimit,
                                   0);
    v27 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( ServantLimitCountSealAfter >= 11 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v32 = (ServantLimitAddMaster_o *)v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v83.fields.currentCryptoKey = v31;
      *(_QWORD *)&v83.fields.fakeValue = v30;
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                  v83,
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
        v77 = sub_1C372A4(ListViewSort___c__DisplayClass254_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v77, 0);
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
          _9__254_0 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_0,
            v36,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_0__,
            0);
          static_fields = ListViewSort___c_TypeInfo->static_fields;
          static_fields->__9__254_0 = _9__254_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__254_0, (int32_t)_9__254_0, v38, v39);
        }
        v40 = System_Linq_Enumerable__Where_int_(
                individuality,
                (System_Func_TSource__bool__o *)_9__254_0,
                (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v40,
                                                                                    (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
        v76 = ServantAttriFirstFilterKindList;
        if ( !entity )
          goto LABEL_92;
        v41 = ListViewSort___c_TypeInfo;
        v42 = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.individuality;
        if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
          v41 = ListViewSort___c_TypeInfo;
        }
        _9__254_1 = v41->static_fields->__9__254_1;
        if ( !_9__254_1 )
        {
          if ( !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            v41 = ListViewSort___c_TypeInfo;
          }
          v44 = (Il2CppObject *)v41->static_fields->__9;
          _9__254_1 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(_9__254_1, v44, Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_1__, 0);
          v45 = ListViewSort___c_TypeInfo->static_fields;
          v45->__9__254_1 = _9__254_1;
          sub_1C36FFC((CGThumbnailListItem_o *)&v45->__9__254_1, (int32_t)_9__254_1, v46, v47);
        }
        v48 = System_Linq_Enumerable__Select_int__int_(
                v42,
                (System_Func_TSource__TResult__o *)_9__254_1,
                (const MethodInfo_311B010 *)Method_System_Linq_Enumerable_Select_int__int___);
        v49 = ListViewSort___c_TypeInfo;
        v50 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
        if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
          v49 = ListViewSort___c_TypeInfo;
        }
        _9__254_2 = v49->static_fields->__9__254_2;
        if ( !_9__254_2 )
        {
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v49 = ListViewSort___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v49->static_fields->__9;
          _9__254_2 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            _9__254_2,
            v52,
            Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_2__,
            0);
          v53 = ListViewSort___c_TypeInfo->static_fields;
          v53->__9__254_2 = _9__254_2;
          sub_1C36FFC((CGThumbnailListItem_o *)&v53->__9__254_2, (int32_t)_9__254_2, v54, v55);
        }
        v56 = System_Linq_Enumerable__Where_int_(
                v50,
                (System_Func_TSource__bool__o *)_9__254_2,
                (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
        ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_int_(
                                                                                    v56,
                                                                                    (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
        v59 = (Il2CppObject *)v77;
        if ( !v77 )
          goto LABEL_92;
        *(_QWORD *)(v77 + 16) = ServantAttriFirstFilterKindList;
        v60 = v77 + 16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v77 + 16), (int32_t)ServantAttriFirstFilterKindList, v57, v58);
        v61 = (System_Collections_Generic_IEnumerable_TSource__o *)v76;
        if ( !v76 )
          goto LABEL_92;
        if ( v76->fields._size > 0 )
          goto LABEL_54;
        if ( !*(_QWORD *)v60 )
          goto LABEL_92;
        if ( *(int *)(*(_QWORD *)v60 + 24LL) < 1 )
        {
          ServantLimitCountSealAfter = 0;
          if ( !v27 )
            goto LABEL_92;
        }
        else
        {
LABEL_54:
          v62 = ListViewSort___c_TypeInfo;
          v63 = (System_Collections_Generic_IEnumerable_TSource__o *)servantEntity->fields.individuality;
          if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
            v62 = ListViewSort___c_TypeInfo;
          }
          _9__254_3 = v62->static_fields->__9__254_3;
          if ( !_9__254_3 )
          {
            if ( !v62->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v62);
              v62 = ListViewSort___c_TypeInfo;
            }
            v65 = (Il2CppObject *)v62->static_fields->__9;
            _9__254_3 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              _9__254_3,
              v65,
              Method_ListViewSort___c__IsMatchServantAttriFilter_b__254_3__,
              0);
            v66 = ListViewSort___c_TypeInfo->static_fields;
            v66->__9__254_3 = _9__254_3;
            sub_1C36FFC((CGThumbnailListItem_o *)&v66->__9__254_3, (int32_t)_9__254_3, v67, v68);
            v61 = (System_Collections_Generic_IEnumerable_TSource__o *)v76;
            v59 = (Il2CppObject *)v77;
          }
          v69 = System_Linq_Enumerable__Where_int_(
                  v63,
                  (System_Func_TSource__bool__o *)_9__254_3,
                  (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
          v70 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v70,
            v59,
            Method_ListViewSort___c__DisplayClass254_0__IsMatchServantAttriFilter_b__4__,
            0);
          v71 = System_Linq_Enumerable__Where_int_(
                  v69,
                  (System_Func_TSource__bool__o *)v70,
                  (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__Concat_int_(
                                                                                      v71,
                                                                                      v61,
                                                                                      (const MethodInfo_3104580 *)Method_System_Linq_Enumerable_Concat_int___);
          if ( !v27 )
            goto LABEL_92;
          System_Collections_Generic_List_int___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)ServantAttriFirstFilterKindList,
            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
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
    v72 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    v74 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v73 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v75 = (ServantLimitMaster_o *)v72;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v84.fields.currentCryptoKey = v74;
    *(_QWORD *)&v84.fields.fakeValue = v73;
    ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                v84,
                                                                                0);
    if ( v75 )
    {
      if ( !ServantLimitMaster__TryGetEntity(
              v75,
              &v81,
              (int32_t)ServantAttriFirstFilterKindList,
              ServantLimitCountSealAfter,
              0) )
        goto LABEL_85;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
      if ( v81 )
      {
        if ( ServantAttriFirstFilterKindList )
        {
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPolicyMaster__TryGetEntityByPolicyValue(
                                                                                      (IndividualityPolicyMaster_o *)ServantAttriFirstFilterKindList,
                                                                                      &v79,
                                                                                      v81->fields.policy,
                                                                                      0);
          if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) != 0 )
          {
            if ( !v79 )
              goto LABEL_92;
            System_Collections_Generic_List_int___AddRange(
              v27,
              (System_Collections_Generic_IEnumerable_T__o *)v79->fields.individuality,
              (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
          if ( v81 && ServantAttriFirstFilterKindList )
          {
            ServantAttriFirstFilterKindList = (System_Collections_Generic_List_T__o *)IndividualityPersonalityMaster__TryGetEntityByPersonalityValue(
                                                                                        (IndividualityPersonalityMaster_o *)ServantAttriFirstFilterKindList,
                                                                                        &v78,
                                                                                        v81->fields.personality,
                                                                                        0);
            if ( ((unsigned __int8)ServantAttriFirstFilterKindList & 1) == 0 )
              goto LABEL_85;
            if ( v78 )
            {
              System_Collections_Generic_List_int___AddRange(
                v27,
                (System_Collections_Generic_IEnumerable_T__o *)v78->fields.individuality,
                (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
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
    sub_1C372B4(ServantAttriFirstFilterKindList);
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
  if ( (byte_4C44753 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    this = (ListViewSort_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C44753 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !individuality )
    sub_1C372B4(this);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    individuality,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v11,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
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
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  bool Filter; // w0
  char v16; // w19
  int v17; // w20
  char v18; // w0
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C44754 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C44754 = 1;
  }
  v5 = ListViewSort___c_TypeInfo;
  memset(&v21, 0, sizeof(v21));
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
    _9__256_0 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__256_0, v7, Method_ListViewSort___c__IsMatchServantAttriSecondFilter_b__256_0__, 0);
    static_fields = ListViewSort___c_TypeInfo->static_fields;
    static_fields->__9__256_0 = _9__256_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__256_0, (int32_t)_9__256_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)individuality,
          (System_Func_TSource__bool__o *)_9__256_0,
          (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
  v12 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v11,
                                                    (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v12 )
    sub_1C372B4(0);
  if ( v12->fields._size )
  {
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      v12,
      (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      switch ( v21.fields._current )
      {
        case 0x131:
          Filter = ListViewSort__GetFilter(this, 92, v14);
          break;
        case 0x130:
          Filter = ListViewSort__GetFilter(this, 93, v14);
          break;
        case 0x12F:
          Filter = ListViewSort__GetFilter(this, 91, v14);
          break;
        default:
          Filter = ListViewSort__GetFilter(this, 94, v14);
          break;
      }
      if ( Filter )
      {
        v16 = 1;
        v17 = 11;
        goto LABEL_24;
      }
    }
    v16 = 0;
    v17 = 12;
LABEL_24:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v21,
      (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v18 = v16 & (v17 == 11);
  }
  else
  {
    v18 = ListViewSort__GetFilter(this, 94, v13);
  }
  return v18 & 1;
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
  const MethodInfo *v11; // x2
  int32_t status; // w8
  int32_t v13; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C44750 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C44750 = 1;
  }
  entity = 0;
  if ( !svtEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v17, 0);
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
        v13 = 12;
      }
      else
      {
        if ( status != 1 )
          return 0;
        v13 = 11;
      }
      return ListViewSort__GetFilter(this, v13, v11);
    }
LABEL_26:
    sub_1C372B4(v10);
  }
  return ListViewSort__GetFilter(this, 11, v11);
}


bool ListViewSort__IsMatchServantEquipCombineStatusFilter(
        ListViewSort_o *this,
        UserServantEntity_o *userServantEntity,
        ServantEntity_o *svtEntity,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  _BOOL8 Filter; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v16; // x2

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
  if ( ListViewSort__GetFilter(this, 78, v10)
    && !UserServantEntity__isLimitCountMax(userServantEntity, 0)
    && UserServantEntity__IsSameSvtEquipToLimitMaxNum(userServantEntity, isWarehouseServantEquip, 0)
    || ListViewSort__GetFilter(this, 79, v11)
    && !UserServantEntity__isLimitCountMax(userServantEntity, 0)
    && UserServantEntity__GetSameSvtEquipNumIsLimitUp(userServantEntity, 0, isWarehouseServantEquip, 0) > 1 )
  {
    return 1;
  }
  Filter = ListViewSort__GetFilter(this, 80, v12);
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
  if ( ListViewSort__GetFilter(this, 81, v13) && UserServantEntity__isLevelMax(userServantEntity, 0) )
    return 1;
  Filter = ListViewSort__GetFilter(this, 82, v14);
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
  Filter = ListViewSort__GetFilter(this, 83, v16);
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
    sub_1C372B4(Filter);
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
    sub_1C372B4(this);
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

  if ( (byte_4C4474F & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4474F = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15, 0);
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

  if ( (byte_4C44755 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C44755 = 1;
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
                                          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v30, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
      v23 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      *(_QWORD *)&v31.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      v25 = (ServantLimitAddMaster_o *)v23;
      *(_QWORD *)&v31.fields.currentCryptoKey = v24;
      ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
        ServantSubAttriFilterKindList = (System_Collections_Generic_List_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AttriMaster___);
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
    sub_1C372B4(ServantSubAttriFilterKindList);
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
          sub_1C372BC(this);
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
            sub_1C372BC(this);
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
  const MethodInfo *v33; // x2
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v36; // x8
  bool *m_Items; // x10
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v39; // x9
  unsigned __int64 v40; // x8
  bool *v41; // x10
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x24
  __int64 v44; // x0
  bool v45; // w0
  struct System_Collections_Generic_Dictionary_int__int____o *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x0
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v50; // x9
  unsigned __int64 v51; // x8
  bool *v52; // x10
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v54; // x9
  unsigned __int64 v55; // x8
  bool *v56; // x10
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  const MethodInfo *v59; // x1
  System_String_o *v60; // x0
  ListViewSort_o *v61; // x0
  const MethodInfo *v62; // x2
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v63; // kr10_16
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x22
  __int64 v65; // x0
  System_Collections_Generic_Dictionary_int__int__o *v66; // x22
  __int64 v67; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4C4471D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__int____get_Value__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_3199/*"BonusKind2Id-"*/);
    sub_1C37058(&StringLiteral_6308/*"ExpUpDispType-"*/);
    sub_1C37058(&StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/);
    sub_1C37058(&StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C37058(&StringLiteral_2499/*"AutoOrganizationMode-"*/);
    sub_1C37058(&StringLiteral_3198/*"BonusKind2-"*/);
    sub_1C37058(&StringLiteral_10729/*"PresentBoxSortFilterNew-"*/);
    sub_1C37058(&StringLiteral_10740/*"PriorityKind-"*/);
    sub_1C37058(&StringLiteral_7530/*"IconSizeKind-"*/);
    sub_1C37058(&StringLiteral_3197/*"BonusKind-"*/);
    sub_1C37058(&StringLiteral_4421/*"ChoiceSortOrder-"*/);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    sub_1C37058(&StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_2498/*"AutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_10066/*"OtherSortKind-"*/);
    sub_1C37058(&StringLiteral_12646/*"ScrollBarValue-"*/);
    sub_1C37058(&StringLiteral_7985/*"IsClearFilterServantClass20231117-"*/);
    sub_1C37058(&StringLiteral_12927/*"SortFilter2-"*/);
    sub_1C37058(&StringLiteral_12931/*"SortKind-"*/);
    sub_1C37058(&StringLiteral_6307/*"ExpUpDispKind-"*/);
    sub_1C37058(&StringLiteral_12932/*"SortOrder-"*/);
    sub_1C37058(&StringLiteral_3200/*"BonusKindId-"*/);
    sub_1C37058(&StringLiteral_13195/*"SvtEventBonusFilterNew-"*/);
    byte_4C4471D = 1;
  }
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
  if ( this->fields.isRequestLoad )
  {
    *(_WORD *)&this->fields.isRequestLoad = 256;
    v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_12931/*"SortKind-"*/, this->fields.saveKey, 0);
    this->fields.sortKind = UnityEngine_PlayerPrefs__GetInt(v3, this->fields.defaultSortKind, 0);
    v4 = System_String__Concat_63561656((System_String_o *)StringLiteral_12932/*"SortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isAscendingOrder = UnityEngine_PlayerPrefs__GetInt(v4, this->fields.isDefaultAscendingOrder, 0) != 0;
    v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_3197/*"BonusKind-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind = UnityEngine_PlayerPrefs__GetInt(v5, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_3200/*"BonusKindId-"*/, this->fields.saveKey, 0);
    this->fields.bonusKindId = UnityEngine_PlayerPrefs__GetInt(
                                 v6,
                                 this->fields.bonusFilterInfoDefault.fields.eventId,
                                 0);
    v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_3198/*"BonusKind2-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind2 = UnityEngine_PlayerPrefs__GetInt(v7, this->fields.bonusFilterInfoDefault.fields.kind, 0);
    v8 = System_String__Concat_63561656((System_String_o *)StringLiteral_3199/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
    this->fields.bonusKind2Id = UnityEngine_PlayerPrefs__GetInt(
                                  v8,
                                  this->fields.bonusFilterInfoDefault.fields.eventId,
                                  0);
    v9 = System_String__Concat_63561656((System_String_o *)StringLiteral_12927/*"SortFilter2-"*/, this->fields.saveKey, 0);
    this->fields.filter2Kind = UnityEngine_PlayerPrefs__GetInt(v9, 0, 0);
    v10 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isSmartSort = UnityEngine_PlayerPrefs__GetInt(v10, 1, 0) == 1;
    v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_4421/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
    this->fields.isChoiceSort = UnityEngine_PlayerPrefs__GetInt(v11, 0, 0) == 1;
    FilterListData = ListViewSort__GetFilterListData(this, v12);
    ListViewSort__SetFilterListData(this, FilterListData, v14);
    v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_10729/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v15, 0, 0);
    v17 = System_String__Concat_63561656((System_String_o *)StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
    v18 = UnityEngine_PlayerPrefs__GetInt(v17, 0, 0);
    v19 = System_String__Concat_63561656((System_String_o *)StringLiteral_7530/*"IconSizeKind-"*/, this->fields.saveKey, 0);
    this->fields.iconScaleKind = UnityEngine_PlayerPrefs__GetInt(v19, 0, 0);
    v20 = System_String__Concat_63561656((System_String_o *)StringLiteral_6307/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
    this->fields.expUpDispKind = UnityEngine_PlayerPrefs__GetInt(v20, 0, 0);
    v21 = System_String__Concat_63561656((System_String_o *)StringLiteral_6308/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
    this->fields.expUpDispType = UnityEngine_PlayerPrefs__GetInt(v21, 0, 0);
    v22 = System_String__Concat_63561656((System_String_o *)StringLiteral_12646/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
    this->fields.scrollBarValue = UnityEngine_PlayerPrefs__GetFloat(v22, 0.0, 0);
    v23 = System_String__Concat_63561656((System_String_o *)StringLiteral_13195/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
    String = UnityEngine_PlayerPrefs__GetString(v23, string_TypeInfo->static_fields->Empty, 0);
    v25 = System_String__Concat_63561656((System_String_o *)StringLiteral_2498/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v26 = UnityEngine_PlayerPrefs__GetInt(v25, 0, 0);
    v27 = System_String__Concat_63561656((System_String_o *)StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
    v28 = UnityEngine_PlayerPrefs__GetInt(v27, 0, 0);
    v29 = System_String__Concat_63561656((System_String_o *)StringLiteral_2499/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
    this->fields.autoOrganizationMode = UnityEngine_PlayerPrefs__GetInt(v29, 0, 0);
    v30 = System_String__Concat_63561656((System_String_o *)StringLiteral_10740/*"PriorityKind-"*/, this->fields.saveKey, 0);
    this->fields.priorityKind = UnityEngine_PlayerPrefs__GetInt(v30, 0, 0);
    v31 = System_String__Concat_63561656((System_String_o *)StringLiteral_10066/*"OtherSortKind-"*/, this->fields.saveKey, 0);
    v32 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetInt(v31, 11, 0);
    isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
    this->fields.otherSortKind = (int)v32;
    if ( !isPresentBoxFilterList )
      goto LABEL_45;
    max_length_low = LODWORD(isPresentBoxFilterList->max_length);
    v36 = 0;
    m_Items = isPresentBoxFilterList->m_Items;
    do
    {
      if ( v36 >= max_length_low )
LABEL_39:
        sub_1C372BC(v32);
      m_Items[v36++] = Int & 1;
      Int >>= 1;
    }
    while ( v36 != 15 );
    isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
    if ( !isPresentBoxRarityFilterList )
      goto LABEL_45;
    v39 = LODWORD(isPresentBoxRarityFilterList->max_length);
    v40 = 0;
    v41 = isPresentBoxRarityFilterList->m_Items;
    do
    {
      if ( v40 >= v39 )
        goto LABEL_39;
      v41[v40++] = v18 & 1;
      v18 >>= 1;
    }
    while ( v40 != 5 );
    v32 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEventBonusFilterData(v32, String, v33);
    if ( !v32 )
      goto LABEL_45;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v68,
      (System_Collections_Generic_Dictionary_object__object__o *)v32,
      (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__int____GetEnumerator__);
    v70 = v68;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v70,
              (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____MoveNext__) )
    {
      current = v70.fields._current;
      svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
      v44 = System_Int32__Parse((System_String_o *)v70.fields._current.fields.key, 0);
      if ( !svtEventBonusFilterDic )
        sub_1C372B4(v44);
      v45 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
              v44,
              (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
      v46 = this->fields.svtEventBonusFilterDic;
      if ( v45 )
      {
        v47 = System_Int32__Parse((System_String_o *)current.fields.key, 0);
        if ( !v46 )
          sub_1C372B4(v47);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)v46,
          v47,
          current.fields.value,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
      }
      else
      {
        v48 = System_Int32__Parse((System_String_o *)current.fields.key, 0);
        if ( !v46 )
          sub_1C372B4(v48);
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)v46,
          v48,
          current.fields.value,
          (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v70,
      (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int____Dispose__);
    isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
    if ( !isAutoOrganizationFilterList )
      goto LABEL_45;
    v50 = LODWORD(isAutoOrganizationFilterList->max_length);
    v51 = 0;
    v52 = isAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v51 >= v50 )
        goto LABEL_39;
      v52[v51++] = v26 & 1;
      v26 >>= 1;
    }
    while ( v51 != 13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_45:
      sub_1C372B4(v32);
    v54 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v55 = 0;
    v56 = isWaveBattleAutoOrganizationFilterList->m_Items;
    do
    {
      if ( v55 >= v54 )
        goto LABEL_39;
      v56[v55++] = v28 & 1;
      v28 >>= 1;
    }
    while ( v55 != 7 );
    v57 = System_String__Concat_63561656((System_String_o *)StringLiteral_7985/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v57, 0, 0) != 1 )
    {
      ListViewSort__ClassFilterOffInSameClass(this, method);
      v58 = System_String__Concat_63561656((System_String_o *)StringLiteral_7985/*"IsClearFilterServantClass20231117-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v58, 1, 0);
    }
  }
  ListViewSort__AdjustmentEventBonusFilter(this, method);
  ListViewSort__InitSvtEquipEffectFilterList(this, v59);
  v60 = System_String__Concat_63561656((System_String_o *)StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
  v61 = (ListViewSort_o *)UnityEngine_PlayerPrefs__GetString(v60, string_TypeInfo->static_fields->Empty, 0);
  v32 = (ListViewSort_o *)ListViewSort__ConvertJsonToSvtEquipEffectFilterData(v61, (System_String_o *)v61, v62);
  if ( !v32 )
    goto LABEL_45;
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v68,
    (System_Collections_Generic_Dictionary_object__int__o *)v32,
    (const MethodInfo_345ACF0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v69 = v68;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
            &v69,
            (const MethodInfo_355E558 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
  {
    v63 = v69.fields._current;
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    v65 = System_Int32__Parse((System_String_o *)v69.fields._current.fields.key, 0);
    if ( !isSvtEquipEffectFilterDic )
      sub_1C372B4(v65);
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           isSvtEquipEffectFilterDic,
           v65,
           (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v66 = this->fields.isSvtEquipEffectFilterDic;
      v67 = System_Int32__Parse((System_String_o *)v63.fields.key, 0);
      if ( !v66 )
        sub_1C372B4(v67);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v66,
        v67,
        (int32_t)v63.fields.value,
        (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
    &v69,
    (const MethodInfo_355E67C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
}


void ListViewSort__ResetAllNormalFilter(ListViewSort_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x8
  unsigned __int64 max_length_low; // x9
  __int64 i; // x10

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C372B4(this);
  max_length_low = LODWORD(isFilterList->max_length);
  for ( i = 133; i != 31; --i )
  {
    if ( i - 32 >= max_length_low )
      sub_1C372BC(this);
    *((_BYTE *)&isFilterList->obj.klass + i) = (((_DWORD)i - 32) & 0xFFFFFFFE) == 40;
  }
}


void ListViewSort__Save(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *FilterListDataText; // x0
  const MethodInfo *v4; // x6
  struct System_Boolean_array *isPresentBoxFilterList; // x10
  unsigned __int64 max_length_low; // x9
  System_String_o *v7; // x23
  __int64 v8; // x8
  int32_t v9; // w22
  bool *v10; // x10
  _BOOL4 v11; // w11
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x10
  unsigned __int64 v13; // x9
  __int64 v14; // x8
  int32_t v15; // w24
  bool *v16; // x10
  _BOOL4 v17; // w11
  struct System_Boolean_array *isAutoOrganizationFilterList; // x10
  unsigned __int64 v19; // x9
  __int64 v20; // x8
  int32_t v21; // w20
  bool *v22; // x10
  _BOOL4 v23; // w11
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x10
  unsigned __int64 v25; // x9
  __int64 v26; // x8
  int32_t v27; // w21
  bool *v28; // x10
  _BOOL4 v29; // w11
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  const MethodInfo *v47; // x1
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0

  if ( (byte_4C44724 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3199/*"BonusKind2Id-"*/);
    sub_1C37058(&StringLiteral_6308/*"ExpUpDispType-"*/);
    sub_1C37058(&StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/);
    sub_1C37058(&StringLiteral_2499/*"AutoOrganizationMode-"*/);
    sub_1C37058(&StringLiteral_3198/*"BonusKind2-"*/);
    sub_1C37058(&StringLiteral_10729/*"PresentBoxSortFilterNew-"*/);
    sub_1C37058(&StringLiteral_12928/*"SortFilterLongNew-"*/);
    sub_1C37058(&StringLiteral_10740/*"PriorityKind-"*/);
    sub_1C37058(&StringLiteral_7530/*"IconSizeKind-"*/);
    sub_1C37058(&StringLiteral_3197/*"BonusKind-"*/);
    sub_1C37058(&StringLiteral_4421/*"ChoiceSortOrder-"*/);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    sub_1C37058(&StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_2498/*"AutoOrganizationFilterNew-"*/);
    sub_1C37058(&StringLiteral_10066/*"OtherSortKind-"*/);
    sub_1C37058(&StringLiteral_12646/*"ScrollBarValue-"*/);
    sub_1C37058(&StringLiteral_12927/*"SortFilter2-"*/);
    sub_1C37058(&StringLiteral_12931/*"SortKind-"*/);
    sub_1C37058(&StringLiteral_6307/*"ExpUpDispKind-"*/);
    sub_1C37058(&StringLiteral_12932/*"SortOrder-"*/);
    sub_1C37058(&StringLiteral_3200/*"BonusKindId-"*/);
    byte_4C44724 = 1;
  }
  if ( this->fields.isRequestSave )
  {
    FilterListDataText = ListViewSort__GetFilterListDataText(this, method);
    isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
    if ( !isPresentBoxFilterList )
      goto LABEL_24;
    max_length_low = LODWORD(isPresentBoxFilterList->max_length);
    v7 = FilterListDataText;
    v8 = 0;
    v9 = 0;
    v10 = &isPresentBoxFilterList->m_Items[14];
    do
    {
      if ( v8 + 14 >= max_length_low )
LABEL_23:
        sub_1C372BC(FilterListDataText);
      v11 = v10[v8--];
      v9 = v11 | (2 * v9);
    }
    while ( v8 != -15 );
    isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
    if ( !isPresentBoxRarityFilterList )
      goto LABEL_24;
    v13 = LODWORD(isPresentBoxRarityFilterList->max_length);
    v14 = 0;
    v15 = 0;
    v16 = &isPresentBoxRarityFilterList->m_Items[4];
    do
    {
      if ( v14 + 4 >= v13 )
        goto LABEL_23;
      v17 = v16[v14--];
      v15 = v17 | (2 * v15);
    }
    while ( v14 != -5 );
    isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
    if ( !isAutoOrganizationFilterList )
      goto LABEL_24;
    v19 = LODWORD(isAutoOrganizationFilterList->max_length);
    v20 = 0;
    v21 = 0;
    v22 = &isAutoOrganizationFilterList->m_Items[12];
    do
    {
      if ( v20 + 12 >= v19 )
        goto LABEL_23;
      v23 = v22[v20--];
      v21 = v23 | (2 * v21);
    }
    while ( v20 != -13 );
    isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
    if ( !isWaveBattleAutoOrganizationFilterList )
LABEL_24:
      sub_1C372B4(FilterListDataText);
    v25 = LODWORD(isWaveBattleAutoOrganizationFilterList->max_length);
    v26 = 0;
    v27 = 0;
    v28 = &isWaveBattleAutoOrganizationFilterList->m_Items[6];
    do
    {
      if ( v26 + 6 >= v25 )
        goto LABEL_23;
      v29 = v28[v26--];
      v27 = v29 | (2 * v27);
    }
    while ( v26 != -7 );
    if ( ListViewSort__IsChangeSaveData(this, FilterListDataText, v9, v15, v21, v27, v4) )
    {
      v30 = System_String__Concat_63561656((System_String_o *)StringLiteral_12931/*"SortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v30, this->fields.sortKind, 0);
      v31 = System_String__Concat_63561656((System_String_o *)StringLiteral_12932/*"SortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v31, this->fields.isAscendingOrder, 0);
      v32 = System_String__Concat_63561656((System_String_o *)StringLiteral_3197/*"BonusKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v32, this->fields.bonusKind, 0);
      v33 = System_String__Concat_63561656((System_String_o *)StringLiteral_3200/*"BonusKindId-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v33, this->fields.bonusKindId, 0);
      v34 = System_String__Concat_63561656((System_String_o *)StringLiteral_3198/*"BonusKind2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v34, this->fields.bonusKind2, 0);
      v35 = System_String__Concat_63561656((System_String_o *)StringLiteral_3199/*"BonusKind2Id-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v35, this->fields.bonusKind2Id, 0);
      v36 = System_String__Concat_63561656((System_String_o *)StringLiteral_12928/*"SortFilterLongNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetString(v36, v7, 0);
      v37 = System_String__Concat_63561656((System_String_o *)StringLiteral_10729/*"PresentBoxSortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v37, v9, 0);
      v38 = System_String__Concat_63561656((System_String_o *)StringLiteral_10728/*"PresentBoxRaritySortFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v38, v15, 0);
      ListViewSort__SetSvtEquipEffectFilter(this, v39);
      v40 = System_String__Concat_63561656((System_String_o *)StringLiteral_12927/*"SortFilter2-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v40, this->fields.filter2Kind, 0);
      v41 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v41, this->fields.isSmartSort, 0);
      v42 = System_String__Concat_63561656((System_String_o *)StringLiteral_4421/*"ChoiceSortOrder-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v42, this->fields.isChoiceSort, 0);
      v43 = System_String__Concat_63561656((System_String_o *)StringLiteral_7530/*"IconSizeKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v43, this->fields.iconScaleKind, 0);
      v44 = System_String__Concat_63561656((System_String_o *)StringLiteral_6307/*"ExpUpDispKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v44, this->fields.expUpDispKind, 0);
      v45 = System_String__Concat_63561656((System_String_o *)StringLiteral_6308/*"ExpUpDispType-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v45, this->fields.expUpDispType, 0);
      v46 = System_String__Concat_63561656((System_String_o *)StringLiteral_12646/*"ScrollBarValue-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetFloat(v46, this->fields.scrollBarValue, 0);
      ListViewSort__SetSvtEventBonusFilter(this, v47);
      v48 = System_String__Concat_63561656((System_String_o *)StringLiteral_2498/*"AutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v48, v21, 0);
      v49 = System_String__Concat_63561656((System_String_o *)StringLiteral_15602/*"WaveBattleAutoOrganizationFilterNew-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v49, v27, 0);
      v50 = System_String__Concat_63561656((System_String_o *)StringLiteral_2499/*"AutoOrganizationMode-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v50, this->fields.autoOrganizationMode, 0);
      v51 = System_String__Concat_63561656((System_String_o *)StringLiteral_10740/*"PriorityKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v51, this->fields.priorityKind, 0);
      v52 = System_String__Concat_63561656((System_String_o *)StringLiteral_10066/*"OtherSortKind-"*/, this->fields.saveKey, 0);
      UnityEngine_PlayerPrefs__SetInt(v52, this->fields.otherSortKind, 0);
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

  if ( (byte_4C44729 & 1) == 0 )
  {
    sub_1C37058(&CombineServantListViewManager_TypeInfo);
    sub_1C37058(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C37058(&PartyServantListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_12916/*"SmartSortOrder-"*/);
    byte_4C44729 = 1;
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
  v4 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, SORT_SAVE_KEY, v3, 0);
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
  v8 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v6, v7, 0);
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
  v12 = System_String__Concat_63599904((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v10, v11, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v12, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v12, 1, 0);
  v13 = EventServantFatigueListViewManager_TypeInfo;
  if ( !EventServantFatigueListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantFatigueListViewManager_TypeInfo);
    v13 = EventServantFatigueListViewManager_TypeInfo;
  }
  v14 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v13->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v14, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v14, 1, 0);
  v15 = PartyServantListViewManager_TypeInfo;
  if ( !PartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewManager_TypeInfo);
    v15 = PartyServantListViewManager_TypeInfo;
  }
  v16 = System_String__Concat_63561656((System_String_o *)StringLiteral_12916/*"SmartSortOrder-"*/, v15->static_fields->SORT_SAVE_KEY, 0);
  if ( UnityEngine_PlayerPrefs__GetInt(v16, -1, 0) == -1 )
    UnityEngine_PlayerPrefs__SetInt(v16, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIconScaleKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4C44727 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7530/*"IconSizeKind-"*/);
    byte_4C44727 = 1;
  }
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_7530/*"IconSizeKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.iconScaleKind, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveIsAscendingOrder(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4C44726 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12932/*"SortOrder-"*/);
    byte_4C44726 = 1;
  }
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_12932/*"SortOrder-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.isAscendingOrder, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ListViewSort__SaveSortKind(ListViewSort_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4C44725 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_10066/*"OtherSortKind-"*/);
    sub_1C37058(&StringLiteral_12931/*"SortKind-"*/);
    byte_4C44725 = 1;
  }
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_12931/*"SortKind-"*/, this->fields.saveKey, 0);
  UnityEngine_PlayerPrefs__SetInt(v3, this->fields.sortKind, 0);
  v4 = System_String__Concat_63561656((System_String_o *)StringLiteral_10066/*"OtherSortKind-"*/, this->fields.saveKey, 0);
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
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int32_t key_high; // w21
  int32_t key; // w22
  bool v33; // w8
  System_Collections_Generic_Dictionary_int__int__o *v34; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *svtEventBonusFilterDic; // x20
  System_Collections_Generic_Dictionary_int__object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  _OWORD v39[2]; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+30h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C44733 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor___78004280);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    this = (ListViewSort_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C44733 = 1;
  }
  memset(&v40, 0, 32);
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
      sub_1C372BC(this);
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
    sub_1C372B4(this);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v39,
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v40.fields._dictionary = v39[0];
  v40.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v39[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v40,
            (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    isSvtEquipEffectFilterDic = v4->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_1C372B4(0);
    key = (int32_t)v40.fields._current.fields.key;
    key_high = HIDWORD(v40.fields._current.fields.key);
    v33 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            isSvtEquipEffectFilterDic,
            (int32_t)v40.fields._current.fields.key,
            (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v34 = v4->fields.isSvtEquipEffectFilterDic;
    if ( v33 )
    {
      if ( !v34 )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v34,
        key,
        key_high,
        (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    }
    else
    {
      if ( !v34 )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_int__int___Add(
        v34,
        key,
        key_high,
        (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v40,
    (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  svtEventBonusFilterDic = (System_Collections_Generic_IDictionary_TKey__TValue__o *)o->fields.svtEventBonusFilterDic;
  v36 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor_54500496(
    v36,
    svtEventBonusFilterDic,
    (const MethodInfo_33F9C90 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor___78004280);
  v4->fields.svtEventBonusFilterDic = (struct System_Collections_Generic_Dictionary_int__int____o *)v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.svtEventBonusFilterDic, (int32_t)v36, v37, v38);
}


void ListViewSort__SetAllNomalFilter(ListViewSort_o *this, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isFilterList; // x11
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v5; // x8
  bool *m_Items; // x11

  isFilterList = this->fields.isFilterList;
  if ( !isFilterList )
    sub_1C372B4(this);
  max_length_low = LODWORD(isFilterList->max_length);
  v5 = 0;
  m_Items = isFilterList->m_Items;
  do
  {
    if ( v5 >= max_length_low )
      sub_1C372BC(this);
    m_Items[v5++] = isEnable;
  }
  while ( v5 != 102 );
}


void ListViewSort__SetAllSvtEquipEffectFilter(ListViewSort_o *this, bool isEnable, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x22
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x20
  System_Collections_Generic_Dictionary_int__int__o *v9; // x0
  System_Collections_Generic_List_Enumerator_int__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4472F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4472F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic
    || (Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
                 isSvtEquipEffectFilterDic,
                 (const MethodInfo_33F1790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__),
        v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_58218708(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976),
        !v7) )
  {
    sub_1C372B4(isSvtEquipEffectFilterDic);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    v7,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = v10;
  if ( isEnable )
    v8 = 20;
  else
    v8 = 16;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v11,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v9 = this->fields.isSvtEquipEffectFilterDic;
    if ( !v9 )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v9,
      v11.fields._current,
      *(_DWORD *)((char *)&this->klass + v8),
      (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v11,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v6; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C44730 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    byte_4C44730 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        (Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                  RewardUpFuncCategory,
                                                  (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___)) == 0) )
  {
    sub_1C372B4(Master_object);
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v6,
    (System_Collections_Generic_HashSet_int__o *)Master_object,
    (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v6;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        System_Collections_Generic_Dictionary_int__int___set_Item(
          isSvtEquipEffectFilterDic,
          (int32_t)i.fields._current,
          this->fields.SVT_EQUIP_EFFECT_FILTER_ENABLE,
          (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
    if ( !isSvtEquipEffectFilterDic )
      sub_1C372B4(0);
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1C372B4(this);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C372BC(this);
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
  if ( (byte_4C4471E & 1) == 0 )
  {
    this = (ListViewSort_o *)sub_1C37058(&long___TypeInfo);
    byte_4C4471E = 1;
  }
  if ( !filterListDataText )
    goto LABEL_24;
  v5 = System_String__Split(filterListDataText, 0x2Cu, 0, 0);
  this = (ListViewSort_o *)sub_1C37100(long___TypeInfo, 2);
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
    sub_1C372B4(this);
  }
LABEL_14:
  if ( !v8 )
LABEL_22:
    sub_1C372BC(this);
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


void ListViewSort__SetFilter_43867120(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isPresentBoxFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_43867172(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isPresentBoxRarityFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_43867404(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isAutoOrganizationFilterList->m_Items[kind] = isEnable;
}


void ListViewSort__SetFilter_43867456(ListViewSort_o *this, int32_t kind, bool isEnable, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
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
          sub_1C372B4(this);
        v7 = kindList->m_Items[v6];
        if ( (unsigned int)v7 >= LODWORD(isFilterList->max_length) )
LABEL_9:
          sub_1C372BC(this);
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
  const MethodInfo *v3; // x3

  this->fields.manager = manager;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
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
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  int key_high; // x27^4
  Il2CppObject *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C4472D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C37058(&StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/);
    byte_4C4472D = 1;
  }
  memset(&v17, 0, 32);
  *(&v16.fields._getEnumeratorRetType + 1) = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v16,
    isSvtEquipEffectFilterDic,
    (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v17.fields._dictionary = *(_OWORD *)&v16.fields._dictionary;
  v17.fields._current = v16.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v17,
            (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v17.fields._current.fields.key);
    *(&v16.fields._getEnumeratorRetType + 1) = (int32_t)v17.fields._current.fields.key;
    v6 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v16.fields._getEnumeratorRetType + 1), 0);
    LODWORD(v16.fields._dictionary) = key_high;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v7, v8, v9, v10, v11, v12);
    if ( !v3 )
      sub_1C372B4(v13);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v6,
      v13,
      (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v17,
    (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v14, 0) )
  {
    v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_13194/*"SvtEquipEffectFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v15, v14, 0);
  }
}


void ListViewSort__SetSvtEquipEffectFilter_43867224(
        ListViewSort_o *this,
        int32_t categoryId,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  __int64 v8; // x8

  if ( (byte_4C4473C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4C4473C = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
LABEL_10:
    sub_1C372B4(isSvtEquipEffectFilterDic);
  v8 = 16;
  if ( isEnable )
    v8 = 20;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    isSvtEquipEffectFilterDic,
    categoryId,
    *(_DWORD *)((char *)&this->klass + v8),
    (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
}


void ListViewSort__SetSvtEventBonusFilter(ListViewSort_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  struct System_Collections_Generic_Dictionary_int__int____o *svtEventBonusFilterDic; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  int key; // [xsp+Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4C4472E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int____get_Current__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_1C37058(&StringLiteral_13195/*"SvtEventBonusFilterNew-"*/);
    byte_4C4472E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  key = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  svtEventBonusFilterDic = this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__int____GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v10,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____MoveNext__) )
  {
    current = v10.fields._current;
    key = (int)v10.fields._current.fields.key;
    v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    if ( !v3 )
      sub_1C372B4(v6);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v6,
      current.fields.value,
      (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v10,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int____Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v7, 0) )
  {
    v8 = System_String__Concat_63561656((System_String_o *)StringLiteral_13195/*"SvtEventBonusFilterNew-"*/, this->fields.saveKey, 0);
    UnityEngine_PlayerPrefs__SetString(v8, v7, 0);
  }
}


void ListViewSort__SetSvtEventBonusFilter_43867516(
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

  if ( (byte_4C4473D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4473D = 1;
  }
  svtEventBonusFilterDic = (__int64)this->fields.svtEventBonusFilterDic;
  if ( !svtEventBonusFilterDic )
    goto LABEL_23;
  svtEventBonusFilterDic = System_Collections_Generic_Dictionary_int__object___ContainsKey(
                             (System_Collections_Generic_Dictionary_int__object__o *)svtEventBonusFilterDic,
                             eventId,
                             (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
  v10 = this->fields.svtEventBonusFilterDic;
  if ( (svtEventBonusFilterDic & 1) == 0 )
  {
    if ( isHide )
    {
      svtEventBonusFilterDic = sub_1C37100(int___TypeInfo, 1);
      if ( !svtEventBonusFilterDic )
        goto LABEL_23;
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
      if ( !*(_DWORD *)(svtEventBonusFilterDic + 24) )
        sub_1C372BC(svtEventBonusFilterDic);
      *(_DWORD *)(svtEventBonusFilterDic + 32) = objectId;
    }
    else
    {
      svtEventBonusFilterDic = sub_1C37100(int___TypeInfo, 0);
      v16 = (Il2CppObject *)svtEventBonusFilterDic;
    }
    if ( v10 )
    {
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)v10,
        eventId,
        v16,
        (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
      return;
    }
LABEL_23:
    sub_1C372B4(svtEventBonusFilterDic);
  }
  if ( !v10 )
    goto LABEL_23;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtEventBonusFilterDic,
           eventId,
           (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Item,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  if ( !v12 )
    goto LABEL_23;
  if ( isHide )
  {
    svtEventBonusFilterDic = System_Collections_Generic_List_int___Contains(
                               v12,
                               objectId,
                               (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
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
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
      (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
  }
  v17 = this->fields.svtEventBonusFilterDic;
  svtEventBonusFilterDic = (__int64)System_Collections_Generic_List_int___ToArray(
                                      v12,
                                      (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v17 )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v17,
    eventId,
    (Il2CppObject *)svtEventBonusFilterDic,
    (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
}


void ListViewSort__SetupSortLabelLayout(ListViewSort_o *this, UILabel_o *label, const MethodInfo *method)
{
  int32_t sortKind; // w8
  int32_t v5; // w1
  float v6; // s8
  int32_t v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !label )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  if ( LODWORD(isFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_43868152(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxFilterList; // x8

  isPresentBoxFilterList = this->fields.isPresentBoxFilterList;
  if ( !isPresentBoxFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isPresentBoxFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_43868208(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isPresentBoxRarityFilterList; // x8

  isPresentBoxRarityFilterList = this->fields.isPresentBoxRarityFilterList;
  if ( !isPresentBoxRarityFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isPresentBoxRarityFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isPresentBoxRarityFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_43868476(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isAutoOrganizationFilterList; // x8

  isAutoOrganizationFilterList = this->fields.isAutoOrganizationFilterList;
  if ( !isAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchFilter_43868532(ListViewSort_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_Boolean_array *isWaveBattleAutoOrganizationFilterList; // x8

  isWaveBattleAutoOrganizationFilterList = this->fields.isWaveBattleAutoOrganizationFilterList;
  if ( !isWaveBattleAutoOrganizationFilterList )
    sub_1C372B4(this);
  if ( LODWORD(isWaveBattleAutoOrganizationFilterList->max_length) <= kind )
    sub_1C372BC(this);
  isWaveBattleAutoOrganizationFilterList->m_Items[kind] ^= 1u;
}


void ListViewSort__SwitchSvtEquipEffectFilter(ListViewSort_o *this, int32_t categoryId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *isSvtEquipEffectFilterDic; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_4C4473E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4C4473E = 1;
  }
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          isSvtEquipEffectFilterDic,
          categoryId,
          (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return;
  isSvtEquipEffectFilterDic = this->fields.isSvtEquipEffectFilterDic;
  if ( !isSvtEquipEffectFilterDic
    || (isSvtEquipEffectFilterDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                           isSvtEquipEffectFilterDic,
                                                                                           categoryId,
                                                                                           (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v6 = this->fields.isSvtEquipEffectFilterDic) == 0) )
  {
LABEL_12:
    sub_1C372B4(isSvtEquipEffectFilterDic);
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
    (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1C372B4(this);
  max_length_low = LODWORD(isPresentBoxFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C372BC(this);
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
    sub_1C372B4(this);
  max_length_low = LODWORD(isPresentBoxRarityFilterList->max_length);
  v4 = 0;
  m_Items = isPresentBoxRarityFilterList->m_Items;
  v6 = 1;
  do
  {
    if ( v4 >= max_length_low )
      sub_1C372BC(this);
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
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v7; // x21
  unsigned __int64 v8; // x23
  ListViewSort_BonusFilterInfo_array *v9; // x26
  il2cpp_array_size_t v10; // x8
  EventGroupEntity_o *v11; // x28
  unsigned __int64 v12; // x27
  int32_t *v13; // x29
  __int64 v14; // x8
  __int64 v15; // x11
  int32_t v16; // w9
  ListViewSort_BonusFilterInfo_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ListViewSort_BonusFilterInfo_o v20; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v21; // [xsp+18h] [xbp-88h]
  int32_t v22; // [xsp+20h] [xbp-80h]
  __int64 v23; // [xsp+28h] [xbp-78h]
  int32_t v24; // [xsp+30h] [xbp-70h]
  __int64 v25; // [xsp+38h] [xbp-68h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4C44756 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    byte_4C44756 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventGroupEntities, 0) )
  {
    v5 = System_Linq_Enumerable__ToList_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*bonusFilterInfos,
           (const MethodInfo_312C27C *)Method_System_Linq_Enumerable_ToList_ListViewSort_BonusFilterInfo___);
    if ( !eventGroupEntities )
      goto LABEL_21;
    max_length = eventGroupEntities->max_length;
    v7 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)v5;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
          goto LABEL_22;
        v9 = *bonusFilterInfos;
        if ( !*bonusFilterInfos )
          goto LABEL_21;
        v10 = v9->max_length;
        if ( (int)v10 >= 1 )
          break;
LABEL_17:
        LODWORD(max_length) = eventGroupEntities->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          goto LABEL_18;
      }
      v11 = eventGroupEntities->m_Items[v8];
      v12 = 0;
      v13 = &v9->m_Items[0].fields.eventId + 1;
      while ( v12 < (unsigned int)v10 )
      {
        v14 = *(_QWORD *)(v13 - 3);
        v15 = *(_QWORD *)v13;
        v16 = *(v13 - 1);
        v24 = v13[2];
        v23 = v15;
        if ( !v11 )
          goto LABEL_21;
        if ( v16 == v11->fields.eventId )
        {
          v21 = v23;
          v22 = v24;
          if ( !v7 )
            goto LABEL_21;
          *(_QWORD *)&v20.fields.priority = v14;
          v20.fields.eventId = v16;
          HIDWORD(v20.fields.buttonText) = v22;
          *(_QWORD *)(&v20.fields.eventId + 1) = v21;
          v5 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_ListViewSort_BonusFilterInfo___Remove(
                                                               v7,
                                                               &v20,
                                                               (const MethodInfo_38501B8 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__Remove__);
        }
        LODWORD(v10) = v9->max_length;
        ++v12;
        v13 += 6;
        if ( (__int64)v12 >= (int)v10 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C372BC(v5);
    }
LABEL_18:
    if ( !v7 )
LABEL_21:
      sub_1C372B4(v5);
    v17 = System_Collections_Generic_List_ListViewSort_BonusFilterInfo___ToArray(
            v7,
            (const MethodInfo_38508E0 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__ToArray__);
    *bonusFilterInfos = v17;
    sub_1C36FFC((CGThumbnailListItem_o *)bonusFilterInfos, (int32_t)v17, v18, v19);
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

  if ( (byte_4C44717 & 1) == 0 )
  {
    sub_1C37058(&WarehouseListViewManager_TypeInfo);
    byte_4C44717 = 1;
  }
  if ( this->fields.listViewKind != 1 )
    return 0;
  saveKey = this->fields.saveKey;
  v4 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
  if ( !saveKey )
    sub_1C372B4(v4);
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
  sub_1C36FFC(
    (CGThumbnailListItem_o *)outButtonText,
    (int32_t)buttonText,
    (int32_t)outKind,
    (const MethodInfo *)outEventId);
}


void ListViewSort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44757 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C44757 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ListViewSort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewSort___c_TypeInfo->static_fields->__9 = (struct ListViewSort___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ListViewSort___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C44758 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___);
    this = (ListViewSort___c_o *)sub_1C37058(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_4C44758 = 1;
  }
  if ( !group )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  return ((*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v7)(
            group,
            *(_QWORD *)(v7 + 8))
        & 0x80000000) == 0
      && System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)group,
           (const MethodInfo_3108778 *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo___) > 1;
}


int32_t ListViewSort___c___BonusFilterGroupingCheck_b__163_7(
        ListViewSort___c_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
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
  if ( (byte_4C44759 & 1) == 0 )
  {
    this = (ListViewSort___c_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    byte_4C44759 = 1;
  }
  if ( !value )
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x3
  __int128 v11; // q0

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
    sub_1C36FFC((CGThumbnailListItem_o *)p_buttonText, (int32_t)ButtonTextFromLocalization, v9, v10);
  }
  v11 = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v11;
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x20
  ListViewSort___c_c *v14; // x0
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *_9__162_13; // x21
  Il2CppObject *v16; // x22
  struct ListViewSort___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Func_TSource__TResult__o *v21; // x1
  __int64 v22; // x21
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  ListViewSort___c_c *v24; // x0
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_14; // x22
  Il2CppObject *v26; // x23
  struct ListViewSort___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  ListViewSort___c_c *v31; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x19
  System_Func_ListViewSort_BonusFilterInfo__int__o *_9__162_15; // x22
  Il2CppObject *v34; // x23
  struct ListViewSort___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x19
  System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *v39; // x22

  if ( (byte_4C4475B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____78146104);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__);
    sub_1C37058(&Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__);
    sub_1C37058(&Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__);
    sub_1C37058(&ListViewSort___c__DisplayClass162_1_TypeInfo);
    sub_1C37058(&ListViewSort___c_TypeInfo);
    byte_4C4475B = 1;
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
      _9__162_12 = (System_Func_ListViewSort_BonusFilterInfo__bool__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__bool__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__bool____ctor(
        _9__162_12,
        v9,
        Method_ListViewSort___c__GetAlignedBonusFilter_b__162_12__,
        0);
      static_fields = ListViewSort___c_TypeInfo->static_fields;
      static_fields->__9__162_12 = _9__162_12;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__162_12, (int32_t)_9__162_12, v11, v12);
    }
    if ( System_Linq_Enumerable__Count_ListViewSort_BonusFilterInfo__51423060(
           (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
           (System_Func_TSource__bool__o *)_9__162_12,
           (const MethodInfo_310A754 *)Method_System_Linq_Enumerable_Count_ListViewSort_BonusFilterInfo____78146104) >= 2 )
    {
      v22 = sub_1C372A4(ListViewSort___c__DisplayClass162_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0);
      if ( !v22 )
        goto LABEL_35;
      *(_DWORD *)(v22 + 16) = 0;
      v24 = ListViewSort___c_TypeInfo;
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v24 = ListViewSort___c_TypeInfo;
      }
      _9__162_14 = v24->static_fields->__9__162_14;
      if ( !_9__162_14 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = ListViewSort___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__162_14 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_14,
          v26,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_14__,
          0);
        v27 = ListViewSort___c_TypeInfo->static_fields;
        v27->__9__162_14 = _9__162_14;
        sub_1C36FFC((CGThumbnailListItem_o *)&v27->__9__162_14, (int32_t)_9__162_14, v28, v29);
      }
      v30 = System_Linq_Enumerable__OrderByDescending_ListViewSort_BonusFilterInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos,
              (System_Func_TSource__TKey__o *)_9__162_14,
              (const MethodInfo_3117B4C *)Method_System_Linq_Enumerable_OrderByDescending_ListViewSort_BonusFilterInfo__int___);
      v31 = ListViewSort___c_TypeInfo;
      v32 = v30;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v31 = ListViewSort___c_TypeInfo;
      }
      _9__162_15 = v31->static_fields->__9__162_15;
      if ( !_9__162_15 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = ListViewSort___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v31->static_fields->__9;
        _9__162_15 = (System_Func_ListViewSort_BonusFilterInfo__int__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__int__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__int____ctor(
          _9__162_15,
          v34,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_15__,
          0);
        v35 = ListViewSort___c_TypeInfo->static_fields;
        v35->__9__162_15 = _9__162_15;
        sub_1C36FFC((CGThumbnailListItem_o *)&v35->__9__162_15, (int32_t)_9__162_15, v36, v37);
      }
      v38 = System_Linq_Enumerable__ThenBy_ListViewSort_BonusFilterInfo__int_(
              v32,
              (System_Func_TSource__TKey__o *)_9__162_15,
              (const MethodInfo_3126788 *)Method_System_Linq_Enumerable_ThenBy_ListViewSort_BonusFilterInfo__int___);
      v39 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
      System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
        v39,
        (Il2CppObject *)v22,
        Method_ListViewSort___c__DisplayClass162_1__GetAlignedBonusFilter_b__16__,
        0);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
      v21 = (System_Func_TSource__TResult__o *)v39;
    }
    else
    {
LABEL_12:
      allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
      v14 = ListViewSort___c_TypeInfo;
      if ( !ListViewSort___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ListViewSort___c_TypeInfo);
        v14 = ListViewSort___c_TypeInfo;
      }
      _9__162_13 = v14->static_fields->__9__162_13;
      if ( !_9__162_13 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = ListViewSort___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__162_13 = (System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__o *)sub_1C372A4(System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo__TypeInfo);
        System_Func_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo____ctor(
          _9__162_13,
          v16,
          Method_ListViewSort___c__GetAlignedBonusFilter_b__162_13__,
          0);
        v17 = ListViewSort___c_TypeInfo->static_fields;
        v17->__9__162_13 = _9__162_13;
        sub_1C36FFC((CGThumbnailListItem_o *)&v17->__9__162_13, (int32_t)_9__162_13, v18, v19);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)bonusFilterInfos;
      v21 = (System_Func_TSource__TResult__o *)_9__162_13;
    }
    v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo_(
                                                           v20,
                                                           v21,
                                                           (const MethodInfo_3120A8C *)Method_System_Linq_Enumerable_Select_ListViewSort_BonusFilterInfo__ListViewSort_BonusFilterInfo___);
    if ( allBonusFilterInfoList )
    {
      System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
        allBonusFilterInfoList,
        v23,
        (const MethodInfo_384EBA0 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
      return;
    }
LABEL_35:
    sub_1C372B4(v23);
  }
}


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
  const MethodInfo *v13; // x3
  bool IsQuestOpenEvent; // w8
  int v15; // w8
  __int64 v16; // x1
  ListViewSort_BonusFilterInfo_o *result; // x0
  __int128 v18; // [xsp+8h] [xbp-58h]
  struct System_String_o *v19; // [xsp+18h] [xbp-48h] BYREF
  EventFilterEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C4475A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4475A = 1;
  }
  entity = 0;
  v19 = 0;
  eventFilterMaster = this->fields.eventFilterMaster;
  if ( !eventFilterMaster )
LABEL_11:
    sub_1C372B4(eventFilterMaster);
  v19 = 0;
  *((_QWORD *)&v18 + 1) = (unsigned int)eventId;
  if ( EventFilterMaster__TryGetEntity_41989208((EventFilterMaster_o *)eventFilterMaster, &entity, eventId, type, 0) )
  {
    eventFilterMaster = entity;
    if ( !entity )
      goto LABEL_11;
    LODWORD(v18) = entity->fields.priority;
    if ( kind == 4 )
    {
      IsQuestOpenEvent = EventFilterEntity__IsQuestOpenEvent(entity, 0);
      eventFilterMaster = entity;
      if ( IsQuestOpenEvent )
        v15 = 5;
      else
        v15 = 4;
      DWORD1(v18) = v15;
      if ( !entity )
        goto LABEL_11;
    }
    else
    {
      DWORD1(v18) = kind;
    }
    v16 = *((_QWORD *)eventFilterMaster + 4);
  }
  else
  {
    LODWORD(v18) = 0;
    DWORD1(v18) = kind;
    v16 = StringLiteral_1/*""*/;
  }
  v19 = (struct System_String_o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19, v16, v12, v13);
  retstr->fields.buttonText = v19;
  *(_OWORD *)&retstr->fields.priority = v18;
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
  const MethodInfo *v14; // x3
  __int128 v15; // q0

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
    sub_1C36FFC((CGThumbnailListItem_o *)p_buttonText, (int32_t)ButtonTextFromLocalization, v13, v14);
  }
  v15 = *(_OWORD *)&bonusFilterInfo->fields.priority;
  retstr->fields.buttonText = bonusFilterInfo->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v15;
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
    sub_1C372B4(0);
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
  if ( (byte_4C4475E & 1) == 0 )
  {
    this = (ListViewSort___c__DisplayClass163_0_o *)sub_1C37058(&System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo);
    byte_4C4475E = 1;
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
    v9 = sub_1C87870(group, System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__TypeInfo, 0);
  }
  this = (ListViewSort___c__DisplayClass163_0_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ListViewSort_BonusFilterInfo__o *, _QWORD))v9)(
                                                    group,
                                                    *(_QWORD *)(v9 + 8));
  if ( !eventGroupMaster )
LABEL_12:
    sub_1C372B4(this);
  return EventGroupMaster__GetEntitiesByGroupId(eventGroupMaster, (int32_t)this, 0);
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Add_0(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array *eventFilterEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *allBonusFilterInfoList; // x0

  if ( (byte_4C4475C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
    byte_4C4475C = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventFilterEntities, 0) )
  {
    allBonusFilterInfoList = this->fields.allBonusFilterInfoList;
    if ( !allBonusFilterInfoList )
      sub_1C372B4(0);
    System_Collections_Generic_List_ListViewSort_BonusFilterInfo___AddRange(
      allBonusFilterInfoList,
      (System_Collections_Generic_IEnumerable_T__o *)eventFilterEntities,
      (const MethodInfo_384EBA0 *)Method_System_Collections_Generic_List_ListViewSort_BonusFilterInfo__AddRange__);
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
  const MethodInfo *v12; // x3
  ListViewSort_BonusFilterInfo_array *v13; // x8
  EventFilterEntity_o *v14; // x9
  char *v15; // x0
  struct System_String_o *buttonText; // x1
  ListViewSort_BonusFilterInfo_array *v17; // x8
  int32_t id; // w9
  char *v19; // x8
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
  this = (ListViewSort___c__DisplayClass163_0_o *)EventFilterMaster__TryGetEntity_41989208(
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
  v13 = *bonusFilterInfos;
  if ( !*bonusFilterInfos )
    goto LABEL_11;
  v14 = entity;
  if ( !entity )
    goto LABEL_11;
  if ( (unsigned int)v9 >= LODWORD(v13->max_length) )
    goto LABEL_20;
  v15 = (char *)v13 + v8 * 24;
  *((_DWORD *)v15 + 8) = entity->fields.priority;
  buttonText = v14->fields.buttonText;
  *((_QWORD *)v15 + 6) = buttonText;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->m_Items[v8].fields.buttonText, (int32_t)buttonText, v11, v12);
  v17 = *bonusFilterInfos;
  if ( !*bonusFilterInfos || !entity )
LABEL_11:
    sub_1C372B4(this);
  if ( (unsigned int)v9 >= LODWORD(v17->max_length) )
LABEL_20:
    sub_1C372BC(this);
  id = entity->fields.id;
  v19 = (char *)v17 + v8 * 24;
  *((_DWORD *)v19 + 9) = 0;
  *((_DWORD *)v19 + 10) = id;
}


void ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Swap_3(
        ListViewSort___c__DisplayClass163_0_o *this,
        ListViewSort_BonusFilterInfo_array **eventFilterEntities,
        System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *eventGroupEntities,
        const MethodInfo *method)
{
  System_Object_array *IsNullOrEmpty; // x0
  System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  EventGroupEntity_o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  struct EventFilterMaster_o *eventFilterMaster; // x8
  EventGroupEntity_array *v15; // x21
  int32_t id; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4475D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
    sub_1C37058(&System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo);
    byte_4C4475D = 1;
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
    v9 = *(unsigned __int16 *)&eventGroupEntities->klass->_2.rank;
    if ( *(_WORD *)&eventGroupEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C87870(
              eventGroupEntities,
              System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__TypeInfo,
              0);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_EventGroupEntity__o *, _QWORD))v11)(
           eventGroupEntities,
           *(_QWORD *)(v11 + 8)) >= 2 )
    {
      v12 = (EventGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
                                    (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_EventGroupEntity___);
      v13 = System_Linq_Enumerable__Skip_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)eventGroupEntities,
              1,
              (const MethodInfo_31255A8 *)Method_System_Linq_Enumerable_Skip_EventGroupEntity___);
      IsNullOrEmpty = System_Linq_Enumerable__ToArray_object_(
                        v13,
                        (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventGroupEntity___);
      eventFilterMaster = this->fields.eventFilterMaster;
      v15 = (EventGroupEntity_array *)IsNullOrEmpty;
      if ( v12 )
      {
        id = v12->fields.id;
        if ( eventFilterMaster )
          goto LABEL_14;
      }
      else
      {
        id = -1;
        if ( eventFilterMaster )
        {
LABEL_14:
          if ( EventFilterMaster__TryGetEntity_41989208(this->fields.eventFilterMaster, &entity, id, 1, 0) )
          {
            ListViewSort___c__DisplayClass163_0___BonusFilterGroupingCheck_g__Replace_1(
              this,
              eventFilterEntities,
              v12,
              v17);
            ListViewSort___BonusFilterGroupingCheck_g__Remove_163_2(eventFilterEntities, v15, v18);
          }
          return;
        }
      }
LABEL_18:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
}


void ListViewSort___c__DisplayClass254_0___ctor(ListViewSort___c__DisplayClass254_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ListViewSort___c__DisplayClass254_0___IsMatchServantAttriFilter_b__4(
        ListViewSort___c__DisplayClass254_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *removeIndividuality; // x0

  if ( (byte_4C4475F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C4475F = 1;
  }
  removeIndividuality = this->fields.removeIndividuality;
  if ( !removeIndividuality )
    sub_1C372B4(0);
  return !System_Collections_Generic_List_int___Contains(
            removeIndividuality,
            e,
            (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
}