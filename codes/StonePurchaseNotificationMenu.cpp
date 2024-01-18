void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4185767 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v4);
    byte_4185767 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v5;
  sub_B2C2F8(&this->fields.dialogOpenQueue, v5);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Action_o **p_callbackFunc; // x0
  System_Action_o *callbackFunc; // x20
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v8; // x1
  StonePurchaseNotificationMenu_DialogOpenQueue_o *v9; // x20
  const MethodInfo *v10; // x6

  if ( (byte_4185764 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v4);
    byte_4185764 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    System_Action__Invoke(callbackFunc, 0LL);
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                                                      (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v9 = StonePurchaseNotificationMenu_DialogOpenQueue,
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v9) )
    {
      sub_B2C434(StonePurchaseNotificationMenu_DialogOpenQueue, v8);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      v9->fields.kind,
      v9->fields.callback,
      v9->fields.freeStone,
      v9->fields.chargeStone,
      v9->fields.actionOnOpening,
      v10);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_20876492(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_20876492(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4185763 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_StonePurchaseNotificationMenu_EndClose__, v5);
    byte_4185763 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
    this->fields.state = 4;
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4185760 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4185760 = 1;
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
    sub_B2C434(stoneDataLabel, method);
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

  if ( (byte_4185765 & 1) == 0 )
  {
    sub_B2C35C(&Method_StonePurchaseNotificationMenu_OnClickClose__, method);
    byte_4185765 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  __int64 v33; // x1
  int32_t mDepth; // w22
  int32_t DEFAULT_MESSAGE_FONT_SIZE; // w21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w25
  __int64 *v37; // x8
  int mHeight; // w27
  int mWidth; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x22
  StonePurchaseNotificationMenu___c_c *v41; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_0; // x25
  Il2CppObject *v44; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v45; // x0
  int32_t v46; // w0
  StonePurchaseNotificationMenu___c_c *v47; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v48; // x22
  int32_t v49; // w26
  struct StonePurchaseNotificationMenu___c_StaticFields *v50; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__14_1; // x25
  Il2CppObject *v52; // x26
  struct StonePurchaseNotificationMenu___c_StaticFields *v53; // x0
  int32_t v54; // w0
  System_String_o *v55; // x0
  System_String_o *v56; // x23
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v59; // x20
  int v60; // w28
  System_Object_array *v61; // x26
  Il2CppObject *v62; // x27
  Il2CppObject *v63; // x24
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x23
  Il2CppObject *v66; // x23
  Il2CppObject *v67; // x23
  __int64 v68; // x0
  __int64 v69; // x0
  System_String_o *format; // [xsp+8h] [xbp-78h]
  int v71; // [xsp+14h] [xbp-6Ch]
  int v72; // [xsp+18h] [xbp-68h] BYREF
  int v73; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v74; // [xsp+20h] [xbp-60h] BYREF
  int v75; // [xsp+24h] [xbp-5Ch] BYREF
  int v76; // [xsp+28h] [xbp-58h] BYREF
  int v77; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4185761 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v12);
    sub_B2C35C(&Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__, v13);
    sub_B2C35C(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&object___TypeInfo, v17);
    sub_B2C35C(&Method_StonePurchaseNotificationMenu_EndOpen__, v18);
    sub_B2C35C(&Method_StonePurchaseNotificationMenu___c__Open_b__14_0__, v19);
    sub_B2C35C(&Method_StonePurchaseNotificationMenu___c__Open_b__14_1__, v20);
    sub_B2C35C(&StonePurchaseNotificationMenu___c_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_12391/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v22);
    sub_B2C35C(&StringLiteral_12386/*"STONE_PURCHASE_RESULT_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, v24);
    sub_B2C35C(&StringLiteral_1617/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v25);
    sub_B2C35C(&StringLiteral_12389/*"STONE_PURCHASE_RESULT_FAIL"*/, v26);
    sub_B2C35C(&StringLiteral_12393/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v27);
    sub_B2C35C(&StringLiteral_12387/*"STONE_PURCHASE_RESULT_CLOSE"*/, v28);
    sub_B2C35C(&StringLiteral_12390/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v29);
    sub_B2C35C(&StringLiteral_12388/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v30);
    sub_B2C35C(&StringLiteral_12392/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v31);
    byte_4185761 = 1;
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
          v37 = &StringLiteral_12386/*"STONE_PURCHASE_RESULT_CANCEL"*/;
          goto LABEL_52;
        case 1:
          mWidth = SelfUserGame->fields.mWidth;
          mHeight = SelfUserGame->fields.mHeight;
          if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                 (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
          {
            dialogOpenQueue = this->fields.dialogOpenQueue;
            v41 = StonePurchaseNotificationMenu___c_TypeInfo;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v41 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            static_fields = v41->static_fields;
            _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__14_0;
            if ( !_9__14_0 )
            {
              if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v41);
                static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v44 = (Il2CppObject *)static_fields->__9;
              _9__14_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_0,
                v44,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_0__,
                (const MethodInfo_27127B0 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v45 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v45->__9__14_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_0;
              sub_B2C2F8(&v45->__9__14_0, _9__14_0);
            }
            v46 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                    (System_Func_TSource__int__o *)_9__14_0,
                    (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            v47 = StonePurchaseNotificationMenu___c_TypeInfo;
            v48 = this->fields.dialogOpenQueue;
            v49 = v46;
            if ( (BYTE3(StonePurchaseNotificationMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
              v47 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v50 = v47->static_fields;
            mHeight -= v49;
            _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v50->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v47);
                v50 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              }
              v52 = (Il2CppObject *)v50->__9;
              _9__14_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__14_1,
                v52,
                Method_StonePurchaseNotificationMenu___c__Open_b__14_1__,
                (const MethodInfo_27127B0 *)Method_System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int___ctor__);
              v53 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
              v53->__9__14_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__14_1;
              sub_B2C2F8(&v53->__9__14_1, _9__14_1);
            }
            v54 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                    (System_Func_TSource__int__o *)_9__14_1,
                    (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
            mDepth = mWidth - v54 + mHeight;
            v71 = mWidth - v54;
          }
          else
          {
            v71 = mWidth;
          }
          v60 = mHeight;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          format = LocalizationManager__Get((System_String_o *)StringLiteral_12392/*"STONE_PURCHASE_RESULT_SUCCESS"*/, 0LL);
          v61 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
          v77 = mDepth - (buyChargeStone + buyFreeStone);
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
          if ( !v61 )
            break;
          v62 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( !v61->max_length )
            goto LABEL_100;
          v61->m_Items[0] = v62;
          sub_B2C2F8(v61->m_Items, v62);
          v76 = v60 - buyChargeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
          v63 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v61->max_length <= 1 )
            goto LABEL_100;
          v61->m_Items[1] = v63;
          sub_B2C2F8(&v61->m_Items[1], v63);
          v75 = v71 - buyFreeStone;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
          v64 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v61->max_length <= 2 )
            goto LABEL_100;
          v61->m_Items[2] = v64;
          sub_B2C2F8(&v61->m_Items[2], v64);
          v74 = mDepth;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
          v65 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v61->max_length <= 3 )
            goto LABEL_100;
          v61->m_Items[3] = v65;
          sub_B2C2F8(&v61->m_Items[3], v65);
          v73 = v60;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
          v66 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
              goto LABEL_101;
          }
          if ( v61->max_length <= 4 )
            goto LABEL_100;
          v61->m_Items[4] = v66;
          sub_B2C2F8(&v61->m_Items[4], v66);
          v72 = v71;
          SelfUserGame = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
          v67 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = (UILabel_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
            if ( !SelfUserGame )
            {
LABEL_101:
              v69 = sub_B2C454();
              sub_B2C400(v69, 0LL);
            }
          }
          if ( v61->max_length <= 5 )
          {
LABEL_100:
            v68 = sub_B2C460(SelfUserGame);
            sub_B2C400(v68, 0LL);
          }
          v61->m_Items[5] = v67;
          sub_B2C2F8(&v61->m_Items[5], v67);
          v55 = System_String__Format_44384256(format, v61, 0LL);
