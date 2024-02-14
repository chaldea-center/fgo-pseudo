void __fastcall ServantCharaGraphSortLogic___ctor(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  CharaGraphSortLogicBase___ctor((CharaGraphSortLogicBase_o *)this, 0LL);
}


int64_t __fastcall ServantCharaGraphSortLogic__GetDefaultSortValue(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *ListViewItem; // x0
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
  v4 = ((unsigned __int64 (__fastcall *)(CharaGraphServantListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
         ListViewItem,
         ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem
    || (ServantEntity_k__BackingField = ListViewItem->fields._ServantEntity_k__BackingField) == 0LL
    || (collectionNo = ServantEntity_k__BackingField->fields.collectionNo,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v6)) == 0LL)
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField) == 0LL
    || (lv = UserServantEntity_k__BackingField->fields.lv,
        (ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, v9)) == 0LL)
    || (ListViewItem = (CharaGraphServantListViewItem_o *)ListViewItem->fields._ServantEntity_k__BackingField) == 0LL )
  {
LABEL_9:
    sub_B0D97C(ListViewItem);
  }
  return (collectionNo << 16) | (v4 << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                          (ServantEntity_o *)ListViewItem,
                                                          0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetLevelToIcon(
        ServantCharaGraphSortLogic_o *this,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *ListViewItem; // x0
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
    sub_B0D97C(ListViewItem);
  }
  IconLabelInfo__Set_26821248(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
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
  const MethodInfo *v10; // x1
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  const MethodInfo *v15; // x1
  struct ListViewSort_o *sort; // x8
  int v17; // w22
  int32_t v18; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v20; // w23
  int64_t AmountSortValue_k__BackingField; // x21
  UnityEngine_Object_o *manager; // x8
  __int64 v23; // x11
  UnityEngine_Object_o *v24; // x21
  __int128 v25; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  const MethodInfo *v27; // x1
  int64_t v28; // x8
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w1
  const MethodInfo *v32; // x1
  IconLabelInfo_o *v33; // x21
  const MethodInfo *v34; // x1
  int32_t v35; // w22
  int32_t v36; // w3
  int32_t v37; // w1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  IconLabelInfo_o *v44; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4215945 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4215945 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, 0LL);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem )
    goto LABEL_90;
  v9 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem )
    goto LABEL_90;
  v11 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v10);
  if ( !ListViewItem )
    goto LABEL_90;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v12);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v11 )
    goto LABEL_90;
  v14 = *(_QWORD *)(v11 + 16);
  v13 = *(_QWORD *)(v11 + 24);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v14;
  *(_QWORD *)&v48.fields.fakeValue = v13;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_90;
  v17 = 26;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_74;
    case 1:
      if ( !v9 )
        goto LABEL_90;
      v25 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v46.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v45, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v9 + 304), 0, 0, 0, 0LL);
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v9, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v27);
      if ( !ListViewItem )
        goto LABEL_90;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_74;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v28 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_73;
    case 3:
      if ( !v9 )
        goto LABEL_90;
      v28 = *(int *)(v9 + 256);
      goto LABEL_73;
    case 4:
      if ( !v9 )
        goto LABEL_90;
      UserServantEntity__getTreasureDeviceInfo_21271516((UserServantEntity_o *)v9, &tdMaxLv[1], tdMaxLv, 0LL);
      v18 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)ListViewItem, 33, v18, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v20 = *(_DWORD *)(v9 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v9, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__Set_26821248(IconInfo2_k__BackingField, 2, v20, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v9 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v9 + 268);
      if ( !ListViewItem )
        goto LABEL_90;
      v29 = *(_DWORD *)(v9 + 276);
      v30 = *(_DWORD *)(v9 + 268);
      v31 = 3;
      goto LABEL_39;
    case 6:
      if ( !v9 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v9 + 264);
      if ( !ListViewItem )
        goto LABEL_90;
      v29 = *(_DWORD *)(v9 + 272);
      v30 = *(_DWORD *)(v9 + 264);
      v31 = 5;
LABEL_39:
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)ListViewItem, v31, v30, v29, 0, 0, 0, 0, 0LL);
      goto LABEL_74;
    case 7:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v11 + 152);
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_26821248((IconLabelInfo_o *)ListViewItem, 7, *(_DWORD *)(v11 + 152), 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v28 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
      goto LABEL_73;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v32);
      if ( !ListViewItem )
        goto LABEL_90;
      v35 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v34);
      if ( !ListViewItem || !v33 )
        goto LABEL_90;
      v36 = *(_DWORD *)(ListViewItem + 152);
      v37 = 32;
      goto LABEL_59;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_71;
      manager = (UnityEngine_Object_o *)sort->fields.manager;
      if ( manager
        && (v23 = *(&CharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v23 - 1] == CharaGraphListViewManager_TypeInfo )
          v24 = manager;
        else
          v24 = 0LL;
      }
      else
      {
        v24 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v24, 0LL, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v42);
      if ( !ListViewItem || !v24 )
        goto LABEL_90;
      AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                          (CharaGraphListViewManager_o *)v24,
                                          *(_DWORD *)(ListViewItem + 240),
                                          0LL);
      this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_71:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v28 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
               ListViewItem,
               *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
          + (AmountSortValue_k__BackingField << 48)
          + *(int *)(v11 + 208);
