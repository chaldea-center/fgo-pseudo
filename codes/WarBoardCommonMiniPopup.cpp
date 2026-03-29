void WarBoardCommonMiniPopup___ctor(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8

  if ( (byte_4D2E67A & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardCommonMiniPopup_LineLayout___TypeInfo);
    sub_1C93AD4(&WarBoardInfoPopupBase_TypeInfo);
    byte_4D2E67A = 1;
  }
  v3 = sub_1C93B7C(WarBoardCommonMiniPopup_LineLayout___TypeInfo, 2);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_QWORD *)(v3 + 32) = 0xC1B0000042080000LL, v11 == 1) )
    sub_1C93D34(v3);
  *(_QWORD *)(v3 + 40) = 0xC208000041E80000LL;
  this->fields.lineLayouts = (struct WarBoardCommonMiniPopup_LineLayout_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.lineLayouts, v3, v5, v6, v7, v8, v9, v10);
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardCommonMiniPopup__ClosePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4D2E679 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2E679 = 1;
  }
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0);
  v18 = v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1C940C8(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback,
    (int32_t)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


int32_t WarBoardCommonMiniPopup__GetLineCount(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  WarBoardCommonMiniPopup___c_c *v4; // x0
  System_Func_char__bool__o *_9__11_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardCommonMiniPopup___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2E675 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_char___);
    sub_1C93AD4(&System_Func_char__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__);
    sub_1C93AD4(&WarBoardCommonMiniPopup___c_TypeInfo);
    byte_4D2E675 = 1;
  }
  v4 = WarBoardCommonMiniPopup___c_TypeInfo;
  if ( !WarBoardCommonMiniPopup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardCommonMiniPopup___c_TypeInfo);
    v4 = WarBoardCommonMiniPopup___c_TypeInfo;
  }
  _9__11_0 = v4->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardCommonMiniPopup___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__11_0 = (System_Func_char__bool__o *)sub_1C93D20(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(_9__11_0, v6, Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__, 0);
    static_fields = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Linq_Enumerable__Count_char_(
           (System_Collections_Generic_IEnumerable_TSource__o *)message,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_31C4FA8 *)Method_System_Linq_Enumerable_Count_char___)
       + 1;
}


WarBoardCommonMiniPopup_LineLayout_o WarBoardCommonMiniPopup__GetLineLayout(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 LineCount; // x0
  __int64 v5; // x1
  struct WarBoardCommonMiniPopup_LineLayout_array *lineLayouts; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v8; // w10
  __int64 v9; // x9
  float *v10; // x8
  WarBoardCommonMiniPopup_LineLayout_o result; // 0:s0.4,4:s1.4

  LineCount = WarBoardCommonMiniPopup__GetLineCount(this, message, method);
  lineLayouts = this->fields.lineLayouts;
  if ( !lineLayouts )
    sub_1C93D2C(LineCount, v5);
  max_length = lineLayouts->max_length;
  v8 = LineCount - 1;
  if ( (int)LineCount - 1 >= (int)max_length )
  {
    if ( (_DWORD)max_length )
    {
      v9 = (int)max_length - 1;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C93D34(LineCount);
  }
  if ( v8 >= (unsigned int)max_length )
    goto LABEL_9;
  v9 = (int)v8;
LABEL_7:
  v10 = (float *)(&lineLayouts->obj.klass + v9);
  result.fields.MessagePosY = v10[8];
  result.fields.ButtonRootPosY = v10[9];
  return result;
}


void WarBoardCommonMiniPopup__Initialize(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1C93D2C(0, v3);
  UISkinSprite__setupSprite(windowBase, 0, 0);
}


void WarBoardCommonMiniPopup__OnClickClose(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4D2E678 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WarBoardCommonMiniPopup_OnClickClose__);
    byte_4D2E678 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardCommonMiniPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        1,
        clickCallback->fields.method);
  }
}


void WarBoardCommonMiniPopup__OnClickNo(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4D2E677 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WarBoardCommonMiniPopup_OnClickNo__);
    byte_4D2E677 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickNo__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickNo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardCommonMiniPopup_OnClickNo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        0,
        clickCallback->fields.method);
  }
}


void WarBoardCommonMiniPopup__OnClickYes(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4D2E676 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WarBoardCommonMiniPopup_OnClickYes__);
    byte_4D2E676 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickYes__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickYes__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardCommonMiniPopup_OnClickYes__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        1,
        clickCallback->fields.method);
  }
}


void WarBoardCommonMiniPopup__OpenConfirmPopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *yesButton,
        System_String_o *noButton,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v12; // x2
  WarBoardCommonMiniPopup_LineLayout_o v13; // x1
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr20_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v18; // 0:kr14_12.12
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    (int32_t)message,
    (int32_t)yesButton,
    noButton,
    (int32_t)method,
    v6,
    v7);
  LineLayout = WarBoardCommonMiniPopup__GetLineLayout(this, message, v12);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 0, 0);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 1, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v19.fields.x = localPosition.fields.x;
  v19.fields.y = LineLayout.fields.MessagePosY;
  v19.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v19, 0);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, 0);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0);
  if ( !noticeButtonRoot
    || (v20.fields.x = v18.fields.x,
        v20.fields.y = LineLayout.fields.ButtonRootPosY,
        v20.fields.z = v18.fields.z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v20, 0),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.yesButtonLabel) == 0)
    || (UILabel__set_text((UILabel_o *)noticeButtonRoot, yesButton, 0),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.noButtonLabel) == 0) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(noticeButtonRoot, v13);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, noButton, 0);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v16);
}


void WarBoardCommonMiniPopup__OpenNoticePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *closeButton,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x2
  WarBoardCommonMiniPopup_LineLayout_o v12; // x1
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr20_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:kr14_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    (int32_t)message,
    (int32_t)closeButton,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  LineLayout = WarBoardCommonMiniPopup__GetLineLayout(this, message, v11);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 1, 0);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 0, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v18.fields.x = localPosition.fields.x;
  v18.fields.y = LineLayout.fields.MessagePosY;
  v18.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v18, 0);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, 0);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot
    || (noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0)) == 0
    || (v19.fields.x = v17.fields.x,
        v19.fields.y = LineLayout.fields.ButtonRootPosY,
        v19.fields.z = v17.fields.z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v19, 0),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.closeButtonLabel) == 0) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(noticeButtonRoot, v12);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, closeButton, 0);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v15);
}


void WarBoardCommonMiniPopup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E67B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardCommonMiniPopup___c_TypeInfo);
    byte_4D2E67B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardCommonMiniPopup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardCommonMiniPopup___c_TypeInfo->static_fields->__9 = (struct WarBoardCommonMiniPopup___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardCommonMiniPopup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardCommonMiniPopup___c___ctor(WarBoardCommonMiniPopup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardCommonMiniPopup___c___GetLineCount_b__11_0(
        WarBoardCommonMiniPopup___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  return x == 10;
}