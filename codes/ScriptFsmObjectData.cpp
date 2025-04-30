void __fastcall ScriptFsmObjectData___ctor(
        ScriptFsmObjectData_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  AssetLoader_LoadEndDataHandler_o *v17; // x20

  if ( (byte_4A50202 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, assetName);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B863B8(&Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__, v8);
    sub_1B863B8(&ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo, v9);
    byte_4A50202 = 1;
  }
  v10 = sub_1B86604(ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B86614(v11, v12);
  *(_QWORD *)(v10 + 24) = objectName;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)objectName, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v15, v16);
  this->fields.isLoading = 1;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v17, 1, 0LL);
}


void __fastcall ScriptFsmObjectData__Destroy(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o **p_fields; // x20
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *gameObject; // x21
  AssetData_o *loadedAssetData; // x19

  if ( (byte_4A5020B & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A5020B = 1;
  }
  p_fields = (UnityEngine_Component_o **)&this->fields;
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    if ( !*p_fields )
      sub_1B86614(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fields, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
  }
  this->fields.fsmObject = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v7, v8);
  loadedAssetData = this->fields.loadedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38744968(loadedAssetData, 0LL);
}


bool __fastcall ScriptFsmObjectData__IsLoading(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}


bool __fastcall ScriptFsmObjectData__IsPlaying(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct ScriptFsmObject_o *v6; // x8

  if ( (byte_4A50201 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A50201 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.fsmObject;
  if ( !v6 )
    sub_1B86614(v4, v5);
  return v6->fields.isPlaying;
}


void __fastcall ScriptFsmObjectData__SendEvent(
        ScriptFsmObjectData_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4A50206 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, eventName);
    byte_4A50206 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1B86614(0LL, v6);
    ScriptFsmObject__SendEvent(v8, eventName, v7);
  }
}


void __fastcall ScriptFsmObjectData__SetBool(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4A50209 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, name);
    byte_4A50209 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1B86614(0LL, v8);
    ScriptFsmObject__SetBool(v10, name, value, v9);
  }
}


void __fastcall ScriptFsmObjectData__SetFloat(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4A50208 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, name);
    byte_4A50208 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1B86614(0LL, v8);
    ScriptFsmObject__SetFloat(v10, name, value, v9);
  }
}


void __fastcall ScriptFsmObjectData__SetParent(
        ScriptFsmObjectData_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A50203 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, parent);
    byte_4A50203 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_14;
    v8 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !v8
      || (UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)transform, 0LL),
          (transform = (UnityEngine_Component_o *)this->fields.fsmObject) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject(transform, 0LL),
          GameObjectExtensions__ResetTransform(gameObject, 0LL),
          (transform = (UnityEngine_Component_o *)this->fields.fsmObject) == 0LL)
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
    {
LABEL_14:
      sub_1B86614(transform, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  }
}


void __fastcall ScriptFsmObjectData__SetPosition(
        ScriptFsmObjectData_o *this,
        float x,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A50204 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A50204 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !v9 )
      sub_1B86614(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    GameObjectExtensions__SetLocalPosition_34382392(gameObject, x, y, 0LL);
  }
}


void __fastcall ScriptFsmObjectData__SetState(
        ScriptFsmObjectData_o *this,
        System_String_o *stateName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ScriptFsmObject_o *v8; // x0

  if ( (byte_4A50205 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, stateName);
    byte_4A50205 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1B86614(0LL, v6);
    ScriptFsmObject__SetState(v8, stateName, v7);
  }
}


void __fastcall ScriptFsmObjectData__SetString(
        ScriptFsmObjectData_o *this,
        System_String_o *name,
        System_String_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptFsmObject_o *v10; // x0

  if ( (byte_4A50207 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, name);
    byte_4A50207 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1B86614(0LL, v8);
    ScriptFsmObject__SetString(v10, name, value, v9);
  }
}


void __fastcall ScriptFsmObjectData__Skip(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  const MethodInfo *v4; // x1
  ScriptFsmObject_o *v5; // x0

  if ( (byte_4A5020A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A5020A = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v5 = this->fields.fsmObject;
    if ( !v5 )
      sub_1B86614(0LL, v4);
    ScriptFsmObject__Skip(v5, v4);
  }
}


void __fastcall ScriptFsmObjectData___c__DisplayClass5_0___ctor(
        ScriptFsmObjectData___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptFsmObjectData___c__DisplayClass5_0____ctor_b__0(
        ScriptFsmObjectData___c__DisplayClass5_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  char *_4__this; // x0
  UnityEngine_Object_o *Object_38723128; // x20
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  struct ScriptFsmObjectData_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ScriptFsmObjectData_o *v16; // x8

  if ( (byte_4A5020C & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___, assetData);
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, v6);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A5020C = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1B8635C((CGThumbnailListItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3);
  if ( !assetData )
    goto LABEL_16;
  Object_38723128 = AssetData__GetObject_38723128(assetData, this->fields.objectName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_38723128 )
    v11 = (UnityEngine_GameObject_c *)Object_38723128->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38723128
        : 0LL;
  else
    v11 = 0LL;
  _4__this = (char *)UnityEngine_Object__Instantiate_object_(
                       v11,
                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (v12 = (UnityEngine_GameObject_o *)_4__this,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL),
        v13 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v12,
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___),
        !v13)
    || (v13->fields.fsmObject = (struct ScriptFsmObject_o *)_4__this,
        sub_1B8635C((CGThumbnailListItem_o *)&v13->fields, (int32_t)_4__this, v14, v15),
        (v16 = this->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1B86614(_4__this, assetData);
  }
  v16->fields.isLoading = 0;
}