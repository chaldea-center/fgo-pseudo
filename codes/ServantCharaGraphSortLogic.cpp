int64_t __fastcall ServantCharaGraphSortLogic__GetDefaultSortValue(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 collectionNo; // x21
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 lv; // x22

  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( !ListViewItem )
    goto LABEL_9;
  v5 = ((unsigned __int64 (__fastcall *)(CharaGraphServantListViewItemBase_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
         ListViewItem,
         ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem
    || (ServantEntity_k__BackingField = ListViewItem->fields._ServantEntity_k__BackingField) == 0LL
    || (collectionNo = ServantEntity_k__BackingField->fields.collectionNo,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v4)) == 0LL)
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField) == 0LL
    || (lv = UserServantEntity_k__BackingField->fields.lv,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v4)) == 0LL)
    || (ListViewItem = (CharaGraphServantListViewItemBase_o *)ListViewItem->fields._ServantEntity_k__BackingField) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(ListViewItem, v4);
  }
  return (collectionNo << 16) | (v5 << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                          (ServantEntity_o *)ListViewItem,
                                                          0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetLevelToIcon(
        ServantCharaGraphSortLogic_o *this,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v5; // x1
  int32_t TdCategoryIdArray_k__BackingField; // w20

  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, (const MethodInfo *)info);
  if ( !ListViewItem
    || (ListViewItem = (CharaGraphServantListViewItemBase_o *)ListViewItem->fields._UserServantEntity_k__BackingField) == 0LL
    || (TdCategoryIdArray_k__BackingField = (int32_t)ListViewItem->fields._TdCategoryIdArray_k__BackingField,
        ListViewItem = (CharaGraphServantListViewItemBase_o *)UserServantEntity__getLevelMax(
                                                                (UserServantEntity_o *)ListViewItem,
                                                                0LL),
        !info) )
  {
    sub_1BDBAD4(ListViewItem, v5);
  }
  IconLabelInfo__Set_39930232(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetSortValueLocal(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 ListViewItem; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x21
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x22
  __int64 v13; // x23
  struct ListViewSort_o *sort; // x8
  int v15; // w22
  __int128 v16; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int64_t v18; // x8
  int32_t v19; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v21; // w23
  int v22; // w0
  IconLabelInfo_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t v25; // w23
  int v26; // w0
  IconLabelInfo_o *v27; // x22
  const MethodInfo *v28; // x1
  int32_t v29; // w23
  int v30; // w0
  IconLabelInfo_o *v31; // x21
  const MethodInfo *v32; // x1
  IconLabelInfo_o *v33; // x21
  int32_t v34; // w22
  int32_t v35; // w3
  int32_t v36; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v40; // x21
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v42; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B43E11 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphListViewManager_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B43E11 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem )
    goto LABEL_91;
  v9 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem )
    goto LABEL_91;
  v10 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem )
    goto LABEL_91;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v11);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v10 )
    goto LABEL_91;
  v13 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v13;
  *(_QWORD *)&v47.fields.fakeValue = v12;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v47, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_91;
  v15 = 0;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_37;
    case 1:
      if ( !v9 )
        goto LABEL_91;
      v16 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v44, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_91;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v9 + 312), 0, 0, 0, 0LL);
      v15 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v9, 0LL) )
        goto LABEL_78;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v15 = 0;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_78;
    case 2:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v18 = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_44;
    case 3:
      if ( !v9 )
        goto LABEL_91;
      v18 = *(int *)(v9 + 256);
      goto LABEL_44;
    case 4:
      if ( !v9 )
        goto LABEL_91;
      UserServantEntity__getTreasureDeviceInfo_42114760((UserServantEntity_o *)v9, &tdMaxLv[1], tdMaxLv, 0LL);
      v19 = tdMaxLv[1];
      ListViewItem = (__int64)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_91;
      IconLabelInfo__Set_39930232((IconLabelInfo_o *)ListViewItem, 33, v19, tdMaxLv[0], 0, 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v21 = *(_DWORD *)(v9 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v9, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_91;
      IconLabelInfo__Set_39930232(IconInfo2_k__BackingField, 2, v21, ListViewItem, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 5:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      v23 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v22;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v24);
      if ( !ListViewItem )
        goto LABEL_91;
      ListViewItem = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
                       ListViewItem,
                       *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      if ( !v9 )
        goto LABEL_91;
      v25 = ListViewItem;
      ListViewItem = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v9, 0LL);
      if ( !v23 )
        goto LABEL_91;
      IconLabelInfo__Set_39930232(v23, 3, v25, ListViewItem, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_37;
    case 6:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      v27 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v26;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v28);
      if ( !ListViewItem )
        goto LABEL_91;
      ListViewItem = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
                       ListViewItem,
                       *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      if ( !v9 )
        goto LABEL_91;
      v29 = ListViewItem;
      ListViewItem = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v9, 0LL);
      if ( !v27 )
        goto LABEL_91;
      IconLabelInfo__Set_39930232(v27, 5, v29, ListViewItem, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_37;
    case 7:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      v31 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v30;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v32);
      if ( !ListViewItem )
        goto LABEL_91;
      ListViewItem = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
                       ListViewItem,
                       *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      if ( !v31 )
        goto LABEL_91;
      IconLabelInfo__Set_39930232(v31, 7, ListViewItem, 0, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 8:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v18 = (int)-(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_44:
      v15 = 0;
      goto LABEL_77;
    case 0xA:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 152);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v34 = *(_DWORD *)(ListViewItem + 152);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v33 )
        goto LABEL_91;
      v35 = *(_DWORD *)(ListViewItem + 156);
      v36 = 32;
      goto LABEL_64;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_75;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphListViewManager_TypeInfo )
          v40 = (CharaGraphListViewManager_o *)manager;
        else
          v40 = 0LL;
      }
      else
      {
        v40 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
      {
LABEL_37:
        v15 = 0;
      }
      else
      {
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
        if ( !ListViewItem || !v40 )
          goto LABEL_91;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v40,
                                            *(_DWORD *)(ListViewItem + 240),
                                            0LL);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_75:
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
        if ( !ListViewItem )
          goto LABEL_91;
        v15 = 0;
        v18 = ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v10 + 208);
