void SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51983788; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D30383 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    byte_4D30383 = 1;
  }
  ComponentsInChildren_object__51983788 = UnityEngine_Component__GetComponentsInChildren_object__51983788(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_31935AC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__51983788;
  p_particleArray = &this->fields.particleArray;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_particleArray,
    (int32_t)ComponentsInChildren_object__51983788,
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
        sub_1C942F8(this);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v4];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0);
        particleArray = v2->fields.particleArray;
        ++v4;
        if ( particleArray )
          continue;
      }
      sub_1C942F0(this, method);
    }
  }
}


void SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}