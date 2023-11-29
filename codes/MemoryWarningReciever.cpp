void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  UnityEngine_Application_LowMemoryCallback_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UnityEngine_Application_LowMemoryCallback_o *v12; // x20

  if ( (byte_40F7B8B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B16FFC(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v6);
    byte_40F7B8B = 1;
  }
  v7 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B170CC(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v7, 0LL);
  v12 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B170CC(
                                                         UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                         v8,
                                                         v9,
                                                         v10,
                                                         v11);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v12, 0LL);
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

  if ( (byte_40F7B8D & 1) == 0 )
  {
    sub_B16FFC(&System_GC_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40F7B8D = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_42843716(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  UnityEngine_Application_LowMemoryCallback_o *v7; // x20

  if ( (byte_40F7B8C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Application_LowMemoryCallback_TypeInfo, method);
    sub_B16FFC(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v6);
    byte_40F7B8C = 1;
  }
  v7 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B170CC(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v7, 0LL);
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