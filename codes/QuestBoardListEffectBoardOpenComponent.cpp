void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_CF6600;
  *(_OWORD *)&this->fields.openStartTime = xmmword_CF6270;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_CF58A0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}