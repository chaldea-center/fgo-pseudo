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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4C1E1D2 & 1) == 0 )
  {
    sub_1C3B764(&CharaGraphListViewPatternServantMission_TypeInfo, *(_QWORD *)&kind);
    byte_4C1E1D2 = 1;
  }
  v6 = sub_1C3B9B0(CharaGraphListViewPatternServantMission_TypeInfo);
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)v6, 0LL);
  if ( !v6
    || (SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        *(_QWORD *)(v6 + 16) = SortOwner_k__BackingField,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(v6 + 16),
          (int64_t)SortOwner_k__BackingField,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        *(_QWORD *)(v6 + 24) = RootInfo_k__BackingField,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(v6 + 24),
          (int64_t)RootInfo_k__BackingField,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (v7 = this->fields._SortOwner_k__BackingField) == 0LL) )
  {
    sub_1C3B9C0(v7, v8);
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