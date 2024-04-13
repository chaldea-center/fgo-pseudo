void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E7AF3 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v8, v9, v10);
    byte_42E7AF3 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialogOpenQueue,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *callbackFunc; // x20
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v18; // x1
  StonePurchaseNotificationMenu_DialogOpenQueue_o *v19; // x20
  const MethodInfo *v20; // x6

  if ( (byte_42E7AF0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__,
      v12,
      v13,
      v14);
    byte_42E7AF0 = 1;
  }
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(callbackFunc, 0LL);
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                                                      (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v19 = StonePurchaseNotificationMenu_DialogOpenQueue,
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v19) )
    {
      sub_B5D69C(StonePurchaseNotificationMenu_DialogOpenQueue, v18);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      v19->fields.kind,
      v19->fields.callback,
      v19->fields.freeStone,
      v19->fields.chargeStone,
      v19->fields.actionOnOpening,
      v20);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_23583780(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_23583780(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E7AEF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_StonePurchaseNotificationMenu_EndClose__, v10, v11, v12);
    byte_42E7AEF = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_42E7AEC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7AEC = 1;
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
    sub_B5D69C(stoneDataLabel, method);
  }
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E7AF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_StonePurchaseNotificationMenu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42E7AF1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    StonePurchaseNotificationMenu__Callback(this, v7);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  UILabel_o *SelfUserGame; // x0
  __int64 v75; // x1
  int32_t mDepth; // w22
  int32_t DEFAULT_MESSAGE_FONT_SIZE; // w21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  __int64 *v79; // x8
  int mHeight; // w27
  int mWidth; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v83; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_0; // x25
  Il2CppObject *v86; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t v94; // w0
  StonePurchaseNotificationMenu___c_c *v95; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v96; // x22
  int32_t v97; // w26
  struct StonePurchaseNotificationMenu___c_StaticFields *v98; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_1; // x25
  Il2CppObject *v100; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  int32_t v108; // w0
  System_String_o *v109; // x0
  System_String_o *v110; // x23
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v119; // x20
  int v120; // w28
  System_Object_array *v121; // x26
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x27
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x24
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x23
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x23
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x23
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x23
  __int64 v164; // x0
  __int64 v165; // x0
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v167; // [xsp+14h] [xbp-6Ch]
  int v168; // [xsp+18h] [xbp-68h] BYREF
  int v169; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v170; // [xsp+20h] [xbp-60h] BYREF
  int v171; // [xsp+24h] [xbp-5Ch] BYREF
  int v172; // [xsp+28h] [xbp-58h] BYREF
  int v173; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42E7AED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)callback, *(_QWORD *)&buyFreeStone);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_StonePurchaseNotificationMenu_EndOpen__, v32, v33, v34);
    sub_B5D5C4(&Method_StonePurchaseNotificationMenu___c__Open_b__14_0__, v35, v36, v37);
    sub_B5D5C4(&Method_StonePurchaseNotificationMenu___c__Open_b__14_1__, v38, v39, v40);
    sub_B5D5C4(&StonePurchaseNotificationMenu___c_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12539/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12534/*"STONE_PURCHASE_RESULT_CANCEL"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1642/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12537/*"STONE_PURCHASE_RESULT_FAIL"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12541/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12535/*"STONE_PURCHASE_RESULT_CLOSE"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_12538/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_12536/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_12540/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v71, v72, v73);
    byte_42E7AED = 1;
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
          v79 = &StringLiteral_12534/*"STONE_PURCHASE_RESULT_CANCEL"*/;
          goto LABEL_52;
        case 1:
          mWidth = SelfUserGame->fields.mWidth;
          mHeight = SelfUserGame->fields.mHeight;
          if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                 (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
          {
            dialogOpenQueue = this->fields.dialogOpenQueue;
            v83 = StonePurchaseNotificationMenu___c_TypeInfo;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v83 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            static_fields = v83->static_fields;
            _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__14_0;
            if ( !_9__14_0 )
            {
              if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v86 = (Il2CppObject *)static_fields->__9;
              _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_0,
                v86,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_0__,
                (const MethodInfo_2C2F87C *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v87 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v87->__9__14_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v87->__9__14_0,
                (System_Int32_array **)_9__14_0,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93);
            }
            v94 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                    (System_Func_TSource__int__o *)_9__14_0,
                    (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            v95 = StonePurchaseNotificationMenu___c_TypeInfo;
            v96 = this->fields.dialogOpenQueue;
            v97 = v94;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v95 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v98 = v95->static_fields;
            mHeight -= v97;
            _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v98->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v95);
                v98 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v100 = (Il2CppObject *)v98->__9;
              _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_1,
                v100,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_1__,
                (const MethodInfo_2C2F87C *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v101 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v101->__9__14_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_1;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v101->__9__14_1,
                (System_Int32_array **)_9__14_1,
                v102,
                v103,
                v104,
                v105,
                v106,
                v107);
            }
            v108 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v96,
                     (System_Func_TSource__int__o *)_9__14_1,
                     (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            mDepth = mWidth - v108 + mHeight;
            v167 = mWidth - v108;
          }
          else
          {
            v167 = mWidth;
          }
          v120 = mHeight;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          format = LocalizationManager__Get((System_String_o *)StringLiteral_12540/*"STONE_PURCHASE_RESULT_SUCCESS"*/, 0LL);
          v121 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
          v173 = mDepth - (buyChargeStone + buyFreeStone);
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          if ( !v121 )
            break;
          v128 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( !v121->max_length )
            goto LABEL_100;
          v121->m_Items[0] = (Il2CppObject *)v128;
          sub_B5D560((BattleServantConfConponent_o *)v121->m_Items, v128, v122, v123, v124, v125, v126, v127);
          v172 = v120 - buyChargeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v172);
          v135 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v121->max_length <= 1 )
            goto LABEL_100;
          v121->m_Items[1] = (Il2CppObject *)v135;
          sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[1], v135, v129, v130, v131, v132, v133, v134);
          v171 = v167 - buyFreeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
          v142 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v121->max_length <= 2 )
            goto LABEL_100;
          v121->m_Items[2] = (Il2CppObject *)v142;
          sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[2], v142, v136, v137, v138, v139, v140, v141);
          v170 = mDepth;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v170);
          v149 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v121->max_length <= 3 )
            goto LABEL_100;
          v121->m_Items[3] = (Il2CppObject *)v149;
          sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[3], v149, v143, v144, v145, v146, v147, v148);
          v169 = v120;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
          v156 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v121->max_length <= 4 )
            goto LABEL_100;
          v121->m_Items[4] = (Il2CppObject *)v156;
          sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[4], v156, v150, v151, v152, v153, v154, v155);
          v168 = v167;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v168);
          v163 = (System_Int32_array **)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B5D684(SelfUserGame, v121->obj.klass->_1.element_class);
            if ( !SelfUserGame )
            {
LABEL_101:
              v165 = sub_B5D6BC(SelfUserGame);
              sub_B5D668(v165, 0LL);
            }
          }
          if ( v121->max_length <= 5 )
          {
LABEL_100:
            v164 = sub_B5D6C8(SelfUserGame);
            sub_B5D668(v164, 0LL);
          }
          v121->m_Items[5] = (Il2CppObject *)v163;
          sub_B5D560((BattleServantConfConponent_o *)&v121->m_Items[5], v163, v157, v158, v159, v160, v161, v162);
          v109 = System_String__Format_44656512(format, v121, 0LL);
