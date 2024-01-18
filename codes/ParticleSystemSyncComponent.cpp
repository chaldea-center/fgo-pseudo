void __fastcall ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.particles) = 1028443341;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  ParticleSystemSyncComponent_c *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x1

  if ( (byte_4185229 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____67394976, method);
    byte_4185229 = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (ParticleSystemSyncComponent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               1,
                                                                                               (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____67394976);
  this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B2C2F8(&this[1], ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
}


bool __fastcall ParticleSystemSyncComponent__IsUnderMinTimeDiff(
        ParticleSystemSyncComponent_o *this,
        const MethodInfo *method)
{
  ParticleSystemSyncComponent_c *klass; // x21
  int namespaze; // w8
  __int64 v5; // x22
  UnityEngine_ParticleSystem_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float time; // s0
  float v10; // s8
  float duration; // s9
  float v12; // s0
  __int64 v14; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v16; // 0:x0.8

  m_ParticleSystem = 0LL;
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze < 1 )
      return 1;
    v5 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v5 >= namespaze )
      {
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
      }
      v6 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)&klass->_1.byval_arg.data + v5);
      time = UnityEngine_Time__get_time(0LL);
      if ( !v6 )
        sub_B2C434(v7, v8);
      v10 = time;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0LL).fields.m_ParticleSystem;
      v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v16, 0LL);
      v12 = UnityEngine_ParticleSystem__get_time(v6, 0LL);
      if ( vabds_f32(fmodf(v10, duration), v12) >= *(float *)&this->fields.particles )
        break;
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v5 >= namespaze )
        return 1;
    }
  }
  return 0;
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
  ParticleSystemSyncComponent_c *klass; // x20
  int namespaze; // w8
  __int64 v4; // x21
  UnityEngine_ParticleSystem_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  float time; // s0
  float v9; // s8
  float duration; // s0
  float v11; // s0
  __int64 v12; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  m_ParticleSystem = 0LL;
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v4 = 0LL;
      do
      {
        if ( (unsigned int)v4 >= namespaze )
        {
          v12 = sub_B2C460(this);
          sub_B2C400(v12, 0LL);
        }
        v5 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)&klass->_1.byval_arg.data + v4);
        time = UnityEngine_Time__get_time(0LL);
        if ( !v5 )
          sub_B2C434(v6, v7);
        v9 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v5, 0LL).fields.m_ParticleSystem;
        v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v14, 0LL);
        v11 = fmodf(v9, duration);
        UnityEngine_ParticleSystem__Simulate_50258940(v5, v11, 0LL);
        UnityEngine_ParticleSystem__Play_50259112(v5, 0LL);
        namespaze = (int)klass->_1.namespaze;
        ++v4;
      }
      while ( (int)v4 < namespaze );
    }
  }
}


void __fastcall ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}