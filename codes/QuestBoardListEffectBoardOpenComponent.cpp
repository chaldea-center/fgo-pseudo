void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_C0F6B0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_C0F320;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_C0E970;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}