void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4B00339 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseNotificationMenu_TypeInfo, v1);
    byte_4B00339 = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B00338 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v4);
    byte_4B00338 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v5 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dialogOpenQueue, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  const MethodInfo *v12; // [xsp+0h] [xbp-30h]

  if ( (byte_4B00334 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v6);
    byte_4B00334 = 1;
  }
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_3024764 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v11 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v11) )
    {
      sub_1BC3264(object, v10);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v11[1].klass,
      (System_Action_o *)v11[1].monitor,
      (int32_t)v11[2].klass,
      HIDWORD(v11[2].klass),
      (int32_t)v11[2].monitor,
      BYTE4(v11[2].monitor),
      (System_Action_o *)v11[3].klass,
      v12);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_38034288(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_38034288(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B00333 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_StonePurchaseNotificationMenu_EndClose__, v6);
    byte_4B00333 = 1;
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
    this->fields.state = 4;
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
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
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndOpen(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall StonePurchaseNotificationMenu__Init(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B00330 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseNotificationMenu_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4B00330 = 1;
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
    sub_1BC3264(stoneDataLabel, method);
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  v6.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v6, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B00335 & 1) == 0 )
  {
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, method);
    sub_1BC3008(&Method_StonePurchaseNotificationMenu_OnClickClose__, v3);
    byte_4B00335 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v4 = PurchaseBehaviour_TypeInfo;
    }
    v4->static_fields->isOpenPurchaseDialogEvent = 0;
    this->fields.state = 3;
    v5 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 SelfUserGame; // x0
  __int64 v46; // x1
  _DWORD *v47; // x27
  int v48; // w8
  UIWidget_o *messageLabel; // x21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w28
  float x; // s0
  int32_t v52; // w1
  float y; // s0
  int32_t v54; // w1
  StonePurchaseNotificationMenu_o *v55; // x0
  const MethodInfo *v56; // x1
  StonePurchaseNotificationMenu_c *v57; // x8
  UnityEngine_Transform_o *windowTransform; // x21
  char v59; // w23
  float *p_WINDOW_BASE_POS_Y; // x8
  System_String_o *v61; // x23
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  int v64; // w21
  System_String_o *v65; // x25
  System_String_o *v66; // x23
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  __int64 *v69; // x21
  __int64 *v70; // x8
  System_String_o *monitor; // x21
  System_String_o *v72; // x0
  System_String_o *v73; // x21
  System_String_o *v74; // x0
  int v75; // w23
  int v76; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v78; // x0
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v80; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w0
  StonePurchaseNotificationMenu___c_c *v85; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v86; // x10
  int32_t v87; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v88; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v90; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w0
  System_String_o *v95; // x21
  int v96; // w27
  System_Object_array *v97; // x28
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  __int64 v101; // x2
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  const MethodInfo *v107; // x3
  Il2CppObject *v108; // x21
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  const MethodInfo *v112; // x3
  Il2CppObject *v113; // x21
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  const MethodInfo *v117; // x3
  Il2CppObject *v118; // x21
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  const MethodInfo *v122; // x3
  Il2CppObject *v123; // x21
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  const MethodInfo *v127; // x3
  Il2CppObject *v128; // x21
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w23
  UILabel_o *v134; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v137; // x20
  __int64 v138; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v141; // [xsp+8h] [xbp-98h]
  int v142; // [xsp+10h] [xbp-90h]
  __int64 *v143; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v145; // [xsp+20h] [xbp-80h] BYREF
  int v146; // [xsp+24h] [xbp-7Ch] BYREF
  int v147; // [xsp+28h] [xbp-78h] BYREF
  int v148; // [xsp+2Ch] [xbp-74h] BYREF
  int v149; // [xsp+30h] [xbp-70h] BYREF
  int v150; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B00331 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMaster_BankShopMaster___, v15);
    sub_1BC3008(&DataManager_TypeInfo, v16);
    sub_1BC3008(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v18);
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v19);
    sub_1BC3008(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v20);
    sub_1BC3008(&int_TypeInfo, v21);
    sub_1BC3008(&LocalizationManager_TypeInfo, v22);
    sub_1BC3008(&object___TypeInfo, v23);
    sub_1BC3008(&Method_StonePurchaseNotificationMenu_EndOpen__, v24);
    sub_1BC3008(&StonePurchaseNotificationMenu_TypeInfo, v25);
    sub_1BC3008(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__, v26);
    sub_1BC3008(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__, v27);
    sub_1BC3008(&StonePurchaseNotificationMenu___c_TypeInfo, v28);
    sub_1BC3008(&StringLiteral_12278/*"STONE_SHOP_STONE_NAME_SPACE"*/, v29);
    sub_1BC3008(&StringLiteral_12264/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v30);
    sub_1BC3008(&StringLiteral_12258/*"STONE_PURCHASE_RESULT_CANCEL"*/, v31);
    sub_1BC3008(&StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/, v32);
    sub_1BC3008(&StringLiteral_1829/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v33);
    sub_1BC3008(&StringLiteral_12261/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/, v34);
    sub_1BC3008(&StringLiteral_12262/*"STONE_PURCHASE_RESULT_FAIL"*/, v35);
    sub_1BC3008(&StringLiteral_12279/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, v36);
    sub_1BC3008(&StringLiteral_12266/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v37);
    sub_1BC3008(&StringLiteral_12259/*"STONE_PURCHASE_RESULT_CLOSE"*/, v38);
    sub_1BC3008(&StringLiteral_12263/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v39);
    sub_1BC3008(&StringLiteral_12272/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, v40);
    sub_1BC3008(&StringLiteral_1/*""*/, v41);
    sub_1BC3008(&StringLiteral_12260/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v42);
    sub_1BC3008(&StringLiteral_12265/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v43);
    sub_1BC3008(&StringLiteral_12277/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, v44);
    byte_4B00331 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v47 = (_DWORD *)SelfUserGame;
      v48 = *(_DWORD *)(SelfUserGame + 184);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v142 = v48;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      if ( messageLabel )
      {
        x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
        v52 = x == INFINITY ? 0x80000000 : (int)x;
        UIWidget__set_width(messageLabel, v52, 0LL);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
          if ( y == INFINITY )
            v54 = 0x80000000;
          else
            v54 = (int)y;
          UIWidget__set_height((UIWidget_o *)SelfUserGame, v54, 0LL);
          SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering(v55, v56);
          v57 = StonePurchaseNotificationMenu_TypeInfo;
          windowTransform = this->fields.windowTransform;
          v59 = SelfUserGame;
          if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
            v57 = StonePurchaseNotificationMenu_TypeInfo;
          }
          p_WINDOW_BASE_POS_Y = &v57->static_fields->WINDOW_BASE_POS_Y;
          if ( (v59 & 1) != 0 )
          {
            if ( !windowTransform )
              goto LABEL_139;
            ++p_WINDOW_BASE_POS_Y;
          }
          else if ( !windowTransform )
          {
            goto LABEL_139;
          }
          v152.fields.y = *p_WINDOW_BASE_POS_Y;
          v152.fields.x = 0.0;
          v152.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v152, 0LL);
          switch ( kind )
          {
            case 0:
              v61 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_32AF0BC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
                v63 = System_String__Concat_62348648(v61, v62, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
                v63 = System_String__Concat_62386896(v61, monitor, v72, 0LL);
              }
              v65 = v63;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v66 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_32AF0BC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
                v68 = System_String__Concat_62348648(v66, v67, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                v73 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12278/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
                v68 = System_String__Concat_62386896(v66, v73, v74, 0LL);
              }
              value = 23;
              v69 = &StringLiteral_12265/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v65 = v68;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v75 = v47[45];
              v76 = v47[46];
              v141 = v47[44];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v143 = v69;
                dialogOpenQueue = this->fields.dialogOpenQueue;
                v78 = StonePurchaseNotificationMenu___c_TypeInfo;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v78 = StonePurchaseNotificationMenu___c_TypeInfo;
                }
                _9__19_0 = (System_Func_object__int__o *)v78->static_fields->__9__19_0;
                if ( !_9__19_0 )
                {
                  if ( !v78->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v78);
                    v78 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v80 = (Il2CppObject *)v78->static_fields->__9;
                  _9__19_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v80,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0LL);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v82, v83);
                }
                v84 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v85 = StonePurchaseNotificationMenu___c_TypeInfo;
                v86 = this->fields.dialogOpenQueue;
                v87 = v84;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v88 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v85 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v86 = v88;
                }
                v75 -= v87;
                _9__19_1 = (System_Func_object__int__o *)v85->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v86;
                  if ( !v85->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v85);
                    v85 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v90 = (Il2CppObject *)v85->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v90,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0LL);
                  v91 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v91->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v91->__9__19_1, (int32_t)_9__19_1, v92, v93);
                  v86 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v94 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v86,
                        (System_Func_TSource__int__o *)_9__19_1,
                        (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v69 = v143;
                v76 = v141 - v94 + v75;
                v141 -= v94;
              }
              v95 = (System_String_o *)*v69;
              v96 = v76 - (buyChargeStone + buyFreeStone);
              v142 = v76;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v95, 0LL);
              v97 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
              v150 = v96;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v150, v98, v99, v100);
              if ( !v97 )
                break;
              v103 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !v97->max_length )
                goto LABEL_140;
              v97->m_Items[0] = v103;
              sub_1BC2FAC((CGThumbnailListItem_o *)v97->m_Items, (int32_t)v103, v101, v102);
              v149 = v75 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v149, v104, v105, v106);
              v108 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v97->max_length <= 1 )
                goto LABEL_140;
              v97->m_Items[1] = v108;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v97->m_Items[1], (int32_t)v108, v101, v107);
              v148 = v141 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v148, v109, v110, v111);
              v113 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v97->max_length <= 2 )
                goto LABEL_140;
              v97->m_Items[2] = v113;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v97->m_Items[2], (int32_t)v113, v101, v112);
              v147 = v142;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v147, v114, v115, v116);
              v118 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v97->max_length <= 3 )
                goto LABEL_140;
              v97->m_Items[3] = v118;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v97->m_Items[3], (int32_t)v118, v101, v117);
              v146 = v75;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v146, v119, v120, v121);
              v123 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v97->max_length <= 4 )
                goto LABEL_140;
              v97->m_Items[4] = v123;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v97->m_Items[4], (int32_t)v123, v101, v122);
              v145 = v141;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v145, v124, v125, v126);
              v128 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BC3144(SelfUserGame, v97->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v138 = sub_1BC3288(SelfUserGame);
                  sub_1BC3130(v138, 0LL);
                }
              }
              if ( v97->max_length <= 5 )
