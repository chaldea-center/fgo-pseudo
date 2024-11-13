void __fastcall StonePurchaseNotificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct StonePurchaseNotificationMenu_StaticFields *static_fields; // x8

  if ( (byte_4B13DB2 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseNotificationMenu_TypeInfo, v1, v2);
    byte_4B13DB2 = 1;
  }
  static_fields = StonePurchaseNotificationMenu_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y = 260.0;
  *(_QWORD *)&static_fields->WINDOW_BASE_POS_Y = 3256877056LL;
  *(_QWORD *)&static_fields->MESSAGE_LABEL_MAX_WIDTH = 0x442F0000000002D0LL;
}


void __fastcall StonePurchaseNotificationMenu___ctor(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B13DB1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo, v7, v8);
    byte_4B13DB1 = 1;
  }
  this->fields.DEFAULT_MESSAGE_FONT_SIZE = 30;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue___ctor__);
  this->fields.dialogOpenQueue = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogOpenQueue, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *callbackFunc; // x21
  Il2CppObject *object; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  const MethodInfo *v18; // [xsp+0h] [xbp-30h]

  if ( (byte_4B13DAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__,
      v11,
      v12);
    byte_4B13DAD = 1;
  }
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
  {
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
               (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_StonePurchaseNotificationMenu_DialogOpenQueue___);
    if ( !this->fields.dialogOpenQueue
      || (v17 = object,
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this->fields.dialogOpenQueue,
            0,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__RemoveAt__),
          !v17) )
    {
      sub_1BCAA3C(object, v16);
    }
    StonePurchaseNotificationMenu__OpenQueueable(
      this,
      (int32_t)v17[1].klass,
      (System_Action_o *)v17[1].monitor,
      (int32_t)v17[2].klass,
      HIDWORD(v17[2].klass),
      (int32_t)v17[2].monitor,
      BYTE4(v17[2].monitor),
      (System_Action_o *)v17[3].klass,
      v18);
  }
}


void __fastcall StonePurchaseNotificationMenu__Close(StonePurchaseNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StonePurchaseNotificationMenu__Close_35990212(this, 0LL, v2);
}


void __fastcall StonePurchaseNotificationMenu__Close_35990212(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B13DAC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_StonePurchaseNotificationMenu_EndClose__, v10, v11);
    byte_4B13DAC = 1;
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 4;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_StonePurchaseNotificationMenu_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *stoneDataLabel; // x0
  UnityEngine_Transform_o *windowTransform; // x20
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseNotificationMenu_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B13DA9 = 1;
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
    j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, method);
  if ( !windowTransform )
