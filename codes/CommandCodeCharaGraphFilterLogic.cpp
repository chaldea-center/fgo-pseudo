void __fastcall CommandCodeCharaGraphFilterLogic___ctor(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommandCodeCharaGraphFilterLogic__IsMatchAllFilter(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (((__int64 (__fastcall *)(CommandCodeCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchRarityFilter.method)(
          this,
          this->klass->vtable._6_IsMatchSelectedItemFilter.methodPtr) & 1) != 0
    && CommandCodeCharaGraphFilterLogic__IsMatchCommandCodeCategoryFilter(this, v3) )
  {
    return ((__int64 (__fastcall *)(CommandCodeCharaGraphFilterLogic_o *, void *))this->klass->vtable._6_IsMatchSelectedItemFilter.method)(
             this,
             this->klass[1]._1.image);
  }
  else
  {
    return 0;
  }
}


bool __fastcall CommandCodeCharaGraphFilterLogic__IsMatchCommandCodeCategoryFilter(
        CommandCodeCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  const MethodInfo *v4; // x1

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_6;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0LL) )
    return 1;
  sort = CommandCodeCharaGraphFilterLogic__get_CommandCodeListViewItem(this, v4);
  if ( !sort )
LABEL_6:
    sub_1C22094(sort, method);
  return ServantEquipEffectFilterController__IsMatchEffectCategory(
           *((System_Int32_array **)sort + 30),
           this->fields.sort,
           0LL);
}


CharaGraphCommandCodeListViewItem_o *__fastcall CommandCodeCharaGraphFilterLogic__get_CommandCodeListViewItem(
        CommandCodeCharaGraphFilterLogic_o *this,
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
  CommandCodeCharaGraphFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4BDB87C & 1) == 0 )
  {
    sub_1C21E38(&CharaGraphCommandCodeListViewItem_TypeInfo);
    byte_4BDB87C = 1;
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
    sub_1C21DDC(p_listViewItem, (int64_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C22354(this->fields.item);
  return (CharaGraphCommandCodeListViewItem_o *)CommandCodeCharaGraphFilterLogic__IsMatchAllFilter(v14, v15);
}