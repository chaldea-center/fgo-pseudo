void __fastcall SpawnerEventHandler___ctor(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.particleArray) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpawnerEventHandler__Init(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  System_Int32_array **ComponentsInChildren_USTimelineContainer; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42152BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, method);
    byte_42152BA = 1;
  }
  ComponentsInChildren_USTimelineContainer = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  *(_QWORD *)&this->fields.isInitilized = ComponentsInChildren_USTimelineContainer;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isInitilized,
    ComponentsInChildren_USTimelineContainer,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  LOBYTE(this[1].klass) = 1;
}


void __fastcall SpawnerEventHandler__OnDespawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  SpawnerEventHandler_o *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w9
  __int64 v6; // x0

  v2 = this;
  if ( !LOBYTE(this[1].klass) )
    SpawnerEventHandler__Init(this, method);
  v3 = *(_QWORD *)&v2->fields.isInitilized;
  if ( v3 && LOBYTE(v2->fields.particleArray) )
  {
    v4 = 0LL;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 24);
      if ( (int)v4 >= v5 )
        break;
      if ( (unsigned int)v4 >= v5 )
      {
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
      }
      this = *(SpawnerEventHandler_o **)(v3 + 8 * v4 + 32);
      if ( this )
      {
        UnityEngine_ParticleSystem__set_time((UnityEngine_ParticleSystem_o *)this, 0.0, 0LL);
        v3 = *(_QWORD *)&v2->fields.isInitilized;
        ++v4;
        if ( v3 )
          continue;
      }
      sub_B0D97C(this);
    }
  }
}


void __fastcall SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this[1].klass) )
    SpawnerEventHandler__Init(this, method);
}