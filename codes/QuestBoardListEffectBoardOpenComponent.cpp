void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_CEFC20;
  *(_OWORD *)&this->fields.openStartTime = xmmword_CEF890;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_CEEEF0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}