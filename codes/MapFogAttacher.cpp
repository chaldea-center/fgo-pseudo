void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42EBAD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBAD4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v6);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapFogAttacher_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MapFogData_o *fogData; // x8
  struct MapFogData_o *v9; // x8
  MapFogAttacher_o *v10; // x20
  unsigned __int64 v11; // x22
  UnityEngine_Object_o *v12; // x21
  WebViewManager_o *Instance; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42EBAD3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (MapFogAttacher_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, v5, v6, v7);
    byte_42EBAD3 = 1;
  }
  fogData = v4->fields.fogData;
  if ( !fogData
    || (this = (MapFogAttacher_o *)fogData->fields.renderer) == 0LL
    || (this = (MapFogAttacher_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  v9 = this->fields.fogData;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
      }
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].klass + v11);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v12, 0LL);
      LODWORD(v9) = v10->fields.fogData;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, v4->fields.fogData, v14);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}