LABEL_77:
        this->fields._SortValue1_k__BackingField = v18;
      }
LABEL_78:
      p_IconInfo1_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      ListViewItem = (__int64)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_91;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
        goto LABEL_82;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
      ListViewItem = (__int64)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_91;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
LABEL_82:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v42);
      if ( v15
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v10, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v10, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v10, 0LL)) )
      {
        ListViewItem = (__int64)*p_IconInfo1_k__BackingField;
        if ( *p_IconInfo1_k__BackingField )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
          ListViewItem = (__int64)this->fields._IconInfo2_k__BackingField;
          if ( ListViewItem )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
            return;
          }
        }
LABEL_91:
        sub_1BDBAD4(ListViewItem, v8);
      }
      return;
    case 0xF:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v34 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v33 )
        goto LABEL_91;
      v35 = *(_DWORD *)(ListViewItem + 168);
      v36 = 44;
      goto LABEL_64;
    case 0x10:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 164);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_91;
      v34 = *(_DWORD *)(ListViewItem + 164);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v33 )
        goto LABEL_91;
      v35 = *(_DWORD *)(ListViewItem + 172);
      v36 = 45;
LABEL_64:
      IconLabelInfo__Set_39930232(v33, v36, v34, v35, 0, 0, 0, 0, 0, 0LL);
LABEL_65:
      v15 = 1;
      goto LABEL_78;
    default:
      goto LABEL_78;
  }
}


void __fastcall ServantCharaGraphSortLogic__SortByPartyStatus(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int *ListViewItem; // x0
  __int64 v4; // x1
  __int64 methodPtr_low; // x10
  int64_t v6; // x8

  if ( (byte_4B43E12 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphPartyServantListViewItem_TypeInfo, method);
    byte_4B43E12 = 1;
  }
  ListViewItem = (int *)ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    methodPtr_low = LOBYTE(CharaGraphPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)ListViewItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CharaGraphPartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)ListViewItem + 200LL) + 8 * methodPtr_low - 8) == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      if ( !this )
        sub_1BDBAD4(ListViewItem, v4);
      v6 = ListViewItem[74];
      this->fields._SortValue0_k__BackingField = (int)v6 >= 0;
      this->fields._SortValue1_k__BackingField = v6;
    }
  }
}


CharaGraphServantListViewItemBase_o *__fastcall ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_listViewItem; // x0
  CharaGraphServantListViewItemBase_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B43E10 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphServantListViewItemBase_TypeInfo, method);
    byte_4B43E10 = 1;
  }
  p_listViewItem = (CGThumbnailListItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItemBase_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphServantListViewItemBase_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphServantListViewItemBase_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantListViewItemBase_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (CGThumbnailListItem_c *)listViewItem;
    sub_1BDB81C(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1BDBD94(this->fields.item);
  return (CharaGraphServantListViewItemBase_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v10, v11);
}