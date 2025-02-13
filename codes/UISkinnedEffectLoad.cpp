void __fastcall UISkinnedEffectLoad___ctor(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_array *__fastcall UISkinnedEffectLoad__GetEffectNames(
        UISkinnedEffectLoad_o *this,
        int32_t uiChangeType,
        const MethodInfo *method)
{
  System_String_array *result; // x0
  __int64 v6; // x1
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v8; // x3
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  System_Collections_Generic_List_string__o *EffectNameList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB3D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB3D9 = 1;
  }
  EffectNameList = 0LL;
  result = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_16;
  result = (System_String_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)result,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( result )
  {
    result = (System_String_array *)TerminalOverwriteMaster__TryGetOverwriteEffectNames(
                                      (TerminalOverwriteMaster_o *)result,
                                      this->fields.skinType,
                                      &EffectNameList,
                                      0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      result = (System_String_array *)EffectNameList;
      if ( EffectNameList )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)EffectNameList,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_16:
      sub_1C22094(result, v6);
    }
  }
  if ( this->fields.skinType != 7 )
    goto LABEL_12;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0LL);
  result = UISkinnedEffectLoad__GetReplaceEffectnames(this, uiChangeType, OverwriteUiVersion, v8);
  if ( !result )
  {
LABEL_12:
    skinEffects = this->fields.skinEffects;
    if ( !skinEffects )
      goto LABEL_16;
    if ( skinEffects->max_length <= uiChangeType )
      sub_1C2209C(result, v6);
    return skinEffects->m_Items[uiChangeType].fields.EffectName;
  }
  return result;
}


System_String_array *__fastcall UISkinnedEffectLoad__GetReplaceEffectnames(
        UISkinnedEffectLoad_o *this,
        int32_t uiChangeType,
        int32_t version,
        const MethodInfo *method)
{
  struct UISkinnedEffectLoad_ReplaceData_array *replaceDatas; // x8
  int max_length; // w9
  int v6; // w10
  UISkinnedEffectLoad_ReplaceData_o *v7; // x11

  replaceDatas = this->fields.replaceDatas;
  if ( !replaceDatas )
    return 0LL;
  max_length = replaceDatas->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = replaceDatas->m_Items[v6];
    if ( !v7 )
      sub_1C22094(this, uiChangeType);
    if ( v7->fields.UiChangeType == uiChangeType && v7->fields.Version == version )
      break;
    if ( max_length == ++v6 )
      return 0LL;
  }
  return v7->fields.EffectName;
}


void __fastcall UISkinnedEffectLoad__OnEnable(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  if ( !this->fields.isSetEffectsDone )
  {
    UISkinnedEffectLoad__SetEffects(this, method);
    this->fields.isSetEffectsDone = 1;
  }
}


void __fastcall UISkinnedEffectLoad__SetEffects(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  __int64 UiFlag; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  System_String_array *EffectNames; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 SetDepthZero; // w21
  UnityEngine_GameObject_o *v10; // x19

  if ( (byte_4BDB3D8 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    byte_4BDB3D8 = 1;
  }
  if ( this->fields.skinEffects )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    UiFlag = ServantCommentManager__GetUiFlag(0LL);
    skinEffects = this->fields.skinEffects;
    if ( !skinEffects )
      sub_1C22094(UiFlag, v4);
    if ( (int)UiFlag < (signed int)skinEffects->max_length )
    {
      EffectNames = UISkinnedEffectLoad__GetEffectNames(this, UiFlag, v5);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      SetDepthZero = this->fields.SetDepthZero;
      v10 = gameObject;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__SetSkinEffects(EffectNames, v10, SetDepthZero, 0LL);
    }
  }
}


void __fastcall UISkinnedEffectLoad_ReplaceData___ctor(
        UISkinnedEffectLoad_ReplaceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}