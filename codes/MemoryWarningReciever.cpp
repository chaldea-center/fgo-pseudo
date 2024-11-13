void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Application_LowMemoryCallback_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  UnityEngine_Application_LowMemoryCallback_o *v14; // x20

  if ( (byte_4B15A26 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v7, v8);
    byte_4B15A26 = 1;
  }
  v9 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1BCAA2C(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
  UnityEngine_Application__remove_lowMemory(v9, 0LL);
  v14 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1BCAA2C(
                                                         UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__add_lowMemory(v14, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_4B15A28 & 1) == 0 )
  {
    sub_1BCA7E0(&System_GC_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15A28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v7);
  System_GC__Collect_63447616(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_63447616(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Application_LowMemoryCallback_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B15A27 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Application_LowMemoryCallback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v7, v8);
    byte_4B15A27 = 1;
  }
  v9 = (UnityEngine_Application_LowMemoryCallback_o *)sub_1BCAA2C(
                                                        UnityEngine_Application_LowMemoryCallback_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
  UnityEngine_Application__remove_lowMemory(v9, 0LL);
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