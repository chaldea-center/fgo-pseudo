void ScriptFsmObjectData___ctor(
        ScriptFsmObjectData_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_4CB8264 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__);
    sub_1C6BA08(&ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
    byte_4CB8264 = 1;
  }
  v7 = sub_1C6BC54(ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 24) = objectName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)objectName, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v12, v13);
  this->fields.isLoading = 1;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v14, 1, 0);
}


void ScriptFsmObjectData__Destroy(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_fields; // x20
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *gameObject; // x21
  AssetData_o *loadedAssetData; // x19

  if ( (byte_4CB826D & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB826D = 1;
  }
  p_fields = (UnityEngine_Component_o **)&this->fields;
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    if ( !*p_fields )
      sub_1C6BC60(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fields, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
  this->fields.fsmObject = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, 0, v6, v7);
  loadedAssetData = this->fields.loadedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40765532(loadedAssetData, 0);
}


bool ScriptFsmObjectData__IsLoading(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}


bool ScriptFsmObjectData__IsPlaying(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct ScriptFsmObject_o *v6; // x8

  if ( (byte_4CB8263 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8263 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(fsmObject, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.fsmObject;
  if ( !v6 )
    sub_1C6BC60(v4, v5);
  return v6->fields.isPlaying;
}


void ScriptFsmObjectData__SendEvent(ScriptFsmObjectData_o *this, System_String_o *eventName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4CB8268 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8268 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C6BC60(0, v6);
    ScriptFsmObject__SendEvent(v8, eventName, v7);
  }
}


void ScriptFsmObjectData__SetBool(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4CB826B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB826B = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C6BC60(0, v8);
    ScriptFsmObject__SetBool(v10, name, value, v9);
  }
}


void ScriptFsmObjectData__SetFloat(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4CB826A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB826A = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C6BC60(0, v8);
    ScriptFsmObject__SetFloat(v10, name, value, v9);
  }
}


void ScriptFsmObjectData__SetParent(
        ScriptFsmObjectData_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CB8265 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8265 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !parent )
      goto LABEL_14;
    v8 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( !v8
      || (UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)transform, 0),
          (transform = (UnityEngine_Component_o *)this->fields.fsmObject) == 0)
      || (gameObject = UnityEngine_Component__get_gameObject(transform, 0),
          GameObjectExtensions__ResetTransform(gameObject, 0),
          (transform = (UnityEngine_Component_o *)this->fields.fsmObject) == 0)
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0)) == 0 )
    {
LABEL_14:
      sub_1C6BC60(transform, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  }
}


void ScriptFsmObjectData__SetPosition(ScriptFsmObjectData_o *this, float x, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CB8266 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8266 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !v9 )
      sub_1C6BC60(0, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0);
    GameObjectExtensions__SetLocalPosition_36356140(gameObject, x, y, 0);
  }
}


void ScriptFsmObjectData__SetState(ScriptFsmObjectData_o *this, System_String_o *stateName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4CB8267 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8267 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C6BC60(0, v6);
    ScriptFsmObject__SetState(v8, stateName, v7);
  }
}


void ScriptFsmObjectData__SetString(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        System_String_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4CB8269 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8269 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C6BC60(0, v8);
    ScriptFsmObject__SetString(v10, name, value, v9);
  }
}


void ScriptFsmObjectData__Skip(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  const MethodInfo *v4; // x1
  ScriptFsmObject_o *v5; // x0

  if ( (byte_4CB826C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB826C = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v5 = this->fields.fsmObject;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    ScriptFsmObject__Skip(v5, v4);
  }
}


void ScriptFsmObjectData___c__DisplayClass5_0___ctor(
        ScriptFsmObjectData___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptFsmObjectData___c__DisplayClass5_0____ctor_b__0(
        ScriptFsmObjectData___c__DisplayClass5_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  UnityEngine_Object_o *Object_40741416; // x20
  Il2CppObject *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  struct ScriptFsmObjectData_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct ScriptFsmObjectData_o *v13; // x8

  if ( (byte_4CB826E & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB826E = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1C6B9AC((CGThumbnailListItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3);
  if ( !assetData )
    goto LABEL_16;
  Object_40741416 = AssetData__GetObject_40741416(assetData, this->fields.objectName, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40741416 )
    v8 = (UnityEngine_GameObject_c *)Object_40741416->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_40741416
       : 0LL;
  else
    v8 = 0;
  _4__this = (char *)UnityEngine_Object__Instantiate_object_(
                       v8,
                       (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (v9 = (UnityEngine_GameObject_o *)_4__this,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0),
        v10 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v9,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___),
        !v10)
    || (v10->fields.fsmObject = (struct ScriptFsmObject_o *)_4__this,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields, (int32_t)_4__this, v11, v12),
        (v13 = this->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_1C6BC60(_4__this, assetData);
  }
  v13->fields.isLoading = 0;
}