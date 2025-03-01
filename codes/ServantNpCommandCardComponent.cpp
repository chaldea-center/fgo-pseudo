void __fastcall ServantNpCommandCardComponent___ctor(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantNpCommandCardComponent__Clear(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *cardSprite; // x0

  cardSprite = (UnityEngine_Behaviour_o *)this->fields.cardSprite;
  if ( !cardSprite )
    sub_1C2E388(0LL, method);
  UnityEngine_Behaviour__set_enabled(cardSprite, 0, 0LL);
}


void __fastcall ServantNpCommandCardComponent__Set(
        ServantNpCommandCardComponent_o *this,
        TreasureDvcInfo_o *tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v3; // x20
  UISprite_o *cardSprite; // x19

  v3 = tdInfo;
  if ( (byte_4BFCC9E & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommand_TypeInfo, tdInfo);
    byte_4BFCC9E = 1;
  }
  if ( v3 )
    LODWORD(v3) = v3->fields.cardId;
  cardSprite = this->fields.cardSprite;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  BattleCommand__setSprite(cardSprite, (int32_t)v3, 0LL);
}


void __fastcall ServantNpCommandCardComponent__SetHide(ServantNpCommandCardComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantNpCommandCardComponent__Set(this, 0LL, v2);
}