LABEL_11:
    sub_1BCAA3C(stoneDataLabel, method);
  v8.fields.x = 0.0;
  v8.fields.z = 0.0;
  v8.fields.y = StonePurchaseNotificationMenu_TypeInfo->static_fields->WINDOW_BASE_POS_Y;
  UnityEngine_Transform__set_position(windowTransform, v8, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseNotificationMenu__OnClickClose(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PurchaseBehaviour_c *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B13DAE & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_StonePurchaseNotificationMenu_OnClickClose__, v4, v5);
    byte_4B13DAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
      v6 = PurchaseBehaviour_TypeInfo;
    }
    v6->static_fields->isOpenPurchaseDialogEvent = 0;
    this->fields.state = 3;
    v7 = Method_StonePurchaseNotificationMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_StonePurchaseNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseNotificationMenu_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    StonePurchaseNotificationMenu__Callback(this, v9);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 SelfUserGame; // x0
  __int64 v76; // x1
  _DWORD *v77; // x27
  int v78; // w8
  UIWidget_o *messageLabel; // x21
  int32_t DEFAULT_MESSAGE_OVERFLOW_METHOD; // w28
  float x; // s0
  int32_t v82; // w1
  float y; // s0
  int32_t v84; // w1
  StonePurchaseNotificationMenu_o *v85; // x0
  const MethodInfo *v86; // x1
  StonePurchaseNotificationMenu_c *v87; // x8
  UnityEngine_Transform_o *windowTransform; // x21
  char v89; // w23
  float *p_WINDOW_BASE_POS_Y; // x8
  __int64 v91; // x1
  System_String_o *v92; // x23
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  int v95; // w21
  System_String_o *v96; // x25
  System_String_o *v97; // x23
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  __int64 *v100; // x21
  __int64 *v101; // x8
  System_String_o *monitor; // x21
  System_String_o *v103; // x0
  System_String_o *v104; // x21
  System_String_o *v105; // x0
  int v106; // w23
  int v107; // w28
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *dialogOpenQueue; // x21
  StonePurchaseNotificationMenu___c_c *v112; // x0
  System_Func_object__int__o *_9__19_0; // x27
  Il2CppObject *v114; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *static_fields; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int32_t v122; // w0
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  StonePurchaseNotificationMenu___c_c *v126; // x8
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v127; // x10
  int32_t v128; // w28
  struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *v129; // x21
  System_Func_object__int__o *_9__19_1; // x27
  Il2CppObject *v131; // x28
  struct StonePurchaseNotificationMenu___c_StaticFields *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int32_t v139; // w0
  System_String_o *v140; // x21
  int v141; // w27
  System_Object_array *v142; // x28
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x21
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t v156; // x21
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x21
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  int64_t v170; // x21
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x21
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  int64_t v184; // x21
  System_String_o *v185; // x0
  System_String_o *v186; // x0
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  int32_t v193; // w23
  UILabel_o *v194; // x20
  UILabel_o *stoneDataLabel; // x20
  UILabel_o *closeLabel; // x20
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  System_Action_o *v200; // x20
  __int64 v201; // x0
  System_String_o *format; // [xsp+0h] [xbp-A0h]
  System_String_o *formata; // [xsp+0h] [xbp-A0h]
  int v204; // [xsp+8h] [xbp-98h]
  int v205; // [xsp+10h] [xbp-90h]
  __int64 *v206; // [xsp+10h] [xbp-90h]
  int32_t value; // [xsp+1Ch] [xbp-84h]
  int v208; // [xsp+20h] [xbp-80h] BYREF
  int v209; // [xsp+24h] [xbp-7Ch] BYREF
  int v210; // [xsp+28h] [xbp-78h] BYREF
  int v211; // [xsp+2Ch] [xbp-74h] BYREF
  int v212; // [xsp+30h] [xbp-70h] BYREF
  int v213; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13DAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BankShopMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___, v23, v24);
    sub_1BCA7E0(&System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&object___TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_StonePurchaseNotificationMenu_EndOpen__, v33, v34);
    sub_1BCA7E0(&StonePurchaseNotificationMenu_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_StonePurchaseNotificationMenu___c__Open_b__19_0__, v37, v38);
    sub_1BCA7E0(&Method_StonePurchaseNotificationMenu___c__Open_b__19_1__, v39, v40);
    sub_1BCA7E0(&StonePurchaseNotificationMenu___c_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_12455/*"STONE_SHOP_STONE_NAME_SPACE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12441/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_12435/*"STONE_PURCHASE_RESULT_CANCEL"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_1964/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12438/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12439/*"STONE_PURCHASE_RESULT_FAIL"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12456/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12443/*"STONE_PURCHASE_RESULT_SUSPEND"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_12436/*"STONE_PURCHASE_RESULT_CLOSE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_12440/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_12449/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_12437/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_12442/*"STONE_PURCHASE_RESULT_SUCCESS"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_12454/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, v73, v74);
    byte_4B13DAA = 1;
  }
  entity = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.openKind = kind;
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v77 = (_DWORD *)SelfUserGame;
      v78 = *(_DWORD *)(SelfUserGame + 176);
      messageLabel = (UIWidget_o *)this->fields.messageLabel;
      SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
      v205 = v78;
      DEFAULT_MESSAGE_OVERFLOW_METHOD = this->fields.DEFAULT_MESSAGE_OVERFLOW_METHOD;
      value = this->fields.DEFAULT_MESSAGE_FONT_SIZE;
      if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v76);
      if ( messageLabel )
      {
        x = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.x;
        v82 = x == INFINITY ? 0x80000000 : (int)x;
        UIWidget__set_width(messageLabel, v82, 0LL);
        SelfUserGame = (__int64)this->fields.messageLabel;
        if ( SelfUserGame )
        {
          y = StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_WIDGET_SIZE.fields.y;
          if ( y == INFINITY )
            v84 = 0x80000000;
          else
            v84 = (int)y;
          UIWidget__set_height((UIWidget_o *)SelfUserGame, v84, 0LL);
          SelfUserGame = StonePurchaseNotificationMenu__ShouldCentering(v85, v86);
          v87 = StonePurchaseNotificationMenu_TypeInfo;
          windowTransform = this->fields.windowTransform;
          v89 = SelfUserGame;
          if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v76);
            v87 = StonePurchaseNotificationMenu_TypeInfo;
          }
          p_WINDOW_BASE_POS_Y = &v87->static_fields->WINDOW_BASE_POS_Y;
          if ( (v89 & 1) != 0 )
          {
            if ( !windowTransform )
              goto LABEL_139;
            ++p_WINDOW_BASE_POS_Y;
          }
          else if ( !windowTransform )
          {
            goto LABEL_139;
          }
          v215.fields.y = *p_WINDOW_BASE_POS_Y;
          v215.fields.x = 0.0;
          v215.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(windowTransform, v215, 0LL);
          switch ( kind )
          {
            case 0:
              v92 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v91);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_28;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_28:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12435/*"STONE_PURCHASE_RESULT_CANCEL"*/, 0LL);
                v94 = System_String__Concat_62401220(v92, v93, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                monitor = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"STONE_SHOP_STONE_NAME_CANCEL_SPACE"*/, 0LL);
                v94 = System_String__Concat_62412480(v92, monitor, v103, 0LL);
              }
              v96 = v94;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
              value = 23;
              goto LABEL_116;
            case 1:
              v97 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v91);
              SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BankShopMaster___);
              if ( !SelfUserGame )
                break;
              SelfUserGame = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                               &entity,
                               shopId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int__TryGetEntity__);
              if ( (SelfUserGame & 1) == 0 )
                goto LABEL_38;
              if ( !entity )
                break;
              SelfUserGame = System_String__IsNullOrEmpty((System_String_o *)entity[7].monitor, 0LL);
              if ( (SelfUserGame & 1) != 0 )
              {
LABEL_38:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"STONE_SHOP_STONE_NAME_SPACE_DEFAULT"*/, 0LL);
                v99 = System_String__Concat_62401220(v97, v98, 0LL);
              }
              else
              {
                if ( !entity )
                  break;
                v104 = (System_String_o *)entity[7].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"STONE_SHOP_STONE_NAME_SPACE"*/, 0LL);
                v99 = System_String__Concat_62412480(v97, v104, v105, 0LL);
              }
              value = 23;
              v100 = &StringLiteral_12442/*"STONE_PURCHASE_RESULT_SUCCESS"*/;
              v96 = v99;