LABEL_140:
                sub_1BC326C(SelfUserGame, v46, v101);
              v97->m_Items[5] = v128;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v97->m_Items[5], (int32_t)v128, v101, v127);
              v129 = System_String__Format_62390076(formata, v97, 0LL);
              v65 = System_String__Concat_62348648(v65, v129, 0LL);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
                v65 = System_String__Concat_62348648(v65, v130, 0LL);
              }
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_116:
              v64 = 1;
LABEL_117:
              if ( System_String__IsNullOrEmpty(v65, 0LL) )
              {
                if ( callback )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
                    callback->fields.original_method_info,
                    *(_QWORD *)&callback->fields.extra_arg);
                return;
              }
              this->fields.callbackFunc = callback;
              sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v131, v132);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v133 = v142;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v133 = v142;
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
              UILabel__set_text((UILabel_o *)SelfUserGame, v65, 0LL);
              if ( !v64 )
                goto LABEL_133;
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v134 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v134 )
                {
                  UILabel__SetCondensedScale(
                    v134,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0,
                    0LL);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v133, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v137 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                      System_Action___ctor(
                        v137,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v137, 0, 0LL);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v65 = (System_String_o *)StringLiteral_1/*""*/;
              v69 = &StringLiteral_12261/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12262/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12266/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_1829/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12260/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12263/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v65 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
              v64 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
              v64 = 0;
              value = 24;
              goto LABEL_117;
            default:
              v64 = 0;
              v65 = 0LL;
              goto LABEL_117;
          }
        }
      }
    }