LABEL_53:
          v110 = v109;
          DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_54:
          if ( System_String__IsNullOrEmpty(v110, 0LL) )
          {
            if ( callback )
              System_Action__Invoke(callback, 0LL);
            return;
          }
          this->fields.callbackFunc = callback;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
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
                  UILabel__set_text(SelfUserGame, v110, 0LL);
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
                    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12535/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v119 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v119,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v119, 0, 0LL);
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
          v79 = &StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/;
          goto LABEL_52;
        case 3:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = &StringLiteral_12537/*"STONE_PURCHASE_RESULT_FAIL"*/;
          goto LABEL_52;
        case 4:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = &StringLiteral_12541/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
          goto LABEL_52;
        case 5:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = &StringLiteral_1642/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
          goto LABEL_52;
        case 6:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = &StringLiteral_12536/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
          goto LABEL_52;
        case 7:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = &StringLiteral_12538/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_52:
          v109 = LocalizationManager__Get((System_String_o *)*v79, 0LL);
          goto LABEL_53;
        case 8:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
          DEFAULT_MESSAGE_FONT_SIZE = 24;
          goto LABEL_54;
        default:
          v110 = 0LL;
          goto LABEL_54;
      }
    }
    sub_B5D69C(SelfUserGame, v75);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x24
  __int64 v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E7AEE & 1) == 0 )
  {
    sub_B5D5C4(
      &StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo,
      kind,
      (_DWORD)callback,
      *(_QWORD *)&buyFreeStone);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__,
      v13,
      v14,
      v15);
    byte_42E7AEE = 1;
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
    v17 = sub_B5D694(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v17, 0LL);
    if ( !v17
      || (*(_DWORD *)(v17 + 16) = kind,
          *(_QWORD *)(v17 + 24) = callback,
          sub_B5D560(
            (BattleServantConfConponent_o *)(v17 + 24),
            (System_Int32_array **)callback,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25),
          *(_QWORD *)(v17 + 40) = actionOnOpening,
          *(_DWORD *)(v17 + 32) = buyFreeStone,
          *(_DWORD *)(v17 + 36) = buyChargeStone,
          sub_B5D560(
            (BattleServantConfConponent_o *)(v17 + 40),
            (System_Int32_array **)actionOnOpening,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          !dialogOpenQueue) )
    {
      sub_B5D69C(v18, v19);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dialogOpenQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
  }
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AF2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4292/*"ConfirmWindow/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E7AF2 = 1;
  }
  return (System_String_o *)StringLiteral_4292/*"ConfirmWindow/CloseButton"*/;
}


void __fastcall StonePurchaseNotificationMenu_DialogOpenQueue___ctor(
        StonePurchaseNotificationMenu_DialogOpenQueue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E644F & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseNotificationMenu___c_TypeInfo, v1, v2, v3);
    byte_42E644F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B5D69C(this, 0LL);
  return q->fields.freeStone;
}