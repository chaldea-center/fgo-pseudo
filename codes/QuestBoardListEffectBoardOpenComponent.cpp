void __fastcall QuestBoardListEffectBoardOpenComponent___ctor(
        QuestBoardListEffectBoardOpenComponent_o *this,
        const MethodInfo *method)
{
  this->fields.openFadeSkipTime = 7.0;
  *(_OWORD *)&this->fields.targetBoardForceShiftPosY = xmmword_BE29D0;
  *(_OWORD *)&this->fields.openStartTime = xmmword_BE2650;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_BE1D40;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}