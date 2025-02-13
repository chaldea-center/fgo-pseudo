void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4BDA7A4 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4BDA7A4 = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDA7A3 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4BDA7A3 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dialogOpenQueue, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  const MethodInfo *v14; // [xsp+0h] [xbp-30h]

  if ( (byte_4BDA79F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C21E38(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C21E38(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4BDA79F = 1;
  }
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2FD0884 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v13 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v13) )
    {
      sub_1C22094(object, v12);
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


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_37382204(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_37382204(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BDA79E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4BDA79E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&off_18 + (_QWORD)callback))(
        *(_QWORD *)((char *)&dword_40 + (_QWORD)callback),
        *(__int64 *)((char *)&qword_28 + (_QWORD)callback));
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C21DDC(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDA79B & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA79B = 1;
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
    sub_1C22094(stoneDataLabel, method);
  v5.fields.x = 0.0;
  v5.fields.z = 0.0;
  v5.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v5, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BDA7A0 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4BDA7A0 = 1;
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
      v4 = (_QWORD *)sub_1C21E50(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    StonePurchaseNotificationMenu__Callback(this, v6);
  }
}


void __fastcall StonePurchaseNotificationMenu__Open(
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
  int v18; // w8
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
  int v46; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v48; // x0
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v50; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int32_t v58; // w0
  StonePurchaseNotificationMenu___c_c *v59; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v60; // x10
  int32_t v61; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v62; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v64; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int32_t v72; // w0
  System_String_o *v73; // x21
  int v74; // w27
  System_Object_array *v75; // x28
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x21
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x21
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x21
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x21
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x21
  System_String_o *v136; // x0
  System_String_o *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int32_t v144; // w23
  UILabel_o *v145; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v148; // x20
  __int64 v149; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v152; // [xsp+8h] [xbp-98h]
  int v153; // [xsp+10h] [xbp-90h]
  __int64 *v154; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v156; // [xsp+20h] [xbp-80h] BYREF
  int v157; // [xsp+24h] [xbp-7Ch] BYREF
  int v158; // [xsp+28h] [xbp-78h] BYREF
  int v159; // [xsp+2Ch] [xbp-74h] BYREF
  int v160; // [xsp+30h] [xbp-70h] BYREF
  int v161; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDA79C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C21E38(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_1C21E38(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_1C21E38(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_1C21E38(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_1C21E38(&StringLiteral_12540/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_1C21E38(&StringLiteral_12526/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_1C21E38(&StringLiteral_12520/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_1C21E38(&StringLiteral_1973/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12523/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_1C21E38(&StringLiteral_12524/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_1C21E38(&StringLiteral_12541/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_1C21E38(&StringLiteral_12528/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_1C21E38(&StringLiteral_12521/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_1C21E38(&StringLiteral_12525/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_1C21E38(&StringLiteral_12534/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12522/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12527/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_1C21E38(&StringLiteral_12539/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_4BDA79C = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v17 = (_DWORD *)SelfUserGame;
      v18 = *(_DWORD *)(SelfUserGame + 176);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v153 = v18;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      if ( messageLabel )
      {
        x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
        v22 = x == INFINITY ? 0x80000000 : (int)x;
        UIWidget__set_width(messageLabel, v22, 0LL);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
          if ( y == INFINITY )
            v24 = 0x80000000;
          else
            v24 = (int)y;
          UIWidget__set_height((UIWidget_o *)SelfUserGame, v24, 0LL);
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
          v163.fields.y = *p_WINDOW_BASE_POS_Y;
          v163.fields.x = 0.0;
          v163.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v163, 0LL);
          switch ( kind )
          {
            case 0:
              v31 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_28;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_28:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
                v33 = System_String__Concat_63115476(v31, v32, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
                v33 = System_String__Concat_63126736(v31, monitor, v42, 0LL);
              }
              v35 = v33;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v36 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_38;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_38:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12541/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
                v38 = System_String__Concat_63115476(v36, v37, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                v43 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12540/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
                v38 = System_String__Concat_63126736(v36, v43, v44, 0LL);
              }
              value = 23;
              v39 = &StringLiteral_12527/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v35 = v38;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v45 = v17[43];
              v46 = v17[44];
              v152 = v17[42];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v154 = v39;
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
                  _9__19_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v50,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0LL);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
                    (int64_t)_9__19_0,
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
                        (const MethodInfo_2FE8364 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
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
                  _9__19_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v64,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0LL);
                  v65 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v65->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v65->__9__19_1,
                    (int64_t)_9__19_1,
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
                        (const MethodInfo_2FE8364 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v39 = v154;
                v46 = v152 - v72 + v45;
                v152 -= v72;
              }
              v73 = (System_String_o *)*v39;
              v74 = v46 - (buyChargeStone + buyFreeStone);
              v153 = v46;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v73, 0LL);
              v75 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 6LL);
              v161 = v74;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v161, v76, v77, v78);
              if ( !v75 )
                break;
              v85 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !v75->max_length )
                goto LABEL_140;
              v75->m_Items[0] = (Il2CppObject *)v85;
              sub_1C21DDC((PartyOrganizationUtility_o *)v75->m_Items, v85, v79, v80, v81, v82, v83, v84);
              v160 = v45 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v160, v86, v87, v88);
              v95 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v75->max_length <= 1 )
                goto LABEL_140;
              v75->m_Items[1] = (Il2CppObject *)v95;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v75->m_Items[1], v95, v89, v90, v91, v92, v93, v94);
              v159 = v152 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v159, v96, v97, v98);
              v105 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v75->max_length <= 2 )
                goto LABEL_140;
              v75->m_Items[2] = (Il2CppObject *)v105;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v75->m_Items[2], v105, v99, v100, v101, v102, v103, v104);
              v158 = v153;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v158, v106, v107, v108);
              v115 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v75->max_length <= 3 )
                goto LABEL_140;
              v75->m_Items[3] = (Il2CppObject *)v115;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v75->m_Items[3], v115, v109, v110, v111, v112, v113, v114);
              v157 = v45;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v157, v116, v117, v118);
              v125 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v75->max_length <= 4 )
                goto LABEL_140;
              v75->m_Items[4] = (Il2CppObject *)v125;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v75->m_Items[4], v125, v119, v120, v121, v122, v123, v124);
              v156 = v152;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v156, v126, v127, v128);
              v135 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C21F74(SelfUserGame, v75->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v149 = sub_1C220B8(SelfUserGame);
                  sub_1C21F60(v149, 0LL);
                }
              }
              if ( v75->max_length <= 5 )
