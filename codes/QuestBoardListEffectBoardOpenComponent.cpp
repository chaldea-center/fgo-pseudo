void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_C0E1B0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_C0DE30;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_C0D550;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}