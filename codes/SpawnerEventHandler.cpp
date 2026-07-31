void SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__58647176; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593C326 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    byte_593C326 = 1;
  }
  ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__58647176;
  p_particleArray = &this->fields.particleArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_particleArray,
    (int32_t)ComponentsInChildren_object__58647176,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  *((_BYTE *)p_particleArray + 8) = 1;
}


void SpawnerEventHandler__OnDespawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  SpawnerEventHandler_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particleArray; // x8
  __int64 v4; // x20
  int max_length; // w9

  v2 = this;
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
  particleArray = v2->fields.particleArray;
  if ( particleArray && v2->fields.isReset )
  {
    v4 = 0;
    while ( 1 )
    {
      max_length = particleArray->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
        sub_21FFED4(this);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v4];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0);
        particleArray = v2->fields.particleArray;
        ++v4;
        if ( particleArray )
          continue;
      }
      sub_21FFECC(this, method);
    }
  }
}


void SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}