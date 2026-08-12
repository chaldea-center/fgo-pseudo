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

  if ( (byte_59727D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_59727D2 = 1;
  }
  actorDict = this->fields.actorDict;
  value = 0;
  if ( !actorDict )
    return 1;
  v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
  if ( !v6 )
    return 1;
  if ( !value )
    sub_2213CDC(v6, v7);
  return LOBYTE(value[5].klass) != 0;
}


System_String_o *ScriptActionAdvPrefabController__GetAssetName(System_String_o *baseName, const MethodInfo *method)
{
  if ( (byte_59727CE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_2006/*"ADV/{0}"*/);
    byte_59727CE = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_2006/*"ADV/{0}"*/, (Il2CppObject *)baseName, 0);
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
  if ( (byte_59727D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_2213A60(&Method_ScriptActionAdvPrefabController__Pause_b__23_0__);
    byte_59727D6 = 1;
  }
  actorDict = this->fields.actorDict;
  this->fields.isPaused = v4;
  if ( actorDict )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
               (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    v7 = (System_Action_object__o *)sub_2213CCC(System_Action_ScriptActionAdvPrefabActorController__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ScriptActionAdvPrefabController__Pause_b__23_0__, 0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (System_Action_T__o *)v7,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ScriptActionAdvPrefabActorController___);
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

  if ( (byte_59727D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_59727D1 = 1;
  }
  actorDict = this->fields.actorDict;
  value = 0;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_2213CDC(0, v8);
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
  __int64 v7; // x1
  UnityEngine_RenderTexture_o *Temporary_83342368; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UnityEngine_GameObject_o **p_demoRootObject; // x22
  UnityEngine_Object_o *demoRootObject; // x23
  __int64 v17; // x1
  void *assetData; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Object_o *v27; // x23
  Il2CppObject *Object_object__58532980; // x23
  __int64 v29; // x1
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int v38; // w8
  void *v39; // x21
  __int64 v40; // x22
  System_Collections_Generic_Dictionary_object__object__o *v41; // x21
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o **p_actorDict; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  const MethodInfo *v49; // x2
  int v50; // w8
  void *v51; // x21
  unsigned int v52; // w24
  __int64 v53; // x23
  ScriptReplaceString_c *v54; // x0

  if ( (byte_59727D0 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptReplaceString_TypeInfo);
    byte_59727D0 = 1;
  }
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, objectName);
  if ( UnityEngine_Object__op_Equality(renderTexture_k__BackingField, 0, 0) )
  {
    if ( !byte_5969ADF )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADF = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    Temporary_83342368 = UnityEngine_RenderTexture__GetTemporary_83342368(1267, 576, 24, 0);
    *p_renderTexture_k__BackingField = Temporary_83342368;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
      (int32_t)Temporary_83342368,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_demoRootObject = &this->fields.demoRootObject;
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(demoRootObject, 0, 0) )
  {
    assetData = *p_demoRootObject;
    if ( !*p_demoRootObject )
      goto LABEL_57;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)assetData, 0);
    if ( System_String__op_Inequality(name, objectName, 0) )
    {
      v20 = (UnityEngine_Object_o *)*p_demoRootObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__Destroy_83459800(v20, 0);
      *p_demoRootObject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.demoRootObject, 0, v21, v22, v23, v24, v25, v26);
    }
  }
  v27 = (UnityEngine_Object_o *)*p_demoRootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( !UnityEngine_Object__op_Equality(v27, 0, 0) )
    return;
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_57;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)assetData,
                              objectName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v31 = UnityEngine_Object__Instantiate_object__59717116(
          Object_object__58532980,
          transform,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  *p_demoRootObject = (struct UnityEngine_GameObject_o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.demoRootObject,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)assetData, objectName, 0);
  assetData = *p_demoRootObject;
  if ( !*p_demoRootObject )
    goto LABEL_57;
  assetData = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                (UnityEngine_GameObject_o *)assetData,
                (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  if ( !assetData )
    goto LABEL_57;
  v38 = *((_DWORD *)assetData + 6);
  v39 = assetData;
  if ( v38 >= 1 )
  {
    v40 = 0;
    while ( (unsigned int)v40 < v38 )
    {
      assetData = (void *)*((_QWORD *)v39 + v40 + 4);
      if ( !assetData )
        goto LABEL_57;
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)assetData, *p_renderTexture_k__BackingField, 0);
      v38 = *((_DWORD *)v39 + 6);
      if ( (int)++v40 >= v38 )
        goto LABEL_33;
    }
LABEL_58:
    sub_2213CE4(assetData);
  }
