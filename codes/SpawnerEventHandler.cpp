void __fastcall SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *ComponentsInChildren_object__49324452; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B195D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, method, v2);
    byte_4B195D3 = 1;
  }
  ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__49324452;
  p_particleArray = &this->fields.particleArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_particleArray,
    (int64_t)ComponentsInChildren_object__49324452,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  *((_BYTE *)p_particleArray + 8) = 1;
}


void __fastcall SpawnerEventHandler__OnDespawn(SpawnerEventHandler_o *this, const MethodInfo *method)
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
    v4 = 0LL;
    while ( 1 )
    {
      max_length = particleArray->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
        sub_1BCAA44(this, method);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v4];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0LL);
        particleArray = v2->fields.particleArray;
        ++v4;
        if ( particleArray )
          continue;
      }
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}