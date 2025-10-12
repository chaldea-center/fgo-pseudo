void ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  this->fields.minTimeDiffSec = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36776 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78081880);
    byte_4C36776 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78081880);
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.particles, (int32_t)ComponentsInChildren_object, v4, v5);
}


bool ParticleSystemSyncComponent__IsUnderMinTimeDiff(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x21
  int max_length; // w8
  ParticleSystemSyncComponent_o *v4; // x19
  __int64 v5; // x22
  UnityEngine_ParticleSystem_o *v6; // x20
  __int64 v7; // x0
  float time; // s0
  float v9; // s8
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  float duration; // s9
  float v12; // s10
  float v13; // s0
  float minTimeDiffSec; // s1
  float v15; // s0
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
          sub_1C32E84(this);
        v6 = particles->m_Items[v5];
        time = UnityEngine_Time__get_time(0);
        if ( !v6 )
          sub_1C32E7C(v7);
        v9 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0).fields.m_ParticleSystem;
        v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v10, 0);
        v12 = UnityEngine_ParticleSystem__get_time(v6, 0);
        v13 = fmodf(v9, duration);
        minTimeDiffSec = v4->fields.minTimeDiffSec;
        v15 = vabds_f32(v13, v12);
        this = (ParticleSystemSyncComponent_o *)(v15 < minTimeDiffSec);
        if ( v15 >= minTimeDiffSec )
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
  float time; // s0
  float v8; // s8
  UnityEngine_ParticleSystem_MainModule_o v9; // x0
  float duration; // s0
  float v11; // s0
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
          sub_1C32E84(this);
        v5 = particles->m_Items[v4];
        time = UnityEngine_Time__get_time(0);
        if ( !v5 )
          sub_1C32E7C(v6);
        v8 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v5, 0).fields.m_ParticleSystem;
        v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v9, 0);
        v11 = fmodf(v8, duration);
        UnityEngine_ParticleSystem__Simulate_71506892(v5, v11, 0);
        UnityEngine_ParticleSystem__Play_71507048(v5, 0);
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