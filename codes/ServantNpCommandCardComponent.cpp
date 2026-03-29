void ServantNpCommandCardComponent___ctor(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantNpCommandCardComponent__Clear(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *cardSprite; // x0

  cardSprite = (UnityEngine_Behaviour_o *)this->fields.cardSprite;
  if ( !cardSprite )
    sub_1C93D2C(0, method);
  UnityEngine_Behaviour__set_enabled(cardSprite, 0, 0);
}


void ServantNpCommandCardComponent__Set(
        ServantNpCommandCardComponent_o *this,
        TreasureDvcInfo_o *tdInfo,
        const MethodInfo *method)
{
  UISprite_o *cardSprite; // x19

  if ( (byte_4D2FF69 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommand_TypeInfo);
    byte_4D2FF69 = 1;
  }
  if ( tdInfo )
    LODWORD(tdInfo) = tdInfo->fields.cardId;
  cardSprite = this->fields.cardSprite;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  BattleCommand__setSprite(cardSprite, (int32_t)tdInfo, 0);
}


void ServantNpCommandCardComponent__SetHide(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantNpCommandCardComponent__Set(this, 0, v2);
}