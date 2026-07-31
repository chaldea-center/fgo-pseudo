void MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_Application_LowMemoryCallback_o *v3; // x20
  __int64 v4; // x1
  UnityEngine_Application_LowMemoryCallback_o *v5; // x20

  if ( (byte_5937E1A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_LowMemoryCallback_TypeInfo);
    sub_21FFC50(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__);
    byte_5937E1A = 1;
  }
  v3 = (UnityEngine_Application_LowMemoryCallback_o *)sub_21FFEBC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4);
  UnityEngine_Application__remove_lowMemory(v3, 0);
  v5 = (UnityEngine_Application_LowMemoryCallback_o *)sub_21FFEBC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0);
  UnityEngine_Application__add_lowMemory(v5, 0);
}


void MemoryWarningReciever__DidReceiveMemoryWarning(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( UnityEngine_Time__get_realtimeSinceStartup(0) >= this->fields.nextExecuteTime )
  {
    this->fields.nextExecuteTime = UnityEngine_Time__get_realtimeSinceStartup(0) + 10.0;
    MemoryWarningReciever__GabageCollection(v3, v4);
  }
  else
  {
    this->fields.requestGC = 1;
  }
}


void MemoryWarningReciever__GabageCollection(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_5937E1C & 1) == 0 )
  {
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_5937E1C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0, 0);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4);
  System_GC__Collect(0);
  System_GC__WaitForPendingFinalizers(0);
  System_GC__Collect(0);
}


void MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_Application_LowMemoryCallback_o *v3; // x20
  __int64 v4; // x1

  if ( (byte_5937E1B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_LowMemoryCallback_TypeInfo);
    sub_21FFC50(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__);
    byte_5937E1B = 1;
  }
  v3 = (UnityEngine_Application_LowMemoryCallback_o *)sub_21FFEBC(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4);
  UnityEngine_Application__remove_lowMemory(v3, 0);
}


void MemoryWarningReciever__Update(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  MemoryWarningReciever_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.requestGC && UnityEngine_Time__get_realtimeSinceStartup(0) >= this->fields.nextExecuteTime )
  {
    MemoryWarningReciever__GabageCollection(v3, v4);
    this->fields.requestGC = 0;
    this->fields.nextExecuteTime = UnityEngine_Time__get_realtimeSinceStartup(0) + 10.0;
  }
}