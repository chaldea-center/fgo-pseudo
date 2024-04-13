void __fastcall MemoryWarningReciever___ctor(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MemoryWarningReciever__Awake(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Application_LowMemoryCallback_o *v8; // x20
  UnityEngine_Application_LowMemoryCallback_o *v9; // x20

  if ( (byte_42E86F8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Application_LowMemoryCallback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v5, v6, v7);
    byte_42E86F8 = 1;
  }
  v8 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B5D694(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v8, 0LL);
  v9 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B5D694(UnityEngine_Application_LowMemoryCallback_TypeInfo);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AssetManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E86FA & 1) == 0 )
  {
    sub_B5D5C4(&System_GC_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42E86FA = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
  System_GC__WaitForPendingFinalizers(0LL);
  System_GC__Collect_43893280(0LL);
}


void __fastcall MemoryWarningReciever__OnDestroy(MemoryWarningReciever_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Application_LowMemoryCallback_o *v8; // x20

  if ( (byte_42E86F9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Application_LowMemoryCallback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MemoryWarningReciever_DidReceiveMemoryWarning__, v5, v6, v7);
    byte_42E86F9 = 1;
  }
  v8 = (UnityEngine_Application_LowMemoryCallback_o *)sub_B5D694(UnityEngine_Application_LowMemoryCallback_TypeInfo);
  UnityEngine_Application_LowMemoryCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MemoryWarningReciever_DidReceiveMemoryWarning__,
    0LL);
  UnityEngine_Application__remove_lowMemory(v8, 0LL);
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