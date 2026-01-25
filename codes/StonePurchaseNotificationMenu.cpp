void StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4CECF1B & 1) == 0 )
  {
    sub_1C7BAE8(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4CECF1B = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
}


void StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CECF1A & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4CECF1A = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dialogOpenQueue, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseNotificationMenu__Callback(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  const MethodInfo *v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4CECF16 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4CECF16 = 1;
  }
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_319601C *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v13 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v13) )
    {
      sub_1C7BD40(object, v12);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v13[1].klass,
      (System_Action_o *)v13[1].monitor,
      (int32_t)v13[2].klass,
      HIDWORD(v13[2].klass),
      (int32_t)v13[2].monitor,
      BYTE4(v13[2].monitor),
      (System_Action_o *)v13[3].klass,
      v14);
  }
}


void StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_40249164(this, 0, v2);
}


void StonePurchaseNotificationMenu__Close_40249164(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CECF15 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4CECF15 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


void StonePurchaseNotificationMenu__EndClose(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECF12 & 1) == 0 )
  {
    sub_1C7BAE8(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CECF12 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneDataLabel = this->fields.messageLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_overflowMethod(stoneDataLabel, this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD, 0);
  stoneDataLabel = this->fields.messageLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneDataLabel = this->fields.closeLabel;
  if ( !stoneDataLabel )
    goto LABEL_11;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  stoneDataLabel = (UILabel_o *)StonePurchaseNotificationMenu_TypeInfo;
  windowTransform = this->fields.windowTransform;
  if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
  if ( !windowTransform )
LABEL_11:
    sub_1C7BD40(stoneDataLabel, method);
  v5.fields.x = 0.0;
  v5.fields.z = 0.0;
  v5.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v5, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void StonePurchaseNotificationMenu__OnClickClose(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CECF17 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseBehaviour_TypeInfo);
    sub_1C7BAE8(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4CECF17 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v3 = PurchaseBehaviour_TypeInfo;
    }
    v3->static_fields->isOpenPurchaseDialogEvent = 0;
    this->fields.state = 3;
    v4 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    StonePurchaseNotificationMenu__Callback(this, v6);
  }
}


