void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_BC3DE0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_BC3A30;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_BC30F0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}