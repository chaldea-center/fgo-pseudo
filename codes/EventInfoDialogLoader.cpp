void EventInfoDialogLoader___c__DisplayClass0_0_object____ctor(
        EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *this,
        const MethodInfo_3ACC31C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoDialogLoader___c__DisplayClass0_0_object____Load_b__0(
        EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *this,
        AssetData_o *assetData,
        const MethodInfo_3ACC324 *method)
{
  EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Object_object__58323140; // x21
  System_String_o *assetPath; // x21
  EventInfoDialogLoader___c__DisplayClass0_0_TDialog__c *klass; // x8
  System_Action_T__o *onLoaded; // x0
  Il2CppObject *v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  System_String_o *v15; // x22

  v5 = this;
  if ( (byte_593DE62 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    this = (EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593DE62 = 1;
  }
  if ( !assetData )
    goto LABEL_19;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              v5->fields.prefabName,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)Object_object__58323140,
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
  if ( !Object_object__58323140 )
LABEL_19:
    sub_21FFECC(this, assetData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__58323140, 0, 0);
  v13 = GameObjectHelper__Instantiate_object_(
          (UnityEngine_GameObject_o *)Object_object__58323140,
          v5->fields.parent,
          0,
          (const MethodInfo_38853E4 *)method->klass->rgctx_data->_4_GameObjectHelper_Instantiate_TDialog_);
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
    (const MethodInfo_36CDF5C *)klass->rgctx_data->_3_ActionExtensions_Call_TDialog_);
}