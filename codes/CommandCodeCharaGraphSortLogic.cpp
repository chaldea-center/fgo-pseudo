void CommandCodeCharaGraphSortLogic__SetSortValueLocal(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CharaGraphCommandCodeListViewItem_o *ListViewItem; // x0
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  const MethodInfo *v10; // x1
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
  __int64 naturalAligment; // x11
  CharaGraphListViewManager_o *v24; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x21
  const MethodInfo *v28; // x1
  struct CommandCodeEntity_o *v29; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C36D10 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C36D10 = 1;
  }
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_44;
  v5 = ((unsigned int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
         ListViewItem,
         ListViewItem->klass->vtable._9_get_Rarity.method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem )
    goto LABEL_44;
  CommandCodeEntity_k__BackingField = ListViewItem->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    goto LABEL_44;
  v9 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.currentCryptoKey;
  v8 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v9;
  *(_QWORD *)&v34.fields.fakeValue = v8;
  this->fields._SortValue2_k__BackingField = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                         v34,
                                                         0) << 16)
                                           | (v5 << 48);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v10);
  if ( !ListViewItem )
    goto LABEL_44;
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = ListViewItem->fields._CommandCodeId_k__BackingField;
  if ( !sort )
    goto LABEL_44;
  sortKind = sort->fields.sortKind;
  if ( sortKind == 1 )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v11);
    if ( ListViewItem )
    {
      UserCommandCodeEntity_k__BackingField = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserCommandCodeEntity_k__BackingField )
      {
        v16 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v32, 0);
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
              IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, v20->fields.createdAt, 0, 0, 0, 0);
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
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v11);
    if ( ListViewItem )
    {
      v14 = ((int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
              ListViewItem,
              ListViewItem->klass->vtable._9_get_Rarity.method);
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
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v11);
    if ( ListViewItem )
    {
      v27 = ((unsigned int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
              ListViewItem,
              ListViewItem->klass->vtable._9_get_Rarity.method);
      ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v28);
      if ( ListViewItem )
      {
        v29 = ListViewItem->fields._CommandCodeEntity_k__BackingField;
        if ( v29 )
        {
          v31 = *(_QWORD *)&v29->fields.collectionNo.fields.currentCryptoKey;
          v30 = *(_QWORD *)&v29->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v35.fields.currentCryptoKey = v31;
          *(_QWORD *)&v35.fields.fakeValue = v30;
          v14 = (v27 << 32)
              + (AmountSortValue_k__BackingField << 48)
              + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
          goto LABEL_42;
        }
      }
    }
LABEL_44:
    sub_1C32E7C(ListViewItem);
  }
  manager = sort->fields.manager;
  if ( manager
    && (naturalAligment = CharaGraphListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewManager_TypeInfo )
      v24 = (CharaGraphListViewManager_o *)manager;
    else
      v24 = 0;
  }
  else
  {
    v24 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, 0, 0) )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v25);
    if ( !ListViewItem || !v24 )
      goto LABEL_44;
    AmountSortValue_k__BackingField = CharaGraphListViewManager__GetCommandCodeAmountSortValue(
                                        v24,
                                        ListViewItem->fields._CommandCodeId_k__BackingField,
                                        v26);
    this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
    goto LABEL_36;
  }
}


CharaGraphCommandCodeListViewItem_o *CommandCodeCharaGraphSortLogic__get_ListViewItem(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphCommandCodeListViewItem_o *result; // x0
  CommandCodeCharaGraphSortLogic_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C36D0F & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4C36D0F = 1;
  }
  p_listViewItem = (CGThumbnailListItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphCommandCodeListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphCommandCodeListViewItem_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (CGThumbnailListItem_c *)listViewItem;
    sub_1C32BC4(p_listViewItem, (int32_t)item, v2, v3);
    return listViewItem;
  }
  sub_1C3313C(this->fields.item);
  CommandCodeCharaGraphSortLogic__SetSortValueLocal(v10, v11);
  return result;
}