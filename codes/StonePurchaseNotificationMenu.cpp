void StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4C54C65 & 1) == 0 )
  {
    sub_1C3E564(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4C54C65 = 1;
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
  const MethodInfo *v5; // x3

  if ( (byte_4C54C64 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4C54C64 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dialogOpenQueue, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseNotificationMenu__Callback(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  const MethodInfo *v10; // [xsp+0h] [xbp-30h]

  if ( (byte_4C54C60 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C3E564(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4C54C60 = 1;
  }
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_3120424 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v9 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v9) )
    {
      sub_1C3E7C0(object, v8);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v9[1].klass,
      (System_Action_o *)v9[1].monitor,
      (int32_t)v9[2].klass,
      HIDWORD(v9[2].klass),
      (int32_t)v9[2].monitor,
      BYTE4(v9[2].monitor),
      (System_Action_o *)v9[3].klass,
      v10);
  }
}


void StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_38581708(this, 0, v2);
}


void StonePurchaseNotificationMenu__Close_38581708(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C54C5F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4C54C5F = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
    this->fields.state = 4;
    v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void StonePurchaseNotificationMenu__EndClose(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C3E508(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
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

  if ( (byte_4C54C5C & 1) == 0 )
  {
    sub_1C3E564(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54C5C = 1;
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
    sub_1C3E7C0(stoneDataLabel, method);
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

  if ( (byte_4C54C61 & 1) == 0 )
  {
    sub_1C3E564(&PurchaseBehaviour_TypeInfo);
    sub_1C3E564(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4C54C61 = 1;
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
      v4 = (_QWORD *)sub_1C3E57C(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
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
  const MethodInfo *v53; // x3
  int32_t v54; // w0
  StonePurchaseNotificationMenu___c_c *v55; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v56; // x10
  int32_t v57; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v58; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v60; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w0
  System_String_o *v65; // x21
  int v66; // w27
  System_Object_array *v67; // x28
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x21
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x5
  __int64 v81; // x6
  __int64 v82; // x7
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 v89; // x5
  __int64 v90; // x6
  __int64 v91; // x7
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x21
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x5
  __int64 v99; // x6
  __int64 v100; // x7
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  __int64 v107; // x5
  __int64 v108; // x6
  __int64 v109; // x7
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  Il2CppObject *v112; // x21
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  Il2CppObject *v121; // x21
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
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

  if ( (byte_4C54C5D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C3E564(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_1C3E564(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C3E564(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_1C3E564(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_1C3E564(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_1C3E564(&StringLiteral_12402/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_1C3E564(&StringLiteral_12388/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_1C3E564(&StringLiteral_12382/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_1C3E564(&StringLiteral_12391/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_1C3E564(&StringLiteral_1839/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12385/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_1C3E564(&StringLiteral_12386/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_1C3E564(&StringLiteral_12403/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_1C3E564(&StringLiteral_12390/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_1C3E564(&StringLiteral_12383/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_1C3E564(&StringLiteral_12387/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_1C3E564(&StringLiteral_12396/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_12384/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12389/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_1C3E564(&StringLiteral_12401/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_4C54C5D = 1;
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
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12382/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0);
                v33 = System_String__Concat_63636468(v31, v32, 0);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0);
                v33 = System_String__Concat_63674716(v31, monitor, v42, 0);
              }
              v35 = v33;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v36 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12403/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0);
                v38 = System_String__Concat_63636468(v36, v37, 0);
              }
              else
              {
                if ( !entity )
                  break;
                v43 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12402/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0);
                v38 = System_String__Concat_63674716(v36, v43, v44, 0);
              }
              value = 23;
              v39 = &StringLiteral_12389/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v35 = v38;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v45 = v17[45];
              v46 = v17[46];
              v134 = v17[44];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
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
                  _9__19_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v50,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v52, v53);
                }
                v54 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v55 = StonePurchaseNotificationMenu___c_TypeInfo;
                v56 = this->fields.dialogOpenQueue;
                v57 = v54;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v58 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v55 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v56 = v58;
                }
                v45 -= v57;
                _9__19_1 = (System_Func_object__int__o *)v55->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v56;
                  if ( !v55->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v55);
                    v55 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v60 = (Il2CppObject *)v55->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v60,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0);
                  v61 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v61->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1C3E508((CGThumbnailListItem_o *)&v61->__9__19_1, (int32_t)_9__19_1, v62, v63);
                  v56 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v64 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v56,
                        (System_Func_TSource__int__o *)_9__19_1,
                        (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v39 = v136;
                v46 = v134 - v64 + v45;
                v134 -= v64;
              }
              v65 = (System_String_o *)*v39;
              v66 = v46 - (buyChargeStone + buyFreeStone);
              v135 = v46;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v65, 0);
              v67 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 6);
              v143 = v66;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v143, v68, v69, v70, v71, v72, v73);
              if ( !v67 )
                break;
              v76 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !LODWORD(v67->max_length) )
                goto LABEL_140;
              v67->m_Items[0] = v76;
              sub_1C3E508((CGThumbnailListItem_o *)v67->m_Items, (int32_t)v76, v74, v75);
              v142 = v45 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v142, v77, v78, v79, v80, v81, v82);
              v85 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v67->max_length) <= 1 )
                goto LABEL_140;
              v67->m_Items[1] = v85;
              sub_1C3E508((CGThumbnailListItem_o *)&v67->m_Items[1], (int32_t)v85, v83, v84);
              v141 = v134 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v141, v86, v87, v88, v89, v90, v91);
              v94 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v67->max_length) <= 2 )
                goto LABEL_140;
              v67->m_Items[2] = v94;
              sub_1C3E508((CGThumbnailListItem_o *)&v67->m_Items[2], (int32_t)v94, v92, v93);
              v140 = v135;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v140, v95, v96, v97, v98, v99, v100);
              v103 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v67->max_length) <= 3 )
                goto LABEL_140;
              v67->m_Items[3] = v103;
              sub_1C3E508((CGThumbnailListItem_o *)&v67->m_Items[3], (int32_t)v103, v101, v102);
              v139 = v45;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v139, v104, v105, v106, v107, v108, v109);
              v112 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v67->max_length) <= 4 )
                goto LABEL_140;
              v67->m_Items[4] = v112;
              sub_1C3E508((CGThumbnailListItem_o *)&v67->m_Items[4], (int32_t)v112, v110, v111);
              v138 = v134;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v138, v113, v114, v115, v116, v117, v118);
              v121 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C3E6A0(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v131 = sub_1C3E7E4(SelfUserGame);
                  sub_1C3E68C(v131, 0);
                }
              }
              if ( LODWORD(v67->max_length) <= 5 )
LABEL_140:
                sub_1C3E7C8(SelfUserGame, v16);
              v67->m_Items[5] = v121;
              sub_1C3E508((CGThumbnailListItem_o *)&v67->m_Items[5], (int32_t)v121, v119, v120);
              v122 = System_String__Format_63677896(formata, v67, 0);
              v35 = System_String__Concat_63636468(v35, v122, 0);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v123 = LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0);
                v35 = System_String__Concat_63636468(v35, v123, 0);
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
              sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v124, v125);
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
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0);
                      this->fields.state = 1;
                      v130 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
              v39 = &StringLiteral_12385/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12391/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12386/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12390/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_1839/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12384/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12387/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v35 = LocalizationManager__Get((System_String_o *)*v40, 0);
              v34 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12388/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0);
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
    sub_1C3E7C0(SelfUserGame, v16);
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
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x7
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4C54C5E & 1) == 0 )
  {
    sub_1C3E564(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_1C3E564(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4C54C5E = 1;
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
        v36.fields.y = *p_WINDOW_BASE_POS_Y;
        v36.fields.x = 0.0;
        v36.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v36, 0);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v35);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1C3E7C0(ShouldCentering, v18);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v24 = sub_1C3E7B0(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  if ( !v24 )
    goto LABEL_19;
  *(_DWORD *)(v24 + 16) = kind;
  *(_QWORD *)(v24 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v24 + 24), (int32_t)callback, v25, v26);
  *(_QWORD *)(v24 + 48) = actionOnOpening;
  *(_DWORD *)(v24 + 32) = buyFreeStone;
  *(_DWORD *)(v24 + 36) = buyChargeStone;
  *(_DWORD *)(v24 + 40) = shopId;
  *(_BYTE *)(v24 + 44) = isSentGift;
  sub_1C3E508((CGThumbnailListItem_o *)(v24 + 48), (int32_t)actionOnOpening, v27, v28);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v32 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v24,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v24;
    sub_1C3E508((CGThumbnailListItem_o *)(v34 + 4), v24, v29, v30);
  }
}


bool StonePurchaseNotificationMenu__ShouldCentering(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C54C62 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C54C62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C54C63 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4649/*"ConfirmWindow/CloseButton"*/);
    byte_4C54C63 = 1;
  }
  return (System_String_o *)StringLiteral_4649/*"ConfirmWindow/CloseButton"*/;
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
  const MethodInfo *v3; // x3

  if ( (byte_4C54C66 & 1) == 0 )
  {
    sub_1C3E564(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_4C54C66 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return q->fields.chargeStone;
}


int32_t StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C3E7C0(this, 0);
  return q->fields.freeStone;
}