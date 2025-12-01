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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_4CC9397 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__);
    sub_1C713B0(&ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
    byte_4CC9397 = 1;
  }
  v7 = sub_1C715FC(ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 24) = objectName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)objectName, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  this->fields.isLoading = 1;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v22, 1, 0);
}


void ScriptFsmObjectData__Destroy(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_fields; // x20
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *gameObject; // x21
  AssetData_o *loadedAssetData; // x19

  if ( (byte_4CC93A0 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC93A0 = 1;
  }
  p_fields = (UnityEngine_Component_o **)&this->fields;
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    if ( !*p_fields )
      sub_1C71608(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fields, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  this->fields.fsmObject = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, 0, v6, v7, v8, v9, v10, v11);
  loadedAssetData = this->fields.loadedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40808072(loadedAssetData, 0);
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

  if ( (byte_4CC9396 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9396 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(fsmObject, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.fsmObject;
  if ( !v6 )
    sub_1C71608(v4, v5);
  return v6->fields.isPlaying;
}


void ScriptFsmObjectData__SendEvent(ScriptFsmObjectData_o *this, System_String_o *eventName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4CC939B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939B = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C71608(0, v6);
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

  if ( (byte_4CC939E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939E = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C71608(0, v8);
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

  if ( (byte_4CC939D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939D = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C71608(0, v8);
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

  if ( (byte_4CC9398 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9398 = 1;
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
      sub_1C71608(transform, v6);
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

  if ( (byte_4CC9399 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9399 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !v9 )
      sub_1C71608(0, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0);
    GameObjectExtensions__SetLocalPosition_36389976(gameObject, x, y, 0);
  }
}


void ScriptFsmObjectData__SetState(ScriptFsmObjectData_o *this, System_String_o *stateName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4CC939A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939A = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C71608(0, v6);
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

  if ( (byte_4CC939C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939C = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C71608(0, v8);
    ScriptFsmObject__SetString(v10, name, value, v9);
  }
}


void ScriptFsmObjectData__Skip(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  const MethodInfo *v4; // x1
  ScriptFsmObject_o *v5; // x0

  if ( (byte_4CC939F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC939F = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v5 = this->fields.fsmObject;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  UnityEngine_Object_o *Object_40783956; // x20
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  struct ScriptFsmObjectData_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ScriptFsmObjectData_o *v21; // x8

  if ( (byte_4CC93A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC93A1 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !assetData )
    goto LABEL_16;
  Object_40783956 = AssetData__GetObject_40783956(assetData, this->fields.objectName, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40783956 )
    v12 = (UnityEngine_GameObject_c *)Object_40783956->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40783956
        : 0LL;
  else
    v12 = 0;
  _4__this = (char *)UnityEngine_Object__Instantiate_object_(
                       v12,
                       (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (v13 = (UnityEngine_GameObject_o *)_4__this,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0),
        v14 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v13,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___),
        !v14)
    || (v14->fields.fsmObject = (struct ScriptFsmObject_o *)_4__this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields, (int32_t)_4__this, v15, v16, v17, v18, v19, v20),
        (v21 = this->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_1C71608(_4__this, assetData);
  }
  v21->fields.isLoading = 0;
}