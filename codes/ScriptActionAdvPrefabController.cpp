void ScriptActionAdvPrefabController___ctor(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ScriptActionAdvPrefabController__CheckGoNext(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *actorName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  _BOOL8 v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C44C84 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C44C84 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    return 1;
  v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
  if ( !v6 )
    return 1;
  if ( !value )
    sub_1C372B4(v6);
  return LOBYTE(value[5].klass) != 0;
}


System_String_o *ScriptActionAdvPrefabController__GetAssetName(System_String_o *baseName, const MethodInfo *method)
{
  if ( (byte_4C44C80 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1925/*"ADV/{0}"*/);
    byte_4C44C80 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_1925/*"ADV/{0}"*/, (Il2CppObject *)baseName, 0);
}


void ScriptActionAdvPrefabController__Pause(
        ScriptActionAdvPrefabController_o *this,
        bool pause,
        const MethodInfo *method)
{
  bool v4; // w20
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Action_object__o *v7; // x21

  v4 = pause;
  if ( (byte_4C44C88 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C37058(&Method_ScriptActionAdvPrefabController__Pause_b__23_0__);
    byte_4C44C88 = 1;
  }
  actorDict = this->fields.actorDict;
  this->fields.isPaused = v4;
  if ( actorDict )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
               (const MethodInfo_3463460 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    v7 = (System_Action_object__o *)sub_1C372A4(System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ScriptActionAdvPrefabController__Pause_b__23_0__, 0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (System_Action_T__o *)v7,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
  }
}


void ScriptActionAdvPrefabController__PlayAnimator(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *actorName,
        System_String_o *trigger,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C44C83 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C44C83 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C372B4(0);
    ScriptActionAdvPrefabActorController__PlayAnimator((ScriptActionAdvPrefabActorController_o *)value, trigger, v8);
  }
}


void ScriptActionAdvPrefabController__Prepare(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *objectName,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o **p_renderTexture_k__BackingField; // x20
  UnityEngine_Object_o *renderTexture_k__BackingField; // x22
  UnityEngine_RenderTexture_o *Temporary_71175100; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UnityEngine_GameObject_o **p_demoRootObject; // x22
  UnityEngine_Object_o *demoRootObject; // x23
  void *assetData; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x23
  Il2CppObject *Object_object__51154888; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  void *v24; // x21
  unsigned int v25; // w22
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o **p_actorDict; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  int v31; // w8
  void *v32; // x21
  unsigned int v33; // w24
  __int64 v34; // x23
  ScriptReplaceString_c *v35; // x0

  if ( (byte_4C44C82 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScriptReplaceString_TypeInfo);
    byte_4C44C82 = 1;
  }
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(renderTexture_k__BackingField, 0, 0) )
  {
    if ( !byte_4C3C920 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C920 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Temporary_71175100 = UnityEngine_RenderTexture__GetTemporary_71175100(1267, 576, 24, 0);
    *p_renderTexture_k__BackingField = Temporary_71175100;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField,
      (int32_t)Temporary_71175100,
      v8,
      v9);
  }
  p_demoRootObject = &this->fields.demoRootObject;
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(demoRootObject, 0, 0) )
  {
    assetData = *p_demoRootObject;
    if ( !*p_demoRootObject )
      goto LABEL_57;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)assetData, 0);
    if ( System_String__op_Inequality(name, objectName, 0) )
    {
      v14 = (UnityEngine_Object_o *)*p_demoRootObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v14, 0);
      *p_demoRootObject = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.demoRootObject, 0, v15, v16);
    }
  }
  v17 = (UnityEngine_Object_o *)*p_demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v17, 0, 0) )
    return;
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_57;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              (AssetData_o *)assetData,
                              objectName,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object__51855596(
          Object_object__51154888,
          transform,
          (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  *p_demoRootObject = (struct UnityEngine_GameObject_o *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.demoRootObject, (int32_t)v20, v21, v22);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)assetData, objectName, 0);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  assetData = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                (UnityEngine_GameObject_o *)assetData,
                (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  if ( !assetData )
    goto LABEL_57;
  v23 = *((_DWORD *)assetData + 6);
  v24 = assetData;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      assetData = (void *)*((_QWORD *)v24 + (int)v25 + 4);
      if ( !assetData )
        goto LABEL_57;
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)assetData, *p_renderTexture_k__BackingField, 0);
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        goto LABEL_33;
    }
LABEL_58:
    sub_1C372BC(assetData);
  }
