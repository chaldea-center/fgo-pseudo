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
  System_String_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v12; // x3
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  System_Collections_Generic_List_string__o *EffectNameList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B30F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, *(_QWORD *)&uiChangeType);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B30F = 1;
  }
  EffectNameList = 0LL;
  result = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_16;
  result = (System_String_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)result,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_16:
      sub_1BCB254(result, v9);
    }
  }
  if ( this->fields.skinType != 7 )
    goto LABEL_12;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0LL);
  result = UISkinnedEffectLoad__GetReplaceEffectnames(this, uiChangeType, OverwriteUiVersion, v12);
  if ( !result )
  {
LABEL_12:
    skinEffects = this->fields.skinEffects;
    if ( !skinEffects )
      goto LABEL_16;
    if ( skinEffects->max_length <= uiChangeType )
      sub_1BCB25C(result, v9, v10);
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
      sub_1BCB254(this, uiChangeType);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t UiFlag; // w0
  const MethodInfo *v14; // x2
  struct UISkinnedEffectLoad_skinEffect_array *skinEffects; // x8
  int32_t v16; // w21
  CGThumbnailListItem_o *p_setEffectList; // x20
  struct System_Collections_Generic_List_GameObject__o *setEffectList; // x22
  UISkinnedEffectLoad___c_c *v19; // x0
  System_Func_object__bool__o *_9__9_0; // x23
  Il2CppObject *v21; // x24
  struct UISkinnedEffectLoad___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_String_array *EffectNames; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 SetDepthZero; // w22
  UnityEngine_GameObject_o *v52; // x19
  System_Collections_Generic_List_GameObject__o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4B1B30E & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GameObject___, v3);
    sub_1BCAFF8(&System_Func_GameObject__bool__TypeInfo, v4);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__, v11);
    sub_1BCAFF8(&UISkinnedEffectLoad___c_TypeInfo, v12);
    byte_4B1B30E = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  skinEffects = this->fields.skinEffects;
  if ( skinEffects )
  {
    v16 = UiFlag;
    if ( UiFlag < (signed int)skinEffects->max_length )
    {
      p_setEffectList = (CGThumbnailListItem_o *)&this->fields.setEffectList;
      setEffectList = this->fields.setEffectList;
      if ( setEffectList )
      {
        v19 = UISkinnedEffectLoad___c_TypeInfo;
        if ( !UISkinnedEffectLoad___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UISkinnedEffectLoad___c_TypeInfo);
          v19 = UISkinnedEffectLoad___c_TypeInfo;
        }
        _9__9_0 = (System_Func_object__bool__o *)v19->static_fields->__9__9_0;
        if ( !_9__9_0 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = UISkinnedEffectLoad___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__9_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__9_0, v21, Method_UISkinnedEffectLoad___c__SetEffects_b__9_0__, 0LL);
          static_fields = UISkinnedEffectLoad___c_TypeInfo->static_fields;
          static_fields->__9__9_0 = (struct System_Func_GameObject__bool__o *)_9__9_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v23, v24);
        }
        v25 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)setEffectList,
                (System_Func_TSource__bool__o *)_9__9_0,
                (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GameObject___);
        if ( !v25 )
          sub_1BCB254(0LL, v26);
        klass = v25->klass;
        v28 = v25;
        v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
          {
            --v29;
            p_offset += 4;
            if ( !v29 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_19:
          p_method = sub_1C1B560(v25, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
        }
        v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
                v28,
                *(_QWORD *)(p_method + 8));
        if ( !v33 )
          sub_1BCB254(0LL, v32);
        while ( 1 )
        {
          v34 = *(_QWORD *)v33;
          v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v35;
              v36 += 4;
              if ( !v35 )
                goto LABEL_27;
            }
            v37 = v34 + 16LL * *v36 + 312;
          }
          else
          {
LABEL_27:
            v37 = sub_1C1B560(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
            break;
          v38 = *(_QWORD *)v33;
          v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v40 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
            {
              --v39;
              v40 += 4;
              if ( !v39 )
                goto LABEL_34;
            }
            v41 = v38 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_34:
            v41 = sub_1C1B560(v33, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
          }
          v42 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
          v44 = (UnityEngine_Object_o *)v42;
          if ( !v42 )
            sub_1BCB254(0LL, v43);
          UnityEngine_GameObject__SetActive(v42, 0, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70136076(v44, 0LL);
        }
        v45 = *(_QWORD *)v33;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_44;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_44:
          v48 = sub_1C1B560(v33, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
      }
      EffectNames = UISkinnedEffectLoad__GetEffectNames(this, v16, v14);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      SetDepthZero = this->fields.SetDepthZero;
      v52 = gameObject;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v53 = CommonEffectManager__SetSkinEffects(EffectNames, v52, SetDepthZero, 0LL);
      p_setEffectList->klass = (CGThumbnailListItem_c *)v53;
      sub_1BCAF9C(p_setEffectList, (int32_t)v53, v54, v55);
    }
  }
}


void __fastcall UISkinnedEffectLoad_ReplaceData___ctor(
        UISkinnedEffectLoad_ReplaceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UISkinnedEffectLoad___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B310 & 1) == 0 )
  {
    sub_1BCAFF8(&UISkinnedEffectLoad___c_TypeInfo, v1);
    byte_4B1B310 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(UISkinnedEffectLoad___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UISkinnedEffectLoad___c_TypeInfo->static_fields->__9 = (struct UISkinnedEffectLoad___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)UISkinnedEffectLoad___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UISkinnedEffectLoad___c___ctor(UISkinnedEffectLoad___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UISkinnedEffectLoad___c___SetEffects_b__9_0(
        UISkinnedEffectLoad___c_o *this,
        UnityEngine_GameObject_o *setEffect,
        const MethodInfo *method)
{
  if ( (byte_4B1B311 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, setEffect);
    byte_4B1B311 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)setEffect, 0LL, 0LL);
}