void StonePurchaseNotificationMenu__Open(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v16; // x1
  _DWORD *v17; // x27
  int32_t v18; // w8
  UIWidget_o *messageLabel; // x21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w28
  float x; // s0
  int32_t v22; // w1
  float y; // s0
  int32_t v24; // w1
  StonePurchaseNotificationMenu_o *v25; // x0
  const MethodInfo *v26; // x1
  StonePurchaseNotificationMenu_c *v27; // x8
  UnityEngine_Transform_o *windowTransform; // x21
  char v29; // w23
  float *p_WINDOW_BASE_POS_Y; // x8
  System_String_o *v31; // x23
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  int v34; // w21
  System_String_o *v35; // x25
  System_String_o *v36; // x23
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  __int64 *v39; // x21
  __int64 *v40; // x8
  System_String_o *monitor; // x21
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_String_o *v44; // x0
  int v45; // w23
  int32_t v46; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v48; // x0
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v50; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w0
  StonePurchaseNotificationMenu___c_c *v59; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v60; // x10
  int32_t v61; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v62; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v64; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w0
  System_String_o *v73; // x21
  int v74; // w27
  System_Object_array *v75; // x28
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Il2CppObject *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  Il2CppObject *v89; // x21
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  Il2CppObject *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  Il2CppObject *v110; // x21
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  Il2CppObject *v117; // x21
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  int32_t v126; // w23
  UILabel_o *v127; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v130; // x20
  __int64 v131; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v134; // [xsp+8h] [xbp-98h]
  int32_t v135; // [xsp+10h] [xbp-90h]
  __int64 *v136; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v138; // [xsp+20h] [xbp-80h] BYREF
  int v139; // [xsp+24h] [xbp-7Ch] BYREF
  int32_t v140; // [xsp+28h] [xbp-78h] BYREF
  int v141; // [xsp+2Ch] [xbp-74h] BYREF
  int v142; // [xsp+30h] [xbp-70h] BYREF
  int v143; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECF13 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C7BAE8(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_1C7BAE8(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C7BAE8(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_1C7BAE8(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_1C7BAE8(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12452/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_1C7BAE8(&StringLiteral_12438/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_1C7BAE8(&StringLiteral_12432/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_12441/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_1C7BAE8(&StringLiteral_1835/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12435/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_1C7BAE8(&StringLiteral_12436/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_1C7BAE8(&StringLiteral_12453/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_1C7BAE8(&StringLiteral_12440/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_1C7BAE8(&StringLiteral_12433/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_12437/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_1C7BAE8(&StringLiteral_12446/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_12434/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12439/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_1C7BAE8(&StringLiteral_12451/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_4CECF13 = 1;
  }
  entity = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v17 = (_DWORD *)SelfUserGame;
      v18 = *(_DWORD *)(SelfUserGame + 184);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v135 = v18;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      if ( messageLabel )
      {
        x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
        v22 = x == INFINITY ? 0x80000000 : (int)x;
        UIWidget__set_width(messageLabel, v22, 0);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
          if ( y == INFINITY )
            v24 = 0x80000000;
          else
            v24 = (int)y;
          UIWidget__set_height((UIWidget_o *)SelfUserGame, v24, 0);
          SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering(v25, v26);
          v27 = StonePurchaseNotificationMenu_TypeInfo;
          windowTransform = this->fields.windowTransform;
          v29 = SelfUserGame;
          if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
            v27 = StonePurchaseNotificationMenu_TypeInfo;
          }
          p_WINDOW_BASE_POS_Y = &v27->static_fields->WINDOW_BASE_POS_Y;
          if ( (v29 & 1) != 0 )
          {
            if ( !windowTransform )
              goto LABEL_139;
            ++p_WINDOW_BASE_POS_Y;
          }
          else if ( !windowTransform )
          {
            goto LABEL_139;
          }
          v145.fields.y = *p_WINDOW_BASE_POS_Y;
          v145.fields.x = 0.0;
          v145.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v145, 0);
          switch ( kind )
          {
            case 0:
              v31 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_342E348 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_28;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_28:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0);
                v33 = System_String__Concat_64176912(v31, v32, 0);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0);
                v33 = System_String__Concat_64215176(v31, monitor, v42, 0);
              }
              v35 = v33;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v36 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_342E348 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_38;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_38:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12453/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0);
                v38 = System_String__Concat_64176912(v36, v37, 0);
              }
              else
              {
                if ( !entity )
                  break;
                v43 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12452/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0);
                v38 = System_String__Concat_64215176(v36, v43, v44, 0);
              }
              value = 23;
              v39 = &StringLiteral_12439/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v35 = v38;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v45 = v17[45];
              v46 = v17[46];
              v134 = v17[44];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v136 = v39;
                dialogOpenQueue = this->fields.dialogOpenQueue;
                v48 = StonePurchaseNotificationMenu___c_TypeInfo;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v48 = StonePurchaseNotificationMenu___c_TypeInfo;
                }
                _9__19_0 = (System_Func_object__int__o *)v48->static_fields->__9__19_0;
                if ( !_9__19_0 )
                {
                  if ( !v48->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v48);
                    v48 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v50 = (Il2CppObject *)v48->static_fields->__9;
                  _9__19_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v50,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
                    (int32_t)_9__19_0,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57);
                }
                v58 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_31AD7D0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v59 = StonePurchaseNotificationMenu___c_TypeInfo;
                v60 = this->fields.dialogOpenQueue;
                v61 = v58;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v62 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v59 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v60 = v62;
                }
                v45 -= v61;
                _9__19_1 = (System_Func_object__int__o *)v59->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v60;
                  if ( !v59->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v59);
                    v59 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v64 = (Il2CppObject *)v59->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v64,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0);
                  v65 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v65->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&v65->__9__19_1,
                    (int32_t)_9__19_1,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71);
                  v60 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v72 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v60,
                        (System_Func_TSource__int__o *)_9__19_1,
                        (const MethodInfo_31AD7D0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v39 = v136;
                v46 = v134 - v72 + v45;
                v134 -= v72;
              }
              v73 = (System_String_o *)*v39;
              v74 = v46 - (buyChargeStone + buyFreeStone);
              v135 = v46;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v73, 0);
              v75 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 6);
              v143 = v74;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v143);
              if ( !v75 )
                break;
              v82 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !LODWORD(v75->max_length) )
                goto LABEL_140;
              v75->m_Items[0] = v82;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v75->m_Items, (int32_t)v82, v76, v77, v78, v79, v80, v81);
              v142 = v45 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v142);
              v89 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v75->max_length) <= 1 )
                goto LABEL_140;
              v75->m_Items[1] = v89;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v75->m_Items[1], (int32_t)v89, v83, v84, v85, v86, v87, v88);
              v141 = v134 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v141);
              v96 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v75->max_length) <= 2 )
                goto LABEL_140;
              v75->m_Items[2] = v96;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v75->m_Items[2], (int32_t)v96, v90, v91, v92, v93, v94, v95);
              v140 = v135;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v140);
              v103 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v75->max_length) <= 3 )
                goto LABEL_140;
              v75->m_Items[3] = v103;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v75->m_Items[3],
                (int32_t)v103,
                v97,
                v98,
                v99,
                v100,
                v101,
                v102);
              v139 = v45;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v139);
              v110 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v75->max_length) <= 4 )
                goto LABEL_140;
              v75->m_Items[4] = v110;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v75->m_Items[4],
                (int32_t)v110,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109);
              v138 = v134;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v138);
              v117 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C7BC24(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v131 = sub_1C7BD64(SelfUserGame);
                  sub_1C7BC10(v131, 0);
                }
              }
              if ( LODWORD(v75->max_length) <= 5 )
