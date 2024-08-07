void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_BA3E90;
  *(_OWORD *)&this->fields.openStartTime = xmmword_BA3AE0;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_BA31A0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}