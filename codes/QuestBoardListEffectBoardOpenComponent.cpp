void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_C0A350;
  *(_OWORD *)&this->fields.openStartTime = xmmword_C09FC0;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_C09620;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}