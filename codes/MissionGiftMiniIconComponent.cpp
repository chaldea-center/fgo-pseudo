void MissionGiftMiniIconComponent___ctor(MissionGiftMiniIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionGiftMiniIconComponent__SetMiniIcon(
        MissionGiftMiniIconComponent_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  ItemIconComponent_o *miniIcon; // x0

  miniIcon = this->fields.miniIcon;
  if ( entity )
  {
    if ( miniIcon )
    {
      ItemIconComponent__SetGift_40968388(
        miniIcon,
        entity->fields.type,
        entity->fields.objectId,
        entity->fields.num,
        0,
        0);
      return;
    }
LABEL_6:
    sub_1C3E7C0(miniIcon, entity);
  }
  if ( !miniIcon )
    goto LABEL_6;
  ItemIconComponent__Clear(miniIcon, 0);
}