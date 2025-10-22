void TitleEffect___ctor(TitleEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleEffect__Start(TitleEffect_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *titlePsLeft; // x0

  titlePsLeft = this->fields.titlePsLeft;
  if ( !titlePsLeft
    || (UnityEngine_ParticleSystem__Play_71624972(titlePsLeft, 0), (titlePsLeft = this->fields.titlePsRight) == 0) )
  {
    sub_1C3E7C0(titlePsLeft, method);
  }
  UnityEngine_ParticleSystem__Play_71624972(titlePsLeft, 0);
}