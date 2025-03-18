void __fastcall WarBoardCommonMiniPopup___ctor(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int v12; // w8

  if ( (byte_4C1FDAB & 1) == 0 )
  {
    sub_1C3B764(&WarBoardCommonMiniPopup_LineLayout___TypeInfo, method);
    sub_1C3B764(&WarBoardInfoPopupBase_TypeInfo, v3);
    byte_4C1FDAB = 1;
  }
  v4 = sub_1C3B80C(WarBoardCommonMiniPopup_LineLayout___TypeInfo, 2LL);
  if ( !v4 )
    sub_1C3B9C0(0LL, v5);
  v12 = *(_DWORD *)(v4 + 24);
  if ( !v12 || (*(_QWORD *)(v4 + 32) = 0xC1B0000042080000LL, v12 == 1) )
    sub_1C3B9C8(v4, v4);
  *(_QWORD *)(v4 + 40) = 0xC208000041E80000LL;
  this->fields.lineLayouts = (struct WarBoardCommonMiniPopup_LineLayout_array *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.lineLayouts, v4, v6, v7, v8, v9, v10, v11);
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardCommonMiniPopup__ClosePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4C1FDAA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, hideCallback);
    byte_4C1FDAA = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  v18 = (int64_t)v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1C3BC80(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback, v18, v12, v13, v14, v15, v16, v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


int32_t __fastcall WarBoardCommonMiniPopup__GetLineCount(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardCommonMiniPopup___c_c *v7; // x0
  System_Func_char__bool__o *_9__11_0; // x20
  Il2CppObject *v9; // x21
  struct WarBoardCommonMiniPopup___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1FDA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_char___, message);
    sub_1C3B764(&System_Func_char__bool__TypeInfo, v4);
    sub_1C3B764(&Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__, v5);
    sub_1C3B764(&WarBoardCommonMiniPopup___c_TypeInfo, v6);
    byte_4C1FDA6 = 1;
  }
  v7 = WarBoardCommonMiniPopup___c_TypeInfo;
  if ( !WarBoardCommonMiniPopup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardCommonMiniPopup___c_TypeInfo);
    v7 = WarBoardCommonMiniPopup___c_TypeInfo;
  }
  _9__11_0 = v7->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardCommonMiniPopup___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__11_0 = (System_Func_char__bool__o *)sub_1C3B9B0(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(_9__11_0, v9, Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__, 0LL);
    static_fields = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Linq_Enumerable__Count_char_(
           (System_Collections_Generic_IEnumerable_TSource__o *)message,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_300C2CC *)Method_System_Linq_Enumerable_Count_char___)
       + 1;
}


