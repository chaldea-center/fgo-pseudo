void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_Application_LowMemoryCallback_o *v3; // x20
  UnityEngine_Application_LowMemoryCallback_o *v4; // x20

  if ( (byte_4A5A8FF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_LowMemoryCallback_TypeInfo);
    sub_1B885B0(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__);
    byte_4A5A8FF = 1;
  }
  v3 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B887FC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v3, 0LL);
  v4 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B887FC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v4, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A901 & 1) == 0 )
  {
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A5A901 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62753100(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_62753100(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_Application_LowMemoryCallback_o *v3; // x20

  if ( (byte_4A5A900 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_LowMemoryCallback_TypeInfo);
    sub_1B885B0(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__);
    byte_4A5A900 = 1;
  }
  v3 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1B887FC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__remove_lowMemory(v3, 0LL);
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