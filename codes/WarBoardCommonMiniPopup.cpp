void __fastcall WarBoardCommonMiniPopup___ctor(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int v12; // w8

  if ( (byte_40F8946 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardCommonMiniPopup_LineLayout___TypeInfo, method);
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, v4);
    byte_40F8946 = 1;
  }
  v5 = sub_B17014(WarBoardCommonMiniPopup_LineLayout___TypeInfo, 2LL, v2);
  if ( !v5 )
    sub_B170D4();
  v12 = *(_DWORD *)(v5 + 24);
  if ( !v12 || (*(_QWORD *)(v5 + 32) = 0xC1B0000042080000LL, v12 == 1) )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  *(_QWORD *)(v5 + 40) = 0xC208000041E80000LL;
  this->fields.lineLayouts = (struct WarBoardCommonMiniPopup_LineLayout_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineLayouts,
    (System_Int32_array **)v5,
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

  if ( (byte_40F8945 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, hideCallback);
    byte_40F8945 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B16F98(
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
    v17 = (WarBoardCommonMiniPopup_o *)sub_B173C8(v10);
    WarBoardCommonMiniPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardCommonMiniPopup___c_c *v10; // x0
  struct WarBoardCommonMiniPopup___c_StaticFields *static_fields; // x8
  System_Func_char__bool__o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardCommonMiniPopup___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F8941 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_char___, message);
    sub_B16FFC(&Method_System_Func_char__bool___ctor__, v6);
    sub_B16FFC(&System_Func_char__bool__TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__, v8);
    sub_B16FFC(&WarBoardCommonMiniPopup___c_TypeInfo, v9);
    byte_40F8941 = 1;
  }
  v10 = WarBoardCommonMiniPopup___c_TypeInfo;
  if ( (BYTE3(WarBoardCommonMiniPopup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardCommonMiniPopup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardCommonMiniPopup___c_TypeInfo);
    v10 = WarBoardCommonMiniPopup___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_0 = static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_char__bool__o *)sub_B170CC(System_Func_char__bool__TypeInfo, message, method, v3, v4);
    System_Func_char__bool____ctor(
      _9__11_0,
      v13,
      Method_WarBoardCommonMiniPopup___c__GetLineCount_b__11_0__,
      (const MethodInfo_2B63A2C *)Method_System_Func_char__bool___ctor__);
    v14 = WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
    v14->__9__11_0 = _9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__Count_char_(
           (System_Collections_Generic_IEnumerable_TSource__o *)message,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_18D40A0 *)Method_System_Linq_Enumerable_Count_char___)
       + 1;
}


WarBoardCommonMiniPopup_LineLayout_o __fastcall WarBoardCommonMiniPopup__GetLineLayout(
        WarBoardCommonMiniPopup_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 LineCount; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarBoardCommonMiniPopup_LineLayout_array *lineLayouts; // x8
  __int64 v8; // x9
  unsigned int v9; // w10
  __int64 v10; // x9
  float *v11; // x8
  float v12; // s0
  float v13; // s1
  WarBoardCommonMiniPopup_LineLayout_o result; // 0:s0.4,4:s1.4

  LineCount = WarBoardCommonMiniPopup__GetLineCount(this, message, method);
  lineLayouts = this->fields.lineLayouts;
  if ( !lineLayouts )
    sub_B170D4();
  v8 = *(_QWORD *)&lineLayouts->max_length;
  v9 = LineCount - 1;
  if ( (int)LineCount - 1 >= (int)v8 )
  {
    if ( (_DWORD)v8 )
    {
      v10 = ((v8 << 32) - 0x100000000LL) >> 32;
      goto LABEL_7;
    }
LABEL_9:
    sub_B17100(LineCount, v5, v6);
    sub_B170A0();
  }
  if ( v9 >= (unsigned int)v8 )
    goto LABEL_9;
  v10 = (int)v9;
LABEL_7:
  v11 = (float *)(&lineLayouts->obj.klass + v10);
  v12 = v11[8];
  v13 = v11[9];
  result.fields.ButtonRootPosY = v13;
  result.fields.MessagePosY = v12;
  return result;
}