WarBoardCommonMiniPopup_LineLayout_o __fastcall WarBoardCommonMiniPopup__GetLineLayout(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 LineCount; // x0
  __int64 v5; // x1
  struct WarBoardCommonMiniPopup_LineLayout_array *lineLayouts; // x8
  __int64 v7; // x9
  unsigned int v8; // w10
  __int64 v9; // x9
  float *v10; // x8
  float v11; // s0
  float v12; // s1
  WarBoardCommonMiniPopup_LineLayout_o result; // 0:s0.4,4:s1.4

  LineCount = WarBoardCommonMiniPopup__GetLineCount(this, message, method);
  lineLayouts = this->fields.lineLayouts;
  if ( !lineLayouts )
    sub_1C3B9C0(LineCount, v5);
  v7 = *(_QWORD *)&lineLayouts->max_length;
  v8 = LineCount - 1;
  if ( (int)LineCount - 1 >= (int)v7 )
  {
    if ( (_DWORD)v7 )
    {
      v9 = (int)v7 - 1;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C3B9C8(LineCount, v5);
  }
  if ( v8 >= (unsigned int)v7 )
    goto LABEL_9;
  v9 = (int)v8;
LABEL_7:
  v10 = (float *)(&lineLayouts->obj.klass + v9);
  v11 = v10[8];
  v12 = v10[9];
  result.fields.ButtonRootPosY = v12;
  result.fields.MessagePosY = v11;
  return result;
}


void __fastcall WarBoardCommonMiniPopup__Initialize(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1C3B9C0(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardCommonMiniPopup__OnClickClose(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4C1FDA9 & 1) == 0 )
  {
    sub_1C3B764(&Method_WarBoardCommonMiniPopup_OnClickClose__, method);
    byte_4C1FDA9 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_WarBoardCommonMiniPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickNo(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4C1FDA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_WarBoardCommonMiniPopup_OnClickNo__, method);
    byte_4C1FDA8 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickNo__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickNo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_WarBoardCommonMiniPopup_OnClickNo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickYes(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4C1FDA7 & 1) == 0 )
  {
    sub_1C3B764(&Method_WarBoardCommonMiniPopup_OnClickYes__, method);
    byte_4C1FDA7 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardCommonMiniPopup_OnClickYes__;
    if ( (*((_BYTE *)Method_WarBoardCommonMiniPopup_OnClickYes__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_WarBoardCommonMiniPopup_OnClickYes__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCommonMiniPopup__OpenConfirmPopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *yesButton,
        System_String_o *noButton,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v12; // x2
  WarBoardCommonMiniPopup_LineLayout_o v13; // x1
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr00_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  float v16; // s0
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float v20; // s0
  float v21; // s2
  float v22; // s9
  float v23; // s10
  const MethodInfo *v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    (int64_t)message,
    (int32_t)yesButton,
    noButton,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  LineLayout = WarBoardCommonMiniPopup__GetLineLayout(this, message, v12);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 0, 0LL);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 1, 0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)noticeButtonRoot,
                                     0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v18 = v16;
  v19 = v17;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v25.fields.x = v18;
  v25.fields.y = LineLayout.fields.MessagePosY;
  v25.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v25, 0LL);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)noticeButtonRoot,
                                     0LL);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v22 = v20;
  v23 = v21;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0LL);
  if ( !noticeButtonRoot
    || (v26.fields.x = v22,
        v26.fields.y = LineLayout.fields.ButtonRootPosY,
        v26.fields.z = v23,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v26, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.yesButtonLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)noticeButtonRoot, yesButton, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.noButtonLabel) == 0LL) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C3B9C0)(noticeButtonRoot, v13);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, noButton, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCommonMiniPopup__OpenNoticePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *closeButton,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v11; // x2
  WarBoardCommonMiniPopup_LineLayout_o v12; // x1
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr00_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  float v15; // s0
  float v16; // s2
  float v17; // s10
  float v18; // s11
  float v19; // s0
  float v20; // s2
  float v21; // s9
  float v22; // s10
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    (int64_t)message,
    (int32_t)closeButton,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  LineLayout = WarBoardCommonMiniPopup__GetLineLayout(this, message, v11);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 1, 0LL);
  noticeButtonRoot = this->fields.cofirmButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(noticeButtonRoot, 0, 0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)noticeButtonRoot,
                                     0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v17 = v15;
  v18 = v16;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)noticeButtonRoot,
                                                   0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v24.fields.x = v17;
  v24.fields.y = LineLayout.fields.MessagePosY;
  v24.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v24, 0LL);
  noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.messgeLabel;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)noticeButtonRoot, message, 0LL);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0LL);
  if ( !noticeButtonRoot )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)noticeButtonRoot,
                                     0LL);
  noticeButtonRoot = this->fields.noticeButtonRoot;
  if ( !noticeButtonRoot )
    goto LABEL_15;
  v21 = v19;
  v22 = v20;
  noticeButtonRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noticeButtonRoot, 0LL);
  if ( !noticeButtonRoot
    || (v25.fields.x = v21,
        v25.fields.y = LineLayout.fields.ButtonRootPosY,
        v25.fields.z = v22,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v25, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.closeButtonLabel) == 0LL) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C3B9C0)(noticeButtonRoot, v12);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, closeButton, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v23);
}


void __fastcall WarBoardCommonMiniPopup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1FDAC & 1) == 0 )
  {
    sub_1C3B764(&WarBoardCommonMiniPopup___c_TypeInfo, v1);
    byte_4C1FDAC = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(WarBoardCommonMiniPopup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardCommonMiniPopup___c_TypeInfo->static_fields->__9 = (struct WarBoardCommonMiniPopup___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)WarBoardCommonMiniPopup___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardCommonMiniPopup___c___ctor(WarBoardCommonMiniPopup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardCommonMiniPopup___c___GetLineCount_b__11_0(
        WarBoardCommonMiniPopup___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  return x == 10;
}