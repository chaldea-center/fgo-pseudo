void StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_593657C & 1) == 0 )
  {
    sub_21FFC50(&StonePurchaseNotificationMenu_TypeInfo);
    byte_593657C = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
}


void StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_593657B & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_593657B = 1;
  }
  v3 = System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo;
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialogOpenQueue, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseNotificationMenu__Callback(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  const MethodInfo *v14; // [xsp+0h] [xbp-30h]

  if ( (byte_5936577 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_5936577 = 1;
  }
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v13 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v13) )
    {
      sub_21FFECC(object, v12);
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

  StonePurchaseNotificationMenu__Close_45512900(this, 0, v2);
}


void StonePurchaseNotificationMenu__Close_45512900(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_5936576 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_5936576 = 1;
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


void StonePurchaseNotificationMenu__EndClose(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x2
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936573 & 1) == 0 )
  {
    sub_21FFC50(&StonePurchaseNotificationMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936573 = 1;
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
  stoneDataLabel = (UILabel_o *)StonePurchaseNotificationMenu_TypeInfo;
  windowTransform = this->fields.windowTransform;
  this->fields.state = 0;
  if ( !HIDWORD(stoneDataLabel->fields.hitCheck) )
    j_il2cpp_runtime_class_init_0(stoneDataLabel, method, v4);
  if ( !windowTransform )
LABEL_11:
    sub_21FFECC(stoneDataLabel, method);
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  v6.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v6, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void StonePurchaseNotificationMenu__OnClickClose(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v4; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x8
  _BYTE *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_5936578 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_5936578 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
      v4 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v4->static_fields;
    v6 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    this->fields.state = 3;
    static_fields->isOpenPurchaseDialogEvent = 0;
    if ( (v6[83] & 2) != 0 )
      v6 = (_BYTE *)sub_21FFC68(v6);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, *((_QWORD *)v6 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    StonePurchaseNotificationMenu__Callback(this, v8);
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
  int32_t state; // w8
  __int64 SelfUserGame; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  _DWORD *v19; // x29
  int32_t v20; // w24
  UIWidget_o *messageLabel; // x25
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w28
  float x; // s0
  int32_t v24; // w1
  float y; // s0
  int32_t v26; // w1
  UnityEngine_Transform_o *v27; // x25
  StonePurchaseNotificationMenu_o *v28; // x0
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  bool ShouldCentering; // w8
  UnityEngine_Transform_o *windowTransform; // x25
  int v33; // w9
  struct StonePurchaseNotificationMenu_StaticFields *p_WINDOW_CENTERING_POS_Y; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x25
  int v38; // w22
  __int64 *v39; // x8
  System_String_o *v40; // x21
  int32_t v41; // w28
  __int64 v42; // x2
  int32_t v43; // w24
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  __int64 v47; // x2
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  __int64 *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x0
  int v53; // w22
  int v54; // w24
  int32_t v55; // w27
  __int64 v56; // x1
  __int64 v57; // x2
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v59; // x0
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v62; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w0
  __int64 v71; // x1
  __int64 v72; // x2
  StonePurchaseNotificationMenu___c_c *v73; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v74; // x21
  int32_t v75; // w28
  struct StonePurchaseNotificationMenu___c_StaticFields *v76; // x9
  int v77; // w24
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v79; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  int32_t v87; // w0
  int v88; // w29
  int32_t v89; // w24
  int v90; // w28
  System_String_o *v91; // x21
  System_String_o *v92; // x21
  __int64 v93; // x27
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  __int64 v100; // x28
  __int64 v101; // x1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  __int64 v108; // x26
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  __int64 v115; // x24
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  __int64 v122; // x24
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  __int64 v129; // x24
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  __int64 v136; // x24
  System_String_o *v137; // x0
  System_String_o *v138; // x0
  System_String_o *monitor; // x22
  System_String_o *v140; // x0
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  __int64 v147; // x2
  __int64 v148; // x2
  UILabel_o *v149; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v152; // x20
  __int64 v153; // x0
  __int64 *v154; // [xsp+8h] [xbp-98h]
  int v155; // [xsp+10h] [xbp-90h]
  int32_t v156; // [xsp+18h] [xbp-88h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v158; // [xsp+20h] [xbp-80h] BYREF
  int v159; // [xsp+24h] [xbp-7Ch] BYREF
  int32_t v160; // [xsp+28h] [xbp-78h] BYREF
  int v161; // [xsp+2Ch] [xbp-74h] BYREF
  int v162; // [xsp+30h] [xbp-70h] BYREF
  int v163; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936574 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_21FFC50(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_21FFC50(&StonePurchaseNotificationMenu_TypeInfo);
    sub_21FFC50(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_21FFC50(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_21FFC50(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_12892/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_21FFC50(&StringLiteral_12878/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_21FFC50(&StringLiteral_12872/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12881/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_21FFC50(&StringLiteral_1920/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12875/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_12876/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_21FFC50(&StringLiteral_12893/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_21FFC50(&StringLiteral_12880/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_21FFC50(&StringLiteral_12873/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12877/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_21FFC50(&StringLiteral_12886/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12874/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12879/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_12891/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_5936574 = 1;
  }
  state = this->fields.state;
  entity = 0;
  if ( (state | 4) == 4 )
  {
    v156 = buyFreeStone;
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_156;
    v19 = (_DWORD *)SelfUserGame;
    v20 = *(_DWORD *)(SelfUserGame + 184);
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
    SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
    value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
    if ( !*(&StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v18);
    if ( !messageLabel )
      goto LABEL_156;
    x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
    v24 = x == INFINITY ? 0x80000000 : (int)x;
    UIWidget__set_width(messageLabel, v24, 0);
    SelfUserGame = (__int64)this->fields.messageLabel;
    if ( !SelfUserGame )
      goto LABEL_156;
    y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
    v26 = y == INFINITY ? 0x80000000 : (int)y;
    UIWidget__set_height((UIWidget_o *)SelfUserGame, v26, 0);
    SelfUserGame = (__int64)this->fields.messageLabel;
    if ( !SelfUserGame )
      goto LABEL_156;
    SelfUserGame = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SelfUserGame, 0);
    v27 = (UnityEngine_Transform_o *)SelfUserGame;
    if ( !byte_5931940 )
    {
      SelfUserGame = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v27 )
      goto LABEL_156;
    UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(v28, v29);
    SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = this->fields.windowTransform;
    v33 = *(&StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished + 1);
    if ( ShouldCentering )
    {
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v30);
      if ( !windowTransform )
        goto LABEL_156;
      p_WINDOW_CENTERING_POS_Y = (struct StonePurchaseNotificationMenu_StaticFields *)&StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_CENTERING_POS_Y;
    }
    else
    {
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v30);
      if ( !windowTransform )
        goto LABEL_156;
      p_WINDOW_CENTERING_POS_Y = StonePurchaseNotificationMenu_TypeInfo->static_fields;
    }
    v165.fields.x = 0.0;
    v165.fields.z = 0.0;
    v165.fields.y = p_WINDOW_CENTERING_POS_Y->WINDOW_BASE_POS_Y;
    UnityEngine_Transform__set_localPosition(windowTransform, v165, 0);
    v37 = 0;
    v38 = 0;
    if ( kind > 4 )
    {
      if ( kind <= 6 )
      {
        if ( kind == 5 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_12880/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
        }
        else
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_1920/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
        }
        goto LABEL_79;
      }
      switch ( kind )
      {
        case 7:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_12874/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
          goto LABEL_79;
        case 8:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_12877/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
          goto LABEL_79;
        case 9:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12878/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0);
          v38 = 0;
          value = 24;
          break;
      }
LABEL_135:
      if ( System_String__IsNullOrEmpty(v37, 0) )
      {
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return;
      }
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( SelfUserGame )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD
            || (UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0),
                (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
          {
            if ( *(_DWORD *)(SelfUserGame + 424) == value
              || (UILabel__set_fontSize((UILabel_o *)SelfUserGame, value, 0),
                  (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
            {
              UILabel__set_text((UILabel_o *)SelfUserGame, v37, 0);
              if ( v38 )
              {
                SelfUserGame = (__int64)this->fields.messageLabel;
                if ( !SelfUserGame )
                  goto LABEL_156;
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v149 = this->fields.messageLabel;
                if ( !*(&StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v148);
                if ( !v149 )
                  goto LABEL_156;
                UILabel__SetCondensedScale(
                  v149,
                  StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                  0,
                  0);
              }
              stoneDataLabel = this->fields.stoneDataLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v147);
              SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v20, 0);
              if ( stoneDataLabel )
              {
                UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0);
                closeLabel = this->fields.closeLabel;
                SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12873/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0);
                if ( closeLabel )
                {
                  UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0);
                  this->fields.state = 1;
                  v152 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v152, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndOpen__, 0);
                  BaseDialog__Open((BaseDialog_o *)this, v152, 0, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_156:
      sub_21FFECC(SelfUserGame, v17);
    }
    if ( kind <= 1 )
    {
      if ( !kind )
      {
        v46 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
        SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BankShopMaster___);
        if ( !SelfUserGame )
          goto LABEL_156;
        SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                         &entity,
                         shopId,
                         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
        if ( (SelfUserGame & 1) == 0 )
          goto LABEL_161;
        if ( !entity )
          goto LABEL_156;
        SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0);
        if ( (SelfUserGame & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_156;
          monitor = (System_String_o *)entity[7].monitor;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v47);
          v140 = LocalizationManager__Get((System_String_o *)StringLiteral_12891/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0);
          v49 = System_String__Concat_75481624(v46, monitor, v140, 0);
        }
        else
        {
LABEL_161:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v47);
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12872/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0);
          v49 = System_String__Concat_75438412(v46, v48, 0);
        }
        v37 = v49;
        DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
        value = 23;
        goto LABEL_134;
      }
      if ( kind != 1 )
        goto LABEL_135;
      v40 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
      SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BankShopMaster___);
      if ( !SelfUserGame )
        goto LABEL_156;
      v41 = v20;
      SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                       &entity,
                       shopId,
                       (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
      v43 = v156;
      if ( (SelfUserGame & 1) == 0 )
        goto LABEL_162;
      if ( !entity )
        goto LABEL_156;
      SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0);
      if ( (SelfUserGame & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_156;
        v51 = (System_String_o *)entity[7].monitor;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v42);
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12892/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0);
        v45 = System_String__Concat_75481624(v40, v51, v52, 0);
      }
      else
      {
LABEL_162:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v42);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12893/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0);
        v45 = System_String__Concat_75438412(v40, v44, 0);
      }
      v37 = v45;
      v50 = &StringLiteral_12879/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
      value = 23;
    }
    else
    {
      if ( kind != 2 )
      {
        if ( kind == 3 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_12881/*"STONE_PURCHASE_RESULT_WAIT"*/;
        }
        else
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
          v39 = &StringLiteral_12876/*"STONE_PURCHASE_RESULT_FAIL"*/;
        }
LABEL_79:
        v37 = LocalizationManager__Get((System_String_o *)*v39, 0);
        v38 = 0;
        DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
        goto LABEL_135;
      }
      v41 = v20;
      v37 = (System_String_o *)StringLiteral_1/*""*/;
      v50 = &StringLiteral_12875/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
      v43 = v156;
    }
    v53 = buyChargeStone + v43;
    if ( buyChargeStone + v43 < 1 )
    {
LABEL_123:
      if ( isSentGift )
      {
        v20 = v41;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_12886/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0);
        v37 = System_String__Concat_75438412(v37, v138, 0);
      }
      else
      {
        v20 = v41;
      }
      DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_134:
      v38 = 1;
      goto LABEL_135;
    }
    v54 = v19[45];
    v55 = v19[46];
    v155 = v19[44];
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
    {
      v154 = v50;
      dialogOpenQueue = this->fields.dialogOpenQueue;
      v59 = StonePurchaseNotificationMenu___c_TypeInfo;
      if ( !*(&StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo, v56, v57);
        v59 = StonePurchaseNotificationMenu___c_TypeInfo;
      }
      static_fields = v59->static_fields;
      _9__19_0 = (System_Func_object__int__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !*(&v59->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v59, v56, v57);
          static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
        }
        v62 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
        System_Func_object__int____ctor(_9__19_0, v62, Method_StonePurchaseNotificationMenu___c__Open_b__19_0__, 0);
        v63 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
        v63->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v63->__9__19_0,
          (int32_t)_9__19_0,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
      }
      v70 = System_Linq_Enumerable__Sum_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
              (System_Func_TSource__int__o *)_9__19_0,
              (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
      v73 = StonePurchaseNotificationMenu___c_TypeInfo;
      v74 = this->fields.dialogOpenQueue;
      v75 = v70;
      if ( !*(&StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo, v71, v72);
        v73 = StonePurchaseNotificationMenu___c_TypeInfo;
      }
      v76 = v73->static_fields;
      v77 = v54 - v75;
      _9__19_1 = (System_Func_object__int__o *)v76->__9__19_1;
      if ( !_9__19_1 )
      {
        if ( !*(&v73->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v73, v71, v72);
          v76 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
        }
        v79 = (Il2CppObject *)v76->__9;
        _9__19_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
        System_Func_object__int____ctor(_9__19_1, v79, Method_StonePurchaseNotificationMenu___c__Open_b__19_1__, 0);
        v80 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
        v80->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v80->__9__19_1,
          (int32_t)_9__19_1,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
      }
      v87 = System_Linq_Enumerable__Sum_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v74,
              (System_Func_TSource__int__o *)_9__19_1,
              (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
      v50 = v154;
      v88 = v77;
      v55 = v155 - v87 + v77;
      v155 -= v87;
    }
    else
    {
      v88 = v54;
    }
    v89 = v55;
    v90 = v55 - v53;
    v91 = (System_String_o *)*v50;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
    v92 = LocalizationManager__Get(v91, 0);
    v93 = sub_21FFD10(object___TypeInfo, 6);
    v163 = v90;
    SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v163);
    if ( !v93 )
      goto LABEL_156;
    v100 = SelfUserGame;
    if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v93 + 24) )
        goto LABEL_157;
      *(_QWORD *)(v93 + 32) = v100;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 32), v100, v94, v95, v96, v97, v98, v99);
      v162 = v88 - buyChargeStone;
      SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v162);
      v108 = SelfUserGame;
      if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v93 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_157;
        v41 = v89;
        *(_QWORD *)(v93 + 40) = v108;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 40), v108, v102, v103, v104, v105, v106, v107);
        v161 = v155 - v156;
        SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v161);
        v115 = SelfUserGame;
        if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v93 + 24) <= 2u )
            goto LABEL_157;
          *(_QWORD *)(v93 + 48) = v115;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 48), v115, v109, v110, v111, v112, v113, v114);
          v160 = v41;
          SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v160);
          v122 = SelfUserGame;
          if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v93 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_157;
            *(_QWORD *)(v93 + 56) = v122;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 56), v122, v116, v117, v118, v119, v120, v121);
            v159 = v88;
            SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v159);
            v129 = SelfUserGame;
            if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v93 + 24) <= 4u )
                goto LABEL_157;
              *(_QWORD *)(v93 + 64) = v129;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 64), v129, v123, v124, v125, v126, v127, v128);
              v158 = v155;
              SelfUserGame = j_il2cpp_value_box_0(qword_594C070, &v158);
              v136 = SelfUserGame;
              if ( !SelfUserGame || (SelfUserGame = sub_21FFDA4(SelfUserGame, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v93 + 24) > 5u )
                {
                  *(_QWORD *)(v93 + 72) = v136;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 72), v136, v130, v131, v132, v133, v134, v135);
                  v137 = System_String__Format_75484712(v92, (System_Object_array *)v93, 0);
                  v37 = System_String__Concat_75438412(v37, v137, 0);
                  goto LABEL_123;
                }
