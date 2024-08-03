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
  int32_t v8; // w2
  int32_t v9; // w3
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8889 & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListViewPatternServantMission_TypeInfo, *(_QWORD *)&kind);
    byte_49F8889 = 1;
  }
  v6 = sub_1B64314(CharaGraphListViewPatternServantMission_TypeInfo, *(_QWORD *)&kind, setupInfo);
  CharaGraphListViewPatternServantCollection___ctor((CharaGraphListViewPatternServantCollection_o *)v6, 0LL);
  if ( !v6
    || (SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        *(_QWORD *)(v6 + 16) = SortOwner_k__BackingField,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)SortOwner_k__BackingField, v8, v9),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        *(_QWORD *)(v6 + 24) = RootInfo_k__BackingField,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)RootInfo_k__BackingField, v12, v13),
        (v7 = this->fields._SortOwner_k__BackingField) == 0LL) )
  {
    sub_1B64324(v7);
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