LABEL_74:
              if ( buyChargeStone + buyFreeStone < 1 )
                goto LABEL_111;
              v106 = v77[43];
              v107 = v77[44];
              v204 = v77[42];
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dialogOpenQueue,
                     (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StonePurchaseNotificationMenu_DialogOpenQueue___) )
              {
                v206 = v100;
                dialogOpenQueue = this->fields.dialogOpenQueue;
                v112 = StonePurchaseNotificationMenu___c_TypeInfo;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo, v108);
                  v112 = StonePurchaseNotificationMenu___c_TypeInfo;
                }
                _9__19_0 = (System_Func_object__int__o *)v112->static_fields->__9__19_0;
                if ( !_9__19_0 )
                {
                  if ( !v112->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v112, v108);
                    v112 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v114 = (Il2CppObject *)v112->static_fields->__9;
                  _9__19_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                             System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                             v108,
                                                             v109,
                                                             v110);
                  System_Func_object__int____ctor(
                    _9__19_0,
                    v114,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_0__,
                    0LL);
                  static_fields = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  static_fields->__9__19_0 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_0;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
                    (int64_t)_9__19_0,
                    v116,
                    v117,
                    v118,
                    v119,
                    v120,
                    v121);
                }
                v122 = System_Linq_Enumerable__Sum_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)dialogOpenQueue,
                         (System_Func_TSource__int__o *)_9__19_0,
                         (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v126 = StonePurchaseNotificationMenu___c_TypeInfo;
                v127 = this->fields.dialogOpenQueue;
                v128 = v122;
                if ( !StonePurchaseNotificationMenu___c_TypeInfo->_2.cctor_finished )
                {
                  v129 = this->fields.dialogOpenQueue;
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu___c_TypeInfo, v123);
                  v126 = StonePurchaseNotificationMenu___c_TypeInfo;
                  v127 = v129;
                }
                v106 -= v128;
                _9__19_1 = (System_Func_object__int__o *)v126->static_fields->__9__19_1;
                if ( !_9__19_1 )
                {
                  format = (System_String_o *)v127;
                  if ( !v126->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v126, v123);
                    v126 = StonePurchaseNotificationMenu___c_TypeInfo;
                  }
                  v131 = (Il2CppObject *)v126->static_fields->__9;
                  _9__19_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                             System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__TypeInfo,
                                                             v123,
                                                             v124,
                                                             v125);
                  System_Func_object__int____ctor(
                    _9__19_1,
                    v131,
                    Method_StonePurchaseNotificationMenu___c__Open_b__19_1__,
                    0LL);
                  v132 = StonePurchaseNotificationMenu___c_TypeInfo->static_fields;
                  v132->__9__19_1 = (struct System_Func_StonePurchaseNotificationMenu_DialogOpenQueue__int__o *)_9__19_1;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v132->__9__19_1,
                    (int64_t)_9__19_1,
                    v133,
                    v134,
                    v135,
                    v136,
                    v137,
                    v138);
                  v127 = (struct System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__o *)format;
                }
                v139 = System_Linq_Enumerable__Sum_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v127,
                         (System_Func_TSource__int__o *)_9__19_1,
                         (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_StonePurchaseNotificationMenu_DialogOpenQueue___);
                v100 = v206;
                v107 = v204 - v139 + v106;
                v204 -= v139;
              }
              v140 = (System_String_o *)*v100;
              v141 = v107 - (buyChargeStone + buyFreeStone);
              v205 = v107;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
              formata = LocalizationManager__Get(v140, 0LL);
              v142 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
              v213 = v141;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v213);
              if ( !v142 )
                break;
              v149 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( !v142->max_length )
                goto LABEL_140;
              v142->m_Items[0] = (Il2CppObject *)v149;
              sub_1BCA784((PartyOrganizationUtility_o *)v142->m_Items, v149, v143, v144, v145, v146, v147, v148);
              v212 = v106 - buyChargeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v212);
              v156 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v142->max_length <= 1 )
                goto LABEL_140;
              v142->m_Items[1] = (Il2CppObject *)v156;
              sub_1BCA784((PartyOrganizationUtility_o *)&v142->m_Items[1], v156, v150, v151, v152, v153, v154, v155);
              v211 = v204 - buyFreeStone;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v211);
              v163 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v142->max_length <= 2 )
                goto LABEL_140;
              v142->m_Items[2] = (Il2CppObject *)v163;
              sub_1BCA784((PartyOrganizationUtility_o *)&v142->m_Items[2], v163, v157, v158, v159, v160, v161, v162);
              v210 = v205;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v210);
              v170 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v142->max_length <= 3 )
                goto LABEL_140;
              v142->m_Items[3] = (Il2CppObject *)v170;
              sub_1BCA784((PartyOrganizationUtility_o *)&v142->m_Items[3], v170, v164, v165, v166, v167, v168, v169);
              v209 = v106;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v209);
              v177 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                  goto LABEL_141;
              }
              if ( v142->max_length <= 4 )
                goto LABEL_140;
              v142->m_Items[4] = (Il2CppObject *)v177;
              sub_1BCA784((PartyOrganizationUtility_o *)&v142->m_Items[4], v177, v171, v172, v173, v174, v175, v176);
              v208 = v204;
              SelfUserGame = j_il2cpp_value_box_0(int_TypeInfo, &v208);
              v184 = SelfUserGame;
              if ( SelfUserGame )
              {
                SelfUserGame = sub_1BCA91C(SelfUserGame, v142->obj.klass->_1.element_class);
                if ( !SelfUserGame )
                {
LABEL_141:
                  v201 = sub_1BCAA60(SelfUserGame);
                  sub_1BCA908(v201, 0LL);
                }
              }
              if ( v142->max_length <= 5 )
