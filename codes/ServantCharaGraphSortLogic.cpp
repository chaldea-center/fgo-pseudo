void __fastcall ServantCharaGraphSortLogic___ctor(ServantCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  CharaGraphSortLogicBase___ctor((CharaGraphSortLogicBase_o *)this, 0LL);
}


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
    sub_B52A5C(ListViewItem, v4);
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
    sub_B52A5C(ListViewItem, v5);
  }
  IconLabelInfo__Set_28274368(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
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
  int32_t v13; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v15; // w23
  int64_t AmountSortValue_k__BackingField; // x21
  UnityEngine_Object_o *manager; // x8
  __int64 v18; // x11
  UnityEngine_Object_o *v19; // x21
  __int128 v20; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int64_t v22; // x8
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w1
  IconLabelInfo_o *v26; // x21
  int32_t v27; // w22
  int32_t v28; // w3
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  IconLabelInfo_o *v31; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42B108B & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B108B = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, 0LL);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_90;
  v6 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_90;
  v7 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem )
    goto LABEL_90;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v8);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v7 )
    goto LABEL_90;
  v10 = *(_QWORD *)(v7 + 16);
  v9 = *(_QWORD *)(v7 + 24);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v10;
  *(_QWORD *)&v35.fields.fakeValue = v9;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_90;
  v12 = 26;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_74;
    case 1:
      if ( !v6 )
        goto LABEL_90;
      v20 = *(_OWORD *)(v6 + 32);
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
      *(_OWORD *)&v33.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v32 = v33;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v32, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v6 + 304), 0, 0, 0, 0LL);
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v6, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_74;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v22 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_73;
    case 3:
      if ( !v6 )
        goto LABEL_90;
      v22 = *(int *)(v6 + 256);
      goto LABEL_73;
    case 4:
      if ( !v6 )
        goto LABEL_90;
      UserServantEntity__getTreasureDeviceInfo_21516452((UserServantEntity_o *)v6, &tdMaxLv[1], tdMaxLv, 0LL);
      v13 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)ListViewItem, 33, v13, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v15 = *(_DWORD *)(v6 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v6, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__Set_28274368(IconInfo2_k__BackingField, 2, v15, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v6 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v6 + 268);
      if ( !ListViewItem )
        goto LABEL_90;
      v23 = *(_DWORD *)(v6 + 276);
      v24 = *(_DWORD *)(v6 + 268);
      v25 = 3;
      goto LABEL_39;
    case 6:
      if ( !v6 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v6 + 264);
      if ( !ListViewItem )
        goto LABEL_90;
      v23 = *(_DWORD *)(v6 + 272);
      v24 = *(_DWORD *)(v6 + 264);
      v25 = 5;
LABEL_39:
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)ListViewItem, v25, v24, v23, 0, 0, 0, 0, 0LL);
      goto LABEL_74;
    case 7:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v7 + 152);
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)ListViewItem, 7, *(_DWORD *)(v7 + 152), 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v22 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
      goto LABEL_73;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v27 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v26 )
        goto LABEL_90;
      v28 = *(_DWORD *)(ListViewItem + 152);
      v29 = 32;
      goto LABEL_59;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_71;
      manager = (UnityEngine_Object_o *)sort->fields.manager;
      if ( manager
        && (v18 = *(&CharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] == CharaGraphListViewManager_TypeInfo )
          v19 = manager;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v19 )
        goto LABEL_90;
      AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                          (CharaGraphListViewManager_o *)v19,
                                          *(_DWORD *)(ListViewItem + 240),
                                          0LL);
      this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_71:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v22 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
               ListViewItem,
               *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
          + (AmountSortValue_k__BackingField << 48)
          + *(int *)(v7 + 208);
LABEL_73:
      this->fields._SortValue1_k__BackingField = v22;
LABEL_74:
      v12 = 26;
LABEL_75:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v31 = this->fields._IconInfo1_k__BackingField;
LABEL_81:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, v31, v30);
        goto LABEL_82;
      }
      ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v31 = this->fields._IconInfo2_k__BackingField;
        goto LABEL_81;
      }
LABEL_82:
      if ( !v12
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v7, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v7, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v7, 0LL)) )
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
        sub_B52A5C(ListViewItem, v5);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v27 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v26 )
        goto LABEL_90;
      v28 = *(_DWORD *)(ListViewItem + 164);
      v29 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v26 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem )
        goto LABEL_90;
      v27 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v5);
      if ( !ListViewItem || !v26 )
        goto LABEL_90;
      v28 = *(_DWORD *)(ListViewItem + 168);
      v29 = 45;
LABEL_59:
      IconLabelInfo__Set_28274368(v26, v29, v27, v28, 0, 0, 0, 0, 0LL);
LABEL_60:
      v12 = 0;
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
  __int64 v4; // x1
  __int64 v5; // x10
  CharaGraphPartyServantListViewItem_c *v6; // x9
  CharaGraphServantListViewItem_o *v7; // x8

  if ( (byte_42B108C & 1) == 0 )
  {
    sub_B52984(&CharaGraphPartyServantListViewItem_TypeInfo);
    byte_42B108C = 1;
  }
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    v5 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&ListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (CharaGraphPartyServantListViewItem_c *)ListViewItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == CharaGraphPartyServantListViewItem_TypeInfo ? ListViewItem : 0LL;
      if ( v6 == CharaGraphPartyServantListViewItem_TypeInfo )
      {
        if ( !v7 || !this )
          sub_B52A5C(ListViewItem, v4);
        this->fields._SortValue0_k__BackingField = ((unsigned __int64)LODWORD(v7[1].klass) >> 31) ^ 1;
        this->fields._SortValue1_k__BackingField = SLODWORD(v7[1].klass);
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

  if ( (byte_42B108A & 1) == 0 )
  {
    sub_B52984(&CharaGraphServantListViewItem_TypeInfo);
    byte_42B108A = 1;
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
    sub_B52920(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphSortLogic_o *)sub_B52D50(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v14, v15);
}