LABEL_33:
  v41 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v41,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController___ctor__);
  this->fields.actorDict = (struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *)v41;
  p_actorDict = &this->fields.actorDict;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.actorDict, (int32_t)v41, v43, v44, v45, v46, v47, v48);
  assetData = this->fields.demoRootObject;
  if ( !assetData
    || (assetData = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                      (UnityEngine_GameObject_o *)assetData,
                      (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ScriptActionAdvPrefabActorController___)) == 0 )
  {
LABEL_57:
    sub_2213CDC(assetData, v17);
  }
  v50 = *((_DWORD *)assetData + 6);
  v51 = assetData;
  if ( v50 >= 1 )
  {
    v52 = 0;
    while ( v52 < v50 )
    {
      v53 = *((_QWORD *)v51 + (int)v52 + 4);
      if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v17);
      if ( !byte_59725AE )
      {
        sub_2213A60(&ScriptReplaceString_TypeInfo);
        byte_59725AE = 1;
      }
      assetData = ScriptReplaceString_TypeInfo;
      if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v17);
        assetData = ScriptReplaceString_TypeInfo;
      }
      if ( !v53 )
        goto LABEL_57;
      assetData = (void *)ScriptActionAdvPrefabActorController__SetDisplay(
                            (ScriptActionAdvPrefabActorController_o *)v53,
                            *(_DWORD *)(*((_QWORD *)assetData + 23) + 8LL),
                            v49);
      if ( ((unsigned __int8)assetData & 1) != 0 )
      {
        if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v17);
        if ( !byte_59725AE )
        {
          sub_2213A60(&ScriptReplaceString_TypeInfo);
          byte_59725AE = 1;
        }
        v54 = ScriptReplaceString_TypeInfo;
        if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v17);
          v54 = ScriptReplaceString_TypeInfo;
        }
        ScriptActionAdvPrefabActorController__SetGender(
          (ScriptActionAdvPrefabActorController_o *)v53,
          v54->static_fields->playerGenderIndex,
          v49);
        assetData = *p_actorDict;
        if ( !*p_actorDict )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)assetData,
          *(Il2CppObject **)(v53 + 32),
          (Il2CppObject *)v53,
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__Add__);
        if ( this->fields.isPaused )
          ScriptActionAdvPrefabActorController__Pause((ScriptActionAdvPrefabActorController_o *)v53, 1, v49);
      }
      v50 = *((_DWORD *)v51 + 6);
      if ( (int)++v52 >= v50 )
        return;
    }
    goto LABEL_58;
  }
}


void ScriptActionAdvPrefabController__Release(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *demoRootObject; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_RenderTexture_o **p_renderTexture_k__BackingField; // x20
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  AssetData_o *assetData; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_59727D5 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59727D5 = 1;
  }
  demoRootObject = (UnityEngine_Object_o *)this->fields.demoRootObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(demoRootObject, 0);
  this->fields.demoRootObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.demoRootObject, 0, v4, v5, v6, v7, v8, v9);
  this->fields.actorDict = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.actorDict, 0, v10, v11, v12, v13, v14, v15);
  p_renderTexture_k__BackingField = &this->fields._renderTexture_k__BackingField;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*p_renderTexture_k__BackingField, 0);
    *p_renderTexture_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
      0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v25, v26, v27, v28, v29, v30);
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

  if ( (byte_59727D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_59727D4 = 1;
  }
  actorDict = this->fields.actorDict;
  value = 0;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_2213CDC(0, v6);
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

  if ( (byte_59727D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__);
    byte_59727D3 = 1;
  }
  actorDict = this->fields.actorDict;
  value = 0;
  if ( actorDict
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
         (Il2CppObject *)actorName,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__TryGetValue__) )
  {
    if ( !value )
      sub_2213CDC(0, v6);
    ScriptActionAdvPrefabActorController__Show((ScriptActionAdvPrefabActorController_o *)value, v6);
  }
}


void ScriptActionAdvPrefabController__Setup(
        ScriptActionAdvPrefabController_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_c *v5; // x0
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  __int64 v7; // x1

  if ( (byte_59727CF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ScriptActionAdvPrefabController__Setup_b__16_0__);
    byte_59727CF = 1;
  }
  v5 = AssetLoader_LoadEndDataHandler_TypeInfo;
  this->fields._isSetup_k__BackingField = 0;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v5);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ScriptActionAdvPrefabController__Setup_b__16_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage(assetName, v6, 1, 0, 0);
}


void ScriptActionAdvPrefabController___Pause_b__23_0(
        ScriptActionAdvPrefabController_o *this,
        ScriptActionAdvPrefabActorController_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ScriptActionAdvPrefabActorController__Pause(x, this->fields.isPaused, method);
}


void ScriptActionAdvPrefabController___Setup_b__16_0(
        ScriptActionAdvPrefabController_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct AssetData_o **p_assetData; // x0

  this->fields.assetData = asset;
  p_assetData = &this->fields.assetData;
  *((_BYTE *)p_assetData - 8) = 1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_assetData,
    (int32_t)asset,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool ScriptActionAdvPrefabController__get_IsGoNext(ScriptActionAdvPrefabController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__o *actorDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v5; // x1
  ScriptActionAdvPrefabController___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct ScriptActionAdvPrefabController___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v10; // x21
  struct ScriptActionAdvPrefabController___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59727CD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
    sub_2213A60(&Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
    sub_2213A60(&System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    sub_2213A60(&Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__);
    sub_2213A60(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_59727CD = 1;
  }
  actorDict = this->fields.actorDict;
  if ( !actorDict )
    sub_2213CDC(0, method);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)actorDict,
             (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__ScriptActionAdvPrefabActorController__get_Values__);
  v6 = ScriptActionAdvPrefabController___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !*(&ScriptActionAdvPrefabController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptActionAdvPrefabController___c_TypeInfo, v5);
    v6 = ScriptActionAdvPrefabController___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = ScriptActionAdvPrefabController___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ScriptActionAdvPrefabActorController__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v10,
      Method_ScriptActionAdvPrefabController___c__get_IsGoNext_b__12_0__,
      0);
    v11 = ScriptActionAdvPrefabController___c_TypeInfo->static_fields;
    v11->__9__12_0 = (struct System_Func_ScriptActionAdvPrefabActorController__bool__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__12_0, (int32_t)_9__12_0, v12, v13, v14, v15, v16, v17);
  }
  return System_Linq_Enumerable__All_object_(
           v7,
           (System_Func_TSource__bool__o *)_9__12_0,
           (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_ScriptActionAdvPrefabActorController___);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._renderTexture_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptActionAdvPrefabController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59727D7 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionAdvPrefabController___c_TypeInfo);
    byte_59727D7 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ScriptActionAdvPrefabController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptActionAdvPrefabController___c_TypeInfo->static_fields->__9 = (struct ScriptActionAdvPrefabController___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ScriptActionAdvPrefabController___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields._IsGoNext_k__BackingField;
}