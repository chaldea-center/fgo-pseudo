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
    sub_B5D69C(ListViewItem, v4);
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
    sub_B5D69C(ListViewItem, v5);
  }
  IconLabelInfo__Set_28463004(info, 2, TdCategoryIdArray_k__BackingField, (int32_t)ListViewItem, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantCharaGraphSortLogic__SetSortValueLocal(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x1
  int64_t ListViewItem; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x21
  __int64 v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x22
  __int64 v21; // x23
  struct ListViewSort_o *sort; // x8
  int v23; // w22
  int32_t v24; // w2
  IconLabelInfo_o *IconInfo2_k__BackingField; // x22
  int32_t v26; // w23
  int64_t AmountSortValue_k__BackingField; // x21
  UnityEngine_Object_o *manager; // x8
  __int64 v29; // x11
  UnityEngine_Object_o *v30; // x21
  __int128 v31; // q1
  IconLabelInfo_o *IconInfo1_k__BackingField; // x8
  int64_t v33; // x8
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w1
  IconLabelInfo_o *v37; // x21
  int32_t v38; // w22
  int32_t v39; // w3
  int32_t v40; // w1
  const MethodInfo *v41; // x2
  IconLabelInfo_o *v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42E9971 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42E9971 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, 0LL);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v14);
  if ( !ListViewItem )
    goto LABEL_90;
  v17 = *(_QWORD *)(ListViewItem + 224);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
  if ( !ListViewItem )
    goto LABEL_90;
  v18 = *(_QWORD *)(ListViewItem + 232);
  ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
  if ( !ListViewItem )
    goto LABEL_90;
  this->fields._SortValue1B_k__BackingField = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                                                ListViewItem,
                                                *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
  ListViewItem = ServantCharaGraphSortLogic__GetDefaultSortValue(this, v19);
  this->fields._SortValue2_k__BackingField = ListViewItem;
  if ( !v18 )
    goto LABEL_90;
  v21 = *(_QWORD *)(v18 + 16);
  v20 = *(_QWORD *)(v18 + 24);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v21;
  *(_QWORD *)&v46.fields.fakeValue = v20;
  ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL);
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = (int)ListViewItem;
  if ( !sort )
    goto LABEL_90;
  v23 = 26;
  switch ( sort->fields.sortKind )
  {
    case 0:
      ((void (__fastcall *)(ServantCharaGraphSortLogic_o *, void *))this->klass->vtable._5_SortByPartyStatus.method)(
        this,
        this->klass[1]._1.image);
      goto LABEL_74;
    case 1:
      if ( !v17 )
        goto LABEL_90;
      v31 = *(_OWORD *)(v17 + 32);
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
      *(_OWORD *)&v44.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v43 = v44;
      ListViewItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL);
      IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = ListViewItem;
      if ( !IconInfo1_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, *(_QWORD *)(v17 + 304), 0, 0, 0, 0LL);
      if ( !UserServantEntity__IsMaterialTd((UserServantEntity_o *)v17, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      *(_BYTE *)(ListViewItem + 147) = 1;
      goto LABEL_74;
    case 2:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = (*(int (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
              ListViewItem,
              *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL));
      goto LABEL_73;
    case 3:
      if ( !v17 )
        goto LABEL_90;
      v33 = *(int *)(v17 + 256);
      goto LABEL_73;
    case 4:
      if ( !v17 )
        goto LABEL_90;
      UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)v17, &tdMaxLv[1], tdMaxLv, 0LL);
      v24 = tdMaxLv[1];
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = tdMaxLv[1];
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)ListViewItem, 33, v24, tdMaxLv[0], 0, 0, 0, 0, 0LL);
      IconInfo2_k__BackingField = this->fields._IconInfo2_k__BackingField;
      v26 = *(_DWORD *)(v17 + 256);
      ListViewItem = UserServantEntity__getLevelMax((UserServantEntity_o *)v17, 0LL);
      if ( !IconInfo2_k__BackingField )
        goto LABEL_90;
      IconLabelInfo__Set_28463004(IconInfo2_k__BackingField, 2, v26, ListViewItem, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 5:
      if ( !v17 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v17 + 268);
      if ( !ListViewItem )
        goto LABEL_90;
      v34 = *(_DWORD *)(v17 + 276);
      v35 = *(_DWORD *)(v17 + 268);
      v36 = 3;
      goto LABEL_39;
    case 6:
      if ( !v17 )
        goto LABEL_90;
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v17 + 264);
      if ( !ListViewItem )
        goto LABEL_90;
      v34 = *(_DWORD *)(v17 + 272);
      v35 = *(_DWORD *)(v17 + 264);
      v36 = 5;