LABEL_140:
                sub_1C7BD48(SelfUserGame);
              v75->m_Items[5] = v117;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v75->m_Items[5],
                (int32_t)v117,
                v111,
                v112,
                v113,
                v114,
                v115,
                v116);
              v118 = System_String__Format_64218356(formata, v75, 0);
              v35 = System_String__Concat_64176912(v35, v118, 0);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0);
                v35 = System_String__Concat_64176912(v35, v119, 0);
              }
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_116:
              v34 = 1;
LABEL_117:
              if ( System_String__IsNullOrEmpty(v35, 0) )
              {
                if ( callback )
                  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
                    callback->fields.method_code,
                    callback->fields.method);
                return;
              }
              this->fields.callbackFunc = callback;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
                (int32_t)callback,
                v120,
                v121,
                v122,
                v123,
                v124,
                v125);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v126 = v135;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v126 = v135;
                if ( !SelfUserGame )
                  break;
              }
              if ( *(_DWORD *)(SelfUserGame + 424) != value )
              {
                UILabel__set_fontSize((UILabel_o *)SelfUserGame, value, 0);
                SelfUserGame = (__int64)this->fields.messageLabel;
                if ( !SelfUserGame )
                  break;
              }
              UILabel__set_text((UILabel_o *)SelfUserGame, v35, 0);
              if ( !v34 )
                goto LABEL_133;
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v127 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v127 )
                {
                  UILabel__SetCondensedScale(
                    v127,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0,
                    0);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v126, 0);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0);
                      this->fields.state = 1;
                      v130 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                      System_Action___ctor(
                        v130,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0);
                      BaseDialog__Open((BaseDialog_o *)this, v130, 0, 0, 0);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v35 = (System_String_o *)StringLiteral_1/*""*/;
              v39 = &StringLiteral_12435/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12441/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12436/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12440/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_1835/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12434/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12437/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v35 = LocalizationManager__Get((System_String_o *)*v40, 0);
              v34 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0);
              v34 = 0;
              value = 24;
              goto LABEL_117;
            default:
              v34 = 0;
              v35 = 0;
              goto LABEL_117;
          }
        }
      }
    }
LABEL_139:
    sub_1C7BD40(SelfUserGame, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseNotificationMenu__OpenQueueable(
        StonePurchaseNotificationMenu_o *this,
        int32_t kind,
        System_Action_o *callback,
        int32_t buyFreeStone,
        int32_t buyChargeStone,
        int32_t shopId,
        bool isSentGift,
        System_Action_o *actionOnOpening,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *v16; // x25
  _BOOL8 ShouldCentering; // x0
  __int64 v18; // x1
  StonePurchaseNotificationMenu_c *v19; // x8
  UnityEngine_Transform_o *windowTransform; // x26
  bool v21; // w27
  float *p_WINDOW_BASE_POS_Y; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  __int64 v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v47; // x7
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4CECF14 & 1) == 0 )
  {
    sub_1C7BAE8(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_1C7BAE8(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4CECF14 = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))actionOnOpening->fields.invoke_impl)(
                                                  actionOnOpening->fields.method_code,
                                                  actionOnOpening->fields.method);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v19 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v21 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v19 = StonePurchaseNotificationMenu_TypeInfo;
    }
    p_WINDOW_BASE_POS_Y = &v19->static_fields->WINDOW_BASE_POS_Y;
    if ( v21 )
    {
      if ( windowTransform )
      {
        ++p_WINDOW_BASE_POS_Y;
LABEL_17:
        v48.fields.y = *p_WINDOW_BASE_POS_Y;
        v48.fields.x = 0.0;
        v48.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v48, 0);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v47);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1C7BD40(ShouldCentering, v18);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v24 = sub_1C7BD34(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  if ( !v24 )
    goto LABEL_19;
  *(_DWORD *)(v24 + 16) = kind;
  *(_QWORD *)(v24 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 24), (int32_t)callback, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v24 + 48) = actionOnOpening;
  *(_DWORD *)(v24 + 32) = buyFreeStone;
  *(_DWORD *)(v24 + 36) = buyChargeStone;
  *(_DWORD *)(v24 + 40) = shopId;
  *(_BYTE *)(v24 + 44) = isSentGift;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 48), (int32_t)actionOnOpening, v31, v32, v33, v34, v35, v36);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v44 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v24,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v24;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 4), v24, v37, v38, v39, v40, v41, v42);
  }
}


bool StonePurchaseNotificationMenu__ShouldCentering(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CECF18 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CECF18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CECF19 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4653/*"ConfirmWindow/CloseButton"*/);
    byte_4CECF19 = 1;
  }
  return (System_String_o *)StringLiteral_4653/*"ConfirmWindow/CloseButton"*/;
}


void StonePurchaseNotificationMenu_DialogOpenQueue___ctor(
        StonePurchaseNotificationMenu_DialogOpenQueue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseNotificationMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CECF1C & 1) == 0 )
  {
    sub_1C7BAE8(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_4CECF1C = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StonePurchaseNotificationMenu___c___ctor(StonePurchaseNotificationMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t StonePurchaseNotificationMenu___c___Open_b__19_0(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C7BD40(this, 0);
  return q->fields.chargeStone;
}


int32_t StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C7BD40(this, 0);
  return q->fields.freeStone;
}