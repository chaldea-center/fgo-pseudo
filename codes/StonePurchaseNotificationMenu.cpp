void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F9CE7 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseNotificationMenu_TypeInfo, v1);
    byte_49F9CE7 = 1;
  }
  *StonePurchaseNotificationMenu_TypeInfo->static_fields = (struct StonePurchaseNotificationMenu_StaticFields)3256877056LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F9CE6 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v5);
    byte_49F9CE6 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialogOpenQueue, (int32_t)v6, v7, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // [xsp+0h] [xbp-30h]

  if ( (byte_49F9CE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v6);
    byte_49F9CE2 = 1;
  }
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v10 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v10) )
    {
      sub_1B64324(object);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v10[1].klass,
      (System_Action_o *)v10[1].monitor,
      (int32_t)v10[2].klass,
      HIDWORD(v10[2].klass),
      (int32_t)v10[2].monitor,
      BYTE4(v10[2].monitor),
      (System_Action_o *)v10[3].klass,
      v11);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_34616176(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_34616176(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F9CE1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_StonePurchaseNotificationMenu_EndClose__, v6);
    byte_49F9CE1 = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 4;
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_49F9CDE & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseNotificationMenu_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F9CDE = 1;
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
    sub_1B64324(stoneDataLabel);
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

  if ( (byte_49F9CE3 & 1) == 0 )
  {
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, method);
    sub_1B640C8(&Method_StonePurchaseNotificationMenu_OnClickClose__, v3);
    byte_49F9CE3 = 1;
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
      v5 = (_QWORD *)sub_1B640E0(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
  const MethodInfo *v46; // x1
  _DWORD *v47; // x28
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w24
  StonePurchaseNotificationMenu_c *v49; // x8
  UnityEngine_Transform_o *windowTransform; // x21
  char v51; // w23
  float *static_fields; // x8
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x26
  System_String_o *v57; // x22
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  __int64 *v60; // x29
  __int64 *v61; // x8
  int v62; // w8
  System_String_o *monitor; // x21
  System_String_o *v64; // x0
  System_String_o *v65; // x21
  System_String_o *v66; // x0
  int v67; // w21
  int v68; // w22
  __int64 v69; // x1
  __int64 v70; // x2
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v72; // x0
  System_Func_object__int__o *_9__17_0; // x28
  Il2CppObject *v74; // x29
  struct StonePurchaseNotificationMenu___c_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w0
  __int64 v79; // x1
  __int64 v80; // x2
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v81; // x21
  int32_t v82; // w29
  StonePurchaseNotificationMenu___c_c *v83; // x8
  System_Func_object__int__o *_9__17_1; // x28
  Il2CppObject *v85; // x29
  struct StonePurchaseNotificationMenu___c_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w0
  int v90; // w9
  System_String_o *v91; // x21
  int v92; // w28
  System_Object_array *v93; // x29
  __int64 v94; // x1
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  Il2CppObject *v100; // x21
  int32_t v101; // w2
  int32_t v102; // w3
  Il2CppObject *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  Il2CppObject *v106; // x21
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *v109; // x21
  int32_t v110; // w2
  int32_t v111; // w3
  Il2CppObject *v112; // x21
  System_String_o *v113; // x0
  System_String_o *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  __int64 v119; // x1
  __int64 v120; // x2
  System_Action_o *v121; // x20
  __int64 v122; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  int v124; // [xsp+8h] [xbp-98h]
  bool v125; // [xsp+Ch] [xbp-94h]
  int data; // [xsp+10h] [xbp-90h]
  __int64 *dataa; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v129; // [xsp+20h] [xbp-80h] BYREF
  int v130; // [xsp+24h] [xbp-7Ch] BYREF
  int v131; // [xsp+28h] [xbp-78h] BYREF
  int v132; // [xsp+2Ch] [xbp-74h] BYREF
  int v133; // [xsp+30h] [xbp-70h] BYREF
  int v134; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9CDF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMaster_BankShopMaster___, v15);
    sub_1B640C8(&DataManager_TypeInfo, v16);
    sub_1B640C8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v19);
    sub_1B640C8(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v20);
    sub_1B640C8(&int_TypeInfo, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&object___TypeInfo, v23);
    sub_1B640C8(&Method_StonePurchaseNotificationMenu_EndOpen__, v24);
    sub_1B640C8(&StonePurchaseNotificationMenu_TypeInfo, v25);
    sub_1B640C8(&Method_StonePurchaseNotificationMenu___c__Open_b__17_0__, v26);
    sub_1B640C8(&Method_StonePurchaseNotificationMenu___c__Open_b__17_1__, v27);
    sub_1B640C8(&StonePurchaseNotificationMenu___c_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_12244/*"STONE_SHOP_STONE_NAME_SPACE"*/, v29);
    sub_1B640C8(&StringLiteral_12230/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v30);
    sub_1B640C8(&StringLiteral_12224/*"STONE_PURCHASE_RESULT_CANCEL"*/, v31);
    sub_1B640C8(&StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/, v32);
    sub_1B640C8(&StringLiteral_1969/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v33);
    sub_1B640C8(&StringLiteral_12227/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/, v34);
    sub_1B640C8(&StringLiteral_12228/*"STONE_PURCHASE_RESULT_FAIL"*/, v35);
    sub_1B640C8(&StringLiteral_12245/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, v36);
    sub_1B640C8(&StringLiteral_12232/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v37);
    sub_1B640C8(&StringLiteral_12225/*"STONE_PURCHASE_RESULT_CLOSE"*/, v38);
    sub_1B640C8(&StringLiteral_12229/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v39);
    sub_1B640C8(&StringLiteral_12238/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, v40);
    sub_1B640C8(&StringLiteral_1/*""*/, v41);
    sub_1B640C8(&StringLiteral_12226/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v42);
    sub_1B640C8(&StringLiteral_12231/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v43);
    sub_1B640C8(&StringLiteral_12243/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, v44);
    byte_49F9CDF = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    v125 = isSentGift;
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_122;
    v47 = (_DWORD *)SelfUserGame;
    data = *(_DWORD *)(SelfUserGame + 176);
    DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
    value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
    SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering((StonePurchaseNotificationMenu_o *)SelfUserGame, v46);
    v49 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = this->fields.windowTransform;
    v51 = SelfUserGame;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v49 = StonePurchaseNotificationMenu_TypeInfo;
    }
    static_fields = (float *)v49->static_fields;
    if ( (v51 & 1) != 0 )
    {
      if ( !windowTransform )
        goto LABEL_122;
      ++static_fields;
    }
    else if ( !windowTransform )
    {
      goto LABEL_122;
    }
    v136.fields.y = *static_fields;
    v136.fields.x = 0.0;
    v136.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(windowTransform, v136, 0LL);
    switch ( kind )
    {
      case 0:
        v53 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BankShopMaster___);
        if ( !SelfUserGame )
          goto LABEL_122;
        SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                         &entity,
                         shopId,
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
        if ( (SelfUserGame & 1) == 0 )
          goto LABEL_18;
        if ( !entity )
          goto LABEL_122;
        SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
