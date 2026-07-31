void QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_E929A0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_E92AB0;
  this->fields.bgmFadeOutTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}