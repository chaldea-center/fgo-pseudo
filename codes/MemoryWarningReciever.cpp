void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20
  UnityEngine_Application_LowMemoryCallback_o *v6; // x20

  if ( (byte_4A4DCB9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v3);
    sub_1B863B8(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v4);
    byte_4A4DCB9 = 1;
  }
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B86604(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v5, 0LL);
  v6 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B86604(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v6, 0LL);
}


void __fastcall MemoryWarningReciever__DidReceiveMemoryWarning(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MemoryWarningReciever_o *v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A4DCBB & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, method);
    sub_1B863B8(&StringLiteral_8355/*"LowMemoryWarning"*/, v3);
    byte_4A4DCBB = 1;
  }
  if ( UnityEngine_Time__get_realtimeSinceStartup(0LL) >= this->fields.nextExecuteTime )
  {
    this->fields.nextExecuteTime = UnityEngine_Time__get_realtimeSinceStartup(0LL) + 10.0;
    MemoryWarningReciever__GabageCollection(v4, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v7);
    CrashReporter__SendReport_30368068(
      (CrashReporter_o *)Instance,
      (System_String_o *)StringLiteral_8355/*"LowMemoryWarning"*/,
      0LL,
      0LL,
      0LL);
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
  __int64 v4; // x1

  if ( (byte_4A4DCBC & 1) == 0 )
  {
    sub_1B863B8(&System_GC_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A4DCBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20

  if ( (byte_4A4DCBA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v3);
    sub_1B863B8(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v4);
    byte_4A4DCBA = 1;
  }
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B86604(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v5, 0LL);
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