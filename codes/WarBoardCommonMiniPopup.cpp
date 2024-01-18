void __fastcall WarBoardCommonMiniPopup___ctor(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int v12; // w8
  __int64 v13; // x0

  if ( (byte_41865F7 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardCommonMiniPopup_LineLayout___TypeInfo, method);
    sub_B2C35C(&WarBoardInfoPopupBase_TypeInfo, v3);
    byte_41865F7 = 1;
  }
  v4 = sub_B2C374(WarBoardCommonMiniPopup_LineLayout___TypeInfo, 2LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = *(_DWORD *)(v4 + 24);
  if ( !v12 || (*(_QWORD *)(v4 + 32) = 0xC1B0000042080000LL, v12 == 1) )
  {
    v13 = sub_B2C460(v4);
    sub_B2C400(v13, 0LL);
  }
  *(_QWORD *)(v4 + 40) = 0xC208000041E80000LL;
  this->fields.lineLayouts = (struct WarBoardCommonMiniPopup_LineLayout_array *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lineLayouts,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  }
  WarBoardInfoPopupBase___ctor((WarBoardInfoPopupBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonMiniPopup__ClosePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardCommonMiniPopup_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_41865F6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, hideCallback);
    byte_41865F6 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
  {
    v17 = (WarBoardCommonMiniPopup_o *)sub_B2C728(v10);
    WarBoardCommonMiniPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, 0LL);
  }
}


int32_t __fastcall WarBoardCommonMiniPopup__GetLineCount(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardCommonMiniPopup___c_c *v8; // x0
  struct WarBoardCommonMiniPopup___c_StaticFields *static_fields; // x8
  System_Func_char__bool__o *_9__11_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardCommonMiniPopup___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41865F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_char___, message);
    sub_B2C35C(&Method_System_Func_char__bool___ctor__, v4);
    sub_B2C35C(&System_Func_char__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__, v6);
    sub_B2C35C(&WarBoardCommonMiniPopup___c_TypeInfo, v7);
    byte_41865F2 = 1;
  }
  v8 = WarBoardCommonMiniPopup___c_TypeInfo;
  if ( (BYTE3(WarBoardCommonMiniPopup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardCommonMiniPopup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardCommonMiniPopup___c_TypeInfo);
    v8 = WarBoardCommonMiniPopup___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__11_0 = static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_char__bool__o *)sub_B2C42C(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__11_0,
      v11,
      Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__,
      (const MethodInfo_270AAF0 *)Method_System_Func_char__bool___ctor__);
    v12 = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    v12->__9__11_0 = _9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Linq_Enumerable__Count_char_(
           (System_Collections_Generic_IEnumerable_TSource__o *)message,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_1A8C958 *)Method_System_Linq_Enumerable_Count_char___)
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
  __int64 v13; // x0
  WarBoardCommonMiniPopup_LineLayout_o result; // 0:s0.4,4:s1.4

  LineCount = WarBoardCommonMiniPopup__GetLineCount(this, message, method);
  lineLayouts = this->fields.lineLayouts;
  if ( !lineLayouts )
    sub_B2C434(LineCount, v5);
  v7 = *(_QWORD *)&lineLayouts->max_length;
  v8 = LineCount - 1;
  if ( (int)LineCount - 1 >= (int)v7 )
  {
    if ( (_DWORD)v7 )
    {
      v9 = ((v7 << 32) - 0x100000000LL) >> 32;
      goto LABEL_7;
    }
LABEL_9:
    v13 = sub_B2C460(LineCount);
    sub_B2C400(v13, 0LL);
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

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, 0LL);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_B2C434(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardCommonMiniPopup__OnClickClose(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_41865F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41865F5 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickNo(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_41865F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41865F4 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 0, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickYes(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_41865F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41865F3 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    (System_String_array **)message,
    (System_String_array **)yesButton,
    (System_Boolean_array **)noButton,
    (System_Int32_array **)method,
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
  v24.fields.x = v18;
  v24.fields.y = LineLayout.fields.MessagePosY;
  v24.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v24, 0LL);
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
    || (v25.fields.x = v22,
        v25.fields.y = LineLayout.fields.ButtonRootPosY,
        v25.fields.z = v23,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v25, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.yesButtonLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)noticeButtonRoot, yesButton, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.noButtonLabel) == 0LL) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(noticeButtonRoot, v13);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, noButton, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCommonMiniPopup__OpenNoticePopup(
        WarBoardCommonMiniPopup_o *this,
        System_Action_bool__o *clickCallback,
        System_String_o *message,
        System_String_o *closeButton,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    (System_String_array **)message,
    (System_String_array **)closeButton,
    (System_Boolean_array **)method,
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
  v23.fields.x = v17;
  v23.fields.y = LineLayout.fields.MessagePosY;
  v23.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v23, 0LL);
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
    || (v24.fields.x = v21,
        v24.fields.y = LineLayout.fields.ButtonRootPosY,
        v24.fields.z = v22,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noticeButtonRoot, v24, 0LL),
        (noticeButtonRoot = (UnityEngine_GameObject_o *)this->fields.closeButtonLabel) == 0LL) )
  {
LABEL_15:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(noticeButtonRoot, v12);
  }
  UILabel__set_text((UILabel_o *)noticeButtonRoot, closeButton, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonMiniPopup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardCommonMiniPopup___c_StaticFields *static_fields; // x0

  if ( (byte_4185727 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardCommonMiniPopup___c_TypeInfo, v1);
    byte_4185727 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardCommonMiniPopup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardCommonMiniPopup___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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