void __fastcall WarBoardCommonMiniPopup__Initialize(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, 0LL);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_B170D4();
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardCommonMiniPopup__OnClickClose(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40F8944 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8944 = 1;
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
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickNo(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40F8943 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8943 = 1;
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
      System_Action_bool___Invoke(clickCallback, 0, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall WarBoardCommonMiniPopup__OnClickYes(WarBoardCommonMiniPopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40F8942 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8942 = 1;
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
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
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
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr00_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  UnityEngine_GameObject_o *cofirmButtonRoot; // x0
  UILabel_o *messgeLabel; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  float v19; // s0
  float v20; // s2
  UnityEngine_Component_o *v21; // x0
  float v22; // s10
  float v23; // s11
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  float v27; // s0
  float v28; // s2
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s9
  float v31; // s10
  UnityEngine_Transform_o *v32; // x0
  UILabel_o *yesButtonLabel; // x0
  UILabel_o *noButtonLabel; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_B16F98(
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
  cofirmButtonRoot = this->fields.cofirmButtonRoot;
  if ( !cofirmButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(cofirmButtonRoot, 1, 0LL);
  messgeLabel = this->fields.messgeLabel;
  if ( !messgeLabel )
    goto LABEL_15;
  UILabel__set_text(messgeLabel, message, 0LL);
  v17 = (UnityEngine_Component_o *)this->fields.messgeLabel;
  if ( !v17 )
    goto LABEL_15;
  transform = UnityEngine_Component__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.messgeLabel;
  if ( !v21 )
    goto LABEL_15;
  v22 = v19;
  v23 = v20;
  v24 = UnityEngine_Component__get_transform(v21, 0LL);
  if ( !v24 )
    goto LABEL_15;
  v35.fields.x = v22;
  v35.fields.y = LineLayout.fields.MessagePosY;
  v35.fields.z = v23;
  UnityEngine_Transform__set_localPosition(v24, v35, 0LL);
  v25 = this->fields.cofirmButtonRoot;
  if ( !v25 )
    goto LABEL_15;
  v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !v26 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(v26, 0LL);
  v29 = this->fields.cofirmButtonRoot;
  if ( !v29 )
    goto LABEL_15;
  v30 = v27;
  v31 = v28;
  v32 = UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !v32
    || (v36.fields.x = v30,
        v36.fields.y = LineLayout.fields.ButtonRootPosY,
        v36.fields.z = v31,
        UnityEngine_Transform__set_localPosition(v32, v36, 0LL),
        (yesButtonLabel = this->fields.yesButtonLabel) == 0LL)
    || (UILabel__set_text(yesButtonLabel, yesButton, 0LL), (noButtonLabel = this->fields.noButtonLabel) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UILabel__set_text(noButtonLabel, noButton, 0LL);
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
  WarBoardCommonMiniPopup_LineLayout_o LineLayout; // kr00_8
  UnityEngine_GameObject_o *noticeButtonRoot; // x0
  UnityEngine_GameObject_o *cofirmButtonRoot; // x0
  UILabel_o *messgeLabel; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  float v18; // s0
  float v19; // s2
  UnityEngine_Component_o *v20; // x0
  float v21; // s10
  float v22; // s11
  UnityEngine_Transform_o *v23; // x0
  UILabel_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  float v27; // s0
  float v28; // s2
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s9
  float v31; // s10
  UnityEngine_Transform_o *v32; // x0
  UILabel_o *closeButtonLabel; // x0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.clickCallback = clickCallback;
  sub_B16F98(
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
  cofirmButtonRoot = this->fields.cofirmButtonRoot;
  if ( !cofirmButtonRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(cofirmButtonRoot, 0, 0LL);
  messgeLabel = this->fields.messgeLabel;
  if ( !messgeLabel )
    goto LABEL_15;
  UILabel__set_text(messgeLabel, message, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.messgeLabel;
  if ( !v16 )
    goto LABEL_15;
  transform = UnityEngine_Component__get_transform(v16, 0LL);
  if ( !transform )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.messgeLabel;
  if ( !v20 )
    goto LABEL_15;
  v21 = v18;
  v22 = v19;
  v23 = UnityEngine_Component__get_transform(v20, 0LL);
  if ( !v23 )
    goto LABEL_15;
  v34.fields.x = v21;
  v34.fields.y = LineLayout.fields.MessagePosY;
  v34.fields.z = v22;
  UnityEngine_Transform__set_localPosition(v23, v34, 0LL);
  v24 = this->fields.messgeLabel;
  if ( !v24 )
    goto LABEL_15;
  UILabel__set_text(v24, message, 0LL);
  v25 = this->fields.noticeButtonRoot;
  if ( !v25 )
    goto LABEL_15;
  v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !v26 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(v26, 0LL);
  v29 = this->fields.noticeButtonRoot;
  if ( !v29 )
    goto LABEL_15;
  v30 = v27;
  v31 = v28;
  v32 = UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !v32
    || (v35.fields.x = v30,
        v35.fields.y = LineLayout.fields.ButtonRootPosY,
        v35.fields.z = v31,
        UnityEngine_Transform__set_localPosition(v32, v35, 0LL),
        (closeButtonLabel = this->fields.closeButtonLabel) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UILabel__set_text(closeButtonLabel, closeButton, 0LL);
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonMiniPopup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AC9 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardCommonMiniPopup___c_TypeInfo, v1);
    byte_40F7AC9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardCommonMiniPopup___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardCommonMiniPopup___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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