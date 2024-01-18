void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_31B3140;
  *(_OWORD *)&this->fields.openStartTime = xmmword_31B3150;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_31B3160;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}