LABEL_53:
          v56 = v55;
          DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
LABEL_54:
          if ( System_String__IsNullOrEmpty(v56, 0LL) )
          {
            if ( callback )
              System_Action__Invoke(callback, 0LL);
            return;
          }
          this->fields.callbackFunc = callback;
          sub_B2C2F8(&this->fields.callbackFunc, callback);
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
                  UILabel__set_text(SelfUserGame, v56, 0LL);
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
                    SelfUserGame = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                      System_Action___ctor(
                        v59,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
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
          v37 = &StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/;
          goto LABEL_52;
        case 3:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = &StringLiteral_12389/*"STONE_PURCHASE_RESULT_FAIL"*/;
          goto LABEL_52;
        case 4:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = &StringLiteral_12393/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
          goto LABEL_52;
        case 5:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = &StringLiteral_1617/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
          goto LABEL_52;
        case 6:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = &StringLiteral_12388/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
          goto LABEL_52;
        case 7:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = &StringLiteral_12390/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_52:
          v55 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
          goto LABEL_53;
        case 8:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12391/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
          DEFAULT_MESSAGE_FONT_SIZE = 24;
          goto LABEL_54;
        default:
          v56 = 0LL;
          goto LABEL_54;
      }
    }
    sub_B2C434(SelfUserGame, v33);
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
  StonePurchaseNotificationMenu_DialogOpenQueue_o *v15; // x25
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4185762 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v13);
    byte_4185762 = 1;
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
    v15 = (StonePurchaseNotificationMenu_DialogOpenQueue_o *)sub_B2C42C(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    StonePurchaseNotificationMenu_DialogOpenQueue___ctor(v15, 0LL);
    if ( !v15
      || (v15->fields.kind = kind,
          v15->fields.callback = callback,
          sub_B2C2F8(&v15->fields.callback, callback),
          v15->fields.actionOnOpening = actionOnOpening,
          v15->fields.freeStone = buyFreeStone,
          v15->fields.chargeStone = buyChargeStone,
          sub_B2C2F8(&v15->fields.actionOnOpening, actionOnOpening),
          !dialogOpenQueue) )
    {
      sub_B2C434(v16, v17);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dialogOpenQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
  }
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185766 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4221/*"ConfirmWindow/CloseButton"*/, method);
    byte_4185766 = 1;
  }
  return (System_String_o *)StringLiteral_4221/*"ConfirmWindow/CloseButton"*/;
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
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4184799 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_4184799 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__14_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_B2C434(this, 0LL);
  return q->fields.freeStone;
}