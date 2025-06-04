void __fastcall ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  this->fields.minTimeDiffSec = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B00E20 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____76831792, method);
    byte_4B00E20 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____76831792);
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.particles, (int32_t)ComponentsInChildren_object, v4, v5);
}


bool __fastcall ParticleSystemSyncComponent__IsUnderMinTimeDiff(
        ParticleSystemSyncComponent_o *this,
        const MethodInfo *method)
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
  float duration; // s9
  float v13; // s10
  float v14; // s0
  float minTimeDiffSec; // s1
  float v16; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8

  m_ParticleSystem = 0LL;
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
      v6 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1BC326C(this, method, v2);
        v7 = particles->m_Items[v6];
        time = UnityEngine_Time__get_time(0LL);
        if ( !v7 )
          sub_1BC3264(v8, v9);
        v11 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v7, 0LL).fields.m_ParticleSystem;
        v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v19, 0LL);
        v13 = UnityEngine_ParticleSystem__get_time(v7, 0LL);
        v14 = fmodf(v11, duration);
        minTimeDiffSec = v5->fields.minTimeDiffSec;
        v16 = vabds_f32(v14, v13);
        this = (ParticleSystemSyncComponent_o *)(v16 < minTimeDiffSec);
        if ( v16 >= minTimeDiffSec )
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
void __fastcall ParticleSystemSyncComponent__OnEnable(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  ParticleSystemSyncComponent__SimulateParticles(this, method);
}


void __fastcall ParticleSystemSyncComponent__SimulateParticles(
        ParticleSystemSyncComponent_o *this,
        const MethodInfo *method)
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
  float duration; // s0
  float v12; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  m_ParticleSystem = 0LL;
  particles = this->fields.particles;
  if ( particles )
  {
    max_length = particles->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1BC326C(this, method, v2);
        v6 = particles->m_Items[v5];
        time = UnityEngine_Time__get_time(0LL);
        if ( !v6 )
          sub_1BC3264(v7, v8);
        v10 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0LL).fields.m_ParticleSystem;
        v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v14, 0LL);
        v12 = fmodf(v10, duration);
        UnityEngine_ParticleSystem__Simulate_70317552(v6, v12, 0LL);
        UnityEngine_ParticleSystem__Play_70317708(v6, 0LL);
        max_length = particles->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void __fastcall ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}