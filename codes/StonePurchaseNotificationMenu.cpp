void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7BFB & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v7);
    byte_40F7BFB = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialogOpenQueue,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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

  if ( (byte_40F7BF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v10);
    byte_40F7BF8 = 1;
  }
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(callbackFunc, 0LL);
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                                                      (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v14 = StonePurchaseNotificationMenu_DialogOpenQueue,
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v14) )
    {
      sub_B170D4();
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

  StonePurchaseNotificationMenu__Close_20903204(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_20903204(
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7BF7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_StonePurchaseNotificationMenu_EndClose__, v10);
    byte_40F7BF7 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *v5; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40F7BF4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F7BF4 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_overflowMethod(messageLabel, this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
        (v5 = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(v5, (System_String_o *)StringLiteral_1, 0LL), (closeLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL);
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

  if ( (byte_40F7BF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_StonePurchaseNotificationMenu_OnClickClose__, method);
    byte_40F7BF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t stone; // w22
  int32_t DEFAULT_MESSAGE_FONT_SIZE; // w21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  __int64 *v36; // x8
  int chargeStone; // w27
  int freeStone; // w28
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v44; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_0; // x25
  Il2CppObject *v47; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t v55; // w0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  StonePurchaseNotificationMenu___c_c *v60; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v61; // x22
  int32_t v62; // w26
  struct StonePurchaseNotificationMenu___c_StaticFields *v63; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_1; // x25
  Il2CppObject *v65; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v73; // w0
  System_String_o *v74; // x0
  System_String_o *v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *messageLabel; // x0
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  System_Action_o *v92; // x20
  int v93; // w28
  __int64 v94; // x2
  System_Object_array *v95; // x26
  __int64 v96; // x0
  __int64 v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x27
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x24
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x23
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x23
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x23
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x23
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v136; // [xsp+14h] [xbp-6Ch]
  int v137; // [xsp+18h] [xbp-68h] BYREF
  int v138; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v139; // [xsp+20h] [xbp-60h] BYREF
  int v140; // [xsp+24h] [xbp-5Ch] BYREF
  int v141; // [xsp+28h] [xbp-58h] BYREF
  int v142; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40F7BF5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v12);
    sub_B16FFC(&Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__, v13);
    sub_B16FFC(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&object___TypeInfo, v17);
    sub_B16FFC(&Method_StonePurchaseNotificationMenu_EndOpen__, v18);
    sub_B16FFC(&Method_StonePurchaseNotificationMenu___c__Open_b__14_0__, v19);
    sub_B16FFC(&Method_StonePurchaseNotificationMenu___c__Open_b__14_1__, v20);
    sub_B16FFC(&StonePurchaseNotificationMenu___c_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_12336, v22);
    sub_B16FFC(&StringLiteral_12331, v23);
    sub_B16FFC(&StringLiteral_12339, v24);
    sub_B16FFC(&StringLiteral_1619, v25);
    sub_B16FFC(&StringLiteral_12334, v26);
    sub_B16FFC(&StringLiteral_12338, v27);
    sub_B16FFC(&StringLiteral_12332, v28);
    sub_B16FFC(&StringLiteral_12335, v29);
    sub_B16FFC(&StringLiteral_12333, v30);
    sub_B16FFC(&StringLiteral_12337, v31);
    byte_40F7BF5 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      stone = SelfUserGame->fields.stone;
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
          v36 = &StringLiteral_12331;
          goto LABEL_52;
        case 1:
          freeStone = SelfUserGame->fields.freeStone;
          chargeStone = SelfUserGame->fields.chargeStone;
          if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                 (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
          {
            dialogOpenQueue = this->fields.dialogOpenQueue;
            v44 = StonePurchaseNotificationMenu___c_TypeInfo;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v44 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            static_fields = v44->static_fields;
            _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__14_0;
            if ( !_9__14_0 )
            {
              if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v44);
                static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v47 = (Il2CppObject *)static_fields->__9;
              _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                           System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                                                           v39,
                                                                                           v40,
                                                                                           v41,
                                                                                           v42);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_0,
                v47,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_0__,
                (const MethodInfo_2B6B6EC *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v48 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v48->__9__14_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v48->__9__14_0,
                (System_Int32_array **)_9__14_0,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
            }
            v55 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                    (System_Func_TSource__int__o *)_9__14_0,
                    (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            v60 = StonePurchaseNotificationMenu___c_TypeInfo;
            v61 = this->fields.dialogOpenQueue;
            v62 = v55;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v60 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v63 = v60->static_fields;
            chargeStone -= v62;
            _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v63->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v60);
                v63 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v65 = (Il2CppObject *)v63->__9;
              _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                           System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                                                           v56,
                                                                                           v57,
                                                                                           v58,
                                                                                           v59);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_1,
                v65,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_1__,
                (const MethodInfo_2B6B6EC *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v66 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v66->__9__14_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_1;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v66->__9__14_1,
                (System_Int32_array **)_9__14_1,
                v67,
                v68,
                v69,
                v70,
                v71,
                v72);
            }
            v73 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                    (System_Func_TSource__int__o *)_9__14_1,
                    (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            stone = freeStone - v73 + chargeStone;
            v136 = freeStone - v73;
          }
          else
          {
            v136 = freeStone;
          }
          v93 = chargeStone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          format = LocalizationManager__Get((System_String_o *)StringLiteral_12337, 0LL);
          v95 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v94);
          v142 = stone - (buyChargeStone + buyFreeStone);
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v142);
          if ( !v95 )
            break;
          v104 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
              goto LABEL_101;
          }
          if ( !v95->max_length )
            goto LABEL_100;
          v95->m_Items[0] = (Il2CppObject *)v104;
          sub_B16F98((BattleServantConfConponent_o *)v95->m_Items, v104, v98, v99, v100, v101, v102, v103);
          v141 = v93 - buyChargeStone;
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v141);
          v110 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
              goto LABEL_101;
          }
          if ( v95->max_length <= 1 )
            goto LABEL_100;
          v95->m_Items[1] = (Il2CppObject *)v110;
          sub_B16F98((BattleServantConfConponent_o *)&v95->m_Items[1], v110, v98, v105, v106, v107, v108, v109);
          v140 = v136 - buyFreeStone;
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v140);
          v116 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
              goto LABEL_101;
          }
          if ( v95->max_length <= 2 )
            goto LABEL_100;
          v95->m_Items[2] = (Il2CppObject *)v116;
          sub_B16F98((BattleServantConfConponent_o *)&v95->m_Items[2], v116, v98, v111, v112, v113, v114, v115);
          v139 = stone;
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v139);
          v122 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
              goto LABEL_101;
          }
          if ( v95->max_length <= 3 )
            goto LABEL_100;
          v95->m_Items[3] = (Il2CppObject *)v122;
          sub_B16F98((BattleServantConfConponent_o *)&v95->m_Items[3], v122, v98, v117, v118, v119, v120, v121);
          v138 = v93;
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v138);
          v128 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
              goto LABEL_101;
          }
          if ( v95->max_length <= 4 )
            goto LABEL_100;
          v95->m_Items[4] = (Il2CppObject *)v128;
          sub_B16F98((BattleServantConfConponent_o *)&v95->m_Items[4], v128, v98, v123, v124, v125, v126, v127);
          v137 = v136;
          v96 = j_il2cpp_value_box_0(int_TypeInfo, &v137);
          v134 = (System_Int32_array **)v96;
          if ( v96 )
          {
            v96 = sub_B170BC(v96, v95->obj.klass->_1.element_class);
            if ( !v96 )
            {
LABEL_101:
              sub_B170F4(v96);
              sub_B170A0();
            }
          }
          if ( v95->max_length <= 5 )
          {
LABEL_100:
            sub_B17100(v96, v97, v98);
            sub_B170A0();
          }
          v95->m_Items[5] = (Il2CppObject *)v134;
          sub_B16F98((BattleServantConfConponent_o *)&v95->m_Items[5], v134, v98, v129, v130, v131, v132, v133);
          v74 = System_String__Format_43822456(format, v95, 0LL);
