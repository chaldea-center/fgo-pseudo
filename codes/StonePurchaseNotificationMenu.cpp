void StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4C3595B & 1) == 0 )
  {
    sub_1C32C20(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4C3595B = 1;
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

  if ( (byte_4C3595A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4C3595A = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialogOpenQueue, (int32_t)v3, v4, v5);
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
  Il2CppObject *v8; // x20
  const MethodInfo *v9; // [xsp+0h] [xbp-30h]

  if ( (byte_4C35956 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C32C20(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4C35956 = 1;
  }
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v8 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v8) )
    {
      sub_1C32E7C(object);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v8[1].klass,
      (System_Action_o *)v8[1].monitor,
      (int32_t)v8[2].klass,
      HIDWORD(v8[2].klass),
      (int32_t)v8[2].monitor,
      BYTE4(v8[2].monitor),
      (System_Action_o *)v8[3].klass,
      v9);
  }
}


void StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_38532272(this, 0, v2);
}


void StonePurchaseNotificationMenu__Close_38532272(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C35955 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4C35955 = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
    this->fields.state = 4;
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    sub_1C32BC4(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4C35952 & 1) == 0 )
  {
    sub_1C32C20(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35952 = 1;
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
    sub_1C32E7C(stoneDataLabel);
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

  if ( (byte_4C35957 & 1) == 0 )
  {
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4C35957 = 1;
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
      v4 = (_QWORD *)sub_1C32C38(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
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
  _DWORD *v16; // x27
  int32_t v17; // w8
  UIWidget_o *messageLabel; // x21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w28
  float x; // s0
  int32_t v21; // w1
  float y; // s0
  int32_t v23; // w1
  StonePurchaseNotificationMenu_o *v24; // x0
  const MethodInfo *v25; // x1
  StonePurchaseNotificationMenu_c *v26; // x8
  UnityEngine_Transform_o *windowTransform; // x21
  char v28; // w23
  float *p_WINDOW_BASE_POS_Y; // x8
  System_String_o *v30; // x23
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  int v33; // w21
  System_String_o *v34; // x25
  System_String_o *v35; // x23
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  __int64 *v38; // x21
  __int64 *v39; // x8
  System_String_o *monitor; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x21
  System_String_o *v43; // x0
  int v44; // w23
  int32_t v45; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v47; // x0
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v49; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w0
  StonePurchaseNotificationMenu___c_c *v54; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v55; // x10
  int32_t v56; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v57; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v59; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w0
  System_String_o *v64; // x21
  int v65; // w27
  System_Object_array *v66; // x28
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x21
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x21
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x21
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x21
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  __int64 v106; // x5
  __int64 v107; // x6
  __int64 v108; // x7
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x21
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  __int64 v115; // x5
  __int64 v116; // x6
  __int64 v117; // x7
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x21
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w23
  UILabel_o *v126; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v129; // x20
  __int64 v130; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v133; // [xsp+8h] [xbp-98h]
  int32_t v134; // [xsp+10h] [xbp-90h]
  __int64 *v135; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v137; // [xsp+20h] [xbp-80h] BYREF
  int v138; // [xsp+24h] [xbp-7Ch] BYREF
  int32_t v139; // [xsp+28h] [xbp-78h] BYREF
  int v140; // [xsp+2Ch] [xbp-74h] BYREF
  int v141; // [xsp+30h] [xbp-70h] BYREF
  int v142; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35953 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1C32C20(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_1C32C20(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1C32C20(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_1C32C20(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_1C32C20(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_1C32C20(&StringLiteral_12393/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_1C32C20(&StringLiteral_12379/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_1C32C20(&StringLiteral_12373/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_1C32C20(&StringLiteral_12382/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_1C32C20(&StringLiteral_1840/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_12376/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_1C32C20(&StringLiteral_12377/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_1C32C20(&StringLiteral_12394/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_1C32C20(&StringLiteral_12381/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_1C32C20(&StringLiteral_12374/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_1C32C20(&StringLiteral_12378/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_1C32C20(&StringLiteral_12387/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_12375/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_12380/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_1C32C20(&StringLiteral_12392/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_4C35953 = 1;
  }
  entity = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v16 = (_DWORD *)SelfUserGame;
      v17 = *(_DWORD *)(SelfUserGame + 184);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v134 = v17;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      if ( messageLabel )
      {
        x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
        v21 = x == INFINITY ? 0x80000000 : (int)x;
        UIWidget__set_width(messageLabel, v21, 0);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
          if ( y == INFINITY )
            v23 = 0x80000000;
          else
            v23 = (int)y;
          UIWidget__set_height((UIWidget_o *)SelfUserGame, v23, 0);
          SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering(v24, v25);
          v26 = StonePurchaseNotificationMenu_TypeInfo;
          windowTransform = this->fields.windowTransform;
          v28 = SelfUserGame;
          if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
            v26 = StonePurchaseNotificationMenu_TypeInfo;
          }
          p_WINDOW_BASE_POS_Y = &v26->static_fields->WINDOW_BASE_POS_Y;
          if ( (v28 & 1) != 0 )
          {
            if ( !windowTransform )
              goto LABEL_139;
            ++p_WINDOW_BASE_POS_Y;
          }
          else if ( !windowTransform )
          {
            goto LABEL_139;
          }
          v144.fields.y = *p_WINDOW_BASE_POS_Y;
          v144.fields.x = 0.0;
          v144.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v144, 0);
          switch ( kind )
          {
            case 0:
              v30 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0);
                v32 = System_String__Concat_63518544(v30, v31, 0);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12392/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0);
                v32 = System_String__Concat_63556792(v30, monitor, v41, 0);
              }
              v34 = v32;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v35 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0);
                v37 = System_String__Concat_63518544(v35, v36, 0);
              }
              else
              {
                if ( !entity )
                  break;
                v42 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12393/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0);
                v37 = System_String__Concat_63556792(v35, v42, v43, 0);
              }
              value = 23;
              v38 = &StringLiteral_12380/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v34 = v37;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v44 = v16[45];
              v45 = v16[46];
              v133 = v16[44];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v135 = v38;
                dialogOpenQueue = this->fields.dialogOpenQueue;
                v47 = StonePurchaseNotificationMenu___c_TypeInfo;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v47 = StonePurchaseNotificationMenu___c_TypeInfo;
                }
                _9__19_0 = (System_Func_object__int__o *)v47->static_fields->__9__19_0;
                if ( !_9__19_0 )
                {
                  if ( !v47->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v47);
                    v47 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v49 = (Il2CppObject *)v47->static_fields->__9;
                  _9__19_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v49,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v51, v52);
                }
                v53 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v54 = StonePurchaseNotificationMenu___c_TypeInfo;
                v55 = this->fields.dialogOpenQueue;
                v56 = v53;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v57 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v54 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v55 = v57;
                }
                v44 -= v56;
                _9__19_1 = (System_Func_object__int__o *)v54->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v55;
                  if ( !v54->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v54);
                    v54 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v59 = (Il2CppObject *)v54->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v59,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0);
                  v60 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v60->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v60->__9__19_1, (int32_t)_9__19_1, v61, v62);
                  v55 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v63 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v55,
                        (System_Func_TSource__int__o *)_9__19_1,
                        (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v38 = v135;
                v45 = v133 - v63 + v44;
                v133 -= v63;
              }
              v64 = (System_String_o *)*v38;
              v65 = v45 - (buyChargeStone + buyFreeStone);
              v134 = v45;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v64, 0);
              v66 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 6);
              v142 = v65;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v142, v67, v68, v69, v70, v71, v72);
              if ( !v66 )
                break;
              v75 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !LODWORD(v66->max_length) )
                goto LABEL_140;
              v66->m_Items[0] = v75;
              sub_1C32BC4((CGThumbnailListItem_o *)v66->m_Items, (int32_t)v75, v73, v74);
              v141 = v44 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v141, v76, v77, v78, v79, v80, v81);
              v84 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v66->max_length) <= 1 )
                goto LABEL_140;
              v66->m_Items[1] = v84;
              sub_1C32BC4((CGThumbnailListItem_o *)&v66->m_Items[1], (int32_t)v84, v82, v83);
              v140 = v133 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v140, v85, v86, v87, v88, v89, v90);
              v93 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v66->max_length) <= 2 )
                goto LABEL_140;
              v66->m_Items[2] = v93;
              sub_1C32BC4((CGThumbnailListItem_o *)&v66->m_Items[2], (int32_t)v93, v91, v92);
              v139 = v134;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v139, v94, v95, v96, v97, v98, v99);
              v102 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v66->max_length) <= 3 )
                goto LABEL_140;
              v66->m_Items[3] = v102;
              sub_1C32BC4((CGThumbnailListItem_o *)&v66->m_Items[3], (int32_t)v102, v100, v101);
              v138 = v44;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v138, v103, v104, v105, v106, v107, v108);
              v111 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( LODWORD(v66->max_length) <= 4 )
                goto LABEL_140;
              v66->m_Items[4] = v111;
              sub_1C32BC4((CGThumbnailListItem_o *)&v66->m_Items[4], (int32_t)v111, v109, v110);
              v137 = v133;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v137, v112, v113, v114, v115, v116, v117);
              v120 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1C32D5C(SelfUserGame, v66->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v130 = sub_1C32EA0(SelfUserGame);
                  sub_1C32D48(v130, 0);
                }
              }
              if ( LODWORD(v66->max_length) <= 5 )
