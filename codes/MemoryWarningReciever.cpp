void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Application_LowMemoryCallback_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Application_LowMemoryCallback_o *v9; // x20

  if ( (byte_49FBBC1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v4);
    sub_1B640C8(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v5);
    byte_49FBBC1 = 1;
  }
  v6 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B64314(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v6, 0LL);
  v9 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B64314(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        v7,
                                                        v8);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v9, 0LL);
}


void __fastcall MemoryWarningReciever__DidReceiveMemoryWarning(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( UnityEngine_Time__get_realtimeSinceStartup(0LL) >= this->fields.nextExecuteTime )
  {
    this->fields.nextExecuteTime = UnityEngine_Time__get_realtimeSinceStartup(0LL) + 10.0;
    MemoryWarningReciever__GabageCollection(v3, v4);
  }
  else
  {
    this->fields.requestGC = 1;
  }
}


void __fastcall MemoryWarningReciever__GabageCollection(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBBC3 & 1) == 0 )
  {
    sub_1B640C8(&System_GC_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FBBC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62421456(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_62421456(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Application_LowMemoryCallback_o *v6; // x20

  if ( (byte_49FBBC2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v4);
    sub_1B640C8(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v5);
    byte_49FBBC2 = 1;
  }
  v6 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B64314(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v6, 0LL);
}


void __fastcall MemoryWarningReciever__Update(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.requestGC && UnityEngine_Time__get_realtimeSinceStartup(0LL) >= this->fields.nextExecuteTime )
  {
    MemoryWarningReciever__GabageCollection(v3, v4);
    this->fields.requestGC = 0;
    this->fields.nextExecuteTime = UnityEngine_Time__get_realtimeSinceStartup(0LL) + 10.0;
  }
}