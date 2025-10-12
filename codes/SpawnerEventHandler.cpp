void SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51202152; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3B2C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    byte_4C3B2C0 = 1;
  }
  ComponentsInChildren_object__51202152 = UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__51202152;
  p_particleArray = &this->fields.particleArray;
  sub_1C32BC4((CGThumbnailListItem_o *)p_particleArray, (int32_t)ComponentsInChildren_object__51202152, v5, v6);
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
        sub_1C32E84(this);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v4];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0);
        particleArray = v2->fields.particleArray;
        ++v4;
        if ( particleArray )
          continue;
      }
      sub_1C32E7C(this);
    }
  }
}


void SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}