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

  if ( (byte_4CF053D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4CF053D = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    return 1;
  v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
  if ( !v6 )
    return 1;
  if ( !value )
    sub_1C7BD40(v6, v7);
  return LOBYTE(value[5].klass) != 0;
}


System_String_o *ScriptActionAdvPrefabController__GetAssetName(System_String_o *baseName, const MethodInfo *method)
{
  if ( (byte_4CF0539 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1920/*"ADV/{0}"*/);
    byte_4CF0539 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_1920/*"ADV/{0}"*/, (Il2CppObject *)baseName, 0);
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
  if ( (byte_4CF0541 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C7BAE8(&Method_ScriptActionAdvPrefabController__Pause_b__23_0__);
    byte_4CF0541 = 1;
  }
  actorDict = this->fields.actorDict;
  this->fields.isPaused = v4;
  if ( actorDict )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
               (const MethodInfo_34F22BC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    v7 = (System_Action_object__o *)sub_1C7BD34(System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ScriptActionAdvPrefabController__Pause_b__23_0__, 0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (System_Action_T__o *)v7,
      (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
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

  if ( (byte_4CF053C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4CF053C = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C7BD40(0, v8);
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
  UnityEngine_RenderTexture_o *Temporary_71777864; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UnityEngine_GameObject_o **p_demoRootObject; // x22
  UnityEngine_Object_o *demoRootObject; // x23
  __int64 v16; // x1
  void *assetData; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Object_o *v26; // x23
  Il2CppObject *Object_object__51713432; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int v36; // w8
  void *v37; // x21
  unsigned int v38; // w22
  System_Collections_Generic_Dictionary_object__object__o *v39; // x21
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o **p_actorDict; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  const MethodInfo *v47; // x2
  int v48; // w8
  void *v49; // x21
  unsigned int v50; // w24
  __int64 v51; // x23
  ScriptReplaceString_c *v52; // x0

  if ( (byte_4CF053B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    byte_4CF053B = 1;
  }
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(renderTexture_k__BackingField, 0, 0) )
  {
    if ( !byte_4CE7E58 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE7E58 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Temporary_71777864 = UnityEngine_RenderTexture__GetTemporary_71777864(1267, 576, 24, 0);
    *p_renderTexture_k__BackingField = Temporary_71777864;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
      (int32_t)Temporary_71777864,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
      v19 = (UnityEngine_Object_o *)*p_demoRootObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v19, 0);
      *p_demoRootObject = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.demoRootObject, 0, v20, v21, v22, v23, v24, v25);
    }
  }
  v26 = (UnityEngine_Object_o *)*p_demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v26, 0, 0) )
    return;
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_57;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              (AssetData_o *)assetData,
                              objectName,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__Instantiate_object__52412380(
          Object_object__51713432,
          transform,
          (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
  *p_demoRootObject = (struct UnityEngine_GameObject_o *)v29;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.demoRootObject, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)assetData, objectName, 0);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  assetData = UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                (UnityEngine_GameObject_o *)assetData,
                (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  if ( !assetData )
    goto LABEL_57;
  v36 = *((_DWORD *)assetData + 6);
  v37 = assetData;
  if ( v36 >= 1 )
  {
    v38 = 0;
    while ( v38 < v36 )
    {
      assetData = (void *)*((_QWORD *)v37 + (int)v38 + 4);
      if ( !assetData )
        goto LABEL_57;
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)assetData, *p_renderTexture_k__BackingField, 0);
      v36 = *((_DWORD *)v37 + 6);
      if ( (int)++v38 >= v36 )
        goto LABEL_33;
    }
LABEL_58:
    sub_1C7BD48(assetData);
  }
LABEL_33:
  v39 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v39,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
  this->fields.actorDict = (struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *)v39;
  p_actorDict = &this->fields.actorDict;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.actorDict, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  assetData = this->fields.demoRootObject;
  if ( !assetData
    || (assetData = UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                      (UnityEngine_GameObject_o *)assetData,
                      (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___)) == 0 )
  {
LABEL_57:
    sub_1C7BD40(assetData, v16);
  }
  v48 = *((_DWORD *)assetData + 6);
  v49 = assetData;
  if ( v48 >= 1 )
  {
    v50 = 0;
    while ( v50 < v48 )
    {
      v51 = *((_QWORD *)v49 + (int)v50 + 4);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4CF02FD )
      {
        sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
        byte_4CF02FD = 1;
      }
      assetData = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        assetData = ScriptReplaceString_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_57;
      assetData = (void *)ScriptActionAdvPrefabActorController__SetDisplay(
                            (ScriptActionAdvPrefabActorController_o *)v51,
                            *(_DWORD *)(*((_QWORD *)assetData + 23) + 8LL),
                            v47);
      if ( ((unsigned __int8)assetData & 1) != 0 )
      {
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        if ( !byte_4CF02FD )
        {
          sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
          byte_4CF02FD = 1;
        }
        v52 = ScriptReplaceString_TypeInfo;
        if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
          v52 = ScriptReplaceString_TypeInfo;
        }
        ScriptActionAdvPrefabActorController__SetGender(
          (ScriptActionAdvPrefabActorController_o *)v51,
          v52->static_fields->playerGenderIndex,
          v47);
        assetData = *p_actorDict;
        if ( !*p_actorDict )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)assetData,
          *(Il2CppObject **)(v51 + 32),
          (Il2CppObject *)v51,
          (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
        if ( this->fields.isPaused )
          ScriptActionAdvPrefabActorController__Pause((ScriptActionAdvPrefabActorController_o *)v51, 1, v47);
      }
      v48 = *((_DWORD *)v49 + 6);
      if ( (int)++v50 >= v48 )
        return;
    }
    goto LABEL_58;
  }
}