LABEL_140:
                sub_1C2209C(SelfUserGame, v16);
              v75->m_Items[5] = (Il2CppObject *)v135;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v75->m_Items[5], v135, v129, v130, v131, v132, v133, v134);
              v136 = System_String__Format_63129984(formata, v75, 0LL);
              v35 = System_String__Concat_63115476(v35, v136, 0LL);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12534/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
                v35 = System_String__Concat_63115476(v35, v137, 0LL);
              }
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_116:
              v34 = 1;
LABEL_117:
              if ( System_String__IsNullOrEmpty(v35, 0LL) )
              {
                if ( callback )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
                    callback->fields.original_method_info,
                    *(_QWORD *)&callback->fields.extra_arg);
                return;
              }
              this->fields.callbackFunc = callback;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
                (int64_t)callback,
                v138,
                v139,
                v140,
                v141,
                v142,
                v143);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v144 = v153;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v144 = v153;
                if ( !SelfUserGame )
                  break;
              }
              if ( *(_DWORD *)(SelfUserGame + 424) != value )
              {
                UILabel__set_fontSize((UILabel_o *)SelfUserGame, value, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                if ( !SelfUserGame )
                  break;
              }
              UILabel__set_text((UILabel_o *)SelfUserGame, v35, 0LL);
              if ( !v34 )
                goto LABEL_133;
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v145 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v145 )
                {
                  UILabel__SetCondensedScale(
                    v145,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0,
                    0LL);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v144, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v148 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                      System_Action___ctor(
                        v148,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v148, 0, 0LL);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v35 = (System_String_o *)StringLiteral_1/*""*/;
              v39 = &StringLiteral_12523/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12524/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12528/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_1973/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12522/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12525/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v35 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
              v34 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
              v34 = 0;
              value = 24;
              goto LABEL_117;
            default:
              v34 = 0;
              v35 = 0LL;
              goto LABEL_117;
          }
        }
      }
    }
LABEL_139:
    sub_1C22094(SelfUserGame, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseNotificationMenu__OpenQueueable(
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
  int64_t v24; // x27
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v47; // x7
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4BDA79D & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_1C21E38(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4BDA79D = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionOnOpening->fields.m_target)(
                                                  actionOnOpening->fields.original_method_info,
                                                  *(_QWORD *)&actionOnOpening->fields.extra_arg);
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
        UnityEngine_Transform__set_localPosition(windowTransform, v48, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v47);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(ShouldCentering, v18);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v24 = sub_1C22084(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_19;
  *(_DWORD *)(v24 + 16) = kind;
  *(_QWORD *)(v24 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v24 + 48) = actionOnOpening;
  *(_DWORD *)(v24 + 32) = buyFreeStone;
  *(_DWORD *)(v24 + 36) = buyChargeStone;
  *(_DWORD *)(v24 + 40) = shopId;
  *(_BYTE *)(v24 + 44) = isSentGift;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 48), (int64_t)actionOnOpening, v31, v32, v33, v34, v35, v36);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v44 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v24,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v24;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 4), v24, v37, v38, v39, v40, v41, v42);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDA7A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDA7A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDA7A2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4773/*"ConfirmWindow/CloseButton"*/);
    byte_4BDA7A2 = 1;
  }
  return (System_String_o *)StringLiteral_4773/*"ConfirmWindow/CloseButton"*/;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDA7A5 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_4BDA7A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall StonePurchaseNotificationMenu___c___ctor(
        StonePurchaseNotificationMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_0(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C22094(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C22094(this, 0LL);
  return q->fields.freeStone;
}