void __fastcall CharaGraphListViewItemDrawPatternServantMission___ctor(
        CharaGraphListViewItemDrawPatternServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternServantCollection___ctor(
    (CharaGraphListViewItemDrawPatternServantCollection_o *)this,
    0LL);
}


void __fastcall CharaGraphListViewItemDrawPatternServantMission__SetupAccessories(
        CharaGraphListViewItemDrawPatternServantMission_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  __int64 v6; // x1

  CharaGraphListViewItemDrawPatternDefault__SetupAccessories(
    (CharaGraphListViewItemDrawPatternDefault_o *)this,
    itemDraw,
    item,
    0LL);
  if ( !itemDraw || (servantFaceIcon = itemDraw->fields.servantFaceIcon) == 0LL )
    sub_1B8880C(servantFaceIcon, v6);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}