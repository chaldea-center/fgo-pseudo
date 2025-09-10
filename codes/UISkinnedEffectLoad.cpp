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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v9; // x3
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  System_Collections_Generic_List_string__o *EffectNameList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C260A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C260A0 = 1;
  }
  EffectNameList = 0;
  result = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_16;
  result = (System_String_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)result,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_16:
      sub_1C2D6EC(result, v6);
    }
  }
  if ( this->fields.skinType != 7 )
    goto LABEL_12;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0);
  result = UISkinnedEffectLoad__GetReplaceEffectnames(this, uiChangeType, OverwriteUiVersion, v9);
  if ( !result )
  {
LABEL_12:
    skinEffects = this->fields.skinEffects;
    if ( !skinEffects )
      goto LABEL_16;
    if ( LODWORD(skinEffects->max_length) <= uiChangeType )
      sub_1C2D6F4(result, v6, v7);
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
      sub_1C2D6EC(this, uiChangeType);
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
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_String_array *EffectNames; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 SetDepthZero; // w22
  UnityEngine_GameObject_o *v42; // x19
  System_Collections_Generic_List_GameObject__o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4C2609F & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C2D490(&System_Func_GameObject__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__);
    sub_1C2D490(&UISkinnedEffectLoad___c_TypeInfo);
    byte_4C2609F = 1;
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
          _9__9_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GameObject__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__9_0, v11, Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__, 0);
          static_fields = UISkinnedEffectLoad___c_TypeInfo->static_fields;
          static_fields->__9__9_0 = (struct System_Func_GameObject__bool__o *)_9__9_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14);
        }
        v15 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)setEffectList,
                (System_Func_TSource__bool__o *)_9__9_0,
                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GameObject___);
        if ( !v15 )
          sub_1C2D6EC(0, v16);
        klass = v15->klass;
        v18 = v15;
        v19 = *(unsigned __int16 *)&v15->klass->_2.rank;
        if ( *(_WORD *)&v15->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
          {
            --v19;
            p_offset += 4;
            if ( !v19 )
              goto LABEL_19;
          }
          v21 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_19:
          v21 = sub_1C7DCA8(v15, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0);
        }
        v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v21)(
                v18,
                *(_QWORD *)(v21 + 8));
        if ( !v23 )
          sub_1C2D6EC(0, v22);
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_27;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_27:
            v27 = sub_1C7DCA8(v23, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v30 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_34;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_34:
            v31 = sub_1C7DCA8(v23, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0);
          }
          v32 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          v34 = (UnityEngine_Object_o *)v32;
          if ( !v32 )
            sub_1C2D6EC(0, v33);
          UnityEngine_GameObject__SetActive(v32, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71163704(v34, 0);
        }
        v35 = *(_QWORD *)v23;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_44;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_44:
          v38 = sub_1C7DCA8(v23, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8));
      }
      EffectNames = UISkinnedEffectLoad__GetEffectNames(this, v6, v4);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      SetDepthZero = this->fields.SetDepthZero;
      v42 = gameObject;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v43 = CommonEffectManager__SetSkinEffects(EffectNames, v42, SetDepthZero, 0);
      p_setEffectList->klass = (CGThumbnailListItem_c *)v43;
      sub_1C2D434(p_setEffectList, (int32_t)v43, v44, v45);
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

  if ( (byte_4C260A1 & 1) == 0 )
  {
    sub_1C2D490(&UISkinnedEffectLoad___c_TypeInfo);
    byte_4C260A1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UISkinnedEffectLoad___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UISkinnedEffectLoad___c_TypeInfo->static_fields->__9 = (struct UISkinnedEffectLoad___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UISkinnedEffectLoad___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C260A2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C260A2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)setEffect, 0, 0);
}