void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_331F5F0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_331F600;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_331F610;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}