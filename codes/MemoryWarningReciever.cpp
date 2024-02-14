void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Application_LowMemoryCallback_o *v8; // x20

  if ( (byte_4214E15 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B0D8A4(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v4);
    byte_4214E15 = 1;
  }
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B0D974(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v5, 0LL);
  v8 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B0D974(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        v6,
                                                        v7);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v8, 0LL);
}


void __fastcall MemoryWarningReciever__DidReceiveMemoryWarning(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( UnityEngine_Time__get_realtimeSinceStartup(0LL) >= *(float *)&this->fields.requestGC )
  {
    *(float *)&this->fields.requestGC = UnityEngine_Time__get_realtimeSinceStartup(0LL) + 10.0;
    MemoryWarningReciever__GabageCollection(v3, v4);
  }
  else
  {
    *((_BYTE *)&this->fields + 12) = 1;
  }
}


void __fastcall MemoryWarningReciever__GabageCollection(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AssetManager_o *Instance; // x0

  if ( (byte_4214E17 & 1) == 0 )
  {
    sub_B0D8A4(&System_GC_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4214E17 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43098652(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_43098652(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20

  if ( (byte_4214E16 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B0D8A4(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v4);
    byte_4214E16 = 1;
  }
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B0D974(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v5, 0LL);
}


void __fastcall MemoryWarningReciever__Update(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( *((_BYTE *)&this->fields + 12) )
  {
    if ( UnityEngine_Time__get_realtimeSinceStartup(0LL) >= *(float *)&this->fields.requestGC )
    {
      MemoryWarningReciever__GabageCollection(v3, v4);
      *((_BYTE *)&this->fields + 12) = 0;
      *(float *)&this->fields.requestGC = UnityEngine_Time__get_realtimeSinceStartup(0LL) + 10.0;
    }
  }
}