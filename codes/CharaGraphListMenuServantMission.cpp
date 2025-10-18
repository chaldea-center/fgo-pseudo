void CharaGraphListMenuServantMission___ctor(CharaGraphListMenuServantMission_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0);
}


CharaGraphListViewPatternBase_o *CharaGraphListMenuServantMission__CreateListViewPattern(
        CharaGraphListMenuServantMission_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  CharaGraphSortOwnerBase_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3F018 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewPatternServantMission_TypeInfo);
    byte_4C3F018 = 1;
  }
  v6 = sub_1C372A4(CharaGraphListViewPatternServantMission_TypeInfo);
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)v6, 0);
  if ( !v6
    || (SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        *(_QWORD *)(v6 + 16) = SortOwner_k__BackingField,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)SortOwner_k__BackingField, v8, v9),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        *(_QWORD *)(v6 + 24) = RootInfo_k__BackingField,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)RootInfo_k__BackingField, v12, v13),
        (v7 = this->fields._SortOwner_k__BackingField) == 0) )
  {
    sub_1C372B4(v7);
  }
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(v7, kind, 0);
  return (CharaGraphListViewPatternBase_o *)v6;
}


void CharaGraphListMenuServantMission__Init(
        CharaGraphListMenuServantMission_o *this,
        int32_t defaultTabKind,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 3, 0);
}


void CharaGraphListMenuServantMission__OnSelectServantAtKindMain(
        CharaGraphListMenuServantMission_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__ToInputState((CharaGraphListMenuBase_o *)this, 0, 0);
}