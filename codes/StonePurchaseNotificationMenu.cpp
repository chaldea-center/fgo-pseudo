void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4B64701 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseNotificationMenu_TypeInfo, v1);
    byte_4B64701 = 1;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B64700 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v4);
    byte_4B64700 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v5 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.dialogOpenQueue, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v9; // x1
  __int64 v10; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  const MethodInfo *v16; // [xsp+0h] [xbp-30h]

  if ( (byte_4B646FC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__, v10);
    byte_4B646FC = 1;
  }
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v15 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v15) )
    {
      sub_1BE4D28(object, v14);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v15[1].klass,
      (System_Action_o *)v15[1].monitor,
      (int32_t)v15[2].klass,
      HIDWORD(v15[2].klass),
      (int32_t)v15[2].monitor,
      BYTE4(v15[2].monitor),
      (System_Action_o *)v15[3].klass,
      v16);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_36126816(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_36126816(
        StonePurchaseNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4B646FB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_StonePurchaseNotificationMenu_EndClose__, v10);
    byte_4B646FB = 1;
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
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_1BE4A70(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v3; // x1
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B646F8 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseNotificationMenu_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B646F8 = 1;
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
    sub_1BE4D28(stoneDataLabel, method);
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

  if ( (byte_4B646FD & 1) == 0 )
  {
    sub_1BE4ACC(&PurchaseBehaviour_TypeInfo, method);
    sub_1BE4ACC(&Method_StonePurchaseNotificationMenu_OnClickClose__, v3);
    byte_4B646FD = 1;
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
      v5 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int32_t v88; // w0
  StonePurchaseNotificationMenu___c_c *v89; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v90; // x10
  int32_t v91; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v92; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v94; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int32_t v102; // w0
  System_String_o *v103; // x21
  int v104; // w27
  System_Object_array *v105; // x28
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
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x21
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x21
  System_String_o *v166; // x0
  System_String_o *v167; // x0
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  int32_t v174; // w23
  UILabel_o *v175; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v178; // x20
  __int64 v179; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v182; // [xsp+8h] [xbp-98h]
  int v183; // [xsp+10h] [xbp-90h]
  __int64 *v184; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v186; // [xsp+20h] [xbp-80h] BYREF
  int v187; // [xsp+24h] [xbp-7Ch] BYREF
  int v188; // [xsp+28h] [xbp-78h] BYREF
  int v189; // [xsp+2Ch] [xbp-74h] BYREF
  int v190; // [xsp+30h] [xbp-70h] BYREF
  int v191; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v193; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B646F9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BankShopMaster___, v15);
    sub_1BE4ACC(&DataManager_TypeInfo, v16);
    sub_1BE4ACC(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__, v17);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v18);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v19);
    sub_1BE4ACC(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v20);
    sub_1BE4ACC(&int_TypeInfo, v21);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v22);
    sub_1BE4ACC(&object___TypeInfo, v23);
    sub_1BE4ACC(&Method_StonePurchaseNotificationMenu_EndOpen__, v24);
    sub_1BE4ACC(&StonePurchaseNotificationMenu_TypeInfo, v25);
    sub_1BE4ACC(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__, v26);
    sub_1BE4ACC(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__, v27);
    sub_1BE4ACC(&StonePurchaseNotificationMenu___c_TypeInfo, v28);
    sub_1BE4ACC(&StringLiteral_12488/*"STONE_SHOP_STONE_NAME_SPACE"*/, v29);
    sub_1BE4ACC(&StringLiteral_12474/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v30);
    sub_1BE4ACC(&StringLiteral_12468/*"STONE_PURCHASE_RESULT_CANCEL"*/, v31);
    sub_1BE4ACC(&StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/, v32);
    sub_1BE4ACC(&StringLiteral_1969/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v33);
    sub_1BE4ACC(&StringLiteral_12471/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/, v34);
    sub_1BE4ACC(&StringLiteral_12472/*"STONE_PURCHASE_RESULT_FAIL"*/, v35);
    sub_1BE4ACC(&StringLiteral_12489/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, v36);
    sub_1BE4ACC(&StringLiteral_12476/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v37);
    sub_1BE4ACC(&StringLiteral_12469/*"STONE_PURCHASE_RESULT_CLOSE"*/, v38);
    sub_1BE4ACC(&StringLiteral_12473/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v39);
    sub_1BE4ACC(&StringLiteral_12482/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, v40);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v41);
    sub_1BE4ACC(&StringLiteral_12470/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v42);
    sub_1BE4ACC(&StringLiteral_12475/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v43);
    sub_1BE4ACC(&StringLiteral_12487/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, v44);
    byte_4B646F9 = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v47 = (_DWORD *)SelfUserGame;
      v48 = *(_DWORD *)(SelfUserGame + 176);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v183 = v48;
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
          v193.fields.y = *p_WINDOW_BASE_POS_Y;
          v193.fields.x = 0.0;
          v193.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v193, 0LL);
          switch ( kind )
          {
            case 0:
              v61 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_31FD818 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
                v63 = System_String__Concat_62698808(v61, v62, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12487/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
                v63 = System_String__Concat_62710068(v61, monitor, v72, 0LL);
              }
              v65 = v63;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v66 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_31FD818 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
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
                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
                v68 = System_String__Concat_62698808(v66, v67, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                v73 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12488/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
                v68 = System_String__Concat_62710068(v66, v73, v74, 0LL);
              }
              value = 23;
              v69 = &StringLiteral_12475/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v65 = v68;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v75 = v47[43];
              v76 = v47[44];
              v182 = v47[42];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v184 = v69;
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
                  _9__19_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v80,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0LL);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
                    (int64_t)_9__19_0,
                    v82,
                    v83,
                    v84,
                    v85,
                    v86,
                    v87);
                }
                v88 = System_Linq_Enumerable__Sum_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                        (System_Func_TSource__int__o *)_9__19_0,
                        (const MethodInfo_2F91654 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v89 = StonePurchaseNotificationMenu___c_TypeInfo;
                v90 = this->fields.dialogOpenQueue;
                v91 = v88;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v92 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo);
                  v89 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v90 = v92;
                }
                v75 -= v91;
                _9__19_1 = (System_Func_object__int__o *)v89->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v90;
                  if ( !v89->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v89);
                    v89 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v94 = (Il2CppObject *)v89->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v94,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0LL);
                  v95 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v95->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&v95->__9__19_1,
                    (int64_t)_9__19_1,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100,
                    v101);
                  v90 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v102 = System_Linq_Enumerable__Sum_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                         (System_Func_TSource__int__o *)_9__19_1,
                         (const MethodInfo_2F91654 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v69 = v184;
                v76 = v182 - v102 + v75;
                v182 -= v102;
              }
              v103 = (System_String_o *)*v69;
              v104 = v76 - (buyChargeStone + buyFreeStone);
              v183 = v76;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              formata = LocalizationManager__Get(v103, 0LL);
              v105 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
              v191 = v104;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v191, v106, v107, v108);
              if ( !v105 )
                break;
              v115 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !v105->max_length )
                goto LABEL_140;
              v105->m_Items[0] = (Il2CppObject *)v115;
              sub_1BE4A70((PartyOrganizationUtility_o *)v105->m_Items, v115, v109, v110, v111, v112, v113, v114);
              v190 = v75 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v190, v116, v117, v118);
              v125 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v105->max_length <= 1 )
                goto LABEL_140;
              v105->m_Items[1] = (Il2CppObject *)v125;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v105->m_Items[1], v125, v119, v120, v121, v122, v123, v124);
              v189 = v182 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v189, v126, v127, v128);
              v135 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v105->max_length <= 2 )
                goto LABEL_140;
              v105->m_Items[2] = (Il2CppObject *)v135;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v105->m_Items[2], v135, v129, v130, v131, v132, v133, v134);
              v188 = v183;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v188, v136, v137, v138);
              v145 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v105->max_length <= 3 )
                goto LABEL_140;
              v105->m_Items[3] = (Il2CppObject *)v145;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v105->m_Items[3], v145, v139, v140, v141, v142, v143, v144);
              v187 = v75;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v187, v146, v147, v148);
              v155 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v105->max_length <= 4 )
                goto LABEL_140;
              v105->m_Items[4] = (Il2CppObject *)v155;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v105->m_Items[4], v155, v149, v150, v151, v152, v153, v154);
              v186 = v182;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v186, v156, v157, v158);
              v165 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BE4C08(SelfUserGame, v105->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v179 = sub_1BE4D4C(SelfUserGame);
                  sub_1BE4BF4(v179, 0LL);
                }
              }
              if ( v105->max_length <= 5 )
