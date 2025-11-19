void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_CECFE0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_CECC50;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_CEC2B0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}