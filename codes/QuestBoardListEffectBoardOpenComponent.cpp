void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_BB52C0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_BB4F10;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_BB45E0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}