LABEL_140:
                sub_1BE4D30(SelfUserGame, v46);
              v105->m_Items[5] = (Il2CppObject *)v165;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v105->m_Items[5], v165, v159, v160, v161, v162, v163, v164);
              v166 = System_String__Format_62713316(formata, v105, 0LL);
              v65 = System_String__Concat_62698808(v65, v166, 0LL);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v167 = LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
                v65 = System_String__Concat_62698808(v65, v167, 0LL);
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
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
                (int64_t)callback,
                v168,
                v169,
                v170,
                v171,
                v172,
                v173);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v174 = v183;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v174 = v183;
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
                v175 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo);
                if ( v175 )
                {
                  UILabel__SetCondensedScale(
                    v175,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0,
                    0LL);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v174, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v178 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(
                        v178,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v178, 0, 0LL);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v65 = (System_String_o *)StringLiteral_1/*""*/;
              v69 = &StringLiteral_12471/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12472/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12476/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_1969/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12470/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v70 = &StringLiteral_12473/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v65 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
              v64 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
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
    sub_1BE4D28(SelfUserGame, v46);
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
  int64_t v26; // x27
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // x7
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4B646FA & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v17);
    this = (StonePurchaseNotificationMenu_o *)sub_1BE4ACC(&StonePurchaseNotificationMenu_TypeInfo, v18);
    byte_4B646FA = 1;
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
        v50.fields.y = *p_WINDOW_BASE_POS_Y;
        v50.fields.x = 0.0;
        v50.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v50, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v49);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(ShouldCentering, v20);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v26 = sub_1BE4D18(StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo);
  StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_DWORD *)(v26 + 16) = kind;
  *(_QWORD *)(v26 + 24) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)callback, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v26 + 48) = actionOnOpening;
  *(_DWORD *)(v26 + 32) = buyFreeStone;
  *(_DWORD *)(v26 + 36) = buyChargeStone;
  *(_DWORD *)(v26 + 40) = shopId;
  *(_BYTE *)(v26 + 44) = isSentGift;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 48), (int64_t)actionOnOpening, v33, v34, v35, v36, v37, v38);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v46 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v26,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v26;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v48 + 4), v26, v39, v40, v41, v42, v43, v44);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B646FE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B646FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B646FF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_4757/*"ConfirmWindow/CloseButton"*/, method);
    byte_4B646FF = 1;
  }
  return (System_String_o *)StringLiteral_4757/*"ConfirmWindow/CloseButton"*/;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B64E3C & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseNotificationMenu___c_TypeInfo, v1);
    byte_4B64E3C = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(StonePurchaseNotificationMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1BE4D28(this, 0LL);
  return q->fields.freeStone;
}