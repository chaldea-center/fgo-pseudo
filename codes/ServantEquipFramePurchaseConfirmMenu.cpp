void __fastcall ServantEquipFramePurchaseConfirmMenu___ctor(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FD078 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD078 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Callback(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v9; // x19
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseConfirmMenu__Close_30685736(this, 0LL, v2);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close_30685736(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD073 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, v10);
    byte_40FD073 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__EndClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantEquipFramePurchaseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__EndOpen(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Init(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UILabel_o *infoLabel1; // x0
  UILabel_o *infoLabel2; // x0
  UILabel_o *infoLabel3; // x0
  UILabel_o *numberLabel1; // x0
  UILabel_o *numberLabel2; // x0
  UILabel_o *numberLabel3; // x0
  UILabel_o *v10; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FD071 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD071 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoLabel1 = this->fields.infoLabel1;
  if ( !infoLabel1 )
    goto LABEL_15;
  UILabel__set_text(infoLabel1, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoLabel2 = this->fields.infoLabel2;
  if ( !infoLabel2 )
    goto LABEL_15;
  UILabel__set_text(infoLabel2, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoLabel3 = this->fields.infoLabel3;
  if ( !infoLabel3 )
    goto LABEL_15;
  UILabel__set_text(infoLabel3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  numberLabel1 = this->fields.numberLabel1;
  if ( !numberLabel1 )
    goto LABEL_15;
  UILabel__set_text(numberLabel1, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  numberLabel2 = this->fields.numberLabel2;
  if ( !numberLabel2 )
    goto LABEL_15;
  UILabel__set_text(numberLabel2, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  numberLabel3 = this->fields.numberLabel3;
  if ( !numberLabel3 )
    goto LABEL_15;
  UILabel__set_text(numberLabel3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v10 = this->fields.messageLabel;
  if ( !v10
    || (UILabel__set_text(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL), (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickCancel(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD075 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD075 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD076 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD076 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickDecide(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_40FD074 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD074 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( this->fields.kind )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    SoundManager__playSystemSe(v3, 0LL);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 1, v4);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnEnable(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_40FD077 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_4203/*"ConfirmWindow/CloseButton"*/, v3);
    sub_B16FFC(&StringLiteral_4202/*"ConfirmWindow/CancelButton"*/, v4);
    byte_40FD077 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_4202/*"ConfirmWindow/CancelButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21111220(v6, (System_String_o *)StringLiteral_4203/*"ConfirmWindow/CloseButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseConfirmMenu__Open(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v46; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  System_String_o *NumberFormat; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x21
  System_String_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UILabel_o *v68; // x21
  System_String_o *v69; // x0
  struct UserGameEntity_o *v70; // x8
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UILabel_o *closeLabel; // x21
  System_String_o *v77; // x0
  UILabel_o *warningLabel; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Component_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_Behaviour_o *v85; // x0
  UnityEngine_Behaviour_o *v86; // x0
  UnityEngine_Behaviour_o *v87; // x0
  bool v88; // w1
  UILabel_o *messageLabel; // x21
  System_String_o *v90; // x22
  BalanceConfig_c *v91; // x8
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  UnityEngine_Component_o *infoLabel1; // x0
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_Component_o *infoLabel2; // x0
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_Component_o *infoLabel3; // x0
  UnityEngine_GameObject_o *v99; // x0
  UILabel_o *v100; // x21
  System_String_o *v101; // x0
  UILabel_o *v102; // x21
  System_String_o *v103; // x0
  UnityEngine_Component_o *numberLabel1; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_Component_o *numberLabel2; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_Component_o *numberLabel3; // x0
  UnityEngine_GameObject_o *v109; // x0
  UILabel_o *v110; // x21
  System_String_o *v111; // x0
  struct UserGameEntity_o *v112; // x8
  System_String_o *v113; // x22
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  UILabel_o *v116; // x21
  System_String_o *v117; // x0
  struct UserGameEntity_o *v118; // x8
  System_String_o *v119; // x22
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  UnityEngine_Component_o *spritIconSprite; // x0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v125; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v129; // x0
  UnityEngine_Behaviour_o *v130; // x0
  UnityEngine_Behaviour_o *v131; // x0
  UILabel_o *v132; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v134; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v136; // x0
  UILabel_o *v137; // x20
  System_String_o *v138; // x0
  UILabel_o *v139; // x20
  System_String_o *v140; // x0
  UILabel_o *v141; // x20
  System_String_o *v142; // x0
  UnityEngine_Component_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  UnityEngine_Component_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  UnityEngine_Component_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_Component_o *v151; // x0
  UnityEngine_GameObject_o *v152; // x0
  UnityEngine_Component_o *v153; // x0
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_Component_o *v155; // x0
  __int64 *v156; // x8
  System_String_o *v157; // x21
  BalanceConfig_c *v158; // x8
  Il2CppObject *v159; // x0
  UILabel_o *v160; // x20
  System_String_o *v161; // x21
  BalanceConfig_c *v162; // x8
  Il2CppObject *v163; // x0
  System_String_o *v164; // x0
  UnityEngine_Component_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  UnityEngine_GameObject_o *v167; // x0
  System_Action_o *v168; // x20
  int v169; // [xsp+Ch] [xbp-44h] BYREF
  int32_t svtEquipKeep; // [xsp+18h] [xbp-38h] BYREF
  int32_t ServantEquipFrameMax; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FD072 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&BalanceConfig_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__, v15);
    sub_B16FFC(&StringLiteral_11656/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, v16);
    sub_B16FFC(&StringLiteral_11654/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/, v17);
    sub_B16FFC(&StringLiteral_11659/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/, v18);
    sub_B16FFC(&StringLiteral_11661/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, v19);
    sub_B16FFC(&StringLiteral_11664/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, v20);
    sub_B16FFC(&StringLiteral_11658/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/, v21);
    sub_B16FFC(&StringLiteral_11662/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/, v22);
    sub_B16FFC(&StringLiteral_11655/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/, v23);
    sub_B16FFC(&StringLiteral_11665/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/, v24);
    sub_B16FFC(&StringLiteral_11657/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/, v25);
    sub_B16FFC(&StringLiteral_11653/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, v26);
    sub_B16FFC(&StringLiteral_11660/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/, v27);
    sub_B16FFC(&StringLiteral_11663/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/, v28);
    sub_B16FFC(&StringLiteral_1/*""*/, v29);
    sub_B16FFC(&StringLiteral_11666/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, v30);
    byte_40FD072 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11666/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v46, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          NumberFormat = LocalizationManager__GetNumberFormat(userGameEntity->fields.stone, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, NumberFormat, 0LL);
            if ( (unsigned int)kind < 2 )
            {
              messageLabel = this->fields.messageLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11661/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, 0LL);
              v91 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v91 = BalanceConfig_TypeInfo;
              }
              ServantEquipFrameMax = v91->static_fields->ServantEquipFrameMax;
              v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantEquipFrameMax);
              v93 = System_String__Format(v90, v92, 0LL);
              if ( messageLabel )
              {
                UILabel__set_text(messageLabel, v93, 0LL);
                infoLabel1 = (UnityEngine_Component_o *)this->fields.infoLabel1;
                if ( infoLabel1 )
                {
                  v95 = UnityEngine_Component__get_gameObject(infoLabel1, 0LL);
                  if ( v95 )
                  {
                    UnityEngine_GameObject__SetActive(v95, 1, 0LL);
                    infoLabel2 = (UnityEngine_Component_o *)this->fields.infoLabel2;
                    if ( infoLabel2 )
                    {
                      v97 = UnityEngine_Component__get_gameObject(infoLabel2, 0LL);
                      if ( v97 )
                      {
                        UnityEngine_GameObject__SetActive(v97, 1, 0LL);
                        infoLabel3 = (UnityEngine_Component_o *)this->fields.infoLabel3;
                        if ( infoLabel3 )
                        {
                          v99 = UnityEngine_Component__get_gameObject(infoLabel3, 0LL);
                          if ( v99 )
                          {
                            UnityEngine_GameObject__SetActive(v99, 0, 0LL);
                            v100 = this->fields.infoLabel1;
                            v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, 0LL);
                            if ( v100 )
                            {
                              UILabel__set_text(v100, v101, 0LL);
                              v102 = this->fields.infoLabel2;
                              v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11657/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/, 0LL);
                              if ( v102 )
                              {
                                UILabel__set_text(v102, v103, 0LL);
                                numberLabel1 = (UnityEngine_Component_o *)this->fields.numberLabel1;
                                if ( numberLabel1 )
                                {
                                  v105 = UnityEngine_Component__get_gameObject(numberLabel1, 0LL);
                                  if ( v105 )
                                  {
                                    UnityEngine_GameObject__SetActive(v105, 1, 0LL);
                                    numberLabel2 = (UnityEngine_Component_o *)this->fields.numberLabel2;
                                    if ( numberLabel2 )
                                    {
                                      v107 = UnityEngine_Component__get_gameObject(numberLabel2, 0LL);
                                      if ( v107 )
                                      {
                                        UnityEngine_GameObject__SetActive(v107, 1, 0LL);
                                        numberLabel3 = (UnityEngine_Component_o *)this->fields.numberLabel3;
                                        if ( numberLabel3 )
                                        {
                                          v109 = UnityEngine_Component__get_gameObject(numberLabel3, 0LL);
                                          if ( v109 )
                                          {
                                            UnityEngine_GameObject__SetActive(v109, 0, 0LL);
                                            v110 = this->fields.numberLabel1;
                                            v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11662/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/, 0LL);
                                            v112 = this->fields.userGameEntity;
                                            if ( v112 )
                                            {
                                              v113 = v111;
                                              svtEquipKeep = v112->fields.svtEquipKeep;
                                              v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
                                              v115 = System_String__Format(v113, v114, 0LL);
                                              if ( v110 )
                                              {
                                                UILabel__set_text(v110, v115, 0LL);
                                                v116 = this->fields.numberLabel2;
                                                v117 = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11663/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/,
                                                         0LL);
                                                v118 = this->fields.userGameEntity;
                                                if ( v118 )
                                                {
                                                  v119 = v117;
                                                  v169 = BalanceConfig_TypeInfo->static_fields->ServantEquipFrameUseStone
                                                       + v118->fields.svtEquipKeep;
                                                  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
                                                  v121 = System_String__Format(v119, v120, 0LL);
                                                  if ( v116 )
                                                  {
                                                    UILabel__set_text(v116, v121, 0LL);
                                                    spritIconSprite = (UnityEngine_Component_o *)this->fields.spritIconSprite;
                                                    if ( spritIconSprite )
                                                    {
                                                      v123 = UnityEngine_Component__get_gameObject(spritIconSprite, 0LL);
                                                      if ( v123 )
                                                      {
                                                        UnityEngine_GameObject__SetActive(v123, 1, 0LL);
                                                        decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
                                                        if ( decideButton )
                                                        {
                                                          v125 = UnityEngine_Component__get_gameObject(
                                                                   decideButton,
                                                                   0LL);
                                                          if ( v125 )
                                                          {
                                                            UnityEngine_GameObject__SetActive(v125, 1, 0LL);
                                                            cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
                                                            if ( cancelButton )
                                                            {
                                                              v127 = UnityEngine_Component__get_gameObject(
                                                                       cancelButton,
                                                                       0LL);
                                                              if ( v127 )
                                                              {
                                                                UnityEngine_GameObject__SetActive(v127, 1, 0LL);
                                                                closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
                                                                if ( closeButton )
                                                                {
                                                                  v129 = UnityEngine_Component__get_gameObject(
                                                                           closeButton,
                                                                           0LL);
                                                                  if ( v129 )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(v129, 0, 0LL);
                                                                    v130 = (UnityEngine_Behaviour_o *)this->fields.decideButton;
                                                                    if ( v130 )
                                                                    {
                                                                      UnityEngine_Behaviour__set_enabled(v130, 1, 0LL);
                                                                      v131 = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
                                                                      if ( v131 )
                                                                      {
                                                                        UnityEngine_Behaviour__set_enabled(v131, 1, 0LL);
                                                                        v87 = (UnityEngine_Behaviour_o *)this->fields.closeButton;
                                                                        if ( v87 )
                                                                        {
                                                                          v88 = 0;
                                                                          goto LABEL_82;
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              if ( (unsigned int)(kind - 2) > 2 )
                goto LABEL_83;
              v54 = (UnityEngine_Component_o *)this->fields.infoLabel1;
              if ( v54 )
              {
                v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
                if ( v55 )
                {
                  UnityEngine_GameObject__SetActive(v55, 0, 0LL);
                  v56 = (UnityEngine_Component_o *)this->fields.infoLabel2;
                  if ( v56 )
                  {
                    v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
                    if ( v57 )
                    {
                      UnityEngine_GameObject__SetActive(v57, 0, 0LL);
                      v58 = (UnityEngine_Component_o *)this->fields.infoLabel3;
                      if ( v58 )
                      {
                        v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
                        if ( v59 )
                        {
                          UnityEngine_GameObject__SetActive(v59, 1, 0LL);
                          v60 = this->fields.infoLabel3;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, 0LL);
                          if ( v60 )
                          {
                            UILabel__set_text(v60, v61, 0LL);
                            v62 = (UnityEngine_Component_o *)this->fields.numberLabel1;
                            if ( v62 )
                            {
                              v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
                              if ( v63 )
                              {
                                UnityEngine_GameObject__SetActive(v63, 0, 0LL);
                                v64 = (UnityEngine_Component_o *)this->fields.numberLabel2;
                                if ( v64 )
                                {
                                  v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
                                  if ( v65 )
                                  {
                                    UnityEngine_GameObject__SetActive(v65, 0, 0LL);
                                    v66 = (UnityEngine_Component_o *)this->fields.numberLabel3;
                                    if ( v66 )
                                    {
                                      v67 = UnityEngine_Component__get_gameObject(v66, 0LL);
                                      if ( v67 )
                                      {
                                        UnityEngine_GameObject__SetActive(v67, 1, 0LL);
                                        v68 = this->fields.numberLabel3;
                                        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11663/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/, 0LL);
                                        v70 = this->fields.userGameEntity;
                                        if ( v70 )
                                        {
                                          v71 = v69;
                                          ServantEquipFrameMax = v70->fields.svtEquipKeep;
                                          v72 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &ServantEquipFrameMax);
                                          v73 = System_String__Format(v71, v72, 0LL);
                                          if ( v68 )
                                          {
                                            UILabel__set_text(v68, v73, 0LL);
                                            v74 = (UnityEngine_Component_o *)this->fields.spritIconSprite;
                                            if ( v74 )
                                            {
                                              v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
                                              if ( v75 )
                                              {
                                                UnityEngine_GameObject__SetActive(v75, 0, 0LL);
                                                closeLabel = this->fields.closeLabel;
                                                v77 = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_11654/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/,
                                                        0LL);
                                                if ( closeLabel )
                                                {
                                                  UILabel__set_text(closeLabel, v77, 0LL);
                                                  warningLabel = this->fields.warningLabel;
                                                  if ( warningLabel )
                                                  {
                                                    UILabel__set_text(
                                                      warningLabel,
                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                      0LL);
                                                    v79 = (UnityEngine_Component_o *)this->fields.decideButton;
                                                    if ( v79 )
                                                    {
                                                      v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
                                                      if ( v80 )
                                                      {
                                                        UnityEngine_GameObject__SetActive(v80, 0, 0LL);
                                                        v81 = (UnityEngine_Component_o *)this->fields.cancelButton;
                                                        if ( v81 )
                                                        {
                                                          v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
                                                          if ( v82 )
                                                          {
                                                            UnityEngine_GameObject__SetActive(v82, 0, 0LL);
                                                            v83 = (UnityEngine_Component_o *)this->fields.closeButton;
                                                            if ( v83 )
                                                            {
                                                              v84 = UnityEngine_Component__get_gameObject(v83, 0LL);
                                                              if ( v84 )
                                                              {
                                                                UnityEngine_GameObject__SetActive(v84, 1, 0LL);
                                                                v85 = (UnityEngine_Behaviour_o *)this->fields.decideButton;
                                                                if ( v85 )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(v85, 0, 0LL);
                                                                  v86 = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
                                                                  if ( v86 )
                                                                  {
                                                                    UnityEngine_Behaviour__set_enabled(v86, 0, 0LL);
                                                                    v87 = (UnityEngine_Behaviour_o *)this->fields.closeButton;
                                                                    if ( v87 )
                                                                    {
                                                                      v88 = 1;
LABEL_82:
                                                                      UnityEngine_Behaviour__set_enabled(v87, v88, 0LL);
LABEL_83:
                                                                      switch ( kind )
                                                                      {
                                                                        case 0:
                                                                          v132 = this->fields.warningLabel;
                                                                          if ( !v132 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v132,
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0LL);
                                                                          decideLabel = this->fields.decideLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v134 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11655/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/,
                                                                                   0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(decideLabel, v134, 0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          v136 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11653/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/,
                                                                                   0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_138;
                                                                          goto LABEL_123;
                                                                        case 1:
                                                                          v137 = this->fields.warningLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v138 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11664/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/,
                                                                                   0LL);
                                                                          if ( !v137 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(v137, v138, 0LL);
                                                                          v139 = this->fields.decideLabel;
                                                                          v140 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11665/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/,
                                                                                   0LL);
                                                                          if ( !v139 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(v139, v140, 0LL);
                                                                          v141 = this->fields.cancelLabel;
                                                                          v142 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11653/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/,
                                                                                   0LL);
                                                                          if ( !v141 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(v141, v142, 0LL);
                                                                          v143 = (UnityEngine_Component_o *)this->fields.infoLabel1;
                                                                          if ( !v143 )
                                                                            goto LABEL_138;
                                                                          v144 = UnityEngine_Component__get_gameObject(
                                                                                   v143,
                                                                                   0LL);
                                                                          if ( !v144 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v144,
                                                                            0,
                                                                            0LL);
                                                                          v145 = (UnityEngine_Component_o *)this->fields.infoLabel2;
                                                                          if ( !v145 )
                                                                            goto LABEL_138;
                                                                          v146 = UnityEngine_Component__get_gameObject(
                                                                                   v145,
                                                                                   0LL);
                                                                          if ( !v146 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v146,
                                                                            0,
                                                                            0LL);
                                                                          v147 = (UnityEngine_Component_o *)this->fields.infoLabel3;
                                                                          if ( !v147 )
                                                                            goto LABEL_138;
                                                                          v148 = UnityEngine_Component__get_gameObject(
                                                                                   v147,
                                                                                   0LL);
                                                                          if ( !v148 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v148,
                                                                            0,
                                                                            0LL);
                                                                          v149 = (UnityEngine_Component_o *)this->fields.numberLabel1;
                                                                          if ( !v149 )
                                                                            goto LABEL_138;
                                                                          v150 = UnityEngine_Component__get_gameObject(
                                                                                   v149,
                                                                                   0LL);
                                                                          if ( !v150 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v150,
                                                                            0,
                                                                            0LL);
                                                                          v151 = (UnityEngine_Component_o *)this->fields.numberLabel2;
                                                                          if ( !v151 )
                                                                            goto LABEL_138;
                                                                          v152 = UnityEngine_Component__get_gameObject(
                                                                                   v151,
                                                                                   0LL);
                                                                          if ( !v152 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v152,
                                                                            0,
                                                                            0LL);
                                                                          v153 = (UnityEngine_Component_o *)this->fields.numberLabel3;
                                                                          if ( !v153 )
                                                                            goto LABEL_138;
                                                                          v154 = UnityEngine_Component__get_gameObject(
                                                                                   v153,
                                                                                   0LL);
                                                                          if ( !v154 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v154,
                                                                            0,
                                                                            0LL);
                                                                          v155 = (UnityEngine_Component_o *)this->fields.spritIconSprite;
                                                                          if ( !v155 )
                                                                            goto LABEL_138;
                                                                          goto LABEL_134;
                                                                        case 2:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v156 = &StringLiteral_11658/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_119;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v156 = &StringLiteral_11660/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_119:
                                                                          v157 = LocalizationManager__Get(
                                                                                   (System_String_o *)*v156,
                                                                                   0LL);
                                                                          v158 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v158 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v158->static_fields->ServantEquipFrameMax;
                                                                          v159 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                   int_TypeInfo,
                                                                                                   &ServantEquipFrameMax);
                                                                          v136 = System_String__Format(v157, v159, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_138;
LABEL_123:
                                                                          UILabel__set_text(cancelLabel, v136, 0LL);
                                                                          goto LABEL_136;
                                                                        case 4:
                                                                          v160 = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v161 = LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11659/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                   0LL);
                                                                          v162 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v162 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v162->static_fields->ServantEquipFrameMax;
                                                                          v163 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                   int_TypeInfo,
                                                                                                   &ServantEquipFrameMax);
                                                                          v164 = System_String__Format(v161, v163, 0LL);
                                                                          if ( !v160 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(v160, v164, 0LL);
                                                                          v165 = (UnityEngine_Component_o *)this->fields.infoLabel3;
                                                                          if ( !v165 )
                                                                            goto LABEL_138;
                                                                          v166 = UnityEngine_Component__get_gameObject(
                                                                                   v165,
                                                                                   0LL);
                                                                          if ( !v166 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v166,
                                                                            0,
                                                                            0LL);
                                                                          v155 = (UnityEngine_Component_o *)this->fields.numberLabel3;
                                                                          if ( !v155 )
                                                                            goto LABEL_138;
LABEL_134:
                                                                          v167 = UnityEngine_Component__get_gameObject(
                                                                                   v155,
                                                                                   0LL);
                                                                          if ( !v167 )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            v167,
                                                                            0,
                                                                            0LL);
LABEL_136:
                                                                          this->fields.state = 1;
                                                                          v168 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
                                                                          System_Action___ctor(
                                                                            v168,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v168,
                                                                            0,
                                                                            0LL);
                                                                          break;
                                                                        default:
                                                                          goto LABEL_136;
                                                                      }
                                                                      return;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_138:
    sub_B170D4();
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__add_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v11; // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FD06F & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD06F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FD070 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD070 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantEquipFramePurchaseConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F7627 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7627 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}