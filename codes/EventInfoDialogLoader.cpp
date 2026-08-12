void EventInfoDialogLoader___c__DisplayClass0_0_object____ctor(
        EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *this,
        const MethodInfo_3AFFAC4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoDialogLoader___c__DisplayClass0_0_object____Load_b__0(
        EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *this,
        AssetData_o *assetData,
        const MethodInfo_3AFFACC *method)
{
  EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Object_object__58532980; // x21
  System_String_o *assetPath; // x21
  EventInfoDialogLoader___c__DisplayClass0_0_TDialog__c *klass; // x8
  System_Action_T__o *onLoaded; // x0
  Il2CppObject *v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  System_String_o *v15; // x22

  v5 = this;
  if ( (byte_597613A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    this = (EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597613A = 1;
  }
  if ( !assetData )
    goto LABEL_19;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              v5->fields.prefabName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)Object_object__58532980,
                                                                    0,
                                                                    0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    assetPath = v5->fields.assetPath;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetData);
    AssetManager__releaseAssetStorage(assetPath, 0);
    klass = method->klass;
    onLoaded = (System_Action_T__o *)v5->fields.onLoaded;
    v11 = 0;
    goto LABEL_18;
  }
  if ( !Object_object__58532980 )
LABEL_19:
    sub_2213CDC(this, assetData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__58532980, 0, 0);
  v13 = GameObjectHelper__Instantiate_object_(
          (UnityEngine_GameObject_o *)Object_object__58532980,
          v5->fields.parent,
          0,
          (const MethodInfo_38B88AC *)method->klass->rgctx_data->_4_GameObjectHelper_Instantiate_TDialog_);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0) )
  {
    v15 = v5->fields.assetPath;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
    AssetManager__releaseAssetStorage(v15, 0);
  }
  klass = method->klass;
  onLoaded = (System_Action_T__o *)v5->fields.onLoaded;
  v11 = v13;
LABEL_18:
  ActionExtensions__Call_object_(
    onLoaded,
    v11,
    (const MethodInfo_36FFECC *)klass->rgctx_data->_3_ActionExtensions_Call_TDialog_);
}