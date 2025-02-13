void __fastcall ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  this->fields.minTimeDiffSec = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB3D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____77649032);
    byte_4BDB3D7 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____77649032);
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.particles,
    (int64_t)ComponentsInChildren_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


bool __fastcall ParticleSystemSyncComponent__IsUnderMinTimeDiff(
        ParticleSystemSyncComponent_o *this,
        const MethodInfo *method)
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
  float duration; // s9
  float v12; // s10
  float v13; // s0
  float minTimeDiffSec; // s1
  float v15; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v18; // 0:x0.8

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
      v4 = this;
      v5 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C2209C(this, method);
        v6 = particles->m_Items[v5];
        time = UnityEngine_Time__get_time(0LL);
        if ( !v6 )
          sub_1C22094(v7, v8);
        v10 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0LL).fields.m_ParticleSystem;
        v18.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v18, 0LL);
        v12 = UnityEngine_ParticleSystem__get_time(v6, 0LL);
        v13 = fmodf(v10, duration);
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
void __fastcall ParticleSystemSyncComponent__OnEnable(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  ParticleSystemSyncComponent__SimulateParticles(this, method);
}


void __fastcall ParticleSystemSyncComponent__SimulateParticles(
        ParticleSystemSyncComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x20
  int max_length; // w8
  __int64 v4; // x21
  UnityEngine_ParticleSystem_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  float time; // s0
  float v9; // s8
  float duration; // s0
  float v11; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v13; // 0:x0.8

  m_ParticleSystem = 0LL;
  particles = this->fields.particles;
  if ( particles )
  {
    max_length = particles->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0LL;
      do
      {
        if ( (unsigned int)v4 >= max_length )
          sub_1C2209C(this, method);
        v5 = particles->m_Items[v4];
        time = UnityEngine_Time__get_time(0LL);
        if ( !v5 )
          sub_1C22094(v6, v7);
        v9 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v5, 0LL).fields.m_ParticleSystem;
        v13.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v13, 0LL);
        v11 = fmodf(v9, duration);
        UnityEngine_ParticleSystem__Simulate_71149720(v5, v11, 0LL);
        UnityEngine_ParticleSystem__Play_71149876(v5, 0LL);
        max_length = particles->max_length;
        ++v4;
      }
      while ( (int)v4 < max_length );
    }
  }
}


void __fastcall ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}