LABEL_140:
                sub_1C32E84(SelfUserGame);
              v66->m_Items[5] = v120;
              sub_1C32BC4((CGThumbnailListItem_o *)&v66->m_Items[5], (int32_t)v120, v118, v119);
              v121 = System_String__Format_63559972(formata, v66, 0);
              v34 = System_String__Concat_63518544(v34, v121, 0);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v122 = LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0);
                v34 = System_String__Concat_63518544(v34, v122, 0);
              }
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_116:
              v33 = 1;
LABEL_117:
              if ( System_String__IsNullOrEmpty(v34, 0) )
              {
                if ( callback )
                  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
                    callback->fields.method_code,
                    callback->fields.method);
                return;
              }
              this->fields.callbackFunc = callback;
              sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v123, v124);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v125 = v134;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v125 = v134;
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
              UILabel__set_text((UILabel_o *)SelfUserGame, v34, 0);
              if ( !v33 )
                goto LABEL_133;
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v126 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v126 )
                {
                  UILabel__SetCondensedScale(
                    v126,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0,
                    0);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v125, 0);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0);
                      this->fields.state = 1;
                      v129 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                      System_Action___ctor(
                        v129,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0);
                      BaseDialog__Open((BaseDialog_o *)this, v129, 0, 0, 0);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v34 = (System_String_o *)StringLiteral_1/*""*/;
              v38 = &StringLiteral_12376/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_12382/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_12377/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_12381/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_1840/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_12375/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v39 = &StringLiteral_12378/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v34 = LocalizationManager__Get((System_String_o *)*v39, 0);
              v33 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12379/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0);
              v33 = 0;
              value = 24;
              goto LABEL_117;
            default:
              v33 = 0;
              v34 = 0;
              goto LABEL_117;
          }
        }
      }
    }
