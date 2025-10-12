void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_C0D730;
  *(_OWORD *)&this->fields.openStartTime = xmmword_C0D3A0;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_C0C9F0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}