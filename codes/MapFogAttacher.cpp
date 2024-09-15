void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A2ADAA & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, method);
    byte_4A2ADAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher_o *v2; // x19
  __int64 v3; // x1
  struct MapFogData_o *fogData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapFogAttacher_o *v6; // x20
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4A2ADA9 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    this = (MapFogAttacher_o *)sub_1B761C0(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, v3);
    byte_4A2ADA9 = 1;
  }
  fogData = v2->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0LL
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
  {
    sub_1B7641C(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B76424(this, method);
      v8 = (UnityEngine_Object_o *)*((_QWORD *)&v6->fields.fogData + v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408(v8, 0LL);
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v7;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v2->fields.fogData, v10);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}