LABEL_139:
    sub_1C32E7C(SelfUserGame);
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
  StonePurchaseNotificationMenu_c *v18; // x8
  UnityEngine_Transform_o *windowTransform; // x26
  bool v20; // w27
  float *p_WINDOW_BASE_POS_Y; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  __int64 v23; // x27
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4C35954 & 1) == 0 )
  {
    sub_1C32C20(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_1C32C20(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4C35954 = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))actionOnOpening->fields.invoke_impl)(
                                                  actionOnOpening->fields.method_code,
                                                  actionOnOpening->fields.method);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v18 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v20 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v18 = StonePurchaseNotificationMenu_TypeInfo;
    }
    p_WINDOW_BASE_POS_Y = &v18->static_fields->WINDOW_BASE_POS_Y;
    if ( v20 )
    {
      if ( windowTransform )
      {
        ++p_WINDOW_BASE_POS_Y;
LABEL_17:
        v35.fields.y = *p_WINDOW_BASE_POS_Y;
        v35.fields.x = 0.0;
        v35.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v35, 0);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v34);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(ShouldCentering);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v23 = sub_1C32E6C(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_19;
  *(_DWORD *)(v23 + 16) = kind;
  *(_QWORD *)(v23 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 24), (int32_t)callback, v24, v25);
  *(_QWORD *)(v23 + 48) = actionOnOpening;
  *(_DWORD *)(v23 + 32) = buyFreeStone;
  *(_DWORD *)(v23 + 36) = buyChargeStone;
  *(_DWORD *)(v23 + 40) = shopId;
  *(_BYTE *)(v23 + 44) = isSentGift;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 48), (int32_t)actionOnOpening, v26, v27);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v31 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v23,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v23;
    sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), v23, v28, v29);
  }
}


bool StonePurchaseNotificationMenu__ShouldCentering(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C35958 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C35958 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C35959 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4649/*"ConfirmWindow/CloseButton"*/);
    byte_4C35959 = 1;
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

  if ( (byte_4C3595C & 1) == 0 )
  {
    sub_1C32C20(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_4C3595C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return q->fields.chargeStone;
}


int32_t StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1C32E7C(this);
  return q->fields.freeStone;
}