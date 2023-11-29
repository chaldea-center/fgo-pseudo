void __fastcall ParticleSystemSyncComponent___ctor(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.particles) = 1028443341;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleSystemSyncComponent__Awake(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  ParticleSystemSyncComponent_c *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40F803B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____66819872, method);
    byte_40F803B = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (ParticleSystemSyncComponent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               1,
                                                                                               (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____66819872);
  this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
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
  __int64 v2; // x2
  ParticleSystemSyncComponent_c *klass; // x21
  int namespaze; // w8
  __int64 v6; // x22
  UnityEngine_ParticleSystem_o *v7; // x20
  float time; // s0
  float v9; // s8
  float duration; // s9
  float v11; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  m_ParticleSystem = 0LL;
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze < 1 )
      return 1;
    v6 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= namespaze )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)&klass->_1.byval_arg.data + v6);
      time = UnityEngine_Time__get_time(0LL);
      if ( !v7 )
        sub_B170D4();
      v9 = time;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v7, 0LL).fields.m_ParticleSystem;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v14, 0LL);
      v11 = UnityEngine_ParticleSystem__get_time(v7, 0LL);
      if ( vabds_f32(fmodf(v9, duration), v11) >= *(float *)&this->fields.particles )
        break;
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v6 >= namespaze )
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
  __int64 v2; // x2
  ParticleSystemSyncComponent_c *klass; // x20
  int namespaze; // w8
  __int64 v5; // x21
  UnityEngine_ParticleSystem_o *v6; // x19
  float time; // s0
  float v8; // s8
  float duration; // s0
  float v10; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v12; // 0:x0.8

  m_ParticleSystem = 0LL;
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= namespaze )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v6 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)&klass->_1.byval_arg.data + v5);
        time = UnityEngine_Time__get_time(0LL);
        if ( !v6 )
          sub_B170D4();
        v8 = time;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v6, 0LL).fields.m_ParticleSystem;
        v12.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v12, 0LL);
        v10 = fmodf(v8, duration);
        UnityEngine_ParticleSystem__Simulate_49805036(v6, v10, 0LL);
        UnityEngine_ParticleSystem__Play_49805208(v6, 0LL);
        namespaze = (int)klass->_1.namespaze;
        ++v5;
      }
      while ( (int)v5 < namespaze );
    }
  }
}


void __fastcall ParticleSystemSyncComponent__Update(ParticleSystemSyncComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ParticleSystemSyncComponent__IsUnderMinTimeDiff(this, method) )
    ParticleSystemSyncComponent__SimulateParticles(this, v3);
}