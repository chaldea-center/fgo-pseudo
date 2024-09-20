void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4A586F1 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4A586F1 = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A586F0 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
    byte_4A586F0 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialogOpenQueue, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__Callback(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  const MethodInfo *v10; // [xsp+0h] [xbp-30h]

  if ( (byte_4A586EC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1B885B0(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__);
    byte_4A586EC = 1;
  }
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v9 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v9) )
    {
      sub_1B8880C(object, v8);
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


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_34706188(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_34706188(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A586EB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseNotificationMenu_EndClose__);
    byte_4A586EB = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 4;
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall StonePurchaseNotificationMenu__EndClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  StonePurchaseNotificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A586E8 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A586E8 = 1;
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
    sub_1B8880C(stoneDataLabel, method);
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

  if ( (byte_4A586ED & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseNotificationMenu_OnClickClose__);
    byte_4A586ED = 1;
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
      v4 = (_QWORD *)sub_1B885C8(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w0
  StonePurchaseNotificationMenu___c_c *v55; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v56; // x10
  int32_t v57; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v58; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v60; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w0
  System_String_o *v65; // x21
  int v66; // w27
  System_Object_array *v67; // x28
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x21
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x21
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x21
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  int32_t v101; // w2
  int32_t v102; // w3
  Il2CppObject *v103; // x21
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w23
  UILabel_o *v109; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v112; // x20
  __int64 v113; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v116; // [xsp+8h] [xbp-98h]
  int v117; // [xsp+10h] [xbp-90h]
  __int64 *v118; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v120; // [xsp+20h] [xbp-80h] BYREF
  int v121; // [xsp+24h] [xbp-7Ch] BYREF
  int v122; // [xsp+28h] [xbp-78h] BYREF
  int v123; // [xsp+2Ch] [xbp-74h] BYREF
  int v124; // [xsp+30h] [xbp-70h] BYREF
  int v125; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A586E9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
    sub_1B885B0(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_StonePurchaseNotificationMenu_EndOpen__);
    sub_1B885B0(&StonePurchaseNotificationMenu_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__);
    sub_1B885B0(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__);
    sub_1B885B0(&StonePurchaseNotificationMenu___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12299/*"STONE_SHOP_STONE_NAME_SPACE"*/);
    sub_1B885B0(&StringLiteral_12285/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/);
    sub_1B885B0(&StringLiteral_12279/*"STONE_PURCHASE_RESULT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/);
    sub_1B885B0(&StringLiteral_1967/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_12282/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_12283/*"STONE_PURCHASE_RESULT_FAIL"*/);
    sub_1B885B0(&StringLiteral_12300/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/);
    sub_1B885B0(&StringLiteral_12287/*"STONE_PURCHASE_RESULT_SUSPEND"*/);
    sub_1B885B0(&StringLiteral_12280/*"STONE_PURCHASE_RESULT_CLOSE"*/);
    sub_1B885B0(&StringLiteral_12284/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/);
    sub_1B885B0(&StringLiteral_12293/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_12281/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_12286/*"STONE_PURCHASE_RESULT_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_12298/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/);
    byte_4A586E9 = 1;
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
      v117 = v18;
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
          v127.fields.y = *p_WINDOW_BASE_POS_Y;
          v127.fields.x = 0.0;
          v127.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v127, 0LL);
          switch ( kind )
          {
            case 0:
              v31 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
                v33 = System_String__Concat_61707032(v31, v32, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12298/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
                v33 = System_String__Concat_61718292(v31, monitor, v42, 0LL);
              }
              v35 = v33;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v36 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12300/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
                v38 = System_String__Concat_61707032(v36, v37, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                v43 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
                v38 = System_String__Concat_61718292(v36, v43, v44, 0LL);
              }
              value = 23;
              v39 = &StringLiteral_12286/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v35 = v38;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v45 = v17[43];
              v46 = v17[44];
              v116 = v17[42];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v118 = v39;
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
                  _9__19_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v50,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0LL);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1B88554(
                    (ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0,
                    (int32_t)_9__19_0,
                    v52,
                    v53);
                }
                v54 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
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
                  _9__19_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v60,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0LL);
                  v61 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v61->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->__9__19_1, (int32_t)_9__19_1, v62, v63);
                  v56 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v64 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v56,
                        (System_Func_TSource__int__o *)_9__19_1,
                        (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v39 = v118;
                v46 = v116 - v64 + v45;
                v116 -= v64;
              }
              v65 = (System_String_o *)*v39;
              v66 = v46 - (buyChargeStone + buyFreeStone);
              v117 = v46;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v65, 0LL);
              v67 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
              v125 = v66;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v125, v68, v69, v70);
              if ( !v67 )
                break;
              v73 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !v67->max_length )
                goto LABEL_140;
              v67->m_Items[0] = v73;
              sub_1B88554((ServantStatusBattleListViewItem_o *)v67->m_Items, (int32_t)v73, v71, v72);
              v124 = v45 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v124, v74, v75, v76);
              v79 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v67->max_length <= 1 )
                goto LABEL_140;
              v67->m_Items[1] = v79;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->m_Items[1], (int32_t)v79, v77, v78);
              v123 = v116 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v123, v80, v81, v82);
              v85 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v67->max_length <= 2 )
                goto LABEL_140;
              v67->m_Items[2] = v85;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->m_Items[2], (int32_t)v85, v83, v84);
              v122 = v117;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v122, v86, v87, v88);
              v91 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v67->max_length <= 3 )
                goto LABEL_140;
              v67->m_Items[3] = v91;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->m_Items[3], (int32_t)v91, v89, v90);
              v121 = v45;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v121, v92, v93, v94);
              v97 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v67->max_length <= 4 )
                goto LABEL_140;
              v67->m_Items[4] = v97;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->m_Items[4], (int32_t)v97, v95, v96);
              v120 = v116;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v120, v98, v99, v100);
              v103 = (Il2CppObject *)SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1B886EC(SelfUserGame, v67->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v113 = sub_1B88830(SelfUserGame);
                  sub_1B886D8(v113, 0LL);
                }
              }
              if ( v67->max_length <= 5 )
LABEL_140:
                sub_1B88814(SelfUserGame, v16);
              v67->m_Items[5] = v103;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->m_Items[5], (int32_t)v103, v101, v102);
              v104 = System_String__Format_61721540(formata, v67, 0LL);
              v35 = System_String__Concat_61707032(v35, v104, 0LL);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
                v35 = System_String__Concat_61707032(v35, v105, 0LL);
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
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
                (int32_t)callback,
                v106,
                v107);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v108 = v117;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v108 = v117;
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
                v109 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v109 )
                {
                  UILabel__SetCondensedScale(
                    v109,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0LL);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v108, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v112 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v112,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v112, 0, 0LL);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v35 = (System_String_o *)StringLiteral_1/*""*/;
              v39 = &StringLiteral_12282/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12283/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12287/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_1967/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12281/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = &StringLiteral_12284/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v35 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
              v34 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
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
    sub_1B8880C(SelfUserGame, v16);
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
  __int64 v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x7
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4A586EA & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__);
    this = (StonePurchaseNotificationMenu_o *)sub_1B885B0(&StonePurchaseNotificationMenu_TypeInfo);
    byte_4A586EA = 1;
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
        v36.fields.y = *p_WINDOW_BASE_POS_Y;
        v36.fields.x = 0.0;
        v36.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v36, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v35);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(ShouldCentering, v18);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v24 = sub_1B887FC(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_19;
  *(_DWORD *)(v24 + 16) = kind;
  *(_QWORD *)(v24 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)callback, v25, v26);
  *(_QWORD *)(v24 + 48) = actionOnOpening;
  *(_DWORD *)(v24 + 32) = buyFreeStone;
  *(_DWORD *)(v24 + 36) = buyChargeStone;
  *(_DWORD *)(v24 + 40) = shopId;
  *(_BYTE *)(v24 + 44) = isSentGift;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 48), (int32_t)actionOnOpening, v27, v28);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v32 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v24,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), v24, v29, v30);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A586EE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A586EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A586EF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4678/*"ConfirmWindow/CloseButton"*/);
    byte_4A586EF = 1;
  }
  return (System_String_o *)StringLiteral_4678/*"ConfirmWindow/CloseButton"*/;
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59025 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseNotificationMenu___c_TypeInfo);
    byte_4A59025 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1B8880C(this, 0LL);
  return q->fields.freeStone;
}