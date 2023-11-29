void __fastcall UISkinnedEffectLoad___ctor(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall UISkinnedEffectLoad__GetEffectNames(
        UISkinnedEffectLoad_o *this,
        int32_t uiChangeType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  System_String_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UISkinnedEffectLoad_skinEffect_array **p_skinEffects; // x21
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v14; // x3
  struct UISkinnedEffectLoad_ReplaceData_array *replaceDatas; // x8
  System_Collections_Generic_List_string__o *EffectNameList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4104927 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, *(_QWORD *)&uiChangeType);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4104927 = 1;
  }
  EffectNameList = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  result = (System_String_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( result )
  {
    p_skinEffects = &this->fields.skinEffects;
    result = (System_String_array *)TerminalOverwriteMaster__TryGetOverwriteEffectNames(
                                      (TerminalOverwriteMaster_o *)result,
                                      (int32_t)this->fields.skinEffects,
                                      &EffectNameList,
                                      0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( EffectNameList )
        return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)EffectNameList,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_18:
      sub_B170D4();
    }
  }
  else
  {
    p_skinEffects = &this->fields.skinEffects;
  }
  if ( *(_DWORD *)p_skinEffects != 7 )
    goto LABEL_14;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0LL);
  result = UISkinnedEffectLoad__GetReplaceEffectnames(this, uiChangeType, OverwriteUiVersion, v14);
  if ( !result )
  {
LABEL_14:
    replaceDatas = this->fields.replaceDatas;
    if ( !replaceDatas )
      goto LABEL_18;
    if ( replaceDatas->max_length <= uiChangeType )
    {
      sub_B17100(result, v10, v11);
      sub_B170A0();
    }
    return (System_String_array *)replaceDatas->m_Items[uiChangeType];
  }
  return result;
}


System_String_array *__fastcall UISkinnedEffectLoad__GetReplaceEffectnames(
        UISkinnedEffectLoad_o *this,
        int32_t uiChangeType,
        int32_t version,
        const MethodInfo *method)
{
  __int64 v4; // x10
  int v5; // w8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // x11

  v4 = *(_QWORD *)&this->fields.SetDepthZero;
  if ( !v4 )
    return 0LL;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 < 1 )
    return 0LL;
  v6 = 0LL;
  v7 = v4 + 32;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 8 * v6);
    if ( !v8 )
      sub_B170D4();
    if ( *(_DWORD *)(v8 + 16) == uiChangeType && *(_DWORD *)(v8 + 20) == version )
      break;
    if ( (int)++v6 >= v5 )
      return 0LL;
  }
  return *(System_String_array **)(v8 + 24);
}


void __fastcall UISkinnedEffectLoad__OnEnable(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this[1].klass) )
  {
    UISkinnedEffectLoad__SetEffects(this, method);
    LOBYTE(this[1].klass) = 1;
  }
}


void __fastcall UISkinnedEffectLoad__SetEffects(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t UiFlag; // w0
  const MethodInfo *v5; // x2
  struct UISkinnedEffectLoad_ReplaceData_array *replaceDatas; // x8
  System_String_array *EffectNames; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int assetName_low; // w21
  UnityEngine_GameObject_o *v10; // x19

  if ( (byte_4104926 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v3);
    byte_4104926 = 1;
  }
  if ( this->fields.replaceDatas )
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    UiFlag = ServantCommentManager__GetUiFlag(0LL);
    replaceDatas = this->fields.replaceDatas;
    if ( !replaceDatas )
      sub_B170D4();
    if ( UiFlag < (signed int)replaceDatas->max_length )
    {
      EffectNames = UISkinnedEffectLoad__GetEffectNames(this, UiFlag, v5);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      assetName_low = LOBYTE(this->fields.assetName);
      v10 = gameObject;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__SetSkinEffects(EffectNames, v10, assetName_low != 0, 0LL);
    }
  }
}


void __fastcall UISkinnedEffectLoad_ReplaceData___ctor(
        UISkinnedEffectLoad_ReplaceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}