void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B12F67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, method, v2);
    byte_4B12F67 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v5);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapFogAttacher_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MapFogData_o *fogData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapFogAttacher_o *v8; // x20
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_4B12F66 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (MapFogAttacher_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, v4, v5);
    byte_4B12F66 = 1;
  }
  fogData = v3->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0LL
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v8 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, method);
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&v8->fields.fogData + v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v10, 0LL);
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      ++v9;
    }
    while ( (__int64)v9 < (int)m_CancellationTokenSource );
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v3->fields.fogData, v12);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}