LABEL_18:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
          v55 = System_String__Concat_61375396(v53, v54, 0LL);
        }
        else
        {
          if ( !entity )
            goto LABEL_122;
          monitor = (System_String_o *)entity[7].monitor;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12243/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
          v55 = System_String__Concat_61386656(v53, monitor, v64, 0LL);
        }
        v56 = v55;
        v62 = 23;
LABEL_59:
        value = v62;
        goto LABEL_107;
      case 1:
        v57 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BankShopMaster___);
        if ( !SelfUserGame )
          goto LABEL_122;
        SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                         &entity,
                         shopId,
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
        if ( (SelfUserGame & 1) == 0 )
          goto LABEL_28;
        if ( !entity )
          goto LABEL_122;
        SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
        if ( (SelfUserGame & 1) != 0 )
        {
LABEL_28:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12245/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
          v59 = System_String__Concat_61375396(v57, v58, 0LL);
        }
        else
        {
          if ( !entity )
            goto LABEL_122;
          v65 = (System_String_o *)entity[7].monitor;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
          v59 = System_String__Concat_61386656(v57, v65, v66, 0LL);
        }
        value = 23;
        v60 = &StringLiteral_12231/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
        v56 = v59;
LABEL_65:
        if ( buyChargeStone + buyFreeStone < 1 )
          goto LABEL_103;
        v68 = v47[43];
        v67 = v47[44];
        v124 = v47[42];
        if ( System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
        {
          dialogOpenQueue = this->fields.dialogOpenQueue;
          v72 = StonePurchaseNotificationMenu___c_TypeInfo;
          if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
            v72 = StonePurchaseNotificationMenu___c_TypeInfo;
          }
          dataa = v60;
          _9__17_0 = (System_Func_object__int__o *)v72->static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( !v72->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v72);
              v72 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v74 = (Il2CppObject *)v72->static_fields->__9;
            _9__17_0 = (System_Func_object__int__o *)sub_1B64314(
                                                       System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                       v69,
                                                       v70);
            System_Func_object__int____ctor(
              _9__17_0,
              v74,
              Method_StonePurchaseNotificationMenu___c__Open_b__17_0__,
              0LL);
            v75 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
            v75->__9__17_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__17_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v75->__9__17_0, (int32_t)_9__17_0, v76, v77);
          }
          v78 = System_Linq_Enumerable__Sum_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                  (System_Func_TSource__int__o *)_9__17_0,
                  (const MethodInfo_2E700DC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
          v81 = this->fields.dialogOpenQueue;
          v82 = v78;
          v83 = StonePurchaseNotificationMenu___c_TypeInfo;
          if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
            v83 = StonePurchaseNotificationMenu___c_TypeInfo;
          }
          v68 -= v82;
          _9__17_1 = (System_Func_object__int__o *)v83->static_fields->__9__17_1;
          if ( !_9__17_1 )
          {
            if ( !v83->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v83);
              v83 = StonePurchaseNotificationMenu___c_TypeInfo;
            }
            v85 = (Il2CppObject *)v83->static_fields->__9;
            _9__17_1 = (System_Func_object__int__o *)sub_1B64314(
                                                       System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                       v79,
                                                       v80);
            System_Func_object__int____ctor(
              _9__17_1,
              v85,
              Method_StonePurchaseNotificationMenu___c__Open_b__17_1__,
              0LL);
            v86 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
            v86->__9__17_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__17_1;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v86->__9__17_1, (int32_t)_9__17_1, v87, v88);
          }
          v89 = System_Linq_Enumerable__Sum_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v81,
                  (System_Func_TSource__int__o *)_9__17_1,
                  (const MethodInfo_2E700DC *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
          v60 = dataa;
          v90 = v124 - v89 + v68;
          v124 -= v89;
        }
        else
        {
          v90 = v67;
        }
        v91 = (System_String_o *)*v60;
        v92 = v90 - (buyChargeStone + buyFreeStone);
        data = v90;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        format = LocalizationManager__Get(v91, 0LL);
        v93 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
        v134 = v92;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v134);
        if ( !v93 )
          goto LABEL_122;
        v97 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_124;
        }
        if ( !v93->max_length )
          goto LABEL_123;
        v93->m_Items[0] = v97;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)v93->m_Items, (int32_t)v97, v95, v96);
        v133 = v68 - buyChargeStone;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v133);
        v100 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_124;
        }
        if ( v93->max_length <= 1 )
          goto LABEL_123;
        v93->m_Items[1] = v100;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->m_Items[1], (int32_t)v100, v98, v99);
        v132 = v124 - buyFreeStone;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v132);
        v103 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_124;
        }
        if ( v93->max_length <= 2 )
          goto LABEL_123;
        v93->m_Items[2] = v103;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->m_Items[2], (int32_t)v103, v101, v102);
        v131 = data;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v131);
        v106 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_124;
        }
        if ( v93->max_length <= 3 )
          goto LABEL_123;
        v93->m_Items[3] = v106;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->m_Items[3], (int32_t)v106, v104, v105);
        v130 = v68;
        SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v130);
        v109 = (Il2CppObject *)SelfUserGame;
        if ( SelfUserGame )
        {
          SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
          if ( !SelfUserGame )
            goto LABEL_124;
        }
        if ( v93->max_length > 4 )
        {
          v93->m_Items[4] = v109;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->m_Items[4], (int32_t)v109, v107, v108);
          v129 = v124;
          SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v129);
          v112 = (Il2CppObject *)SelfUserGame;
          if ( SelfUserGame )
          {
            SelfUserGame = sub_1B64204(SelfUserGame, v93->obj.klass->_1.element_class);
            if ( !SelfUserGame )
            {
LABEL_124:
              v122 = sub_1B64348(SelfUserGame);
              sub_1B641F0(v122, 0LL);
            }
          }
          if ( v93->max_length > 5 )
          {
            v93->m_Items[5] = v112;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->m_Items[5], (int32_t)v112, v110, v111);
            v113 = System_String__Format_61389904(format, v93, 0LL);
            v56 = System_String__Concat_61375396(v56, v113, 0LL);