LABEL_157:
                sub_21FFED4(SelfUserGame);
              }
            }
          }
        }
      }
    }
    v153 = sub_21FFEF0(SelfUserGame, v101);
    sub_21FFD90(v153, 0);
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
  __int64 v17; // x1
  __int64 v18; // x2
  bool ShouldCentering; // w8
  StonePurchaseNotificationMenu_c *v20; // x0
  UnityEngine_Transform_o *windowTransform; // x26
  int v22; // w9
  struct StonePurchaseNotificationMenu_StaticFields *p_WINDOW_CENTERING_POS_Y; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  __int64 v25; // x27
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  const MethodInfo *v48; // x7
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_5936575 & 1) == 0 )
  {
    sub_21FFC50(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_21FFC50(&StonePurchaseNotificationMenu_TypeInfo);
    byte_5936575 = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))actionOnOpening->fields.invoke_impl)(
                                                  actionOnOpening->fields.method_code,
                                                  actionOnOpening->fields.method);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v20 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v22 = *(&StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished + 1);
    if ( ShouldCentering )
    {
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v18);
      if ( windowTransform )
      {
        p_WINDOW_CENTERING_POS_Y = (struct StonePurchaseNotificationMenu_StaticFields *)&StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_CENTERING_POS_Y;
LABEL_20:
        v49.fields.x = 0.0;
        v49.fields.z = 0.0;
        v49.fields.y = p_WINDOW_CENTERING_POS_Y->WINDOW_BASE_POS_Y;
        UnityEngine_Transform__set_localPosition(windowTransform, v49, 0);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v48);
        return;
      }
    }
    else
    {
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v17, v18);
      if ( windowTransform )
      {
        p_WINDOW_CENTERING_POS_Y = StonePurchaseNotificationMenu_TypeInfo->static_fields;
        goto LABEL_20;
      }
    }
