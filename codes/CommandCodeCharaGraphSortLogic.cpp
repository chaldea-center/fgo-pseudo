void __fastcall CommandCodeCharaGraphSortLogic__SetSortValueLocal(
        CommandCodeCharaGraphSortLogic_o *this,
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
  CharaGraphCommandCodeListViewItem_o *ListViewItem; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  const MethodInfo *v18; // x1
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  int64_t v21; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v23; // q1
  int64_t v24; // x0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x20
  const MethodInfo *v26; // x1
  struct UserCommandCodeEntity_o *v27; // x8
  int64_t AmountSortValue_k__BackingField; // x20
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  CharaGraphListViewManager_o *v31; // x20
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  const MethodInfo *v34; // x1
  struct CommandCodeEntity_o *v35; // x8
  __int64 v36; // x22
  __int64 v37; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4B155E2 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B155E2 = 1;
  }
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v10);
  if ( !ListViewItem )
    goto LABEL_44;
  v13 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
          ListViewItem,
          ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v14);
  if ( !ListViewItem )
    goto LABEL_44;
  CommandCodeEntity_k__BackingField = ListViewItem->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    goto LABEL_44;
  v17 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.currentCryptoKey;
  v16 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v40.fields.currentCryptoKey = v17;
  *(_QWORD *)&v40.fields.fakeValue = v16;
  this->fields._SortValue2_k__BackingField = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v40,
                                                         0LL) << 16) | (v13 << 48);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v18);
  if ( !ListViewItem )
    goto LABEL_44;
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = ListViewItem->fields._CommandCodeId_k__BackingField;
  if ( !sort )
    goto LABEL_44;
  sortKind = sort->fields.sortKind;
  if ( sortKind == 1 )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v12);
    if ( ListViewItem )
    {
      UserCommandCodeEntity_k__BackingField = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserCommandCodeEntity_k__BackingField )
      {
        v23 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v39.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
        v38 = v39;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v38, 0LL);
        IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
        this->fields._SortValue1_k__BackingField = v24;
        ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v26);
        if ( ListViewItem )
        {
          v27 = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
          if ( v27 )
          {
            if ( IconInfo1_k__BackingField )
            {
              IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, v27->fields.createdAt, 0, 0, 0, 0LL);
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
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v12);
    if ( ListViewItem )
    {
      v21 = ((__int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
LABEL_42:
      this->fields._SortValue1_k__BackingField = v21;
      return;
    }
    goto LABEL_44;
  }
  AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
  if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
  {
LABEL_36:
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v12);
    if ( ListViewItem )
    {
      v33 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
      ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v34);
      if ( ListViewItem )
      {
        v35 = ListViewItem->fields._CommandCodeEntity_k__BackingField;
        if ( v35 )
        {
          v37 = *(_QWORD *)&v35->fields.collectionNo.fields.currentCryptoKey;
          v36 = *(_QWORD *)&v35->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
          *(_QWORD *)&v41.fields.currentCryptoKey = v37;
          *(_QWORD *)&v41.fields.fakeValue = v36;
          v21 = (v33 << 32)
              + (AmountSortValue_k__BackingField << 48)
              + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41, 0LL);
          goto LABEL_42;
        }
      }
    }
LABEL_44:
    sub_1BCAA3C(ListViewItem, v12);
  }
  manager = sort->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphListViewManager_TypeInfo )
      v31 = (CharaGraphListViewManager_o *)manager;
    else
      v31 = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v32);
    if ( !ListViewItem || !v31 )
      goto LABEL_44;
    AmountSortValue_k__BackingField = CharaGraphListViewManager__GetCommandCodeAmountSortValue(
                                        v31,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphCommandCodeListViewItem_o *result; // x0
  CommandCodeCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B155E1 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphCommandCodeListViewItem_TypeInfo, method, v2);
    byte_4B155E1 = 1;
  }
  p_listViewItem = (PartyOrganizationUtility_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (PartyOrganizationUtility_c *)listViewItem;
    sub_1BCA784(p_listViewItem, (int64_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1BCACFC(this->fields.item);
  CommandCodeCharaGraphSortLogic__SetSortValueLocal(v14, v15);
  return result;
}