LABEL_39:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)ListViewItem, v36, v35, v34, 0, 0, 0, 0, 0LL);
      goto LABEL_74;
    case 7:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(v18 + 152);
      if ( !ListViewItem )
        goto LABEL_90;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)ListViewItem, 7, *(_DWORD *)(v18 + 152), 0, 0, 0, 0, 0, 0LL);
      goto LABEL_60;
    case 8:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = (int)-(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 440LL))(
                    ListViewItem,
                    *(_QWORD *)(*(_QWORD *)ListViewItem + 448LL));
      goto LABEL_73;
    case 0xA:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v37 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v38 = *(_DWORD *)(ListViewItem + 148);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem || !v37 )
        goto LABEL_90;
      v39 = *(_DWORD *)(ListViewItem + 152);
      v40 = 32;
      goto LABEL_59;
    case 0xE:
      AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
      if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
        goto LABEL_71;
      manager = (UnityEngine_Object_o *)sort->fields.manager;
      if ( manager
        && (v29 = *(&CharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
      {
        if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v29 - 1] == CharaGraphListViewManager_TypeInfo )
          v30 = manager;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v30, 0LL, 0LL) )
        goto LABEL_74;
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem || !v30 )
        goto LABEL_90;
      AmountSortValue_k__BackingField = CharaGraphListViewManager__GetAmountSortValue(
                                          (CharaGraphListViewManager_o *)v30,
                                          *(_DWORD *)(ListViewItem + 240),
                                          0LL);
      this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
LABEL_71:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v33 = ((*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)ListViewItem + 456LL))(
               ListViewItem,
               *(_QWORD *)(*(_QWORD *)ListViewItem + 464LL)) << 32)
          + (AmountSortValue_k__BackingField << 48)
          + *(int *)(v18 + 208);
LABEL_73:
      this->fields._SortValue1_k__BackingField = v33;
LABEL_74:
      v23 = 26;
LABEL_75:
      ListViewItem = (int64_t)this->fields._IconInfo1_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v42 = this->fields._IconInfo1_k__BackingField;
LABEL_81:
        ServantCharaGraphSortLogic__SetLevelToIcon(this, v42, v41);
        goto LABEL_82;
      }
      ListViewItem = (int64_t)this->fields._IconInfo2_k__BackingField;
      if ( !ListViewItem )
        goto LABEL_90;
      if ( IconLabelInfo__IsClear((IconLabelInfo_o *)ListViewItem, 0LL) )
      {
        v42 = this->fields._IconInfo2_k__BackingField;
        goto LABEL_81;
      }
LABEL_82:
      if ( !v23
        && (ServantEntity__get_IsExpUp((ServantEntity_o *)v18, 0LL)
         || ServantEntity__get_IsStatusUp((ServantEntity_o *)v18, 0LL)
         || ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v18, 0LL)) )
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
        sub_B5D69C(ListViewItem, v16);
      }
      return;
    case 0xF:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v37 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v38 = *(_DWORD *)(ListViewItem + 156);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem || !v37 )
        goto LABEL_90;
      v39 = *(_DWORD *)(ListViewItem + 164);
      v40 = 44;
      goto LABEL_59;
    case 0x10:
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v37 = this->fields._IconInfo1_k__BackingField;
      this->fields._SortValue1_k__BackingField = *(int *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem )
        goto LABEL_90;
      v38 = *(_DWORD *)(ListViewItem + 160);
      ListViewItem = (int64_t)ServantCharaGraphSortLogic__get_ListViewItem(this, v16);
      if ( !ListViewItem || !v37 )
        goto LABEL_90;
      v39 = *(_DWORD *)(ListViewItem + 168);
      v40 = 45;
LABEL_59:
      IconLabelInfo__Set_28463004(v37, v40, v38, v39, 0, 0, 0, 0, 0LL);
LABEL_60:
      v23 = 0;
      goto LABEL_75;
    default:
      goto LABEL_75;
  }
}


void __fastcall ServantCharaGraphSortLogic__SortByPartyStatus(
        ServantCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v6; // x1
  __int64 v7; // x10
  CharaGraphPartyServantListViewItem_c *v8; // x9
  CharaGraphServantListViewItem_o *v9; // x8

  if ( (byte_42E9972 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphPartyServantListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9972 = 1;
  }
  ListViewItem = ServantCharaGraphSortLogic__get_ListViewItem(this, method);
  if ( ListViewItem )
  {
    v7 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&ListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      v8 = (CharaGraphPartyServantListViewItem_c *)ListViewItem->klass->_2.typeHierarchy[v7 - 1];
      v9 = v8 == CharaGraphPartyServantListViewItem_TypeInfo ? ListViewItem : 0LL;
      if ( v8 == CharaGraphPartyServantListViewItem_TypeInfo )
      {
        if ( !v9 || !this )
          sub_B5D69C(ListViewItem, v6);
        this->fields._SortValue0_k__BackingField = ((unsigned __int64)LODWORD(v9[1].klass) >> 31) ^ 1;
        this->fields._SortValue1_k__BackingField = SLODWORD(v9[1].klass);
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

  if ( (byte_42E9970 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphServantListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9970 = 1;
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
    sub_B5D560(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphSortLogic_o *)sub_B5D990(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphSortLogic__GetDefaultSortValue(v14, v15);
}