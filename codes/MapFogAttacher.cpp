void MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4D2929B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_4D2929B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher_o *v2; // x19
  struct MapFogData_o *fogData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapFogAttacher_o *v5; // x20
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4D2929A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (MapFogAttacher_o *)sub_1C94098(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_4D2929A = 1;
  }
  fogData = v2->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0)) == 0 )
  {
    sub_1C942F0(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        sub_1C942F8(this);
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&v5->fields.fogData + v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v7, 0);
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      ++v6;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v2->fields.fogData, v9);
}


// attributes: thunk
void MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}