LABEL_140:
                sub_1BCAA44(SelfUserGame, v76);
              v142->m_Items[5] = (Il2CppObject *)v184;
              sub_1BCA784((PartyOrganizationUtility_o *)&v142->m_Items[5], v184, v178, v179, v180, v181, v182, v183);
              v185 = System_String__Format_62415728(formata, v142, 0LL);
              v96 = System_String__Concat_62401220(v96, v185, 0LL);
LABEL_111:
              if ( isSentGift )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
                v186 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"STONE_SHOP_EXTRA_ITEM_SENT_MESSAGE"*/, 0LL);
                v96 = System_String__Concat_62401220(v96, v186, 0LL);
              }
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 2;
LABEL_116:
              v95 = 1;
LABEL_117:
              if ( System_String__IsNullOrEmpty(v96, 0LL) )
              {
                if ( callback )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
                    callback->fields.original_method_info,
                    *(_QWORD *)&callback->fields.extra_arg);
                return;
              }
              this->fields.callbackFunc = callback;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
                (int64_t)callback,
                v187,
                v188,
                v189,
                v190,
                v191,
                v192);
              SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !SelfUserGame )
                break;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( !SelfUserGame )
                break;
              if ( *(_DWORD *)(SelfUserGame + 476) == DEFAULT_MESSAGE_OVERFLOW_METHOD )
              {
                v193 = v205;
              }
              else
              {
                UILabel__set_overflowMethod((UILabel_o *)SelfUserGame, DEFAULT_MESSAGE_OVERFLOW_METHOD, 0LL);
                SelfUserGame = (__int64)this->fields.messageLabel;
                v193 = v205;
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
              UILabel__set_text((UILabel_o *)SelfUserGame, v96, 0LL);
              if ( !v95 )
                goto LABEL_133;
              SelfUserGame = (__int64)this->fields.messageLabel;
              if ( SelfUserGame )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SelfUserGame + 840LL))(
                  SelfUserGame,
                  *(_QWORD *)(*(_QWORD *)SelfUserGame + 848LL));
                SelfUserGame = (__int64)StonePurchaseNotificationMenu_TypeInfo;
                v194 = this->fields.messageLabel;
                if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v76);
                if ( v194 )
                {
                  UILabel__SetCondensedScale(
                    v194,
                    StonePurchaseNotificationMenu_TypeInfo->static_fields->MESSAGE_LABEL_MAX_WIDTH,
                    0LL);
LABEL_133:
                  stoneDataLabel = this->fields.stoneDataLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                  SelfUserGame = (__int64)LocalizationManager__GetNumberFormat(v193, 0LL);
                  if ( stoneDataLabel )
                  {
                    UILabel__set_text(stoneDataLabel, (System_String_o *)SelfUserGame, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12436/*"STONE_PURCHASE_RESULT_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SelfUserGame, 0LL);
                      this->fields.state = 1;
                      v200 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v197, v198, v199);
                      System_Action___ctor(
                        v200,
                        (Il2CppObject *)this,
                        Method_StonePurchaseNotificationMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v200, 0, 0LL);
                      return;
                    }
                  }
                }
              }
              break;
            case 2:
              v96 = (System_String_o *)StringLiteral_1/*""*/;
              v100 = &StringLiteral_12438/*"STONE_PURCHASE_RESULT_EXTERNAL_SUCCESS"*/;
              goto LABEL_74;
            case 3:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/;
              goto LABEL_60;
            case 4:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_12439/*"STONE_PURCHASE_RESULT_FAIL"*/;
              goto LABEL_60;
            case 5:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_12443/*"STONE_PURCHASE_RESULT_SUSPEND"*/;
              goto LABEL_60;
            case 6:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_1964/*"ACCOUNTING_ERROR_INITIALIZE_MESSAGE"*/;
              goto LABEL_60;
            case 7:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_12437/*"STONE_PURCHASE_RESULT_DUPLICATE_TRANSACTION_MESSAGE"*/;
              goto LABEL_60;
            case 8:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v101 = &StringLiteral_12440/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_ACCOUNT_ID_ERROR"*/;
LABEL_60:
              v96 = LocalizationManager__Get((System_String_o *)*v101, 0LL);
              v95 = 0;
              DEFAULT_MESSAGE_OVERFLOW_METHOD = 1;
              goto LABEL_117;
            case 9:
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"STONE_PURCHASE_RESULT_GOOGLE_PLAY_PENDING_AFTER_PURCHASE"*/, 0LL);
              v95 = 0;
              value = 24;
              goto LABEL_117;
            default:
              v95 = 0;
              v96 = 0LL;
              goto LABEL_117;
          }
        }
      }
    }
