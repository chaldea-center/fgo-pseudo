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

  if ( (byte_4C2609E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78016528);
    byte_4C2609E = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78016528);
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.particles, (int32_t)ComponentsInChildren_object, v4, v5);
}


bool ParticleSystemSyncComponent__IsUnderMinTimeDiff(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_ParticleSystem_array *particles; // x21
  int max_length; // w8
  ParticleSystemSyncComponent_o *v5; // x19
  __int64 v6; // x22
  UnityEngine_ParticleSystem_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  float time; // s0
  float v11; // s8
  UnityEngine_ParticleSystem_MainModule_o v12; // x0
  float duration; // s9
  float v14; // s10
  float v15; // s0
  float minTimeDiffSec; // s1
  float v17; // s0
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
      v5 = this;
      v6 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C2D6F4(this, method, v2);
        v7 = particles->m_Items[v6];
        time = UnityEngine_Time__get_time(0);
        if ( !v7 )
          sub_1C2D6EC(v8, v9);
        v11 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v7, 0).fields.m_ParticleSystem;
        v12.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v12, 0);
        v14 = UnityEngine_ParticleSystem__get_time(v7, 0);
        v15 = fmodf(v11, duration);
        minTimeDiffSec = v5->fields.minTimeDiffSec;
        v17 = vabds_f32(v15, v14);
        this = (ParticleSystemSyncComponent_o *)(v17 < minTimeDiffSec);
        if ( v17 >= minTimeDiffSec )
          break;
        max_length = particles->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
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
  __int64 v2; // x2
  struct UnityEngine_ParticleSystem_array *particles; // x20
  int max_length; // w8
  __int64 v5; // x21
  UnityEngine_ParticleSystem_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  float time; // s0
  float v10; // s8
  UnityEngine_ParticleSystem_MainModule_o v11; // x0
  float duration; // s0
  float v13; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  m_ParticleSystem = 0;
  particles = this->fields.particles;
  if ( particles )
  {
    max_length = particles->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C2D6F4(this, method, v2);
        v6 = particles->m_Items[v5];
        time = UnityEngine_Time__get_time(0);
        if ( !v6 )
          sub_1C2D6EC(v7, v8);
        v10 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0).fields.m_ParticleSystem;
        v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v11, 0);
        v13 = fmodf(v10, duration);
        UnityEngine_ParticleSystem__Simulate_71446956(v6, v13, 0);
        UnityEngine_ParticleSystem__Play_71447112(v6, 0);
        max_length = particles->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}