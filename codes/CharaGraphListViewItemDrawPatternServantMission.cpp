void CharaGraphListViewItemDrawPatternServantMission___ctor(
        CharaGraphListViewItemDrawPatternServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternServantCollection___ctor(
    (CharaGraphListViewItemDrawPatternServantCollection_o *)this,
    0);
}


void CharaGraphListViewItemDrawPatternServantMission__SetupAccessories(
        CharaGraphListViewItemDrawPatternServantMission_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0

  CharaGraphListViewItemDrawPatternDefault__SetupAccessories(
    (CharaGraphListViewItemDrawPatternDefault_o *)this,
    itemDraw,
    item,
    0);
  if ( !itemDraw || (servantFaceIcon = itemDraw->fields.servantFaceIcon) == 0 )
    sub_1C372B4(servantFaceIcon);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0);
}