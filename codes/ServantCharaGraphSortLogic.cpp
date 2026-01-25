int64_t ServantCharaGraphSortLogic__GetDefaultSortValue(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
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
  v5 = ((unsigned int (__fastcall *)(CharaGraphServantListViewItemBase_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
         ListViewItem,
         ListViewItem->klass->vtable._9_get_Rarity.method);
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem
    || (ServantEntity_k__BackingField = ListViewItem->fields._ServantEntity_k__BackingField) == 0
    || (collectionNo = ServantEntity_k__BackingField->fields.collectionNo,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v4)) == 0)
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField) == 0
    || (lv = UserServantEntity_k__BackingField->fields.lv,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v4)) == 0)
    || (ListViewItem = (CharaGraphServantListViewItemBase_o *)ListViewItem->fields._ServantEntity_k__BackingField) == 0 )
  {
LABEL_9:
    sub_1C7BD40(ListViewItem, v4);
  }
  return (collectionNo << 16)
       | (v5 << 48)
       | (2 * lv)
       | ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)ListViewItem, 0);
}


void ServantCharaGraphSortLogic__SetLevelToIcon(
        ServantCharaGraphSortLogic_o *this,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v5; // x1
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
    sub_1C7BD40(ListViewItem, v5);
  }
  IconLabelInfo__Set_41483756(info, 2, SkillCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0, 0);
}


void ServantCharaGraphSortLogic__SetSortValueLocal(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 ListViewItem; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x21
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  __int128 v11; // q1
  struct ListViewSort_o *sort; // x8
  __int128 v13; // q0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int v15; // w22
  int64_t v16; // x8
  int32_t v17; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v19; // w23
  int v20; // w0
  IconLabelInfo_o *v21; // x22
  const MethodInfo *v22; // x1
  int32_t v23; // w23
  int v24; // w0
  IconLabelInfo_o *v25; // x22
  const MethodInfo *v26; // x1
  int32_t v27; // w23
  int v28; // w0
  IconLabelInfo_o *v29; // x21
  const MethodInfo *v30; // x1
  IconLabelInfo_o *v31; // x21
  int32_t v32; // w22
  int32_t v33; // w3
  int32_t v34; // w1
  int64_t AmountSortValue_k__BackingField; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  CharaGraphListViewManager_o *v38; // x21
  const MethodInfo *v39; // x2
  struct IconLabelInfo_o **p_IconInfo1_k__BackingField; // x21
  const MethodInfo *v41; // x2
  IconLabelInfo_o **p_IconInfo2_k__BackingField; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4CED9E0 & 1) == 0 )
  {
    sub_1C7BAE8(&CharaGraphListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CED9E0 = 1;
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
  v7 = *(_QWORD *)(ListViewItem + 240);
  ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_89;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v8);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v7 )
    goto LABEL_89;
  v10 = *(_QWORD *)(v7 + 16);
  v9 = *(_QWORD *)(v7 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v10;
  *(_QWORD *)&v47.fields.fakeValue = v9;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v47, 0);
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !v6 )
    goto LABEL_89;
  v11 = *(_OWORD *)(v6 + 32);
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
  *(_OWORD *)&v45.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v44 = v45;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v44, 0);
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
      v13 = *(_OWORD *)(v6 + 32);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v45;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v43, 0);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_89;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v6 + 312), 0, 0, 0, 0);
      v15 = 0;
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v6, 0) )
        goto LABEL_76;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v15 = 0;
      *(_BYTE *)(ListViewItem + 155) = 1;
      goto LABEL_76;
    case 2:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v16 = (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_42;
    case 3:
      v16 = *(int *)(v6 + 256);
      goto LABEL_42;
    case 4:
      UserServantEntity__getTreasureDeviceInfo_43714172((UserServantEntity_o *)v6, &tdMaxLv[1], tdMaxLv, 0);
      v17 = tdMaxLv[1];
      ListViewItem = (__int64)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_89;
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)ListViewItem, 33, v17, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v19 = *(_DWORD *)(v6 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v6, 0);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_89;
      IconLabelInfo__Set_41483756(IconInfo2_k__BackingField, 2, v19, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_63;
    case 5:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      v21 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v20;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v22);
      if ( !ListViewItem )
        goto LABEL_89;
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 536LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 544LL));
      ListViewItem = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v6, 0);
      if ( !v21 )
        goto LABEL_89;
      IconLabelInfo__Set_41483756(v21, 3, v23, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_35;
    case 6:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      v25 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v24;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v26);
      if ( !ListViewItem )
        goto LABEL_89;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 552LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 560LL));
      ListViewItem = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v6, 0);
      if ( !v25 )
        goto LABEL_89;
      IconLabelInfo__Set_41483756(v25, 5, v27, ListViewItem, 0, 0, 0, 0, 0, 0);
      goto LABEL_35;
    case 7:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      v29 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = v28;
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v30);
      if ( !ListViewItem )
        goto LABEL_89;
      ListViewItem = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 520LL))(
                       ListViewItem,
                       *(_QWORD *)(*(_QWORD *)ListViewItem + 528LL));
      if ( !v29 )
        goto LABEL_89;
      IconLabelInfo__Set_41483756(v29, 7, ListViewItem, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_63;
    case 8:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v16 = (int)-(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
LABEL_42:
      v15 = 0;
      goto LABEL_75;
    case 0xA:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v31 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v32 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v31 )
        goto LABEL_89;
      v33 = *(_DWORD *)(ListViewItem + 164);
      v34 = 32;
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
          v38 = (CharaGraphListViewManager_o *)manager;
        else
          v38 = 0;
      }
      else
      {
        v38 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v38, 0, 0) )
      {
LABEL_35:
        v15 = 0;
      }
      else
      {
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
        if ( !ListViewItem || !v38 )
          goto LABEL_89;
        AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                            v38,
                                            *(_DWORD *)(ListViewItem + 248),
                                            v39);
        this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_73:
        ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
        if ( !ListViewItem )
          goto LABEL_89;
        v15 = 0;
        v16 = ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
                 ListViewItem,
                 *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
            + (AmountSortValue_k__BackingField << 48)
            + *(int *)(v7 + 208);
