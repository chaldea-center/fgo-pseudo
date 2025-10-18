void TitleEffect___ctor(TitleEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleEffect__Start(TitleEffect_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *titlePsLeft; // x0

  titlePsLeft = this->fields.titlePsLeft;
  if ( !titlePsLeft
    || (UnityEngine_ParticleSystem__Play_71550160(titlePsLeft, 0), (titlePsLeft = this->fields.titlePsRight) == 0) )
  {
    sub_1C372B4(titlePsLeft);
  }
  UnityEngine_ParticleSystem__Play_71550160(titlePsLeft, 0);
}