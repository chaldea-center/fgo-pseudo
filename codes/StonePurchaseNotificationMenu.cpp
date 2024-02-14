void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42135B0 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v5);
    byte_42135B0 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dialogOpenQueue,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *callbackFunc; // x20
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *v14; // x20
  const MethodInfo *v15; // x6

  if ( (byte_42135AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v10);
    byte_42135AD = 1;
  }
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(callbackFunc, 0LL);
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                                                      (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v14 = StonePurchaseNotificationMenu_DialogOpenQueue,
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v14) )
    {
      sub_B0D97C(StonePurchaseNotificationMenu_DialogOpenQueue);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      v14->fields.kind,
      v14->fields.callback,
      v14->fields.freeStone,
      v14->fields.chargeStone,
      v14->fields.actionOnOpening,
      v15);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_22278184(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_22278184(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_42135AC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_StonePurchaseNotificationMenu_EndClose__, v10);
    byte_42135AC = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D840(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42135A9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42135A9 = 1;
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
    sub_B0D97C(stoneDataLabel);
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

  if ( (byte_42135AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_StonePurchaseNotificationMenu_OnClickClose__, method);
    byte_42135AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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
  UILabel_o *SelfUserGame; // x0
  int32_t mDepth; // w22
  int32_t DEFAULT_MESSAGE_FONT_SIZE; // w21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  __int64 *v36; // x8
  int mHeight; // w27
  int mWidth; // w28
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v42; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_0; // x25
  Il2CppObject *v45; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w0
  __int64 v54; // x1
  __int64 v55; // x2
  StonePurchaseNotificationMenu___c_c *v56; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v57; // x22
  int32_t v58; // w26
  struct StonePurchaseNotificationMenu___c_StaticFields *v59; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_1; // x25
  Il2CppObject *v61; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w0
  System_String_o *v70; // x0
  System_String_o *v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  System_Action_o *v82; // x20
  int v83; // w28
  System_Object_array *v84; // x26
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x27
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x24
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x23
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x23
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x23
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x23
  __int64 v127; // x0
  __int64 v128; // x0
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v130; // [xsp+14h] [xbp-6Ch]
  int v131; // [xsp+18h] [xbp-68h] BYREF
  int v132; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v133; // [xsp+20h] [xbp-60h] BYREF
  int v134; // [xsp+24h] [xbp-5Ch] BYREF
  int v135; // [xsp+28h] [xbp-58h] BYREF
  int v136; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42135AA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v12);
    sub_B0D8A4(&Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__, v13);
    sub_B0D8A4(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&object___TypeInfo, v17);
    sub_B0D8A4(&Method_StonePurchaseNotificationMenu_EndOpen__, v18);
    sub_B0D8A4(&Method_StonePurchaseNotificationMenu___c__Open_b__14_0__, v19);
    sub_B0D8A4(&Method_StonePurchaseNotificationMenu___c__Open_b__14_1__, v20);
    sub_B0D8A4(&StonePurchaseNotificationMenu___c_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_12429/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v22);
    sub_B0D8A4(&StringLiteral_12424/*"STONE_PURCHASE_RESULT_CANCEL"*/, v23);
    sub_B0D8A4(&StringLiteral_12432/*"STONE_PURCHASE_RESULT_WAIT"*/, v24);
    sub_B0D8A4(&StringLiteral_1625/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v25);
    sub_B0D8A4(&StringLiteral_12427/*"STONE_PURCHASE_RESULT_FAIL"*/, v26);
    sub_B0D8A4(&StringLiteral_12431/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v27);
    sub_B0D8A4(&StringLiteral_12425/*"STONE_PURCHASE_RESULT_CLOSE"*/, v28);
    sub_B0D8A4(&StringLiteral_12428/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v29);
    sub_B0D8A4(&StringLiteral_12426/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v30);
    sub_B0D8A4(&StringLiteral_12430/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v31);
    byte_42135AA = 1;
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
          v36 = &StringLiteral_12424/*"STONE_PURCHASE_RESULT_CANCEL"*/;
          goto LABEL_52;
        case 1:
          mWidth = SelfUserGame->fields.mWidth;
          mHeight = SelfUserGame->fields.mHeight;
          if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                 (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
          {
            dialogOpenQueue = this->fields.dialogOpenQueue;
            v42 = StonePurchaseNotificationMenu___c_TypeInfo;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v42 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            static_fields = v42->static_fields;
            _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__14_0;
            if ( !_9__14_0 )
            {
              if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v42);
                static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v45 = (Il2CppObject *)static_fields->__9;
              _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                           System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                                                           v39,
                                                                                           v40);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_0,
                v45,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_0__,
                (const MethodInfo_2619564 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v46 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v46->__9__14_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v46->__9__14_0,
                (System_Int32_array **)_9__14_0,
                v47,
                v48,
                v49,
                v50,
                v51,
                v52);
            }
            v53 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                    (System_Func_TSource__int__o *)_9__14_0,
                    (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            v56 = StonePurchaseNotificationMenu___c_TypeInfo;
            v57 = this->fields.dialogOpenQueue;
            v58 = v53;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v56 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v59 = v56->static_fields;
            mHeight -= v58;
            _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v59->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v56);
                v59 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v61 = (Il2CppObject *)v59->__9;
              _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                           System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                                                           v54,
                                                                                           v55);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_1,
                v61,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_1__,
                (const MethodInfo_2619564 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v62 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v62->__9__14_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_1;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v62->__9__14_1,
                (System_Int32_array **)_9__14_1,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68);
            }
            v69 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                    (System_Func_TSource__int__o *)_9__14_1,
                    (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            mDepth = mWidth - v69 + mHeight;
            v130 = mWidth - v69;
          }
          else
          {
            v130 = mWidth;
          }
          v83 = mHeight;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          format = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"STONE_PURCHASE_RESULT_SUCCESS"*/, 0LL);
          v84 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
          v136 = mDepth - (buyChargeStone + buyFreeStone);
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v136);
          if ( !v84 )
            break;
          v91 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( !v84->max_length )
            goto LABEL_100;
          v84->m_Items[0] = (Il2CppObject *)v91;
          sub_B0D840((BattleServantConfConponent_o *)v84->m_Items, v91, v85, v86, v87, v88, v89, v90);
          v135 = v83 - buyChargeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
          v98 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v84->max_length <= 1 )
            goto LABEL_100;
          v84->m_Items[1] = (Il2CppObject *)v98;
          sub_B0D840((BattleServantConfConponent_o *)&v84->m_Items[1], v98, v92, v93, v94, v95, v96, v97);
          v134 = v130 - buyFreeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v134);
          v105 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v84->max_length <= 2 )
            goto LABEL_100;
          v84->m_Items[2] = (Il2CppObject *)v105;
          sub_B0D840((BattleServantConfConponent_o *)&v84->m_Items[2], v105, v99, v100, v101, v102, v103, v104);
          v133 = mDepth;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
          v112 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v84->max_length <= 3 )
            goto LABEL_100;
          v84->m_Items[3] = (Il2CppObject *)v112;
          sub_B0D840((BattleServantConfConponent_o *)&v84->m_Items[3], v112, v106, v107, v108, v109, v110, v111);
          v132 = v83;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
          v119 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v84->max_length <= 4 )
            goto LABEL_100;
          v84->m_Items[4] = (Il2CppObject *)v119;
          sub_B0D840((BattleServantConfConponent_o *)&v84->m_Items[4], v119, v113, v114, v115, v116, v117, v118);
          v131 = v130;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v126 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B0D964(SelfUserGame, v84->obj.klass->_1.element_class);
            if ( !SelfUserGame )
            {
LABEL_101:
              v128 = sub_B0D99C();
              sub_B0D948(v128, 0LL);
            }
          }
          if ( v84->max_length <= 5 )
          {
LABEL_100:
            v127 = sub_B0D9A8(SelfUserGame);
            sub_B0D948(v127, 0LL);
          }
          v84->m_Items[5] = (Il2CppObject *)v126;
          sub_B0D840((BattleServantConfConponent_o *)&v84->m_Items[5], v126, v120, v121, v122, v123, v124, v125);
          v70 = System_String__Format_43928628(format, v84, 0LL);