LABEL_73:
      this->fields._SortValue1_k__BackingField = v28;
LABEL_74:
      v17 = 26;
LABEL_75:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v44 = this->fields._IconInfo1_k__BackingField;
LABEL_81:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, v44, v43);
        goto LABEL_82;
      }
      ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v44 = this->fields._IconInfo2_k__BackingField;
        goto LABEL_81;
      }
LABEL_82:
      if ( !v17
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v11, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v11, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v11, 0LL)) )
      {
        ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
        if ( ListViewItem )
        {
          IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
          ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
          if ( ListViewItem )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)ListViewItem, 0LL);
            return;
          }
        }
LABEL_90:
        sub_B0D97C(ListViewItem);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v38);
      if ( !ListViewItem )
        goto LABEL_90;
      v35 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v39);
      if ( !ListViewItem || !v33 )
        goto LABEL_90;
      v36 = *(_DWORD *)(ListViewItem + 164);
      v37 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v15);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v40);
      if ( !ListViewItem )
        goto LABEL_90;
      v35 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v41);
      if ( !ListViewItem || !v33 )
        goto LABEL_90;
      v36 = *(_DWORD *)(ListViewItem + 168);
      v37 = 45;
LABEL_59:
      IconLabelInfo__Set_26821248(v33, v37, v35, v36, 0, 0, 0, 0, 0LL);
LABEL_60:
      v17 = 0;
      goto LABEL_75;
    default:
      goto LABEL_75;
  }
}


void __fastcall ServantCharaGraphSortLogic__SortByPartyStatus(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v4; // x10
  CharaGraphPartyServantListViewItem_c *v5; // x9
  CharaGraphServantListViewItem_o *v6; // x8

  if ( (byte_4215946 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphPartyServantListViewItem_TypeInfo, method);
    byte_4215946 = 1;
  }
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    v4 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&ListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (CharaGraphPartyServantListViewItem_c *)ListViewItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == CharaGraphPartyServantListViewItem_TypeInfo ? ListViewItem : 0LL;
      if ( v5 == CharaGraphPartyServantListViewItem_TypeInfo )
      {
        if ( !v6 || !this )
          sub_B0D97C(ListViewItem);
        this->fields._SortValue0_k__BackingField = ((unsigned __int64)LODWORD(v6[1].klass) >> 31) ^ 1;
        this->fields._SortValue1_k__BackingField = SLODWORD(v6[1].klass);
      }
    }
  }
}


CharaGraphServantListViewItem_o *__fastcall ServantCharaGraphSortLogic__get_ListViewItem(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_listViewItem; // x0
  CharaGraphServantListViewItem_o *listViewItem; // x19
  __int64 v11; // x9
  System_Int32_array **item; // x1
  ServantCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4215944 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphServantListViewItem_TypeInfo, method);
    byte_4215944 = 1;
  }
  p_listViewItem = (BattleServantConfConponent_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (v11 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&listViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (CharaGraphServantListViewItem_c *)listViewItem->klass->_2.typeHierarchy[v11 - 1] == CharaGraphServantListViewItem_TypeInfo )
  {
    item = (System_Int32_array **)this->fields.item;
    p_listViewItem->klass = (BattleServantConfConponent_c *)listViewItem;
    sub_B0D840(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphSortLogic_o *)sub_B0DC70(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v14, v15);
}