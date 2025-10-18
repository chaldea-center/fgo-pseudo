int64_t ServantCharaGraphSortLogic__GetDefaultSortValue(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v4; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 collectionNo; // x21
  const MethodInfo *v9; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 lv; // x22

  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( !ListViewItem )
    goto LABEL_9;
  v4 = ((unsigned int (__fastcall *)(CharaGraphServantListViewItemBase_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
         ListViewItem,
         ListViewItem->klass->vtable._9_get_Rarity.method);
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem
    || (ServantEntity_k__BackingField = ListViewItem->fields._ServantEntity_k__BackingField) == 0
    || (collectionNo = ServantEntity_k__BackingField->fields.collectionNo,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v6)) == 0)
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField) == 0
    || (lv = UserServantEntity_k__BackingField->fields.lv,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v9)) == 0)
    || (ListViewItem = (CharaGraphServantListViewItemBase_o *)ListViewItem->fields._ServantEntity_k__BackingField) == 0 )
  {
LABEL_9:
    sub_1C372B4(ListViewItem);
  }
  return (collectionNo << 16)
       | (v4 << 48)
       | (2 * lv)
       | ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)ListViewItem, 0);
}


void ServantCharaGraphSortLogic__SetLevelToIcon(
        ServantCharaGraphSortLogic_o *this,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  int32_t SkillCategoryIdArray_k__BackingField; // w20

  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, (const MethodInfo *)info);
  if ( !ListViewItem
    || (ListViewItem = (CharaGraphServantListViewItemBase_o *)ListViewItem->fields._UserServantEntity_k__BackingField) == 0
    || (SkillCategoryIdArray_k__BackingField = (int32_t)ListViewItem->fields._SkillCategoryIdArray_k__BackingField,
        ListViewItem = (CharaGraphServantListViewItemBase_o *)UserServantEntity__getLevelMax(
                                                                (UserServantEntity_o *)ListViewItem,
                                                                0),
        !info) )
  {
    sub_1C372B4(ListViewItem);
  }
  IconLabelInfo__Set_40917868(info, 2, SkillCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0, 0);
}


void ServantCharaGraphSortLogic__SetSortValueLocal(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 ListViewItem; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x20
  const MethodInfo *v9; // x1
  __int64 v10; // x22
  __int64 v11; // x23
  __int128 v12; // q1
  const MethodInfo *v13; // x1
  struct ListViewSort_o *sort; // x8
  __int128 v15; // q0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  const MethodInfo *v17; // x1
  int v18; // w22
  int64_t v19; // x8
  int32_t v20; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v22; // w23
  int v23; // w0
  IconLabelInfo_o *v24; // x22
  const MethodInfo *v25; // x1
  int32_t v26; // w23
  int v27; // w0
  IconLabelInfo_o *v28; // x22
  const MethodInfo *v29; // x1
  int32_t v30; // w23
  int v31; // w0
  IconLabelInfo_o *v32; // x21
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  IconLabelInfo_o *v35; // x21
  const MethodInfo *v36; // x1
  int32_t v37; // w22
  int32_t v38; // w3
  int32_t v39; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  CharaGraphListViewManager_o *v43; // x21
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v51; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4C422FD & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C422FD = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_89;
  v6 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_89;
  v8 = *(_QWORD *)(ListViewItem + 240);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v7);
  if ( !ListViewItem )
    goto LABEL_89;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v9);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v8 )
    goto LABEL_89;
  v11 = *(_QWORD *)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v11;
  *(_QWORD *)&v57.fields.fakeValue = v10;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v57, 0);
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !v6 )
    goto LABEL_89;
  v12 = *(_OWORD *)(v6 + 32);
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
  *(_OWORD *)&v55.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v54 = v55;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v54, 0);
  sort = this->fields.sort;
  this->fields._SortValueLast_k__BackingField = ListViewItem;
  if ( !sort )
    goto LABEL_89;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, const MethodInfo *))this->klass->vtable._5_SortByPartyStatus.methodPtr)(
        this,
        this->klass->vtable._5_SortByPartyStatus.method);
      goto LABEL_35;
    case 1:
      v15 = *(_OWORD *)(v6 + 32);
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
      *(_OWORD *)&v55.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v55;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v53, 0);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_89;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v6 + 312), 0, 0, 0, 0);
      v18 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v6, 0) )
        goto LABEL_76;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v17);
      if ( !ListViewItem )
        goto LABEL_89;
      v18 = 0;
      *(_BYTE *)(ListViewItem + 155) = 1;
      goto LABEL_76;
    case 2:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v19 = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_42;
    case 3:
      v19 = *(int *)(v6 + 256);
      goto LABEL_42;
    case 4:
      UserServantEntity__getTreasureDeviceInfo_43177324((UserServantEntity_o *)v6, &tdMaxLv[1], tdMaxLv, 0);
      v20 = tdMaxLv[1];
      ListViewItem = (__int64)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_89;
      IconLabelInfo__Set_40917868((IconLabelInfo_o *)ListViewItem, 33, v20, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v22 = *(_DWORD *)(v6 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v6, 0);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_89;
      IconLabelInfo__Set_40917868(IconInfo2_k__BackingField, 2, v22, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_63;
    case 5:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      v24 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v23;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v25);
      if ( !ListViewItem )
        goto LABEL_89;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      ListViewItem = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v6, 0);
      if ( !v24 )
        goto LABEL_89;
      IconLabelInfo__Set_40917868(v24, 3, v26, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_35;
    case 6:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      v28 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v27;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v29);
      if ( !ListViewItem )
        goto LABEL_89;
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      ListViewItem = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v6, 0);
      if ( !v28 )
        goto LABEL_89;
      IconLabelInfo__Set_40917868(v28, 5, v30, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_35;
    case 7:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      v32 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v31;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v33);
      if ( !ListViewItem )
        goto LABEL_89;
      ListViewItem = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
                       ListViewItem,
                       *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      if ( !v32 )
        goto LABEL_89;
      IconLabelInfo__Set_40917868(v32, 7, ListViewItem, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_63;
    case 8:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v19 = (int)-(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_42:
      v18 = 0;
      goto LABEL_75;
    case 0xA:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v35 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v34);
      if ( !ListViewItem )
        goto LABEL_89;
      v37 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v36);
      if ( !ListViewItem || !v35 )
        goto LABEL_89;
      v38 = *(_DWORD *)(ListViewItem + 164);
      v39 = 32;
      goto LABEL_62;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_73;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = CharaGraphListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewManager_TypeInfo )
          v43 = (CharaGraphListViewManager_o *)manager;
        else
          v43 = 0;
      }
      else
      {
        v43 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v43, 0, 0) )
      {
LABEL_35:
        v18 = 0;
      }
      else
      {
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v48);
        if ( !ListViewItem || !v43 )
          goto LABEL_89;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v43,
                                            *(_DWORD *)(ListViewItem + 248),
                                            v49);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_73:
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
        if ( !ListViewItem )
          goto LABEL_89;
        v18 = 0;
        v19 = ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v8 + 208);
