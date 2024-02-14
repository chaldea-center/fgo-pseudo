void __fastcall ServantNpCommandCardComponent___ctor(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantNpCommandCardComponent__Clear(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *cardSprite; // x0

  cardSprite = (UnityEngine_Behaviour_o *)this->fields.cardSprite;
  if ( !cardSprite )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(cardSprite, 0, 0LL);
}


void __fastcall ServantNpCommandCardComponent__Set(
        ServantNpCommandCardComponent_o *this,
        TreasureDvcInfo_o *tdInfo,
        const MethodInfo *method)
{
  if ( tdInfo )
    LODWORD(tdInfo) = tdInfo->fields.cardId;
  BattleCommand__setSprite(this->fields.cardSprite, (int32_t)tdInfo, 0LL);
}


void __fastcall ServantNpCommandCardComponent__SetHide(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  BattleCommand__setSprite(this->fields.cardSprite, 0, 0LL);
}