void ScriptActionAdvPrefabController__Release(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *demoRootObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_RenderTexture_o **p_renderTexture_k__BackingField; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  AssetData_o *assetData; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CF0540 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0540 = 1;
  }
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(demoRootObject, 0);
  this->fields.demoRootObject = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.demoRootObject, 0, v4, v5, v6, v7, v8, v9);
  this->fields.actorDict = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.actorDict, 0, v10, v11, v12, v13, v14, v15);
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*p_renderTexture_k__BackingField, 0);
    *p_renderTexture_k__BackingField = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41096272(assetData, 0);
    this->fields.assetData = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4CF053F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4CF053F = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C7BD40(0, v6);
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

  if ( (byte_4CF053E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_4CF053E = 1;
  }
  value = 0;
  actorDict = this->fields.actorDict;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_1C7BD40(0, v6);
    ScriptActionAdvPrefabActorController__Show((ScriptActionAdvPrefabActorController_o *)value, v6);
  }
}


void ScriptActionAdvPrefabController__Setup(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4CF053A & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_ScriptActionAdvPrefabController__Setup_b__16_0__);
    byte_4CF053A = 1;
  }
  this->fields._isSetup_k__BackingField = 0;
  v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1C7BD40(this, 0);
  ScriptActionAdvPrefabActorController__Pause(x, this->fields.isPaused, method);
}


void ScriptActionAdvPrefabController___Setup_b__16_0(
        ScriptActionAdvPrefabController_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct AssetData_o **p_assetData; // x0

  this->fields.assetData = asset;
  p_assetData = &this->fields.assetData;
  *((_BYTE *)p_assetData - 8) = 1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_assetData, (int32_t)asset, (int32_t)method, v3, v4, v5, v6, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CF0538 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
    sub_1C7BAE8(&System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    sub_1C7BAE8(&Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__);
    sub_1C7BAE8(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4CF0538 = 1;
  }
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    sub_1C7BD40(0, method);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
             (const MethodInfo_34F22BC *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v8,
      Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__,
      0);
    static_fields = ScriptActionAdvPrefabController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_ScriptActionAdvPrefabActorController__bool__o *)_9__12_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
      (int32_t)_9__12_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return System_Linq_Enumerable__All_object_(
           v6,
           (System_Func_TSource__bool__o *)_9__12_0,
           (const MethodInfo_317A8A4 *)Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._renderTexture_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptActionAdvPrefabController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0542 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_4CF0542 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ScriptActionAdvPrefabController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptActionAdvPrefabController___c_TypeInfo->static_fields->__9 = (struct ScriptActionAdvPrefabController___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ScriptActionAdvPrefabController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return x->fields._IsGoNext_k__BackingField;
}