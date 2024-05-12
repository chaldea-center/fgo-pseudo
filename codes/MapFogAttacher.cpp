void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_438E54A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_438E54A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher_o *v2; // x19
  struct MapFogData_o *fogData; // x8
  struct MapFogData_o *v4; // x8
  MapFogAttacher_o *v5; // x20
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x21
  WebViewManager_o *Instance; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  v2 = this;
  if ( (byte_438E549 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (MapFogAttacher_o *)sub_B775C4(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
    byte_438E549 = 1;
  }
  fogData = v2->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0LL
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
  {
    sub_B7769C(this, method);
  }
  v4 = this->fields.fogData;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&v5[1].klass + v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v7, 0LL);
      LODWORD(v4) = v5->fields.fogData;
      ++v6;
    }
    while ( (__int64)v6 < (int)v4 );
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v2->fields.fogData, v9);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}