LABEL_139:
    sub_1BCAA3C(SelfUserGame, v76);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _BOOL8 ShouldCentering; // x0
  __int64 v22; // x1
  StonePurchaseNotificationMenu_c *v23; // x8
  UnityEngine_Transform_o *windowTransform; // x26
  bool v25; // w27
  float *p_WINDOW_BASE_POS_Y; // x8
  System_Collections_Generic_List_object__o *dialogOpenQueue; // x25
  int64_t v28; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  const MethodInfo *v51; // x7
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  v16 = this;
  if ( (byte_4B13DAB & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__, v17, v18);
    this = (StonePurchaseNotificationMenu_o *)sub_1BCA7E0(&StonePurchaseNotificationMenu_TypeInfo, v19, v20);
    byte_4B13DAB = 1;
  }
  if ( (v16->fields.state | 4) == 4 )
  {
    if ( actionOnOpening )
      this = (StonePurchaseNotificationMenu_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionOnOpening->fields.m_target)(
                                                  actionOnOpening->fields.original_method_info,
                                                  *(_QWORD *)&actionOnOpening->fields.extra_arg);
    ShouldCentering = StonePurchaseNotificationMenu__ShouldCentering(this, *(const MethodInfo **)&kind);
    v23 = StonePurchaseNotificationMenu_TypeInfo;
    windowTransform = v16->fields.windowTransform;
    v25 = ShouldCentering;
    if ( !StonePurchaseNotificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseNotificationMenu_TypeInfo, v22);
      v23 = StonePurchaseNotificationMenu_TypeInfo;
    }
    p_WINDOW_BASE_POS_Y = &v23->static_fields->WINDOW_BASE_POS_Y;
    if ( v25 )
    {
      if ( windowTransform )
      {
        ++p_WINDOW_BASE_POS_Y;
LABEL_17:
        v52.fields.y = *p_WINDOW_BASE_POS_Y;
        v52.fields.x = 0.0;
        v52.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(windowTransform, v52, 0LL);
        StonePurchaseNotificationMenu__Open(v16, kind, callback, buyFreeStone, buyChargeStone, shopId, isSentGift, v51);
        return;
      }
    }
    else if ( windowTransform )
    {
      goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(ShouldCentering, v22);
  }
  dialogOpenQueue = (System_Collections_Generic_List_object__o *)v16->fields.dialogOpenQueue;
  v28 = sub_1BCAA2C(
          StonePurchaseNotificationMenu_DialogOpenQueue_TypeInfo,
          *(_QWORD *)&kind,
          callback,
          *(_QWORD *)&buyFreeStone);
  StonePurchaseNotificationMenu_DialogOpenQueue___ctor((StonePurchaseNotificationMenu_DialogOpenQueue_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_19;
  *(_DWORD *)(v28 + 16) = kind;
  *(_QWORD *)(v28 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v28 + 48) = actionOnOpening;
  *(_DWORD *)(v28 + 32) = buyFreeStone;
  *(_DWORD *)(v28 + 36) = buyChargeStone;
  *(_DWORD *)(v28 + 40) = shopId;
  *(_BYTE *)(v28 + 44) = isSentGift;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), (int64_t)actionOnOpening, v35, v36, v37, v38, v39, v40);
  if ( !dialogOpenQueue )
    goto LABEL_19;
  items = dialogOpenQueue->fields._items;
  v48 = Method_System_Collections_Generic_List_StonePurchaseNotificationMenu_DialogOpenQueue__Add__;
  ++dialogOpenQueue->fields._version;
  if ( !items )
    goto LABEL_19;
  size = dialogOpenQueue->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      dialogOpenQueue,
      (Il2CppObject *)v28,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    dialogOpenQueue->fields._size = size + 1;
    v50[4] = (Il2CppClass *)v28;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v28, v41, v42, v43, v44, v45, v46);
  }
}


bool __fastcall StonePurchaseNotificationMenu__ShouldCentering(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13DAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13DAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return BYTE1(Instance[2].klass) == 0;
}


System_String_o *__fastcall StonePurchaseNotificationMenu__get_closeBtnPath(
        StonePurchaseNotificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13DB0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4746/*"ConfirmWindow/CloseButton"*/, method, v2);
    byte_4B13DB0 = 1;
  }
  return (System_String_o *)StringLiteral_4746/*"ConfirmWindow/CloseButton"*/;
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B144A8 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseNotificationMenu___c_TypeInfo, v1, v2);
    byte_4B144A8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(StonePurchaseNotificationMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  StonePurchaseNotificationMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseNotificationMenu___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)StonePurchaseNotificationMenu___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return q->fields.chargeStone;
}


int32_t __fastcall StonePurchaseNotificationMenu___c___Open_b__19_1(
        StonePurchaseNotificationMenu___c_o *this,
        StonePurchaseNotificationMenu_DialogOpenQueue_o *q,
        const MethodInfo *method)
{
  if ( !q )
    sub_1BCAA3C(this, 0LL);
  return q->fields.freeStone;
}