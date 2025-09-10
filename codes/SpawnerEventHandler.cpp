void SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51142088; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2ABA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    byte_4C2ABA1 = 1;
  }
  ComponentsInChildren_object__51142088 = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__51142088;
  p_particleArray = &this->fields.particleArray;
  sub_1C2D434((CGThumbnailListItem_o *)p_particleArray, (int32_t)ComponentsInChildren_object__51142088, v5, v6);
  *((_BYTE *)p_particleArray + 8) = 1;
}


void SpawnerEventHandler__OnDespawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpawnerEventHandler_o *v3; // x19
  struct UnityEngine_ParticleSystem_array *particleArray; // x8
  __int64 v5; // x20
  int max_length; // w9

  v3 = this;
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
  particleArray = v3->fields.particleArray;
  if ( particleArray && v3->fields.isReset )
  {
    v5 = 0;
    while ( 1 )
    {
      max_length = particleArray->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v5];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0);
        particleArray = v3->fields.particleArray;
        ++v5;
        if ( particleArray )
          continue;
      }
      sub_1C2D6EC(this, method);
    }
  }
}


void SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}