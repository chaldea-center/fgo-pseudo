void ScriptFsmObjectData___ctor(
        ScriptFsmObjectData_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  AssetLoader_LoadEndDataHandler_c *v22; // x0
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  __int64 v24; // x1

  if ( (byte_593A655 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__);
    sub_21FFC50(&ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
    byte_593A655 = 1;
  }
  v7 = sub_21FFEBC(ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 24) = objectName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)objectName, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = AssetLoader_LoadEndDataHandler_TypeInfo;
  this->fields.isLoading = 1;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(v22);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
  AssetManager__loadAssetStorage(assetName, v23, 1, 0, 0);
}


void ScriptFsmObjectData__Destroy(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_fields; // x20
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v14; // x1
  AssetData_o *loadedAssetData; // x19

  if ( (byte_593A65E & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65E = 1;
  }
  p_fields = (UnityEngine_Component_o **)&this->fields;
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    if ( !*p_fields )
      sub_21FFECC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fields, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  this->fields.fsmObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v6, v7, v8, v9, v10, v11);
  loadedAssetData = this->fields.loadedAssetData;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
  AssetManager__releaseAsset_47465556(loadedAssetData, 0);
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

  if ( (byte_593A654 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A654 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(fsmObject, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.fsmObject;
  if ( !v6 )
    sub_21FFECC(v4, v5);
  return v6->fields.isPlaying;
}


void ScriptFsmObjectData__SendEvent(ScriptFsmObjectData_o *this, System_String_o *eventName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_593A659 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A659 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventName);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_21FFECC(0, v6);
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

  if ( (byte_593A65C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65C = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_21FFECC(0, v8);
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

  if ( (byte_593A65B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65B = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_21FFECC(0, v8);
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

  if ( (byte_593A656 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A656 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
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
      sub_21FFECC(transform, v6);
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

  if ( (byte_593A657 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A657 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !v9 )
      sub_21FFECC(0, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0);
    GameObjectExtensions__SetLocalPosition_42876120(gameObject, x, y, 0);
  }
}


void ScriptFsmObjectData__SetState(ScriptFsmObjectData_o *this, System_String_o *stateName, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_593A658 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A658 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, stateName);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_21FFECC(0, v6);
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

  if ( (byte_593A65A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65A = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_21FFECC(0, v8);
    ScriptFsmObject__SetString(v10, name, value, v9);
  }
}


void ScriptFsmObjectData__Skip(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  const MethodInfo *v4; // x1
  ScriptFsmObject_o *v5; // x0

  if ( (byte_593A65D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65D = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0, 0) )
  {
    v5 = this->fields.fsmObject;
    if ( !v5 )
      sub_21FFECC(0, v4);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *_4__this; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *Object_47442936; // x20
  Il2CppObject *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  struct ScriptFsmObjectData_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct ScriptFsmObjectData_o *v22; // x8

  if ( (byte_593A65F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A65F = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(_4__this + 32),
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !assetData )
    goto LABEL_16;
  Object_47442936 = AssetData__GetObject_47442936(assetData, this->fields.objectName, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( Object_47442936 )
    v13 = (UnityEngine_GameObject_c *)Object_47442936->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_47442936
        : 0LL;
  else
    v13 = 0;
  _4__this = (char *)UnityEngine_Object__Instantiate_object_(
                       v13,
                       (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (v14 = (UnityEngine_GameObject_o *)_4__this,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0),
        v15 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v14,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___),
        !v15)
    || (v15->fields.fsmObject = (struct ScriptFsmObject_o *)_4__this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->fields, (int32_t)_4__this, v16, v17, v18, v19, v20, v21),
        (v22 = this->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_21FFECC(_4__this, assetData);
  }
  v22->fields.isLoading = 0;
}