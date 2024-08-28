int64_t __fastcall ServantCharaGraphSortLogic__GetDefaultSortValue(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *ListViewItem; // x0
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
  v5 = ((unsigned __int64 (__fastcall *)(CharaGraphServantListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
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
    || (ListViewItem = (CharaGraphServantListViewItem_o *)ListViewItem->fields._ServantEntity_k__BackingField) == 0LL )
  {
LABEL_9:
    sub_1B71828(ListViewItem, v4);
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
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v5; // x1
  int32_t TdCategoryIdArray_k__BackingField; // w20

  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, (const MethodInfo *)info);
  if ( !ListViewItem
    || (ListViewItem = (CharaGraphServantListViewItem_o *)ListViewItem->fields._UserServantEntity_k__BackingField) == 0LL
    || (TdCategoryIdArray_k__BackingField = (int32_t)ListViewItem->fields._TdCategoryIdArray_k__BackingField,
        ListViewItem = (CharaGraphServantListViewItem_o *)UserServantEntity__getLevelMax(
                                                            (UserServantEntity_o *)ListViewItem,
                                                            0LL),
        !info) )
  {
    sub_1B71828(ListViewItem, v5);
  }
  IconLabelInfo__Set_37935228(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetSortValueLocal(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  int64_t ListViewItem; // x0
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
  int64_t v22; // x2
  int32_t v23; // w3
  int32_t v24; // w1
  int64_t v25; // x2
  IconLabelInfo_o *v26; // x21
  int32_t v27; // w22
  int32_t v28; // w3
  int32_t v29; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v33; // x21
  const MethodInfo *v34; // x2
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v36; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A1EEEA & 1) == 0 )
  {
    sub_1B715CC(&CharaGraphListViewManager_TypeInfo, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A1EEEA = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem )
    goto LABEL_86;
  v9 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem )
    goto LABEL_86;
  v10 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem )
    goto LABEL_86;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v11);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v10 )
    goto LABEL_86;
  v13 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v13;
  *(_QWORD *)&v41.fields.fakeValue = v12;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v41, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_86;
  v15 = 0;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_34;
    case 1:
      if ( !v9 )
        goto LABEL_86;
      v16 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v39.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = v39;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v38, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v9 + 304), 0, 0, 0, 0LL);
      v15 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v9, 0LL) )
        goto LABEL_73;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v15 = 0;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_73;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v18 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_39;
    case 3:
      if ( !v9 )
        goto LABEL_86;
      v18 = *(int *)(v9 + 256);
      goto LABEL_39;
    case 4:
      if ( !v9 )
        goto LABEL_86;
      UserServantEntity__getTreasureDeviceInfo_40000168((UserServantEntity_o *)v9, &tdMaxLv[1], tdMaxLv, 0LL);
      v19 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_37935228((IconLabelInfo_o *)ListViewItem, 33, v19, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v21 = *(_DWORD *)(v9 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v9, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__Set_37935228(IconInfo2_k__BackingField, 2, v21, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v9 )
        goto LABEL_86;
      v22 = *(int *)(v9 + 268);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v22;
      if ( !ListViewItem )
        goto LABEL_86;
      v23 = *(_DWORD *)(v9 + 276);
      v24 = 3;
      goto LABEL_33;
    case 6:
      if ( !v9 )
        goto LABEL_86;
      v22 = *(int *)(v9 + 264);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v22;
      if ( !ListViewItem )
        goto LABEL_86;
      v23 = *(_DWORD *)(v9 + 272);
      v24 = 5;
LABEL_33:
      IconLabelInfo__Set_37935228((IconLabelInfo_o *)ListViewItem, v24, v22, v23, 0, 0, 0, 0, 0LL);
      goto LABEL_34;
    case 7:
      v25 = *(int *)(v10 + 152);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v25;
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_37935228((IconLabelInfo_o *)ListViewItem, 7, v25, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v18 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_39:
      v15 = 0;
      goto LABEL_72;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v27 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v26 )
        goto LABEL_86;
      v28 = *(_DWORD *)(ListViewItem + 152);
      v29 = 32;
      goto LABEL_59;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_70;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphListViewManager_TypeInfo )
          v33 = (CharaGraphListViewManager_o *)manager;
        else
          v33 = 0LL;
      }
      else
      {
        v33 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
LABEL_34:
        v15 = 0;
      }
      else
      {
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
        if ( !ListViewItem || !v33 )
          goto LABEL_86;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v33,
                                            *(_DWORD *)(ListViewItem + 240),
                                            v34);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_70:
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
        if ( !ListViewItem )
          goto LABEL_86;
        v15 = 0;
        v18 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v10 + 208);
LABEL_72:
        this->fields._SortValue1_k__BackingField = v18;
      }
LABEL_73:
      p_IconInfo1_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_86;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo1_k__BackingField;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
        goto LABEL_77;
      p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
      ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_86;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
LABEL_77:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v36);
      if ( v15
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v10, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v10, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v10, 0LL)) )
      {
        ListViewItem = (int64_t)*p_IconInfo1_k__BackingField;
        if ( *p_IconInfo1_k__BackingField )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
          ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
          if ( ListViewItem )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
            return;
          }
        }
LABEL_86:
        sub_1B71828(ListViewItem, v8);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v27 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v26 )
        goto LABEL_86;
      v28 = *(_DWORD *)(ListViewItem + 164);
      v29 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem )
        goto LABEL_86;
      v27 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
      if ( !ListViewItem || !v26 )
        goto LABEL_86;
      v28 = *(_DWORD *)(ListViewItem + 168);
      v29 = 45;
LABEL_59:
      IconLabelInfo__Set_37935228(v26, v29, v27, v28, 0, 0, 0, 0, 0LL);
LABEL_60:
      v15 = 1;
      goto LABEL_73;
    default:
      goto LABEL_73;
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

  if ( (byte_4A1EEEB & 1) == 0 )
  {
    sub_1B715CC(&CharaGraphPartyServantListViewItem_TypeInfo, method);
    byte_4A1EEEB = 1;
  }
  ListViewItem = (int *)ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    methodPtr_low = LOBYTE(CharaGraphPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)ListViewItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CharaGraphPartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)ListViewItem + 200LL) + 8 * methodPtr_low - 8) == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      if ( !this )
        sub_1B71828(ListViewItem, v4);
      v6 = ListViewItem[72];
      this->fields._SortValue0_k__BackingField = (int)v6 >= 0;
      this->fields._SortValue1_k__BackingField = v6;
    }
  }
}


CharaGraphServantListViewItem_o *__fastcall ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_listViewItem; // x0
  CharaGraphServantListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A1EEE9 & 1) == 0 )
  {
    sub_1B715CC(&CharaGraphServantListViewItem_TypeInfo, method);
    byte_4A1EEE9 = 1;
  }
  p_listViewItem = (ServantStatusBattleListViewItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphServantListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (ServantStatusBattleListViewItem_c *)listViewItem;
    sub_1B71570(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1B71AE8(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v10, v11);
}