LABEL_53:
          v75 = v74;
          DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_54:
          if ( System_String__IsNullOrEmpty(v75, 0LL) )
          {
            if ( callback )
              System_Action__Invoke(callback, 0LL);
            return;
          }
          this->fields.callbackFunc = callback;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            messageLabel = this->fields.messageLabel;
            if ( messageLabel )
            {
              if ( messageLabel->fields.mOverflow == DEFAULT_MESSAGE_OVERFLOW_METHOD
                || (UILabel__set_overflowMethod(messageLabel, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
                    (messageLabel = this->fields.messageLabel) != 0LL) )
              {
                if ( messageLabel->fields.mFontSize == DEFAULT_MESSAGE_FONT_SIZE
                  || (UILabel__set_fontSize(messageLabel, DEFAULT_MESSAGE_FONT_SIZE, 0LL),
                      (messageLabel = this->fields.messageLabel) != 0LL) )
                {
                  UILabel__set_text(messageLabel, v75, 0LL);
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  NumberFormat = LocalizationManager__GetNumberFormat(stone, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, NumberFormat, 0LL);
                    closeLabel = this->fields.closeLabel;
                    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12332, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, v87, 0LL);
                      this->fields.state = 1;
                      v92 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v88, v89, v90, v91);
                      System_Action___ctor(
                        v92,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v92, 0, 0LL);
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
          v36 = &StringLiteral_12339;
          goto LABEL_52;
        case 3:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12334;
          goto LABEL_52;
        case 4:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12338;
          goto LABEL_52;
        case 5:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_1619;
          goto LABEL_52;
        case 6:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12333;
          goto LABEL_52;
        case 7:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = &StringLiteral_12335;
LABEL_52:
          v74 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
          goto LABEL_53;
        case 8:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12336, 0LL);
          DEFAULT_MESSAGE_FONT_SIZE = 24;
          goto LABEL_54;
        default:
          v75 = 0LL;
          goto LABEL_54;
      }
    }
    sub_B170D4();
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F7BF6 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v13);
    byte_40F7BF6 = 1;
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
    v15 = sub_B170CC(
            StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo,
            *(_QWORD *)&kind,
            callback,
            *(_QWORD *)&buyFreeStone,
            *(_QWORD *)&buyChargeStone);
    StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v15, 0LL);
    if ( !v15
      || (*(_DWORD *)(v15 + 16) = kind,
          *(_QWORD *)(v15 + 24) = callback,
          sub_B16F98(
            (BattleServantConfConponent_o *)(v15 + 24),
            (System_Int32_array **)callback,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          *(_QWORD *)(v15 + 40) = actionOnOpening,
          *(_DWORD *)(v15 + 32) = buyFreeStone,
          *(_DWORD *)(v15 + 36) = buyChargeStone,
          sub_B16F98(
            (BattleServantConfConponent_o *)(v15 + 40),
            (System_Int32_array **)actionOnOpening,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27),
          !dialogOpenQueue) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dialogOpenQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
  }
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7BFA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4203, method);
    byte_40F7BFA = 1;
  }
  return (System_String_o *)StringLiteral_4203;
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

  if ( (byte_40F7A68 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_40F7A68 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(StonePurchaseNotificationMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B170D4();
  return q->fields.freeStone;
}