LABEL_75:
        this->fields._SortValue1_k__BackingField = v16;
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
        ServantCharaGraphSortLogic__SetLevelToIcon(this, *p_IconInfo2_k__BackingField, v41);
      if ( v15
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v7, 0)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v7, 0)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v7, 0)) )
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
        sub_1C7BD40(ListViewItem, v5);
      }
      return;
    case 0xF:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v31 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 168);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v32 = *(_DWORD *)(ListViewItem + 168);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v31 )
        goto LABEL_89;
      v33 = *(_DWORD *)(ListViewItem + 176);
      v34 = 44;
      goto LABEL_62;
    case 0x10:
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v31 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 172);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_89;
      v32 = *(_DWORD *)(ListViewItem + 172);
      ListViewItem = (__int64)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v31 )
        goto LABEL_89;
      v33 = *(_DWORD *)(ListViewItem + 180);
      v34 = 45;
LABEL_62:
      IconLabelInfo__Set_41483756(v31, v34, v32, v33, 0, 0, 0, 0, 0, 0);
LABEL_63:
      v15 = 1;
      goto LABEL_76;
    default:
      goto LABEL_35;
  }
}


void ServantCharaGraphSortLogic__SortByPartyStatus(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  int *ListViewItem; // x0
  __int64 v4; // x1
  __int64 naturalAligment; // x10
  int64_t v6; // x8

  if ( (byte_4CED9E1 & 1) == 0 )
  {
    sub_1C7BAE8(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_4CED9E1 = 1;
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
        sub_1C7BD40(ListViewItem, v4);
      v6 = ListViewItem[76];
      this->fields._SortValue0_k__BackingField = (int)v6 >= 0;
      this->fields._SortValue1_k__BackingField = v6;
    }
  }
}


CharaGraphServantListViewItemBase_o *ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_listViewItem; // x0
  CharaGraphServantListViewItemBase_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4CED9DF & 1) == 0 )
  {
    sub_1C7BAE8(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_4CED9DF = 1;
  }
  p_listViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (GrandQuestFolderBoardItem_c *)listViewItem;
    sub_1C7BA8C(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C7C0DC(this->fields.item);
  return (CharaGraphServantListViewItemBase_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v14, v15);
}