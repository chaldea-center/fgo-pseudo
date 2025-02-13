void __fastcall ScriptFsmObjectData___ctor(
        ScriptFsmObjectData_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_4BDE1C4 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__);
    sub_1C21E38(&ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
    byte_4BDE1C4 = 1;
  }
  v7 = sub_1C22084(ScriptFsmObjectData___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 24) = objectName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)objectName, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  this->fields.isLoading = 1;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_ScriptFsmObjectData___c__DisplayClass5_0___ctor_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v22, 1, 0LL);
}


void __fastcall ScriptFsmObjectData__Destroy(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_fields; // x20
  UnityEngine_Object_o *fsmObject; // x21
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *gameObject; // x21
  AssetData_o *loadedAssetData; // x19

  if ( (byte_4BDE1CD & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1CD = 1;
  }
  p_fields = (UnityEngine_Component_o **)&this->fields;
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    if ( !*p_fields )
      sub_1C22094(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fields, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  this->fields.fsmObject = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
  loadedAssetData = this->fields.loadedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39034872(loadedAssetData, 0LL);
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

  if ( (byte_4BDE1C3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C3 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.fsmObject;
  if ( !v6 )
    sub_1C22094(v4, v5);
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

  if ( (byte_4BDE1C8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C8 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BDE1CB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1CB = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C22094(0LL, v8);
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

  if ( (byte_4BDE1CA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1CA = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C22094(0LL, v8);
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

  if ( (byte_4BDE1C5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C5 = 1;
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
      sub_1C22094(transform, v6);
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

  if ( (byte_4BDE1C6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C6 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.fsmObject;
    if ( !v9 )
      sub_1C22094(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    GameObjectExtensions__SetLocalPosition_34797668(gameObject, x, y, 0LL);
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

  if ( (byte_4BDE1C7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C7 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v8 = this->fields.fsmObject;
    if ( !v8 )
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BDE1C9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1C9 = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v10 = this->fields.fsmObject;
    if ( !v10 )
      sub_1C22094(0LL, v8);
    ScriptFsmObject__SetString(v10, name, value, v9);
  }
}


void __fastcall ScriptFsmObjectData__Skip(ScriptFsmObjectData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsmObject; // x20
  const MethodInfo *v4; // x1
  ScriptFsmObject_o *v5; // x0

  if ( (byte_4BDE1CC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1CC = 1;
  }
  fsmObject = (UnityEngine_Object_o *)this->fields.fsmObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsmObject, 0LL, 0LL) )
  {
    v5 = this->fields.fsmObject;
    if ( !v5 )
      sub_1C22094(0LL, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  char *_4__this; // x0
  UnityEngine_Object_o *Object_39013000; // x20
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  struct ScriptFsmObjectData_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct ScriptFsmObjectData_o *v21; // x8

  if ( (byte_4BDE1CE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE1CE = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 32), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !assetData )
    goto LABEL_16;
  Object_39013000 = AssetData__GetObject_39013000(assetData, this->fields.objectName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39013000 )
    v12 = (UnityEngine_GameObject_c *)Object_39013000->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_39013000
        : 0LL;
  else
    v12 = 0LL;
  _4__this = (char *)UnityEngine_Object__Instantiate_object_(
                       v12,
                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (v13 = (UnityEngine_GameObject_o *)_4__this,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL),
        v14 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v13,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ScriptFsmObject___),
        !v14)
    || (v14->fields.fsmObject = (struct ScriptFsmObject_o *)_4__this,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields, (int64_t)_4__this, v15, v16, v17, v18, v19, v20),
        (v21 = this->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1C22094(_4__this, assetData);
  }
  v21->fields.isLoading = 0;
}