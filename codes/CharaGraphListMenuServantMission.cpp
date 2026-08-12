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
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596C639 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewPatternServantMission_TypeInfo);
    byte_596C639 = 1;
  }
  v6 = sub_2213CCC(CharaGraphListViewPatternServantMission_TypeInfo);
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)v6, 0);
  if ( !v6
    || (SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        *(_QWORD *)(v6 + 16) = SortOwner_k__BackingField,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v6 + 16),
          (int32_t)SortOwner_k__BackingField,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        *(_QWORD *)(v6 + 24) = RootInfo_k__BackingField,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v6 + 24),
          (int32_t)RootInfo_k__BackingField,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (v7 = this->fields._SortOwner_k__BackingField) == 0) )
  {
    sub_2213CDC(v7, v8);
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