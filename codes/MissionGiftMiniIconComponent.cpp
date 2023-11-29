void __fastcall MissionGiftMiniIconComponent___ctor(MissionGiftMiniIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionGiftMiniIconComponent__SetMiniIcon(
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
      ItemIconComponent__SetGift(miniIcon, entity->fields.type, entity->fields.objectId, entity->fields.num, 0, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
  if ( !miniIcon )
    goto LABEL_6;
  ItemIconComponent__Clear(miniIcon, 0LL);
}