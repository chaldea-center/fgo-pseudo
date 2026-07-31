void MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_5934FB8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_5934FB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher_o *v2; // x19
  struct MapFogData_o *fogData; // x8
  __int64 v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapFogAttacher_o *v6; // x20
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_5934FB7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (MapFogAttacher_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_5934FB7 = 1;
  }
  fogData = v2->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0)) == 0 )
  {
    sub_21FFECC(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_21FFED4(this);
      v8 = (UnityEngine_Object_o *)*((_QWORD *)&v6->fields.fogData + v7);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
      UnityEngine_Object__Destroy_83246496(v8, 0);
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v7;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v2->fields.fogData, v10);
}


// attributes: thunk
void MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}