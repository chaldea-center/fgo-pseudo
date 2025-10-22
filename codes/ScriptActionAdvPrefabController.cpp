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
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C58A50 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C58A50 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    return 1;
  v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
  if ( !v6 )
    return 1;
  if ( !value )
    sub_1C3E7C0(v6, v7);
  return LOBYTE(value[5].klass) != 0;
}


System_String_o *ScriptActionAdvPrefabController__GetAssetName(System_String_o *baseName, const MethodInfo *method)
{
  if ( (byte_4C58A4C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1924/*"ADV/{0}"*/);
    byte_4C58A4C = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_1924/*"ADV/{0}"*/, (Il2CppObject *)baseName, 0);
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
  if ( (byte_4C58A54 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C3E564(&Method_ScriptActionAdvPrefabController__Pause_b__23_0__);
    byte_4C58A54 = 1;
  }
  actorDict = this->fields.actorDict;
  this->fields.isPaused = v4;
  if ( actorDict )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
               (const MethodInfo_3475610 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    v7 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ScriptActionAdvPrefabController__Pause_b__23_0__, 0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (System_Action_T__o *)v7,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
  }
}


void ScriptActionAdvPrefabController__PlayAnimator(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *actorName,
        System_String_o *trigger,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C58A4F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C58A4F = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C3E7C0(0, v8);
    ScriptActionAdvPrefabActorController__PlayAnimator((ScriptActionAdvPrefabActorController_o *)value, trigger, v9);
  }
}


void ScriptActionAdvPrefabController__Prepare(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *objectName,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o **p_renderTexture_k__BackingField; // x20
  UnityEngine_Object_o *renderTexture_k__BackingField; // x22
  UnityEngine_RenderTexture_o *Temporary_71249912; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UnityEngine_GameObject_o **p_demoRootObject; // x22
  UnityEngine_Object_o *demoRootObject; // x23
  __int64 v12; // x1
  void *assetData; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x23
  Il2CppObject *Object_object__51228128; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  void *v25; // x21
  unsigned int v26; // w22
  System_Collections_Generic_Dictionary_object__object__o *v27; // x21
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o **p_actorDict; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  int v32; // w8
  void *v33; // x21
  unsigned int v34; // w24
  __int64 v35; // x23
  ScriptReplaceString_c *v36; // x0

  if ( (byte_4C58A4E & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ScriptReplaceString_TypeInfo);
    byte_4C58A4E = 1;
  }
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(renderTexture_k__BackingField, 0, 0) )
  {
    if ( !byte_4C506A0 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C506A0 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Temporary_71249912 = UnityEngine_RenderTexture__GetTemporary_71249912(1267, 576, 24, 0);
    *p_renderTexture_k__BackingField = Temporary_71249912;
    sub_1C3E508(
      (CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField,
      (int32_t)Temporary_71249912,
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
      v15 = (UnityEngine_Object_o *)*p_demoRootObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v15, 0);
      *p_demoRootObject = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.demoRootObject, 0, v16, v17);
    }
  }
  v18 = (UnityEngine_Object_o *)*p_demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v18, 0, 0) )
    return;
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_57;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              (AssetData_o *)assetData,
                              objectName,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object__51929056(
          Object_object__51228128,
          transform,
          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  *p_demoRootObject = (struct UnityEngine_GameObject_o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.demoRootObject, (int32_t)v21, v22, v23);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)assetData, objectName, 0);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  assetData = UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                (UnityEngine_GameObject_o *)assetData,
                (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  if ( !assetData )
    goto LABEL_57;
  v24 = *((_DWORD *)assetData + 6);
  v25 = assetData;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( v26 < v24 )
    {
      assetData = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !assetData )
        goto LABEL_57;
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)assetData, *p_renderTexture_k__BackingField, 0);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_33;
    }
LABEL_58:
    sub_1C3E7C8(assetData, v12);
  }
