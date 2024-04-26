void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4350E04 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_B70694(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4350E04 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dialogOpenQueue,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *callbackFunc; // x20
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v12; // x1
  StonePurchaseNotificationMenu_DialogOpenQueue_o *v13; // x20
  const MethodInfo *v14; // x6

  if ( (byte_4350E01 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_B70694(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_B70694(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4350E01 = 1;
  }
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(callbackFunc, 0LL);
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                                                      (const MethodInfo_1CBB6E4 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v13 = StonePurchaseNotificationMenu_DialogOpenQueue,
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v13) )
    {
      sub_B7076C(StonePurchaseNotificationMenu_DialogOpenQueue, v12);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      v13->fields.kind,
      v13->fields.callback,
      v13->fields.freeStone,
      v13->fields.chargeStone,
      v13->fields.actionOnOpening,
      v14);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_23491956(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_23491956(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4350E00 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4350E00 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4350DFD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350DFD = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_overflowMethod(stoneDataLabel, this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
        (stoneDataLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B7076C(stoneDataLabel, method);
  }
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4350E02 & 1) == 0 )
  {
    sub_B70694(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4350E02 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    StonePurchaseNotificationMenu__Callback(this, v5);
  }
}


void __fastcall StonePurchaseNotificationMenu__Open(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        const MethodInfo *method)
{
  UILabel_o *SelfUserGame; // x0
  __int64 v12; // x1
  int32_t mDepth; // w22
  int32_t DEFAULT_MESSAGE_FONT_SIZE; // w21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  __int64 *v16; // x8
  int mHeight; // w27
  int mWidth; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v20; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_0; // x25
  Il2CppObject *v23; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w0
  StonePurchaseNotificationMenu___c_c *v32; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v33; // x22
  int32_t v34; // w26
  struct StonePurchaseNotificationMenu___c_StaticFields *v35; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_1; // x25
  Il2CppObject *v37; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w0
  System_String_o *v46; // x0
  System_String_o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v56; // x20
  int v57; // w28
  System_Object_array *v58; // x26
  __int64 v59; // x2
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x27
  __int64 v67; // x2
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x24
  __int64 v75; // x2
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  __int64 v83; // x2
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x23
  __int64 v91; // x2
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x23
  __int64 v99; // x2
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x23
  __int64 v107; // x0
  __int64 v108; // x0
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v110; // [xsp+14h] [xbp-6Ch]
  int v111; // [xsp+18h] [xbp-68h] BYREF
  int v112; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v113; // [xsp+20h] [xbp-60h] BYREF
  int v114; // [xsp+24h] [xbp-5Ch] BYREF
  int v115; // [xsp+28h] [xbp-58h] BYREF
  int v116; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4350DFE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_B70694(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_B70694(&Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
    sub_B70694(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_B70694(&Method_StonePurchaseNotificationMenu___c__Open_b__14_0__);
    sub_B70694(&Method_StonePurchaseNotificationMenu___c__Open_b__14_1__);
    sub_B70694(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_B70694(&StringLiteral_12560/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_B70694(&StringLiteral_12555/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_B70694(&StringLiteral_12563/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_B70694(&StringLiteral_1647/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_B70694(&StringLiteral_12558/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_B70694(&StringLiteral_12562/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_B70694(&StringLiteral_12556/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_B70694(&StringLiteral_12559/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_B70694(&StringLiteral_12557/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_B70694(&StringLiteral_12561/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    byte_4350DFE = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (UILabel_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      mDepth = SelfUserGame->fields.mDepth;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      DEFAULT_MESSAGE_FONT_SIZE = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      switch ( kind )
      {
        case 0:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12555/*"STONE_PURCHASE_RESULT_CANCEL"*/;
          goto LABEL_52;
        case 1:
          mWidth = SelfUserGame->fields.mWidth;
          mHeight = SelfUserGame->fields.mHeight;
          if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                 (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
          {
            dialogOpenQueue = this->fields.dialogOpenQueue;
            v20 = StonePurchaseNotificationMenu___c_TypeInfo;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v20 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            static_fields = v20->static_fields;
            _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__14_0;
            if ( !_9__14_0 )
            {
              if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v20);
                static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v23 = (Il2CppObject *)static_fields->__9;
              _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_0,
                v23,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_0__,
                (const MethodInfo_29AD124 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v24 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v24->__9__14_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_0;
              sub_B70630(
                (BattleServantConfConponent_o *)&v24->__9__14_0,
                (System_Int32_array **)_9__14_0,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
            }
            v31 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                    (System_Func_TSource__int__o *)_9__14_0,
                    (const MethodInfo_1CC7BBC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            v32 = StonePurchaseNotificationMenu___c_TypeInfo;
            v33 = this->fields.dialogOpenQueue;
            v34 = v31;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v32 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v35 = v32->static_fields;
            mHeight -= v34;
            _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v35->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v32);
                v35 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v37 = (Il2CppObject *)v35->__9;
              _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_1,
                v37,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_1__,
                (const MethodInfo_29AD124 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v38 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v38->__9__14_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_1;
              sub_B70630(
                (BattleServantConfConponent_o *)&v38->__9__14_1,
                (System_Int32_array **)_9__14_1,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
            }
            v45 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                    (System_Func_TSource__int__o *)_9__14_1,
                    (const MethodInfo_1CC7BBC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            mDepth = mWidth - v45 + mHeight;
            v110 = mWidth - v45;
          }
          else
          {
            v110 = mWidth;
          }
          v57 = mHeight;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          format = LocalizationManager__Get((System_String_o *)StringLiteral_12561/*"STONE_PURCHASE_RESULT_SUCCESS"*/, 0LL);
          v58 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
          v116 = mDepth - (buyChargeStone + buyFreeStone);
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v59);
          if ( !v58 )
            break;
          v66 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( !v58->max_length )
            goto LABEL_100;
          v58->m_Items[0] = (Il2CppObject *)v66;
          sub_B70630((BattleServantConfConponent_o *)v58->m_Items, v66, v60, v61, v62, v63, v64, v65);
          v115 = v57 - buyChargeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v67);
          v74 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v58->max_length <= 1 )
            goto LABEL_100;
          v58->m_Items[1] = (Il2CppObject *)v74;
          sub_B70630((BattleServantConfConponent_o *)&v58->m_Items[1], v74, v68, v69, v70, v71, v72, v73);
          v114 = v110 - buyFreeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v75);
          v82 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v58->max_length <= 2 )
            goto LABEL_100;
          v58->m_Items[2] = (Il2CppObject *)v82;
          sub_B70630((BattleServantConfConponent_o *)&v58->m_Items[2], v82, v76, v77, v78, v79, v80, v81);
          v113 = mDepth;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v113, v83);
          v90 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v58->max_length <= 3 )
            goto LABEL_100;
          v58->m_Items[3] = (Il2CppObject *)v90;
          sub_B70630((BattleServantConfConponent_o *)&v58->m_Items[3], v90, v84, v85, v86, v87, v88, v89);
          v112 = v57;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v112, v91);
          v98 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v58->max_length <= 4 )
            goto LABEL_100;
          v58->m_Items[4] = (Il2CppObject *)v98;
          sub_B70630((BattleServantConfConponent_o *)&v58->m_Items[4], v98, v92, v93, v94, v95, v96, v97);
          v111 = v110;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v111, v99);
          v106 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B70754(SelfUserGame, v58->obj.klass->_1.element_class);
            if ( !SelfUserGame )
            {
LABEL_101:
              v108 = sub_B7078C(SelfUserGame);
              sub_B70738(v108, 0LL);
            }
          }
          if ( v58->max_length <= 5 )
          {
LABEL_100:
            v107 = sub_B70798(SelfUserGame);
            sub_B70738(v107, 0LL);
          }
          v58->m_Items[5] = (Il2CppObject *)v106;
          sub_B70630((BattleServantConfConponent_o *)&v58->m_Items[5], v106, v100, v101, v102, v103, v104, v105);
          v46 = System_String__Format_44836892(format, v58, 0LL);
LABEL_53:
          v47 = v46;
          DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_54:
          if ( System_String__IsNullOrEmpty(v47, 0LL) )
          {
            if ( callback )
              System_Action__Invoke(callback, 0LL);
            return;
          }
          this->fields.callbackFunc = callback;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
          SelfUserGame = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( SelfUserGame )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
            SelfUserGame = this->fields.messageLabel;
            if ( SelfUserGame )
            {
              if ( SelfUserGame->fields.mOverflow == DEFAULT_MESSAGE_OVERFLOW_METHOD
                || (UILabel__set_overflowMethod(SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
                    (SelfUserGame = this->fields.messageLabel) != 0LL) )
              {
                if ( SelfUserGame->fields.mFontSize == DEFAULT_MESSAGE_FONT_SIZE
                  || (UILabel__set_fontSize(SelfUserGame, DEFAULT_MESSAGE_FONT_SIZE, 0LL),
                      (SelfUserGame = this->fields.messageLabel) != 0LL) )
                {
                  UILabel__set_text(SelfUserGame, v47, 0LL);
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  SelfUserGame = (UILabel_o *)LocalizationManager__GetNumberFormat(mDepth, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v56 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                      System_Action___ctor(
                        v56,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        case 2:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12563/*"STONE_PURCHASE_RESULT_WAIT"*/;
          goto LABEL_52;
        case 3:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12558/*"STONE_PURCHASE_RESULT_FAIL"*/;
          goto LABEL_52;
        case 4:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12562/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
          goto LABEL_52;
        case 5:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_1647/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
          goto LABEL_52;
        case 6:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12557/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
          goto LABEL_52;
        case 7:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12559/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_52:
          v46 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
          goto LABEL_53;
        case 8:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12560/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
          DEFAULT_MESSAGE_FONT_SIZE = 24;
          goto LABEL_54;
        default:
          v47 = 0LL;
          goto LABEL_54;
      }
    }
    sub_B7076C(SelfUserGame, v12);
  }
}


void __fastcall StonePurchaseNotificationMenu__OpenQueueable(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        System_Action_o *actionOnOpening,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x24
  __int64 v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4350DFF & 1) == 0 )
  {
    sub_B70694(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    byte_4350DFF = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      System_Action__Invoke(actionOnOpening, 0LL);
    StonePurchaseNotificationMenu__Open(
      this,
      kind,
      callback,
      buyFreeStone,
      buyChargeStone,
      (const MethodInfo *)actionOnOpening);
  }
  else
  {
    dialogOpenQueue = this->fields.dialogOpenQueue;
    v14 = sub_B70764(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v14, 0LL);
    if ( !v14
      || (*(_DWORD *)(v14 + 16) = kind,
          *(_QWORD *)(v14 + 24) = callback,
          sub_B70630(
            (BattleServantConfConponent_o *)(v14 + 24),
            (System_Int32_array **)callback,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          *(_QWORD *)(v14 + 40) = actionOnOpening,
          *(_DWORD *)(v14 + 32) = buyFreeStone,
          *(_DWORD *)(v14 + 36) = buyChargeStone,
          sub_B70630(
            (BattleServantConfConponent_o *)(v14 + 40),
            (System_Int32_array **)actionOnOpening,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          !dialogOpenQueue) )
    {
      sub_B7076C(v15, v16);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dialogOpenQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
  }
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4350E03 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4301/*"ConfirmWindow/CloseButton"*/);
    byte_4350E03 = 1;
  }
  return (System_String_o *)StringLiteral_4301/*"ConfirmWindow/CloseButton"*/;
}


void __fastcall StonePurchaseNotificationMenu_DialogOpenQueue___ctor(
        StonePurchaseNotificationMenu_DialogOpenQueue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0

  if ( (byte_434F0BE & 1) == 0 )
  {
    sub_B70694(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_434F0BE = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall StonePurchaseNotificationMenu___c___ctor(
        StonePurchaseNotificationMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_0(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B7076C(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B7076C(this, 0LL);
  return q->fields.freeStone;
}