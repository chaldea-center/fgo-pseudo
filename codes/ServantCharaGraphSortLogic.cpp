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
    sub_1BCAA3C(ListViewItem, v4);
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
    sub_1BCAA3C(ListViewItem, v5);
  }
  IconLabelInfo__Set_38850420(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetSortValueLocal(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  int64_t ListViewItem; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x21
  __int64 v14; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x22
  __int64 v17; // x23
  struct ListViewSort_o *sort; // x8
  int v19; // w22
  __int128 v20; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int64_t v22; // x8
  int32_t v23; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v25; // w23
  int64_t v26; // x2
  int32_t v27; // w3
  int32_t v28; // w1
  int64_t v29; // x2
  IconLabelInfo_o *v30; // x21
  int32_t v31; // w22
  int32_t v32; // w3
  int32_t v33; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v37; // x21
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v39; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B155DF & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B155DF = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v10);
  if ( !ListViewItem )
    goto LABEL_86;
  v13 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
  if ( !ListViewItem )
    goto LABEL_86;
  v14 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
  if ( !ListViewItem )
    goto LABEL_86;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v15);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v14 )
    goto LABEL_86;
  v17 = *(_QWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v14 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v44.fields.currentCryptoKey = v17;
  *(_QWORD *)&v44.fields.fakeValue = v16;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_86;
  v19 = 0;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_34;
    case 1:
      if ( !v13 )
        goto LABEL_86;
      v20 = *(_OWORD *)(v13 + 32);
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
      *(_OWORD *)&v42.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
      v41 = v42;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v13 + 304), 0, 0, 0, 0LL);
      v19 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v13, 0LL) )
        goto LABEL_73;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v19 = 0;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_73;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v22 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_39;
    case 3:
      if ( !v13 )
        goto LABEL_86;
      v22 = *(int *)(v13 + 256);
      goto LABEL_39;
    case 4:
      if ( !v13 )
        goto LABEL_86;
      UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)v13, &tdMaxLv[1], tdMaxLv, 0LL);
      v23 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)ListViewItem, 33, v23, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v25 = *(_DWORD *)(v13 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v13, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_86;
      IconLabelInfo__Set_38850420(IconInfo2_k__BackingField, 2, v25, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v13 )
        goto LABEL_86;
      v26 = *(int *)(v13 + 268);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v26;
      if ( !ListViewItem )
        goto LABEL_86;
      v27 = *(_DWORD *)(v13 + 276);
      v28 = 3;
      goto LABEL_33;
    case 6:
      if ( !v13 )
        goto LABEL_86;
      v26 = *(int *)(v13 + 264);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v26;
      if ( !ListViewItem )
        goto LABEL_86;
      v27 = *(_DWORD *)(v13 + 272);
      v28 = 5;
LABEL_33:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)ListViewItem, v28, v26, v27, 0, 0, 0, 0, 0LL);
      goto LABEL_34;
    case 7:
      v29 = *(int *)(v14 + 152);
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v29;
      if ( !ListViewItem )
        goto LABEL_86;
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)ListViewItem, 7, v29, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v22 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_39:
      v19 = 0;
      goto LABEL_72;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v30 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v31 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem || !v30 )
        goto LABEL_86;
      v32 = *(_DWORD *)(ListViewItem + 152);
      v33 = 32;
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
          v37 = (CharaGraphListViewManager_o *)manager;
        else
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
      {
LABEL_34:
        v19 = 0;
      }
      else
      {
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
        if ( !ListViewItem || !v37 )
          goto LABEL_86;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v37,
                                            *(_DWORD *)(ListViewItem + 240),
                                            0LL);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_70:
        ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
        if ( !ListViewItem )
          goto LABEL_86;
        v19 = 0;
        v22 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v14 + 208);
LABEL_72:
        this->fields._SortValue1_k__BackingField = v22;
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
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v39);
      if ( v19
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v14, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v14, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v14, 0LL)) )
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
        sub_1BCAA3C(ListViewItem, v12);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v30 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v31 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem || !v30 )
        goto LABEL_86;
      v32 = *(_DWORD *)(ListViewItem + 164);
      v33 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v30 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem )
        goto LABEL_86;
      v31 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v12);
      if ( !ListViewItem || !v30 )
        goto LABEL_86;
      v32 = *(_DWORD *)(ListViewItem + 168);
      v33 = 45;
LABEL_59:
      IconLabelInfo__Set_38850420(v30, v33, v31, v32, 0, 0, 0, 0, 0LL);
LABEL_60:
      v19 = 1;
      goto LABEL_73;
    default:
      goto LABEL_73;
  }
}


void __fastcall ServantCharaGraphSortLogic__SortByPartyStatus(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int *ListViewItem; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x10
  int64_t v7; // x8

  if ( (byte_4B155E0 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphPartyServantListViewItem_TypeInfo, method, v2);
    byte_4B155E0 = 1;
  }
  ListViewItem = (int *)ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    methodPtr_low = LOBYTE(CharaGraphPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)ListViewItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CharaGraphPartyServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)ListViewItem + 200LL) + 8 * methodPtr_low - 8) == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      if ( !this )
        sub_1BCAA3C(ListViewItem, v5);
      v7 = ListViewItem[72];
      this->fields._SortValue0_k__BackingField = (int)v7 >= 0;
      this->fields._SortValue1_k__BackingField = v7;
    }
  }
}


CharaGraphServantListViewItem_o *__fastcall ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_listViewItem; // x0
  CharaGraphServantListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B155DE & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphServantListViewItem_TypeInfo, method, v2);
    byte_4B155DE = 1;
  }
  p_listViewItem = (PartyOrganizationUtility_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (PartyOrganizationUtility_c *)listViewItem;
    sub_1BCA784(p_listViewItem, (int64_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1BCACFC(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v14, v15);
}