LABEL_33:
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v27,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
  this->fields.actorDict = (struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *)v27;
  p_actorDict = &this->fields.actorDict;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.actorDict, (int32_t)v27, v29, v30);
  assetData = this->fields.demoRootObject;
  if ( !assetData
    || (assetData = UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                      (UnityEngine_GameObject_o *)assetData,
                      (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___)) == 0 )
  {
LABEL_57:
    sub_1C3E7C0(assetData, v12);
  }
  v32 = *((_DWORD *)assetData + 6);
  v33 = assetData;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( v34 < v32 )
    {
      v35 = *((_QWORD *)v33 + (int)v34 + 4);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4C58A5F )
      {
        sub_1C3E564(&ScriptReplaceString_TypeInfo);
        byte_4C58A5F = 1;
      }
      assetData = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        assetData = ScriptReplaceString_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_57;
      assetData = (void *)ScriptActionAdvPrefabActorController__SetDisplay(
                            (ScriptActionAdvPrefabActorController_o *)v35,
                            *(_DWORD *)(*((_QWORD *)assetData + 23) + 8LL),
                            v31);
      if ( ((unsigned __int8)assetData & 1) != 0 )
      {
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        if ( !byte_4C58A5F )
        {
          sub_1C3E564(&ScriptReplaceString_TypeInfo);
          byte_4C58A5F = 1;
        }
        v36 = ScriptReplaceString_TypeInfo;
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
          v36 = ScriptReplaceString_TypeInfo;
        }
        ScriptActionAdvPrefabActorController__SetGender(
          (ScriptActionAdvPrefabActorController_o *)v35,
          v36->static_fields->playerGenderIndex,
          v31);
        assetData = *p_actorDict;
        if ( !*p_actorDict )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)assetData,
          *(Il2CppObject **)(v35 + 32),
          (Il2CppObject *)v35,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
        if ( this->fields.isPaused )
          ScriptActionAdvPrefabActorController__Pause((ScriptActionAdvPrefabActorController_o *)v35, 1, v31);
      }
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
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

  if ( (byte_4C58A53 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58A53 = 1;
  }
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564(demoRootObject, 0);
  this->fields.demoRootObject = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.demoRootObject, 0, v4, v5);
  this->fields.actorDict = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.actorDict, 0, v6, v7);
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*p_renderTexture_k__BackingField, 0);
    *p_renderTexture_k__BackingField = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField, 0, v9, v10);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40580972(assetData, 0);
    this->fields.assetData = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetData, 0, v12, v13);
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

  if ( (byte_4C58A52 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C58A52 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C3E7C0(0, v6);
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

  if ( (byte_4C58A51 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4C58A51 = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C3E7C0(0, v6);
    ScriptActionAdvPrefabActorController__Show((ScriptActionAdvPrefabActorController_o *)value, v6);
  }
}


void ScriptActionAdvPrefabController__Setup(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4C58A4D & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_ScriptActionAdvPrefabController__Setup_b__16_0__);
    byte_4C58A4D = 1;
  }
  this->fields._isSetup_k__BackingField = 0;
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1C3E7C0(this, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_assetData, (int32_t)asset, (int32_t)method, v3);
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

  if ( (byte_4C58A4B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
    sub_1C3E564(&System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    sub_1C3E564(&Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__);
    sub_1C3E564(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4C58A4B = 1;
  }
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    sub_1C3E7C0(0, method);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
             (const MethodInfo_3475610 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v8,
      Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__,
      0);
    static_fields = ScriptActionAdvPrefabController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_ScriptActionAdvPrefabActorController__bool__o *)_9__12_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v10, v11);
  }
  return System_Linq_Enumerable__All_object_(
           v6,
           (System_Func_TSource__bool__o *)_9__12_0,
           (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
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
  sub_1C3E508(
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

  if ( (byte_4C58A55 & 1) == 0 )
  {
    sub_1C3E564(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4C58A55 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ScriptActionAdvPrefabController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptActionAdvPrefabController___c_TypeInfo->static_fields->__9 = (struct ScriptActionAdvPrefabController___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ScriptActionAdvPrefabController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return x->fields._IsGoNext_k__BackingField;
}