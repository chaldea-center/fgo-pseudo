void CommandCodeCharaGraphSortLogic__SetSortValueLocal(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CharaGraphCommandCodeListViewItem_o *ListViewItem; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  int64_t v16; // x8
  int64_t AmountSortValue_k__BackingField; // x20
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  CharaGraphListViewManager_o *v20; // x20
  __int64 v21; // x2
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v23; // q1
  int64_t v24; // x0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x20
  const MethodInfo *v26; // x1
  struct UserCommandCodeEntity_o *v27; // x8
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  __int64 v30; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  struct CommandCodeEntity_o *v33; // x8
  __int64 v34; // x22
  __int64 v35; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_593799C & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593799C = 1;
  }
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v3);
  if ( !ListViewItem )
    goto LABEL_44;
  v6 = ((unsigned int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
         ListViewItem,
         ListViewItem->klass->vtable._9_get_Rarity.method);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v7);
  if ( !ListViewItem )
    goto LABEL_44;
  CommandCodeEntity_k__BackingField = ListViewItem->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    goto LABEL_44;
  v10 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.currentCryptoKey;
  v11 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v8);
  *(_QWORD *)&v38.fields.currentCryptoKey = v10;
  *(_QWORD *)&v38.fields.fakeValue = v11;
  this->fields._SortValue2_k__BackingField = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                         v38,
                                                         0) << 16)
                                           | (v6 << 48);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v12);
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
        v23 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v37.fields.fakeValue = v23;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v21);
        v36 = v37;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v36, 0);
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
              IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, v27->fields.createdAt, 0, 0, 0, 0);
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
      v16 = ((int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
              ListViewItem,
              ListViewItem->klass->vtable._9_get_Rarity.method);
LABEL_42:
      this->fields._SortValue1_k__BackingField = v16;
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
      v30 = ((unsigned int (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, const MethodInfo *))ListViewItem->klass->vtable._9_get_Rarity.methodPtr)(
              ListViewItem,
              ListViewItem->klass->vtable._9_get_Rarity.method);
      ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v31);
      if ( ListViewItem )
      {
        v33 = ListViewItem->fields._CommandCodeEntity_k__BackingField;
        if ( v33 )
        {
          v34 = *(_QWORD *)&v33->fields.collectionNo.fields.currentCryptoKey;
          v35 = *(_QWORD *)&v33->fields.collectionNo.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v32);
          *(_QWORD *)&v39.fields.currentCryptoKey = v34;
          *(_QWORD *)&v39.fields.fakeValue = v35;
          v16 = (v30 << 32)
              + (AmountSortValue_k__BackingField << 48)
              + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v39, 0);
          goto LABEL_42;
        }
      }
    }
LABEL_44:
    sub_21FFECC(ListViewItem, v5);
  }
  manager = sort->fields.manager;
  if ( manager
    && (naturalAligment = CharaGraphListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewManager_TypeInfo )
      v20 = (CharaGraphListViewManager_o *)manager;
    else
      v20 = 0;
  }
  else
  {
    v20 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0) )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v28);
    if ( !ListViewItem || !v20 )
      goto LABEL_44;
    AmountSortValue_k__BackingField = CharaGraphListViewManager__GetCommandCodeAmountSortValue(
                                        v20,
                                        ListViewItem->fields._CommandCodeId_k__BackingField,
                                        v29);
    this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
    goto LABEL_36;
  }
}


CharaGraphCommandCodeListViewItem_o *CommandCodeCharaGraphSortLogic__get_ListViewItem(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  CharaGraphCommandCodeListViewItem_o *result; // x0
  CommandCodeCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_593799B & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_593799B = 1;
  }
  p_listViewItem = (MissionNaviTransitionBoardItem_o *)&this->fields.listViewItem;
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
    p_listViewItem->klass = (MissionNaviTransitionBoardItem_c *)listViewItem;
    sub_21FFBF4(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_220024C(this->fields.item, CharaGraphCommandCodeListViewItem_TypeInfo, v2, v3);
  CommandCodeCharaGraphSortLogic__SetSortValueLocal(v14, v15);
  return result;
}