LABEL_75:
        this->fields._SortValue1_k__BackingField = v19;
      }
LABEL_76:
      p_IconInfo1_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      ListViewItem = (__int64)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_89;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0) )
        goto LABEL_80;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
      ListViewItem = (__int64)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_89;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0) )
LABEL_80:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v51);
      if ( v18
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v8, 0)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v8, 0)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v8, 0)) )
      {
        ListViewItem = (__int64)*p_IconInfo1_k__BackingField;
        if ( *p_IconInfo1_k__BackingField )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0);
          ListViewItem = (__int64)this->fields._IconInfo2_k__BackingField;
          if ( ListViewItem )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0);
            return;
          }
        }
LABEL_89:
        sub_1C372B4(ListViewItem);
      }
      return;
    case 0xF:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v35 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 168);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v44);
      if ( !ListViewItem )
        goto LABEL_89;
      v37 = *(_DWORD *)(ListViewItem + 168);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v45);
      if ( !ListViewItem || !v35 )
        goto LABEL_89;
      v38 = *(_DWORD *)(ListViewItem + 176);
      v39 = 44;
      goto LABEL_62;
    case 0x10:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v13);
      if ( !ListViewItem )
        goto LABEL_89;
      v35 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 172);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v46);
      if ( !ListViewItem )
        goto LABEL_89;
      v37 = *(_DWORD *)(ListViewItem + 172);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v47);
      if ( !ListViewItem || !v35 )
        goto LABEL_89;
      v38 = *(_DWORD *)(ListViewItem + 180);
      v39 = 45;
LABEL_62:
      IconLabelInfo__Set_40917868(v35, v39, v37, v38, 0, 0, 0, 0, 0, 0);
LABEL_63:
      v18 = 1;
      goto LABEL_76;
    default:
      goto LABEL_35;
  }
}


void ServantCharaGraphSortLogic__SortByPartyStatus(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  int *ListViewItem; // x0
  __int64 naturalAligment; // x10
  int64_t v5; // x8

  if ( (byte_4C422FE & 1) == 0 )
  {
    sub_1C37058(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_4C422FE = 1;
  }
  ListViewItem = (int *)ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    naturalAligment = CharaGraphPartyServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)ListViewItem + 304LL) >= (unsigned int)naturalAligment
      && *(CharaGraphPartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)ListViewItem + 200LL)
                                                  + 8 * naturalAligment
                                                  - 8) == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      if ( !this )
        sub_1C372B4(ListViewItem);
      v5 = ListViewItem[76];
      this->fields._SortValue0_k__BackingField = (int)v5 >= 0;
      this->fields._SortValue1_k__BackingField = v5;
    }
  }
}


CharaGraphServantListViewItemBase_o *ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_listViewItem; // x0
  CharaGraphServantListViewItemBase_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C422FC & 1) == 0 )
  {
    sub_1C37058(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_4C422FC = 1;
  }
  p_listViewItem = (CGThumbnailListItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItemBase_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphServantListViewItemBase_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphServantListViewItemBase_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (CGThumbnailListItem_c *)listViewItem;
    sub_1C36FFC(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1C37574(this->fields.item);
  return (CharaGraphServantListViewItemBase_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v10, v11);
}