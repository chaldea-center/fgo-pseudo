void __fastcall MapFogAttacher___ctor(MapFogAttacher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapFogAttacher__Attach(MapFogAttacher_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FB5B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, method);
    byte_40FB5B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Attach((MapFogManager_o *)Instance, this->fields.fogData, v4);
}


void __fastcall MapFogAttacher__OnDestroy(MapFogAttacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct MapFogData_o *fogData; // x8
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_array *materials; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  UnityEngine_Material_array *v10; // x20
  unsigned __int64 v11; // x22
  UnityEngine_Object_o *v12; // x21
  WebViewManager_o *Instance; // x0
  const MethodInfo *v14; // x2

  if ( (byte_40FB5B8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MapFogManager__get_Instance__, v3);
    byte_40FB5B8 = 1;
  }
  fogData = this->fields.fogData;
  if ( !fogData
    || (renderer = fogData->fields.renderer) == 0LL
    || (materials = UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = *(_QWORD *)&materials->max_length;
  v10 = materials;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        sub_B17100(materials, v7, v8);
        sub_B170A0();
      }
      v12 = (UnityEngine_Object_o *)v10->m_Items[v11];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v12, 0LL);
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MapFogManager__get_Instance__);
  if ( Instance )
    MapFogManager__Detach((MapFogManager_o *)Instance, this->fields.fogData, v14);
}


// attributes: thunk
void __fastcall MapFogAttacher__Start(MapFogAttacher_o *this, const MethodInfo *method)
{
  MapFogAttacher__Attach(this, method);
}