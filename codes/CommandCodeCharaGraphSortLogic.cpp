void __fastcall CommandCodeCharaGraphSortLogic___ctor(CommandCodeCharaGraphSortLogic_o *this, const MethodInfo *method)
{
  CharaGraphSortLogicBase___ctor((CharaGraphSortLogicBase_o *)this, 0LL);
}


void __fastcall CommandCodeCharaGraphSortLogic__SetSortValueLocal(
        CommandCodeCharaGraphSortLogic_o *this,
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
  CharaGraphCommandCodeListViewItem_o *ListViewItem; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x20
  const MethodInfo *v18; // x1
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  const MethodInfo *v22; // x1
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  int64_t v25; // x8
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v27; // q1
  int64_t v28; // x0
  IconLabelInfo_o *IconInfo1_k__BackingField; // x20
  const MethodInfo *v30; // x1
  struct UserCommandCodeEntity_o *v31; // x8
  int64_t AmountSortValue_k__BackingField; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v34; // x11
  CharaGraphListViewManager_o *v35; // x20
  const MethodInfo *v36; // x1
  __int64 v37; // x21
  const MethodInfo *v38; // x1
  struct CommandCodeEntity_o *v39; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42E8BDF & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42E8BDF = 1;
  }
  CharaGraphSortLogicBase__SetSortValueLocal((CharaGraphSortLogicBase_o *)this, 0LL);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v14);
  if ( !ListViewItem )
    goto LABEL_48;
  v17 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
          ListViewItem,
          ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v18);
  if ( !ListViewItem )
    goto LABEL_48;
  CommandCodeEntity_k__BackingField = ListViewItem->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    goto LABEL_48;
  v21 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.currentCryptoKey;
  v20 = *(_QWORD *)&CommandCodeEntity_k__BackingField->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v21;
  *(_QWORD *)&v44.fields.fakeValue = v20;
  this->fields._SortValue2_k__BackingField = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v44,
                                                         0LL) << 16) | (v17 << 48);
  ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v22);
  if ( !ListViewItem )
    goto LABEL_48;
  sort = this->fields.sort;
  this->fields._SortValue2B_k__BackingField = ListViewItem->fields._CommandCodeId_k__BackingField;
  if ( !sort )
    goto LABEL_48;
  sortKind = sort->fields.sortKind;
  if ( sortKind == 1 )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v16);
    if ( ListViewItem )
    {
      UserCommandCodeEntity_k__BackingField = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserCommandCodeEntity_k__BackingField )
      {
        v27 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
        *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v43.fields.fakeValue = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v42 = v43;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
        IconInfo1_k__BackingField = this->fields._IconInfo1_k__BackingField;
        this->fields._SortValue1_k__BackingField = v28;
        ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v30);
        if ( ListViewItem )
        {
          v31 = ListViewItem->fields._UserCommandCodeEntity_k__BackingField;
          if ( v31 )
          {
            if ( IconInfo1_k__BackingField )
            {
              IconLabelInfo__SetTime(IconInfo1_k__BackingField, 49, v31->fields.createdAt, 0, 0, 0, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  if ( sortKind != 14 )
  {
    if ( sortKind != 2 )
      return;
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v16);
    if ( ListViewItem )
    {
      v25 = ((__int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
LABEL_46:
      this->fields._SortValue1_k__BackingField = v25;
      return;
    }
    goto LABEL_48;
  }
  AmountSortValue_k__BackingField = this->fields._AmountSortValue_k__BackingField;
  if ( (AmountSortValue_k__BackingField & 0x8000000000000000LL) == 0 )
  {
LABEL_39:
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v16);
    if ( ListViewItem )
    {
      v37 = ((unsigned __int64 (__fastcall *)(CharaGraphCommandCodeListViewItem_o *, Il2CppMethodPointer))ListViewItem->klass->vtable._9_get_Rarity.method)(
              ListViewItem,
              ListViewItem->klass->vtable._10_ModifyLocal.methodPtr);
      ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v38);
      if ( ListViewItem )
      {
        v39 = ListViewItem->fields._CommandCodeEntity_k__BackingField;
        if ( v39 )
        {
          v41 = *(_QWORD *)&v39->fields.collectionNo.fields.currentCryptoKey;
          v40 = *(_QWORD *)&v39->fields.collectionNo.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v45.fields.currentCryptoKey = v41;
          *(_QWORD *)&v45.fields.fakeValue = v40;
          v25 = (v37 << 32)
              + (AmountSortValue_k__BackingField << 48)
              + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
          goto LABEL_46;
        }
      }
    }
LABEL_48:
    sub_B5D69C(ListViewItem, v16);
  }
  manager = sort->fields.manager;
  if ( manager
    && (v34 = *(&CharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
  {
    if ( (CharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v34 - 1] == CharaGraphListViewManager_TypeInfo )
      v35 = (CharaGraphListViewManager_o *)manager;
    else
      v35 = 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
  {
    ListViewItem = CommandCodeCharaGraphSortLogic__get_ListViewItem(this, v36);
    if ( !ListViewItem || !v35 )
      goto LABEL_48;
    AmountSortValue_k__BackingField = CharaGraphListViewManager__GetCommandCodeAmountSortValue(
                                        v35,
                                        ListViewItem->fields._CommandCodeId_k__BackingField,
                                        0LL);
    this->fields._AmountSortValue_k__BackingField = AmountSortValue_k__BackingField;
    goto LABEL_39;
  }
}


CharaGraphCommandCodeListViewItem_o *__fastcall CommandCodeCharaGraphSortLogic__get_ListViewItem(
        CommandCodeCharaGraphSortLogic_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_listViewItem; // x0
  CharaGraphCommandCodeListViewItem_o *listViewItem; // x19
  __int64 v11; // x9
  System_Int32_array **item; // x1
  CharaGraphCommandCodeListViewItem_o *result; // x0
  CommandCodeCharaGraphSortLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_42E8BDE & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphCommandCodeListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8BDE = 1;
  }
  p_listViewItem = (BattleServantConfConponent_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphCommandCodeListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (v11 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&listViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (CharaGraphCommandCodeListViewItem_c *)listViewItem->klass->_2.typeHierarchy[v11 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
  {
    item = (System_Int32_array **)this->fields.item;
    p_listViewItem->klass = (BattleServantConfConponent_c *)listViewItem;
    sub_B5D560(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (CommandCodeCharaGraphSortLogic_o *)sub_B5D990(this->fields.item);
  CommandCodeCharaGraphSortLogic__SetSortValueLocal(v14, v15);
  return result;
}