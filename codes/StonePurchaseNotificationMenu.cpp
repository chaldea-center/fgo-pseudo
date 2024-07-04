void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E04F9 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseNotificationMenu_TypeInfo, v1);
    byte_48E04F9 = 1;
  }
  *StonePurchaseNotificationMenu_TypeInfo->static_fields = (struct StonePurchaseNotificationMenu_StaticFields)3256877056LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E04F8 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v4);
    byte_48E04F8 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.dialogOpenQueue, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  const MethodInfo *v12; // x6

  if ( (byte_48E04F4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v6);
    byte_48E04F4 = 1;
  }
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B00C70(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2D822F8 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v11 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v11) )
    {
      sub_1B00F28(object, v10);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v11[1].klass,
      (System_Action_o *)v11[1].monitor,
      (int32_t)v11[2].klass,
      HIDWORD(v11[2].klass),
      (System_Action_o *)v11[2].monitor,
      v12);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_34139476(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_34139476(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_48E04F3 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_StonePurchaseNotificationMenu_EndClose__, v6);
    byte_48E04F3 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 4;
    v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B00C70(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E04F0 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseNotificationMenu_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v3);
    byte_48E04F0 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneDataLabel = this->fields.messageLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_overflowMethod(stoneDataLabel, this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
  stoneDataLabel = this->fields.messageLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneDataLabel = this->fields.closeLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  stoneDataLabel = (UILabel_o *)StonePurchaseNotificationMenu_TypeInfo;
  windowTransform = this->fields.windowTransform;
  if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
  if ( !windowTransform )
LABEL_11:
    sub_1B00F28(stoneDataLabel, method);
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  v6.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v6, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_48E04F5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_StonePurchaseNotificationMenu_OnClickClose__, method);
    byte_48E04F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    StonePurchaseNotificationMenu__Callback(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseNotificationMenu__Open(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 SelfUserGame; // x0
  const MethodInfo *v33; // x1
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  int32_t v35; // w22
  _DWORD *v36; // x27
  StonePurchaseNotificationMenu_c *v37; // x8
  UnityEngine_Transform_o *windowTransform; // x28
  char v39; // w29
  float *static_fields; // x8
  __int64 *v41; // x8
  System_String_o *v42; // x23
  int v43; // w29
  int v44; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v46; // x0
  System_Func_object__int__o *_9__17_0; // x25
  Il2CppObject *v48; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w0
  StonePurchaseNotificationMenu___c_c *v53; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v54; // x22
  int32_t v55; // w26
  System_Func_object__int__o *_9__17_1; // x25
  Il2CppObject *v57; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Object_array *v61; // x26
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x27
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x24
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x23
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x23
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x23
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x23
  System_String_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v103; // x20
  __int64 v104; // x0
  System_String_o *format; // [xsp+8h] [xbp-88h]
  int32_t value; // [xsp+14h] [xbp-7Ch]
  int v107; // [xsp+18h] [xbp-78h] BYREF
  int v108; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v109; // [xsp+20h] [xbp-70h] BYREF
  int v110; // [xsp+24h] [xbp-6Ch] BYREF
  int v111; // [xsp+28h] [xbp-68h] BYREF
  int v112; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E04F1 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v12);
    sub_1B00CCC(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v13);
    sub_1B00CCC(&int_TypeInfo, v14);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v15);
    sub_1B00CCC(&object___TypeInfo, v16);
    sub_1B00CCC(&Method_StonePurchaseNotificationMenu_EndOpen__, v17);
    sub_1B00CCC(&StonePurchaseNotificationMenu_TypeInfo, v18);
    sub_1B00CCC(&Method_StonePurchaseNotificationMenu___c__Open_b__17_0__, v19);
    sub_1B00CCC(&Method_StonePurchaseNotificationMenu___c__Open_b__17_1__, v20);
    sub_1B00CCC(&StonePurchaseNotificationMenu___c_TypeInfo, v21);
    sub_1B00CCC(&StringLiteral_12093/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v22);
    sub_1B00CCC(&StringLiteral_12088/*"STONE_PURCHASE_RESULT_CANCEL"*/, v23);
    sub_1B00CCC(&StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/, v24);
    sub_1B00CCC(&StringLiteral_1963/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v25);
    sub_1B00CCC(&StringLiteral_12091/*"STONE_PURCHASE_RESULT_FAIL"*/, v26);
    sub_1B00CCC(&StringLiteral_12095/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v27);
    sub_1B00CCC(&StringLiteral_12089/*"STONE_PURCHASE_RESULT_CLOSE"*/, v28);
    sub_1B00CCC(&StringLiteral_12092/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v29);
    sub_1B00CCC(&StringLiteral_12090/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v30);
    sub_1B00CCC(&StringLiteral_12094/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v31);
    byte_48E04F1 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_90;
    DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
    v35 = *(_DWORD *)(SelfUserGame + 168);
    v36 = (_DWORD *)SelfUserGame;
    value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
    SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering((StonePurchaseNotificationMenu_o *)SelfUserGame, v33);
    v37 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = this->fields.windowTransform;
    v39 = SelfUserGame;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v37 = StonePurchaseNotificationMenu_TypeInfo;
    }
    static_fields = (float *)v37->static_fields;
    if ( (v39 & 1) != 0 )
    {
      if ( !windowTransform )
        goto LABEL_90;
      ++static_fields;
    }
    else if ( !windowTransform )
    {
      goto LABEL_90;
    }
    v113.fields.y = *static_fields;
    v113.fields.x = 0.0;
    v113.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(windowTransform, v113, 0LL);
    switch ( kind )
    {
      case 0:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12088/*"STONE_PURCHASE_RESULT_CANCEL"*/;
        goto LABEL_70;
      case 1:
        v43 = v36[41];
        v35 = v36[42];
        v44 = v36[40];
        if ( System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
        {
          dialogOpenQueue = this->fields.dialogOpenQueue;
          v46 = StonePurchaseNotificationMenu___c_TypeInfo;
          if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
            v46 = StonePurchaseNotificationMenu___c_TypeInfo;
          }
          _9__17_0 = (System_Func_object__int__o *)v46->static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( !v46->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v46);
              v46 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v48 = (Il2CppObject *)v46->static_fields->__9;
            _9__17_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__17_0,
              v48,
              Method_StonePurchaseNotificationMenu___c__Open_b__17_0__,
              0LL);
            v49 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
            v49->__9__17_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__17_0;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v49->__9__17_0, (int32_t)_9__17_0, v50, v51);
          }
          v52 = System_Linq_Enumerable__Sum_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                  (System_Func_TSource__int__o *)_9__17_0,
                  (const MethodInfo_2D96528 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
          v53 = StonePurchaseNotificationMenu___c_TypeInfo;
          v54 = this->fields.dialogOpenQueue;
          v55 = v52;
          if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
            v53 = StonePurchaseNotificationMenu___c_TypeInfo;
          }
          v43 -= v55;
          _9__17_1 = (System_Func_object__int__o *)v53->static_fields->__9__17_1;
          if ( !_9__17_1 )
          {
            if ( !v53->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v53);
              v53 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v57 = (Il2CppObject *)v53->static_fields->__9;
            _9__17_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__17_1,
              v57,
              Method_StonePurchaseNotificationMenu___c__Open_b__17_1__,
              0LL);
            v58 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
            v58->__9__17_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__17_1;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v58->__9__17_1, (int32_t)_9__17_1, v59, v60);
          }
          v44 -= System_Linq_Enumerable__Sum_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                   (System_Func_TSource__int__o *)_9__17_1,
                   (const MethodInfo_2D96528 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
          v35 = v44 + v43;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        format = LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"STONE_PURCHASE_RESULT_SUCCESS"*/, 0LL);
        v61 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 6LL);
        v112 = v35 - (buyChargeStone + buyFreeStone);
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v112, v62, v63, v64);
        if ( !v61 )
          break;
        v67 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_92;
        }
        if ( !v61->max_length )
          goto LABEL_91;
        v61->m_Items[0] = v67;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)v61->m_Items, (int32_t)v67, v65, v66);
        v111 = v43 - buyChargeStone;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v111, v68, v69, v70);
        v73 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_92;
        }
        if ( v61->max_length <= 1 )
          goto LABEL_91;
        v61->m_Items[1] = v73;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[1], (int32_t)v73, v71, v72);
        v110 = v44 - buyFreeStone;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v110, v74, v75, v76);
        v79 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_92;
        }
        if ( v61->max_length <= 2 )
          goto LABEL_91;
        v61->m_Items[2] = v79;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[2], (int32_t)v79, v77, v78);
        v109 = v35;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v109, v80, v81, v82);
        v85 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_92;
        }
        if ( v61->max_length <= 3 )
          goto LABEL_91;
        v61->m_Items[3] = v85;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[3], (int32_t)v85, v83, v84);
        v108 = v43;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v108, v86, v87, v88);
        v91 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_92;
        }
        if ( v61->max_length <= 4 )
          goto LABEL_91;
        v61->m_Items[4] = v91;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[4], (int32_t)v91, v89, v90);
        v107 = v44;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v107, v92, v93, v94);
        v97 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B00E08(SelfUserGame, v61->obj.klass->_1.element_class);
          if ( !SelfUserGame )
          {
LABEL_92:
            v104 = sub_1B00F4C();
            sub_1B00DF4(v104, 0LL);
          }
        }
        if ( v61->max_length <= 5 )