LABEL_53:
          v71 = v70;
          DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_54:
          if ( System_String__IsNullOrEmpty(v71, 0LL) )
          {
            if ( callback )
              System_Action__Invoke(callback, 0LL);
            return;
          }
          this->fields.callbackFunc = callback;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
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
                  UILabel__set_text(SelfUserGame, v71, 0LL);
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
                    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v82 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v80, v81);
                      System_Action___ctor(
                        v82,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
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
          v36 = &StringLiteral_12432/*"STONE_PURCHASE_RESULT_WAIT"*/;
          goto LABEL_52;
        case 3:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12427/*"STONE_PURCHASE_RESULT_FAIL"*/;
          goto LABEL_52;
        case 4:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12431/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
          goto LABEL_52;
        case 5:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_1625/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
          goto LABEL_52;
        case 6:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12426/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
          goto LABEL_52;
        case 7:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12428/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_52:
          v70 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
          goto LABEL_53;
        case 8:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
          DEFAULT_MESSAGE_FONT_SIZE = 24;
          goto LABEL_54;
        default:
          v71 = 0LL;
          goto LABEL_54;
      }
    }
    sub_B0D97C(SelfUserGame);
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x24
  __int64 v15; // x25
  __int64 v16; // x0
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

  if ( (byte_42135AB & 1) == 0 )
  {
    sub_B0D8A4(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v13);
    byte_42135AB = 1;
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
    v15 = sub_B0D974(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind, callback);
    StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v15, 0LL);
    if ( !v15
      || (*(_DWORD *)(v15 + 16) = kind,
          *(_QWORD *)(v15 + 24) = callback,
          sub_B0D840(
            (BattleServantConfConponent_o *)(v15 + 24),
            (System_Int32_array **)callback,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          *(_QWORD *)(v15 + 40) = actionOnOpening,
          *(_DWORD *)(v15 + 32) = buyFreeStone,
          *(_DWORD *)(v15 + 36) = buyChargeStone,
          sub_B0D840(
            (BattleServantConfConponent_o *)(v15 + 40),
            (System_Int32_array **)actionOnOpening,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          !dialogOpenQueue) )
    {
      sub_B0D97C(v16);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dialogOpenQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
  }
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42135AF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4236/*"ConfirmWindow/CloseButton"*/, method);
    byte_42135AF = 1;
  }
  return (System_String_o *)StringLiteral_4236/*"ConfirmWindow/CloseButton"*/;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0

  if ( (byte_421172E & 1) == 0 )
  {
    sub_B0D8A4(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_421172E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(StonePurchaseNotificationMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B0D97C(this);
  return q->fields.freeStone;
}