LABEL_139:
    sub_1BC3264(SelfUserGame, v46);
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
  __int64 v17; // x1
  __int64 v18; // x1
  _BOOL8 ShouldCentering; // x0
  __int64 v20; // x1
  StonePurchaseNotificationMenu_c *v21; // x8
  UnityEngine_Transform_o *windowTransform; // x26
  bool v23; // w27
  float *p_WINDOW_BASE_POS_Y; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  __int64 v26; // x27
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x7
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4B00332 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v17);
    this = (StonePurchaseNotificationMenu_o *)sub_1BC3008(&StonePurchaseNotificationMenu_TypeInfo, v18);
    byte_4B00332 = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionOnOpening->fields.m_target)(
                                                  actionOnOpening->fields.original_method_info,
                                                  *(_QWORD *)&actionOnOpening->fields.extra_arg);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v21 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v23 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v21 = StonePurchaseNotificationMenu_TypeInfo;
    }
    p_WINDOW_BASE_POS_Y = &v21->static_fields->WINDOW_BASE_POS_Y;
    if ( v23 )
    {
      if ( windowTransform )
      {
        ++p_WINDOW_BASE_POS_Y;
LABEL_17:
        v38.fields.y = *p_WINDOW_BASE_POS_Y;
        v38.fields.x = 0.0;
        v38.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v38, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v37);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1BC3264(ShouldCentering, v20);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v26 = sub_1BC3254(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_DWORD *)(v26 + 16) = kind;
  *(_QWORD *)(v26 + 24) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 24), (int32_t)callback, v27, v28);
  *(_QWORD *)(v26 + 48) = actionOnOpening;
  *(_DWORD *)(v26 + 32) = buyFreeStone;
  *(_DWORD *)(v26 + 36) = buyChargeStone;
  *(_DWORD *)(v26 + 40) = shopId;
  *(_BYTE *)(v26 + 44) = isSentGift;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 48), (int32_t)actionOnOpening, v29, v30);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v34 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v26,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), v26, v31, v32);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B00336 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B00336 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B00337 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4609/*"ConfirmWindow/CloseButton"*/, method);
    byte_4B00337 = 1;
  }
  return (System_String_o *)StringLiteral_4609/*"ConfirmWindow/CloseButton"*/;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0033A & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_4B0033A = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1BC3264(this, 0LL);
  return q->fields.freeStone;
}