LABEL_103:
            if ( v125 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
              v56 = System_String__Concat_61375396(v56, v114, 0LL);
            }
LABEL_107:
            if ( System_String__IsNullOrEmpty(v56, 0LL) )
            {
              if ( callback )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
                  callback->fields.original_method_info,
                  *(_QWORD *)&callback->fields.extra_arg);
              return;
            }
            this->fields.callbackFunc = callback;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v115, v116);
            SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( SelfUserGame )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD
                  || (UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL),
                      (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
                {
                  if ( *(_DWORD *)(SelfUserGame + 424) == value
                    || (UILabel__set_fontSize((UILabel_o *)SelfUserGame, value, 0LL),
                        (SelfUserGame = (__int64)this->fields.messageLabel) != 0) )
                  {
                    UILabel__set_text((UILabel_o *)SelfUserGame, v56, 0LL);
                    stoneDataLabel = this->fields.stoneDataLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(data, 0LL);
                    if ( stoneDataLabel )
                    {
                      UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                      closeLabel = this->fields.closeLabel;
                      SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                      if ( closeLabel )
                      {
                        UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                        this->fields.state = 1;
                        v121 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v119, v120);
                        System_Action___ctor(
                          v121,
                          (Il2CppObject *)this,
                          Method_StonePurchaseNotificationMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v121, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_122:
            sub_1B64324(SelfUserGame);
          }
        }
LABEL_123:
        sub_1B6432C(SelfUserGame, v94);
      case 2:
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        v60 = &StringLiteral_12227/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
        goto LABEL_65;
      case 3:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/;
        goto LABEL_50;
      case 4:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_12228/*"STONE_PURCHASE_RESULT_FAIL"*/;
        goto LABEL_50;
      case 5:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_12232/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
        goto LABEL_50;
      case 6:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_1969/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
        goto LABEL_50;
      case 7:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_12226/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
        goto LABEL_50;
      case 8:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = &StringLiteral_12229/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_50:
        v56 = LocalizationManager__Get((System_String_o *)*v61, 0LL);
        DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
        goto LABEL_107;
      case 9:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
        v62 = 24;
        goto LABEL_59;
      default:
        v56 = 0LL;
        goto LABEL_107;
    }
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
  StonePurchaseNotificationMenu_c *v20; // x8
  UnityEngine_Transform_o *windowTransform; // x26
  bool v22; // w27
  float *static_fields; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  __int64 v25; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x7
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_49F9CE0 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v17);
    this = (StonePurchaseNotificationMenu_o *)sub_1B640C8(&StonePurchaseNotificationMenu_TypeInfo, v18);
    byte_49F9CE0 = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionOnOpening->fields.m_target)(
                                                  actionOnOpening->fields.original_method_info,
                                                  *(_QWORD *)&actionOnOpening->fields.extra_arg);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v20 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v22 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
      v20 = StonePurchaseNotificationMenu_TypeInfo;
    }
    static_fields = (float *)v20->static_fields;
    if ( v22 )
    {
      if ( windowTransform )
      {
        ++static_fields;
LABEL_17:
        v37.fields.y = *static_fields;
        v37.fields.x = 0.0;
        v37.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v37, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v36);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(ShouldCentering);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v25 = sub_1B64314(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind, callback);
  StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_19;
  *(_DWORD *)(v25 + 16) = kind;
  *(_QWORD *)(v25 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)callback, v26, v27);
  *(_QWORD *)(v25 + 48) = actionOnOpening;
  *(_DWORD *)(v25 + 32) = buyFreeStone;
  *(_DWORD *)(v25 + 36) = buyChargeStone;
  *(_DWORD *)(v25 + 40) = shopId;
  *(_BYTE *)(v25 + 44) = isSentGift;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)actionOnOpening, v28, v29);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v33 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v25, v30, v31);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9CE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F9CE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F9CE5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4655/*"ConfirmWindow/CloseButton"*/, method);
    byte_49F9CE5 = 1;
  }
  return (System_String_o *)StringLiteral_4655/*"ConfirmWindow/CloseButton"*/;
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA499 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_49FA499 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(StonePurchaseNotificationMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall StonePurchaseNotificationMenu___c___ctor(
        StonePurchaseNotificationMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__17_0(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1B64324(this);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__17_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1B64324(this);
  return q->fields.freeStone;
}