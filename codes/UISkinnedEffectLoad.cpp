void UISkinnedEffectLoad___ctor(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_array *UISkinnedEffectLoad__GetEffectNames(
        UISkinnedEffectLoad_o *this,
        int32_t uiChangeType,
        const MethodInfo *method)
{
  System_String_array *result; // x0
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v7; // x3
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  System_Collections_Generic_List_string__o *EffectNameList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C41D67 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C41D67 = 1;
  }
  EffectNameList = 0;
  result = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_16;
  result = (System_String_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)result,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( result )
  {
    result = (System_String_array *)TerminalOverwriteMaster__TryGetOverwriteEffectNames(
                                      (TerminalOverwriteMaster_o *)result,
                                      this->fields.skinType,
                                      &EffectNameList,
                                      0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      result = (System_String_array *)EffectNameList;
      if ( EffectNameList )
        return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)EffectNameList,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_16:
      sub_1C372B4(result);
    }
  }
  if ( this->fields.skinType != 7 )
    goto LABEL_12;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0);
  result = UISkinnedEffectLoad__GetReplaceEffectnames(this, uiChangeType, OverwriteUiVersion, v7);
  if ( !result )
  {
LABEL_12:
    skinEffects = this->fields.skinEffects;
    if ( !skinEffects )
      goto LABEL_16;
    if ( LODWORD(skinEffects->max_length) <= uiChangeType )
      sub_1C372BC(result);
    return skinEffects->m_Items[uiChangeType].fields.EffectName;
  }
  return result;
}


System_String_array *UISkinnedEffectLoad__GetReplaceEffectnames(
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
    return 0;
  max_length = replaceDatas->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = replaceDatas->m_Items[v6];
    if ( !v7 )
      sub_1C372B4(this);
    if ( v7->fields.UiChangeType == uiChangeType && v7->fields.Version == version )
      break;
    if ( max_length == ++v6 )
      return 0;
  }
  return v7->fields.EffectName;
}


void UISkinnedEffectLoad__OnEnable(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  if ( !this->fields.isSetEffectsDone )
  {
    UISkinnedEffectLoad__SetEffects(this, method);
    this->fields.isSetEffectsDone = 1;
  }
}


void UISkinnedEffectLoad__SetEffects(UISkinnedEffectLoad_o *this, const MethodInfo *method)
{
  int32_t UiFlag; // w0
  const MethodInfo *v4; // x2
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  int32_t v6; // w21
  CGThumbnailListItem_o *p_setEffectList; // x20
  struct System_Collections_Generic_List_GameObject__o *setEffectList; // x22
  UISkinnedEffectLoad___c_c *v9; // x0
  System_Func_object__bool__o *_9__9_0; // x23
  Il2CppObject *v11; // x24
  struct UISkinnedEffectLoad___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *v31; // x23
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_String_array *EffectNames; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 SetDepthZero; // w22
  UnityEngine_GameObject_o *v39; // x19
  System_Collections_Generic_List_GameObject__o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4C41D66 & 1) == 0 )
  {
    sub_1C37058(&CommonEffectManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C37058(&System_Func_GameObject__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__);
    sub_1C37058(&UISkinnedEffectLoad___c_TypeInfo);
    byte_4C41D66 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  skinEffects = this->fields.skinEffects;
  if ( skinEffects )
  {
    v6 = UiFlag;
    if ( UiFlag < SLODWORD(skinEffects->max_length) )
    {
      p_setEffectList = (CGThumbnailListItem_o *)&this->fields.setEffectList;
      setEffectList = this->fields.setEffectList;
      if ( setEffectList )
      {
        v9 = UISkinnedEffectLoad___c_TypeInfo;
        if ( !UISkinnedEffectLoad___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UISkinnedEffectLoad___c_TypeInfo);
          v9 = UISkinnedEffectLoad___c_TypeInfo;
        }
        _9__9_0 = (System_Func_object__bool__o *)v9->static_fields->__9__9_0;
        if ( !_9__9_0 )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = UISkinnedEffectLoad___c_TypeInfo;
          }
          v11 = (Il2CppObject *)v9->static_fields->__9;
          _9__9_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GameObject__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__9_0, v11, Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__, 0);
          static_fields = UISkinnedEffectLoad___c_TypeInfo->static_fields;
          static_fields->__9__9_0 = (struct System_Func_GameObject__bool__o *)_9__9_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14);
        }
        v15 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)setEffectList,
                (System_Func_TSource__bool__o *)_9__9_0,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GameObject___);
        if ( !v15 )
          sub_1C372B4(0);
        klass = v15->klass;
        v17 = v15;
        v18 = *(unsigned __int16 *)&v15->klass->_2.rank;
        if ( *(_WORD *)&v15->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
          {
            --v18;
            p_offset += 4;
            if ( !v18 )
              goto LABEL_19;
          }
          v20 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_19:
          v20 = sub_1C87870(v15, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0);
        }
        v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v20)(
                v17,
                *(_QWORD *)(v20 + 8));
        if ( !v21 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_27;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_27:
            v25 = sub_1C87870(v21, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
            break;
          v26 = *(_QWORD *)v21;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v28 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_34;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_34:
            v29 = sub_1C87870(v21, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0);
          }
          v30 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
          v31 = (UnityEngine_Object_o *)v30;
          if ( !v30 )
            sub_1C372B4(0);
          UnityEngine_GameObject__SetActive(v30, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752(v31, 0);
        }
        v32 = *(_QWORD *)v21;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_44;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_44:
          v35 = sub_1C87870(v21, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v35)(v21, *(_QWORD *)(v35 + 8));
      }
      EffectNames = UISkinnedEffectLoad__GetEffectNames(this, v6, v4);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      SetDepthZero = this->fields.SetDepthZero;
      v39 = gameObject;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v40 = CommonEffectManager__SetSkinEffects(EffectNames, v39, SetDepthZero, 0);
      p_setEffectList->klass = (CGThumbnailListItem_c *)v40;
      sub_1C36FFC(p_setEffectList, (int32_t)v40, v41, v42);
    }
  }
}


void UISkinnedEffectLoad_ReplaceData___ctor(UISkinnedEffectLoad_ReplaceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UISkinnedEffectLoad___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C41D68 & 1) == 0 )
  {
    sub_1C37058(&UISkinnedEffectLoad___c_TypeInfo);
    byte_4C41D68 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UISkinnedEffectLoad___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UISkinnedEffectLoad___c_TypeInfo->static_fields->__9 = (struct UISkinnedEffectLoad___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UISkinnedEffectLoad___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UISkinnedEffectLoad___c___ctor(UISkinnedEffectLoad___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UISkinnedEffectLoad___c___SetEffects_b__9_0(
        UISkinnedEffectLoad___c_o *this,
        UnityEngine_GameObject_o *setEffect,
        const MethodInfo *method)
{
  if ( (byte_4C41D69 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41D69 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)setEffect, 0, 0);
}