void __fastcall CharaGraphGrandEquipListViewItem___ctor(
        CharaGraphGrandEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        const MethodInfo *method)
{
  CharaGraphEquipListViewItem___ctor(
    (CharaGraphEquipListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    partyUserServantList,
    0LL);
}