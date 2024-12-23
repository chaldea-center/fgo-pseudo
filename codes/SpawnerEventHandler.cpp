void __fastcall SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  this->fields.isReset = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__49612324; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B6A050 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, method);
    byte_4B6A050 = 1;
  }
  ComponentsInChildren_object__49612324 = UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  this->fields.particleArray = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object__49612324;
  p_particleArray = &this->fields.particleArray;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)p_particleArray,
    (int64_t)ComponentsInChildren_object__49612324,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
        sub_1BE4D30(this, method);
      this = (SpawnerEventHandler_o *)particleArray->m_Items[v4];
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0LL);
        particleArray = v2->fields.particleArray;
        ++v4;
        if ( particleArray )
          continue;
      }
      sub_1BE4D28(this, method);
    }
  }
}


void __fastcall SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.isInitilized )
    SpawnerEventHandler__Init(this, method);
}