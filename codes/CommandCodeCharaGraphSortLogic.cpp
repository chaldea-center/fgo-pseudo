void __fastcall CommandCodeCharaGraphSortLogic__SetSortValueLocal(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CharaGraphCommandCodeListViewItem_o *ListViewItem; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  const MethodInfo *v11; // x1
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  int64_t v14; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v16; // q1
  int64_t v17; // x0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x20
  const MethodInfo *v19; // x1
  struct UserCommandCodeEntity_o *v20; // x8
  int64_t AmountSortValue_k__BackingField; // x20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v24; // x20
  const MethodInfo *v25; // x1
  __int64 v26; // x21
  const MethodInfo *v27; // x1
  struct CommandCodeEntity_o *v28; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A5A576 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A576 = 1;
  }
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_44;
  v6 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
         ListViewItem,
         ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v7);
  if ( !ListViewItem )
    goto LABEL_44;
  CommandCodeEntity_k__BackingField = ListViewItem->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    goto LABEL_44;
  v10 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.currentCryptoKey;
  v9 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v10;
  *(_QWORD *)&v33.fields.fakeValue = v9;
  this->fields._SortValue2_k__BackingField = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                         v33,
                                                         0LL) << 16) | (v6 << 48);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v11);
  if ( !ListViewItem )
    goto LABEL_44;
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = ListViewItem->fields._CommandCodeId_k__BackingField;
  if ( !sort )
    goto LABEL_44;
  sortKind = sort->fields.sortKind;
  if ( sortKind == 1 )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v5);
    if ( ListViewItem )
    {
      UserCommandCodeEntity_k__BackingField = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserCommandCodeEntity_k__BackingField )
      {
        v16 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
        IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
        this->fields._SortValue1_k__BackingField = v17;
        ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v19);
        if ( ListViewItem )
        {
          v20 = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
          if ( v20 )
          {
            if ( IconInfo1_k__BackingField )
            {
              IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, v20->fields.createdAt, 0, 0, 0, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_44;
  }
  if ( sortKind != 14 )
  {
    if ( sortKind != 2 )
      return;
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v5);
    if ( ListViewItem )
    {
      v14 = ((__int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
LABEL_42:
      this->fields._SortValue1_k__BackingField = v14;
      return;
    }
    goto LABEL_44;
  }
  AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
  if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
  {
LABEL_36:
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v5);
    if ( ListViewItem )
    {
      v26 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
      ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v27);
      if ( ListViewItem )
      {
        v28 = ListViewItem->fields._CommandCodeEntity_k__BackingField;
        if ( v28 )
        {
          v30 = *(_QWORD *)&v28->fields.collectionNo.fields.currentCryptoKey;
          v29 = *(_QWORD *)&v28->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v30;
          *(_QWORD *)&v34.fields.fakeValue = v29;
          v14 = (v26 << 32)
              + (AmountSortValue_k__BackingField << 48)
              + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
          goto LABEL_42;
        }
      }
    }
LABEL_44:
    sub_1B8880C(ListViewItem, v5);
  }
  manager = sort->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphListViewManager_TypeInfo )
      v24 = (CharaGraphListViewManager_o *)manager;
    else
      v24 = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v25);
    if ( !ListViewItem || !v24 )
      goto LABEL_44;
    AmountSortValue_k__BackingField = CharaGraphListViewManager__GetCommandCodeAmountSortValue(
                                        v24,
                                        ListViewItem->fields._CommandCodeId_k__BackingField,
                                        0LL);
    this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
    goto LABEL_36;
  }
}


CharaGraphCommandCodeListViewItem_o *__fastcall CommandCodeCharaGraphSortLogic__get_ListViewItem(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphCommandCodeListViewItem_o *result; // x0
  CommandCodeCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5A575 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4A5A575 = 1;
  }
  p_listViewItem = (ServantStatusBattleListViewItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphCommandCodeListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphCommandCodeListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (ServantStatusBattleListViewItem_c *)listViewItem;
    sub_1B88554(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1B88ACC(this->fields.item);
  CommandCodeCharaGraphSortLogic__SetSortValueLocal(v10, v11);
  return result;
}