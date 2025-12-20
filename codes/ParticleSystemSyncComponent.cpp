void ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  this->fields.minTimeDiffSec = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B5E3 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____79067688);
    byte_4D2B5E3 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____79067688);
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.particles,
    (int32_t)ComponentsInChildren_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


bool ParticleSystemSyncComponent__IsUnderMinTimeDiff(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x21
  int max_length; // w8
  ParticleSystemSyncComponent_o *v4; // x19
  __int64 v5; // x22
  UnityEngine_ParticleSystem_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float time; // s0
  float v10; // s8
  UnityEngine_ParticleSystem_MainModule_o v11; // x0
  float duration; // s9
  float v13; // s10
  float v14; // s0
  float minTimeDiffSec; // s1
  float v16; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF

  m_ParticleSystem = 0;
  particles = this->fields.particles;
  if ( particles )
  {
    max_length = particles->max_length;
    if ( max_length < 1 )
    {
      LOBYTE(this) = 1;
    }
    else
    {
      v4 = this;
      v5 = 0;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C942F8(this);
        v6 = particles->m_Items[v5];
        time = UnityEngine_Time__get_time(0);
        if ( !v6 )
          sub_1C942F0(v7, v8);
        v10 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0).fields.m_ParticleSystem;
        v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v11, 0);
        v13 = UnityEngine_ParticleSystem__get_time(v6, 0);
        v14 = fmodf(v10, duration);
        minTimeDiffSec = v4->fields.minTimeDiffSec;
        v16 = vabds_f32(v14, v13);
        this = (ParticleSystemSyncComponent_o *)(v16 < minTimeDiffSec);
        if ( v16 >= minTimeDiffSec )
          break;
        max_length = particles->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


// attributes: thunk
void ParticleSystemSyncComponent__OnEnable(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  ParticleSystemSyncComponent__SimulateParticles(this, method);
}


void ParticleSystemSyncComponent__SimulateParticles(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x20
  int max_length; // w8
  __int64 v4; // x21
  UnityEngine_ParticleSystem_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  float time; // s0
  float v9; // s8
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  float duration; // s0
  float v12; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  m_ParticleSystem = 0;
  particles = this->fields.particles;
  if ( particles )
  {
    max_length = particles->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      do
      {
        if ( (unsigned int)v4 >= max_length )
          sub_1C942F8(this);
        v5 = particles->m_Items[v4];
        time = UnityEngine_Time__get_time(0);
        if ( !v5 )
          sub_1C942F0(v6, v7);
        v9 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v5, 0).fields.m_ParticleSystem;
        v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v10, 0);
        v12 = fmodf(v9, duration);
        UnityEngine_ParticleSystem__Simulate_72396512(v5, v12, 0);
        UnityEngine_ParticleSystem__Play_72396668(v5, 0);
        max_length = particles->max_length;
        ++v4;
      }
      while ( (int)v4 < max_length );
    }
  }
}


void ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}