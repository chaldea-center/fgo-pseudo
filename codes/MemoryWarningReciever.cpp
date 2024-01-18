void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Application_LowMemoryCallback_o *v4; // x20
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20

  if ( (byte_41881DB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B2C35C(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v3);
    byte_41881DB = 1;
  }
  v4 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B2C42C(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v4, 0LL);
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B2C42C(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v5, 0LL);
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
  __int64 v4; // x1

  if ( (byte_41881DD & 1) == 0 )
  {
    sub_B2C35C(&System_GC_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_41881DD = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_43492776(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Application_LowMemoryCallback_o *v4; // x20

  if ( (byte_41881DC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B2C35C(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v3);
    byte_41881DC = 1;
  }
  v4 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B2C42C(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v4, 0LL);
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