LABEL_33:
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v26,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
  this->fields.actorDict = (struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *)v26;
  p_actorDict = &this->fields.actorDict;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.actorDict, (int32_t)v26, v28, v29);
  assetData = this->fields.demoRootObject;
  if ( !assetData
    || (assetData = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                      (UnityEngine_GameObject_o *)assetData,
                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___)) == 0 )
  {
LABEL_57:
    sub_1C372B4(assetData);
  }
  v31 = *((_DWORD *)assetData + 6);
  v32 = assetData;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( v33 < v31 )
    {
      v34 = *((_QWORD *)v32 + (int)v33 + 4);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4C44C93 )
      {
        sub_1C37058(&ScriptReplaceString_TypeInfo);
        byte_4C44C93 = 1;
      }
      assetData = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        assetData = ScriptReplaceString_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_57;
      assetData = (void *)ScriptActionAdvPrefabActorController__SetDisplay(
                            (ScriptActionAdvPrefabActorController_o *)v34,
                            *(_DWORD *)(*((_QWORD *)assetData + 23) + 8LL),
                            v30);
      if ( ((unsigned __int8)assetData & 1) != 0 )
      {
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        if ( !byte_4C44C93 )
        {
          sub_1C37058(&ScriptReplaceString_TypeInfo);
          byte_4C44C93 = 1;
        }
        v35 = ScriptReplaceString_TypeInfo;
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
          v35 = ScriptReplaceString_TypeInfo;
        }
        ScriptActionAdvPrefabActorController__SetGender(
          (ScriptActionAdvPrefabActorController_o *)v34,
          v35->static_fields->playerGenderIndex,
          v30);
        assetData = *p_actorDict;
        if ( !*p_actorDict )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)assetData,
          *(Il2CppObject **)(v34 + 32),
          (Il2CppObject *)v34,
          (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
        if ( this->fields.isPaused )
          ScriptActionAdvPrefabActorController__Pause((ScriptActionAdvPrefabActorController_o *)v34, 1, v30);
      }
      v31 = *((_DWORD *)v32 + 6);
      if ( (int)++v33 >= v31 )
        return;
    }
    goto LABEL_58;
  }
}


void ScriptActionAdvPrefabController__Release(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *demoRootObject; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_RenderTexture_o **p_renderTexture_k__BackingField; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetData_o *assetData; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C44C87 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44C87 = 1;
  }
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(demoRootObject, 0);
  this->fields.demoRootObject = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.demoRootObject, 0, v4, v5);
  this->fields.actorDict = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.actorDict, 0, v6, v7);
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*p_renderTexture_k__BackingField, 0);
    *p_renderTexture_k__BackingField = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField, 0, v9, v10);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetData, 0);
    this->fields.assetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v12, v13);
  }
  this->fields._isSetup_k__BackingField = 0;
}


void ScriptActionAdvPrefabController__SetHide(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *actorName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C44C86 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C44C86 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C372B4(0);
    ScriptActionAdvPrefabActorController__Hide((ScriptActionAdvPrefabActorController_o *)value, v6);
  }
}


void ScriptActionAdvPrefabController__SetShow(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *actorName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C44C85 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C44C85 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C372B4(0);
    ScriptActionAdvPrefabActorController__Show((ScriptActionAdvPrefabActorController_o *)value, v6);
  }
}


void ScriptActionAdvPrefabController__Setup(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4C44C81 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ScriptActionAdvPrefabController__Setup_b__16_0__);
    byte_4C44C81 = 1;
  }
  this->fields._isSetup_k__BackingField = 0;
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptActionAdvPrefabController__Setup_b__16_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v5, 1, 0);
}


void ScriptActionAdvPrefabController___Pause_b__23_0(
        ScriptActionAdvPrefabController_o *this,
        ScriptActionAdvPrefabActorController_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ScriptActionAdvPrefabActorController__Pause(x, this->fields.isPaused, method);
}


void ScriptActionAdvPrefabController___Setup_b__16_0(
        ScriptActionAdvPrefabController_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AssetData_o **p_assetData; // x0

  this->fields.assetData = asset;
  p_assetData = &this->fields.assetData;
  *((_BYTE *)p_assetData - 8) = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)p_assetData, (int32_t)asset, (int32_t)method, v3);
}


bool ScriptActionAdvPrefabController__get_IsGoNext(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  ScriptActionAdvPrefabController___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v8; // x21
  struct ScriptActionAdvPrefabController___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C44C7F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C37058(&Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
    sub_1C37058(&System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    sub_1C37058(&Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__);
    sub_1C37058(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4C44C7F = 1;
  }
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    sub_1C372B4(0);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
             (const MethodInfo_3463460 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
  v5 = ScriptActionAdvPrefabController___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !ScriptActionAdvPrefabController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptActionAdvPrefabController___c_TypeInfo);
    v5 = ScriptActionAdvPrefabController___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v5->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ScriptActionAdvPrefabController___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v8,
      Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__,
      0);
    static_fields = ScriptActionAdvPrefabController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_ScriptActionAdvPrefabActorController__bool__o *)_9__12_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v10, v11);
  }
  return System_Linq_Enumerable__All_object_(
           v6,
           (System_Func_TSource__bool__o *)_9__12_0,
           (const MethodInfo_30F2108 *)Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
}


bool ScriptActionAdvPrefabController__get_isSetup(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  return this->fields._isSetup_k__BackingField;
}


UnityEngine_RenderTexture_o *ScriptActionAdvPrefabController__get_renderTexture(
        ScriptActionAdvPrefabController_o *this,
        const MethodInfo *method)
{
  return this->fields._renderTexture_k__BackingField;
}


void ScriptActionAdvPrefabController__set_isSetup(
        ScriptActionAdvPrefabController_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isSetup_k__BackingField = value;
}


void ScriptActionAdvPrefabController__set_renderTexture(
        ScriptActionAdvPrefabController_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._renderTexture_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptActionAdvPrefabController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44C89 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4C44C89 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ScriptActionAdvPrefabController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptActionAdvPrefabController___c_TypeInfo->static_fields->__9 = (struct ScriptActionAdvPrefabController___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ScriptActionAdvPrefabController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ScriptActionAdvPrefabController___c___ctor(ScriptActionAdvPrefabController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptActionAdvPrefabController___c___get_IsGoNext_b__12_0(
        ScriptActionAdvPrefabController___c_o *this,
        ScriptActionAdvPrefabActorController_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._IsGoNext_k__BackingField;
}