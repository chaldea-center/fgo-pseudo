void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_32EC3A0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_32EC3B0;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_32EC3C0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}