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
    sub_1B8880C(ListViewItem, v4);
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
    sub_1B8880C(ListViewItem, v5);
  }
  IconLabelInfo__Set_38140136(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetSortValueLocal(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t ListViewItem; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x21
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  struct ListViewSort_o *sort; // x8
  int v12; // w22
  __int128 v13; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int64_t v15; // x8
  int32_t v16; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v18; // w23
  int64_t v19; // x2
  int32_t v20; // w3
  int32_t v21; // w1
  int64_t v22; // x2
  IconLabelInfo_o *v23; // x21
  int32_t v24; // w22
  int32_t v25; // w3
  int32_t v26; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v30; // x21
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v32; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4A5A573 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A573 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_86;
  v6 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_86;
  v7 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_86;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v8);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v7 )
    goto LABEL_86;
  v10 = *(_QWORD *)(v7 + 16);
  v9 = *(_QWORD *)(v7 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v10;
  *(_QWORD *)&v37.fields.fakeValue = v9;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_86;
  v12 = 0;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_34;
    case 1:
      if ( !v6 )
        goto LABEL_86;
      v13 = *(_OWORD *)(v6 + 32);
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
      *(_OWORD *)&v35.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v34, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v6 + 304), 0, 0, 0, 0LL);
      v12 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v6, 0LL) )
        goto LABEL_73;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v12 = 0;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_73;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v15 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_39;
    case 3:
      if ( !v6 )
        goto LABEL_86;
      v15 = *(int *)(v6 + 256);
      goto LABEL_39;
    case 4:
      if ( !v6 )
        goto LABEL_86;
      UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)v6, &tdMaxLv[1], tdMaxLv, 0LL);
      v16 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)ListViewItem, 33, v16, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v18 = *(_DWORD *)(v6 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v6, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__Set_38140136(IconInfo2_k__BackingField, 2, v18, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v6 )
        goto LABEL_86;
      v19 = *(int *)(v6 + 268);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v19;
      if ( !ListViewItem )
        goto LABEL_86;
      v20 = *(_DWORD *)(v6 + 276);
      v21 = 3;
      goto LABEL_33;
    case 6:
      if ( !v6 )
        goto LABEL_86;
      v19 = *(int *)(v6 + 264);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v19;
      if ( !ListViewItem )
        goto LABEL_86;
      v20 = *(_DWORD *)(v6 + 272);
      v21 = 5;
LABEL_33:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)ListViewItem, v21, v19, v20, 0, 0, 0, 0, 0LL);
      goto LABEL_34;
    case 7:
      v22 = *(int *)(v7 + 152);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v22;
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)ListViewItem, 7, v22, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v15 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_39:
      v12 = 0;
      goto LABEL_72;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v23 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v24 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v23 )
        goto LABEL_86;
      v25 = *(_DWORD *)(ListViewItem + 152);
      v26 = 32;
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
          v30 = (CharaGraphListViewManager_o *)manager;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0LL, 0LL) )
      {
LABEL_34:
        v12 = 0;
      }
      else
      {
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
        if ( !ListViewItem || !v30 )
          goto LABEL_86;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v30,
                                            *(_DWORD *)(ListViewItem + 240),
                                            0LL);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_70:
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
        if ( !ListViewItem )
          goto LABEL_86;
        v12 = 0;
        v15 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v7 + 208);
LABEL_72:
        this->fields._SortValue1_k__BackingField = v15;
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
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v32);
      if ( v12
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v7, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v7, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v7, 0LL)) )
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
        sub_1B8880C(ListViewItem, v5);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v23 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v24 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v23 )
        goto LABEL_86;
      v25 = *(_DWORD *)(ListViewItem + 164);
      v26 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v23 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_86;
      v24 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v23 )
        goto LABEL_86;
      v25 = *(_DWORD *)(ListViewItem + 168);
      v26 = 45;
LABEL_59:
      IconLabelInfo__Set_38140136(v23, v26, v24, v25, 0, 0, 0, 0, 0LL);
LABEL_60:
      v12 = 1;
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

  if ( (byte_4A5A574 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_4A5A574 = 1;
  }
  ListViewItem = (int *)ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    methodPtr_low = LOBYTE(CharaGraphPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)ListViewItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CharaGraphPartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)ListViewItem + 200LL) + 8 * methodPtr_low - 8) == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      if ( !this )
        sub_1B8880C(ListViewItem, v4);
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

  if ( (byte_4A5A572 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphServantListViewItem_TypeInfo);
    byte_4A5A572 = 1;
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
    sub_1B88554(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1B88ACC(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v10, v11);
}