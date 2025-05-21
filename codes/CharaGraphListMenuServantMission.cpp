void __fastcall CharaGraphListMenuServantMission___ctor(
        CharaGraphListMenuServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *__fastcall CharaGraphListMenuServantMission__CreateListViewPattern(
        CharaGraphListMenuServantMission_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  CharaGraphSortOwnerBase_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B40BB2 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphListViewPatternServantMission_TypeInfo, *(_QWORD *)&kind);
    byte_4B40BB2 = 1;
  }
  v6 = sub_1BDBAC4(CharaGraphListViewPatternServantMission_TypeInfo);
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)v6, 0LL);
  if ( !v6
    || (SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        *(_QWORD *)(v6 + 16) = SortOwner_k__BackingField,
        sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 16), (int32_t)SortOwner_k__BackingField, v9, v10),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        *(_QWORD *)(v6 + 24) = RootInfo_k__BackingField,
        sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 24), (int32_t)RootInfo_k__BackingField, v13, v14),
        (v7 = this->fields._SortOwner_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(v7, v8);
  }
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(v7, kind, 0LL);
  return (CharaGraphListViewPatternBase_o *)v6;
}


void __fastcall CharaGraphListMenuServantMission__Init(
        CharaGraphListMenuServantMission_o *this,
        int32_t defaultTabKind,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 3, 0LL);
}


void __fastcall CharaGraphListMenuServantMission__OnSelectServantAtKindMain(
        CharaGraphListMenuServantMission_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__ToInputState((CharaGraphListMenuBase_o *)this, 0, 0LL);
}