LABEL_22:
    sub_21FFECC(v20, v17);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v25 = sub_21FFEBC(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
    goto LABEL_22;
  *(_DWORD *)(v25 + 16) = kind;
  *(_QWORD *)(v25 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 24), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v25 + 48) = actionOnOpening;
  *(_DWORD *)(v25 + 32) = buyFreeStone;
  *(_DWORD *)(v25 + 36) = buyChargeStone;
  *(_DWORD *)(v25 + 40) = shopId;
  *(_BYTE *)(v25 + 44) = isSentGift;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 48), (int32_t)actionOnOpening, v32, v33, v34, v35, v36, v37);
  if ( !dialogOpenQueue )
    goto LABEL_22;
  items = dialogOpenQueue->fields._items;
  v45 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_22;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v25,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 4), v25, v38, v39, v40, v41, v42, v43);
  }
}


bool StonePurchaseNotificationMenu__ShouldCentering(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5936579 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936579 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_593657A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4819/*"ConfirmWindow/CloseButton"*/);
    byte_593657A = 1;
  }
  return (System_String_o *)StringLiteral_4819/*"ConfirmWindow/CloseButton"*/;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593657D & 1) == 0 )
  {
    sub_21FFC50(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_593657D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return q->fields.chargeStone;
}


int32_t StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_21FFECC(this, 0);
  return q->fields.freeStone;
}