LABEL_91:
          sub_1B00F30(SelfUserGame, v33);
        v61->m_Items[5] = v97;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[5], (int32_t)v97, v95, v96);
        v98 = System_String__Format_60340256(format, v61, 0LL);
LABEL_71:
        v42 = v98;
        DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_72:
        if ( System_String__IsNullOrEmpty(v42, 0LL) )
        {
          if ( callback )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
              callback->fields.original_method_info,
              *(_QWORD *)&callback->fields.extra_arg);
          return;
        }
        this->fields.callbackFunc = callback;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v99, v100);
        SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( SelfUserGame )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
          SelfUserGame = (__int64)this->fields.messageLabel;
          if ( SelfUserGame )
          {
            if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD
              || (UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
                  (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
            {
              if ( *(_DWORD *)(SelfUserGame + 424) == value
                || (UILabel__set_fontSize((UILabel_o *)SelfUserGame, value, 0LL),
                    (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
              {
                UILabel__set_text((UILabel_o *)SelfUserGame, v42, 0LL);
                stoneDataLabel = this->fields.stoneDataLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v35, 0LL);
                if ( stoneDataLabel )
                {
                  UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                  closeLabel = this->fields.closeLabel;
                  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                  if ( closeLabel )
                  {
                    UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                    this->fields.state = 1;
                    v103 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                    System_Action___ctor(
                      v103,
                      (Il2CppObject *)this,
                      Method_StonePurchaseNotificationMenu_EndOpen__,
                      0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/;
        goto LABEL_70;
      case 3:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12091/*"STONE_PURCHASE_RESULT_FAIL"*/;
        goto LABEL_70;
      case 4:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12095/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
        goto LABEL_70;
      case 5:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_1963/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
        goto LABEL_70;
      case 6:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12090/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
        goto LABEL_70;
      case 7:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = &StringLiteral_12092/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_70:
        v98 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
        goto LABEL_71;
      case 8:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
        value = 24;
        goto LABEL_72;
      default:
        v42 = 0LL;
        goto LABEL_72;
    }
LABEL_90:
    sub_1B00F28(SelfUserGame, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseNotificationMenu__OpenQueueable(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        System_Action_o *actionOnOpening,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x1
  _BOOL8 ShouldCentering; // x0
  __int64 v16; // x1
  StonePurchaseNotificationMenu_c *v17; // x8
  UnityEngine_Transform_o *windowTransform; // x24
  bool v19; // w25
  float *static_fields; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x23
  __int64 v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  const MethodInfo *v33; // x5
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v12 = this;
  if ( (byte_48E04F2 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v13);
    this = (StonePurchaseNotificationMenu_o *)sub_1B00CCC(&StonePurchaseNotificationMenu_TypeInfo, v14);
    byte_48E04F2 = 1;
  }
  if ( (v12->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Action_o *, _QWORD, _QWORD, System_Action_o *, const MethodInfo *))actionOnOpening->fields.m_target)(
                                                  actionOnOpening->fields.original_method_info,
                                                  *(_QWORD *)&actionOnOpening->fields.extra_arg,
                                                  callback,
                                                  *(_QWORD *)&buyFreeStone,
                                                  *(_QWORD *)&buyChargeStone,
                                                  actionOnOpening,
                                                  method);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v17 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v12->fields.windowTransform;
    v19 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v17 = StonePurchaseNotificationMenu_TypeInfo;
    }
    static_fields = (float *)v17->static_fields;
    if ( v19 )
    {
      if ( windowTransform )
      {
        ++static_fields;
LABEL_17:
        v34.fields.y = *static_fields;
        v34.fields.x = 0.0;
        v34.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v34, 0LL);
        StonePurchaseNotificationMenu__Open(v12, kind, callback, buyFreeStone, buyChargeStone, v33);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1B00F28(ShouldCentering, v16);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v12->fields.dialogOpenQueue;
  v22 = sub_1B00F18(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_19;
  *(_DWORD *)(v22 + 16) = kind;
  *(_QWORD *)(v22 + 24) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)callback, v23, v24);
  *(_QWORD *)(v22 + 40) = actionOnOpening;
  *(_DWORD *)(v22 + 32) = buyFreeStone;
  *(_DWORD *)(v22 + 36) = buyChargeStone;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)actionOnOpening, v25, v26);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v30 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v22,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v22;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), v22, v27, v28);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E04F6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48E04F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E04F7 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4626/*"ConfirmWindow/CloseButton"*/, method);
    byte_48E04F7 = 1;
  }
  return (System_String_o *)StringLiteral_4626/*"ConfirmWindow/CloseButton"*/;
}


void __fastcall StonePurchaseNotificationMenu_DialogOpenQueue___ctor(
        StonePurchaseNotificationMenu_DialogOpenQueue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E04FA & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_48E04FA = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall StonePurchaseNotificationMenu___c___ctor(
        StonePurchaseNotificationMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__17_0(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1B00F28(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__17_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1B00F28(this, 0LL);
  return q->fields.freeStone;
}