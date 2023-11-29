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

  if ( (byte_40F9D7D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, method);
    byte_40F9D7D = 1;
  }
  ComponentsInChildren_USTimelineContainer = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  *(_QWORD *)&this->fields.isInitilized = ComponentsInChildren_USTimelineContainer;
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v4; // x8
  __int64 v5; // x20
  int v6; // w9
  UnityEngine_ParticleSystem_o *v7; // x0

  if ( !LOBYTE(this[1].klass) )
    SpawnerEventHandler__Init(this, method);
  v4 = *(_QWORD *)&this->fields.isInitilized;
  if ( v4 && LOBYTE(this->fields.particleArray) )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      if ( (int)v5 >= v6 )
        break;
      if ( (unsigned int)v5 >= v6 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = *(UnityEngine_ParticleSystem_o **)(v4 + 8 * v5 + 32);
      if ( v7 )
      {
        UnityEngine_ParticleSystem__set_time(v7, 0.0, 0LL);
        v4 = *(_QWORD *)&this->fields.isInitilized;
        ++v5;
        if ( v4 )
          continue;
      }
      sub_B170D4();
    }
  }
}


void __fastcall SpawnerEventHandler__OnSpawn(SpawnerEventHandler_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this[1].klass) )
    SpawnerEventHandler__Init(this, method);
}