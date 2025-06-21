void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4B190A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, method);
    byte_4B190A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher_o *v2; // x19
  __int64 v3; // x1
  struct MapFogData_o *fogData; // x8
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapFogAttacher_o *v7; // x20
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4B190A4 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    this = (MapFogAttacher_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, v3);
    byte_4B190A4 = 1;
  }
  fogData = v2->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0LL
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, method, v5);
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&v7->fields.fogData + v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v9, 0LL);
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      ++v8;
    }
    while ( (__int64)v8 < (int)m_CancellationTokenSource );
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v2->fields.fogData, v11);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}