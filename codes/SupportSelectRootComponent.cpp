void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438E0CF & 1) == 0 )
  {
    sub_B775C4(&SupportSelectRootComponent_TypeInfo);
    byte_438E0CF = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438E0CE & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    byte_438E0CE = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)v3->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct System_Int32_array *)sub_B775DC(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_438E0A9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12793/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_438E0A9 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12793/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportServantData_o *CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v9; // x23
  __int64 v10; // x0

  if ( (byte_438E0C8 & 1) == 0 )
  {
    sub_B775C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_438E0C8 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B776C8(CenterNum);
    sub_B77668(v10, 0LL);
  }
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B77694(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_B7769C(CenterNum, v4);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v9, 0LL);
}


void __fastcall SupportSelectRootComponent__ChangeTitle(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  int32_t v3; // w2

  if ( !this->fields.isEdit )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 80;
      goto LABEL_7;
    }
LABEL_9:
    sub_B7769C(titleInfo, method);
  }
  if ( this->fields.isDragSwapState )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 69;
LABEL_7:
      TitleInfoControl__changeTitleInfo(titleInfo, 2, v3, 0LL);
      return;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__ConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        int32_t targetDeckId,
        const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v6; // x1
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v9; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v11; // x22
  SupportServantData_o *v12; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_438E0C1 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_438E0C1 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v9 = this->fields.copyTargetDeckId - 1, v9 >= max_length) )
  {
    v14 = sub_B776C8(CenterNum);
    sub_B77668(v14, 0LL);
  }
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = supportServantData->m_Items[v9];
  v13 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_B7769C(CenterNum, v6);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v11, v12, v13, 0LL);
}


void __fastcall SupportSelectRootComponent__CopySupportData(
        SupportSelectRootComponent_o *this,
        SupportServantData_array *orgData,
        SupportServantData_array *toData,
        bool isInit,
        const MethodInfo *method)
{
  unsigned __int64 v8; // x22
  bool v9; // w21
  int32_t v10; // w24
  SupportSelectRootComponent_o **v11; // x25
  __int64 v12; // x0

  if ( (byte_438E0CC & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0CC = 1;
  }
  if ( !orgData )
LABEL_19:
    sub_B7769C(this, orgData);
  if ( (int)orgData->max_length >= 1 )
  {
    v8 = 0LL;
    v9 = isInit;
    do
    {
      v10 = 0;
      v11 = (SupportSelectRootComponent_o **)&toData->m_Items[v8];
      while ( 1 )
      {
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        }
        if ( v10 >= this->fields.bgTxtSprite->fields.mHeight )
          break;
        if ( !toData )
          goto LABEL_19;
        if ( v8 >= toData->max_length || v8 >= orgData->max_length )
        {
          v12 = sub_B776C8(this);
          sub_B77668(v12, 0LL);
        }
        this = *v11;
        if ( !*v11 )
          goto LABEL_19;
        SupportServantData__CopyData((SupportServantData_o *)this, orgData->m_Items[v8], v9, 0LL);
        ++v10;
      }
      ++v8;
    }
    while ( (__int64)v8 < (int)orgData->max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndCancelConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CancelConfirmMenu_o *cancelConfirmMenu; // x0
  SupportSelectRootComponent_o *v6; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_438E0BB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E0BB = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_14;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0LL);
  if ( isDecide )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    SupportSelectRootComponent__CopySupportData(
      v6,
      this->fields.tmpSupportServantData,
      this->fields.supportServantData,
      0,
      v7);
    cancelConfirmMenu = (CancelConfirmMenu_o *)this->fields.supportSelectMenu;
    if ( cancelConfirmMenu )
    {
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, isDecide, v8);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v9);
      return;
    }
LABEL_14:
    sub_B7769C(cancelConfirmMenu, isDecide);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckIdCancelConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  const MethodInfo *v6; // x2

  if ( (byte_438E0BA & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438E0BA = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_14;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  if ( isDecide )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21657/*"ok"*/, v6);
      return;
    }
LABEL_14:
    sub_B7769C(cancelConfirmDeckIdDialog, isDecide);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v13; // x21

  if ( (byte_438E0C9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__);
    byte_438E0C9 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.editDeckName,
      (System_Int32_array **)changeName,
      (System_String_array **)changeName,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, (const MethodInfo *)isDecide);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_33194744(deckNameInputMenu, v13, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B7769C(supportEditMenu, isDecide);
  }
  supportEditMenu = (SupportSelectEditMenu_o *)this->fields.deckNameInputMenu;
  if ( !supportEditMenu )
    goto LABEL_9;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)supportEditMenu, 0LL);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListCancel(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B7769C(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B7769C(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438E0B2 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438E0B2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_o *CenterNum; // x0
  int32_t v5; // w20
  struct SupportServantData_array *supportServantData; // x9
  unsigned int max_length; // w8
  SupportServantData_o *v8; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  if ( isDecide )
  {
    CenterNum = (SupportSelectConfirmCopyMenu_o *)SupportSelectRootComponent__getCenterNum(
                                                    this,
                                                    (const MethodInfo *)isDecide);
    v5 = this->fields.copyTargetDeckId - 1;
    if ( (_DWORD)CenterNum != v5 )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
      max_length = supportServantData->max_length;
      if ( v5 >= max_length || (unsigned int)CenterNum >= max_length )
      {
        v11 = sub_B776C8(CenterNum);
        sub_B77668(v11, 0LL);
      }
      v8 = supportServantData->m_Items[v5];
      if ( !v8 )
        goto LABEL_15;
      SupportServantData__CopyData(v8, supportServantData->m_Items[(int)CenterNum], 0, 0LL);
      SupportSelectRootComponent__SaveTemp(this, v5, v9);
    }
    CenterNum = this->fields.copyConfirmMenu;
    if ( CenterNum )
    {
      SupportSelectConfirmCopyMenu__Close(CenterNum, 0LL);
      CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.copyDeckSelectMenu;
      if ( CenterNum )
      {
        SupportSelectCopyDeckSelectMenu__Close(
          (SupportSelectCopyDeckSelectMenu_o *)CenterNum,
          (const MethodInfo *)isDecide);
        CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportServantSelectMenu;
        if ( CenterNum )
        {
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)CenterNum, 0LL);
          CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, isDecide, v10);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B7769C(CenterNum, isDecide);
  }
  CenterNum = this->fields.copyConfirmMenu;
  if ( !CenterNum )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(CenterNum, 0LL);
}


void __fastcall SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_B7769C(0LL, flag);
  SupportSelectConfirmMenu__Close_30709000(supportSelectConfirmMenu, 0LL, method);
  this->fields.state = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndInitAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  struct SupportServantData_array *supportServantData; // x8
  il2cpp_array_size_t v8; // w20
  int32_t i; // w21
  struct SupportServantData_array *v10; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  if ( (byte_438E0C5 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0C5 = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_34;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    confirmDeckMenu = SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v8 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= supportServantData->max_length )
      {
LABEL_35:
        v16 = sub_B776C8(confirmDeckMenu);
        sub_B77668(v16, 0LL);
      }
      confirmDeckMenu = (__int64)supportServantData->m_Items[(int)confirmDeckMenu];
      if ( confirmDeckMenu )
      {
        SupportServantData__ResetDeckName((SupportServantData_o *)confirmDeckMenu, 0LL);
        for ( i = 0; ; ++i )
        {
          confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(confirmDeckMenu + 184) + 164LL) )
            break;
          v10 = this->fields.supportServantData;
          if ( !v10 )
            goto LABEL_34;
          if ( v8 >= v10->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v10->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v11 = this->fields.supportServantData;
            if ( !v11 )
              goto LABEL_34;
            if ( v8 >= v11->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v11->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
          v12 = this->fields.supportServantData;
          if ( !v12 )
            goto LABEL_34;
          if ( v8 >= v12->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v12->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v13 = this->fields.supportServantData;
            if ( !v13 )
              goto LABEL_34;
            if ( v8 >= v13->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v13->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v14);
            SupportSelectRootComponent__setEditUI(this, 1, v15);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_B7769C(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20

  if ( (byte_438E0A4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__);
    byte_438E0A4 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B7769C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v4, 1, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndRemoveAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v10; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  if ( (byte_438E0C3 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0C3 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_31;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v7 >= SHIDWORD(confirmDeckMenu[1].fields.basePanelList->m_Items[16]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_32;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getServant(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v10 = this->fields.supportServantData;
        if ( !v10 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v10->max_length )
          goto LABEL_32;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v10->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_31;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      v11 = this->fields.supportServantData;
      if ( !v11 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v11->max_length )
      {
LABEL_32:
        v15 = sub_B776C8(confirmDeckMenu);
        sub_B77668(v15, 0LL);
      }
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v12 = this->fields.supportServantData;
        if ( !v12 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v12->max_length )
          goto LABEL_32;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_31;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v13);
        SupportSelectRootComponent__setEditUI(this, 1, v14);
        return;
      }
    }
LABEL_31:
    sub_B7769C(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndRemoveAllEquip(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v10; // x8
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_438E0C7 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0C7 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_23;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v7 >= SHIDWORD(confirmDeckMenu[1].fields.basePanelList->m_Items[16]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_23;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_24;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_23;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v10 = this->fields.supportServantData;
        if ( !v10 )
          goto LABEL_23;
        if ( (unsigned int)CenterNum >= v10->max_length )
        {
LABEL_24:
          v13 = sub_B776C8(confirmDeckMenu);
          sub_B77668(v13, 0LL);
        }
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v10->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_23;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v11);
        SupportSelectRootComponent__setEditUI(this, 1, v12);
        return;
      }
    }
LABEL_23:
    sub_B7769C(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  const MethodInfo *v6; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v10; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v11; // x22
  const MethodInfo *v12; // x4
  __int64 v13; // x0

  if ( (byte_438E0C0 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_438E0C0 = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, *(const MethodInfo **)&deckId);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= supportServantData->max_length )
    {
      v13 = sub_B776C8(copyDeckSelectMenu);
      sub_B77668(v13, 0LL);
    }
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v10 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_B7769C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v10, isEdit, v11, v12);
  }
  else
  {
    SupportSelectRootComponent__ConfirmDeckCopy(this, deckId, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowEquip(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  if ( (byte_438E0B3 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E0B3 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_B7769C(supportSelectMenu, isDecide);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  struct SupportServantData_array *supportServantData; // x8
  unsigned __int64 v6; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v8; // x11
  __int64 v9; // x0

  if ( (byte_438E0B0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E0B0 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_17;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_17;
  if ( (int)*(_QWORD *)&supportServantData->max_length >= 1 )
  {
    v6 = 0LL;
    max_length = *(_QWORD *)&supportServantData->max_length;
    do
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B776C8(supportSelectMenu);
        sub_B77668(v9, 0LL);
      }
      v8 = supportServantData->m_Items[v6];
      if ( v8 && !v8->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_17;
        v8->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.swapButton;
      }
      max_length = supportServantData->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_17:
    sub_B7769C(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServantWithQuest(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438E0B1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_438E0B1 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B7769C(v8, v9);
    CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSupportEditMenu(
        SupportSelectRootComponent_o *this,
        int32_t resultKind,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x21
  __int64 CenterNum; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_B7769C(CenterNum, v7);
  SupportSelectMenu__moveCenterItem(supportSelectMenu, CenterNum, v8);
  switch ( resultKind )
  {
    case 0:
      SupportSelectRootComponent__SelectCopySupportDeck(this, v9);
      break;
    case 1:
      SupportSelectRootComponent__RemoveAll(this, v9);
      break;
    case 2:
      SupportSelectRootComponent__InitAll(this, v9);
      break;
    case 3:
      SupportSelectRootComponent__RemoveAllEquip(this, v9);
      break;
    case 4:
      SupportSelectRootComponent__ChangeDeckName(this, v9);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSupportSelectMenu(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t CenterNum; // w22
  const MethodInfo *v9; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t v14; // w23
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v17; // x21
  CancelConfirmMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x2
  struct SupportServantData_array *v20; // x22
  SupportServantData_o *v21; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v24; // x24
  System_Int32_array *v25; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  SupportSelectMenu_o *v27; // x20
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  bool v30; // w1
  SupportSelectRootComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  struct SupportServantData_array *v33; // x8
  SupportServantData_o *v34; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  SupportSelectMenu_o *v38; // x20
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  struct SupportServantData_array *v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  struct SupportServantData_array *v45; // x8
  SupportServantData_o *v46; // x8
  struct SupportServantData_array *v47; // x8
  SupportServantData_o *v48; // x8
  int v49; // w22
  struct SupportServantData_array *v50; // x8
  SupportServantData_o *v51; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v53; // w22
  struct SupportServantData_array *v54; // x8
  SupportServantData_o *v55; // x8
  QuestRestrictionInfo_o *v56; // x20
  __int64 v57; // x23
  __int64 v58; // x24
  int32_t v59; // w0
  int32_t v60; // w23
  int32_t v61; // w24
  PartyOrganizationUtility_c *v62; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v64; // x8
  const MethodInfo *v65; // x2
  struct SupportServantData_array *v66; // x22
  SupportServantData_o *v67; // x8
  EventUpValSetupInfo_o *v68; // x27
  System_Int32_array *v69; // x25
  System_Int32_array *v70; // x26
  CommonUI_o *v71; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v72; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  struct SupportServantData_array *v76; // x8
  int64_t v77; // x21
  struct SupportServantData_array *v78; // x8
  SupportServantData_o *v79; // x8
  struct SupportServantData_array *v80; // x8
  SupportServantData_o *v81; // x8
  int32_t kind; // w20
  ServantLeaderInfo_o *v83; // x21
  CommonUI_o *v84; // x22
  ServantStatusDialog_EndDelegate_o *v85; // x23
  struct SupportServantData_array *v86; // x8
  struct SupportServantData_array *v87; // x8
  int64_t v88; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  struct SupportServantData_array *v90; // x8
  SupportServantData_o *v91; // x8
  int32_t v92; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v94; // x21
  ServantStatusDialog_EndDelegate_o *v95; // x23
  const MethodInfo *v96; // x2
  struct SupportServantData_array *v97; // x8
  SupportServantData_o *v98; // x8
  int32_t v99; // w20
  int64_t v100; // x21
  CommonUI_o *v101; // x22
  ServantStatusDialog_FormationEndDelegate_o *v102; // x23
  CommonUI_o *v103; // x20
  ServantStatusDialog_EndDelegate_o *v104; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v106; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v109; // x23
  struct SupportSelectRootComponent___c_StaticFields *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  int32_t v118; // w0
  SupportSelectRootComponent___c_c *v119; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v121; // w20
  struct SupportSelectRootComponent___c_StaticFields *v122; // x9
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v124; // x24
  struct SupportSelectRootComponent___c_StaticFields *v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x0
  struct SupportServantData_array *v133; // x8
  SupportServantData_o *v134; // x0
  const MethodInfo *v135; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v137; // x21
  SupportSelectRootComponent___c_c *v138; // x8
  struct SupportSelectRootComponent___c_StaticFields *v139; // x9
  System_Action_o *_9__66_2; // x23
  System_String_o *v141; // x22
  Il2CppObject *v142; // x24
  struct SupportSelectRootComponent___c_StaticFields *v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16

  if ( (byte_438E0AA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&PartyOrganizationUtility_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_B775C4(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__);
    sub_B775C4(&SupportSelectRootComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_10534/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E0AA = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v9);
  v14 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v13);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_158;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_211;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_212;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v17 = supportServantData->m_Items[CenterNum];
      v18 = (CancelConfirmMenu_CallbackFunc_o *)sub_B77694(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_211;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v17, v18, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v13);
      if ( (isUpdate & 1) != 0 )
      {
        v33 = this->fields.supportServantData;
        if ( !v33 )
          goto LABEL_211;
        if ( CenterNum < v33->max_length )
        {
          v34 = v33->m_Items[CenterNum];
          if ( v34 && SupportServantData__get_IsNoServant(v34, 0LL) )
            goto LABEL_30;
          SupportSelectRootComponent__SaveTemp(this, -1, v32);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_211;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_211;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_211;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v11, v96);
          goto LABEL_158;
        }
LABEL_212:
        v150 = sub_B776C8(isUpdate);
        sub_B77668(v150, 0LL);
      }
      if ( this->fields.isEdit )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
LABEL_158:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
        v31 = this;
        v30 = 0;
        this->fields.isDragSwapState = 0;
LABEL_159:
        SupportSelectRootComponent__setEditUI(v31, v30, v29);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v106 = SupportSelectRootComponent___c_TypeInfo;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v106 = SupportSelectRootComponent___c_TypeInfo;
      }
      static_fields = v106->static_fields;
      _9__66_0 = static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( (BYTE3(v106->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v106);
          static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v109 = (Il2CppObject *)static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v109,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        v110 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v110->__9__66_0 = _9__66_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v110->__9__66_0,
          (System_Int32_array **)_9__66_0,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116);
      }
      v117 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
      v118 = System_Linq_Enumerable__Count_int_(
               v117,
               (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      v119 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v121 = v118;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v119 = SupportSelectRootComponent___c_TypeInfo;
      }
      v122 = v119->static_fields;
      _9__66_1 = v122->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( (BYTE3(v119->vtable._0_Equals.methodPtr) & 4) != 0 && !v119->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v119);
          v122 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v124 = (Il2CppObject *)v122->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v124,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        v125 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v125->__9__66_1 = _9__66_1;
        sub_B77560(
          (BattleServantConfConponent_o *)&v125->__9__66_1,
          (System_Int32_array **)_9__66_1,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131);
      }
      v132 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v132,
                   (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v121 < 1 || (int)isUpdate <= 0 )
      {
        v133 = this->fields.supportServantData;
        if ( !v133 )
          goto LABEL_211;
        if ( CenterNum >= v133->max_length )
          goto LABEL_212;
        v134 = v133->m_Items[CenterNum];
        if ( v134 && SupportServantData__get_IsNoServant(v134, 0LL) )
        {
LABEL_30:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v36 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B77694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v36,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v36, v37);
            return;
          }
LABEL_211:
          sub_B7769C(isUpdate, v11);
        }
      }
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_211;
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_211;
      SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v135);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v19);
      isUpdate = (int64_t)this->fields.titleInfo;
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_211;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      isUpdate = (int64_t)this->fields.backSkinSprite;
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_211;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      v20 = this->fields.supportServantData;
      if ( !v20 )
        goto LABEL_211;
      if ( v20->max_length <= deckNum )
        goto LABEL_212;
      v21 = v20->m_Items[deckNum];
      if ( !v21 )
        goto LABEL_211;
      eventSetupInfo2 = v21->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v24 = this->fields.tempFixMainQuestSupportDeckIds;
      v25 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B77694(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_211;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v20,
        deckNum,
        classPos,
        eventSetupInfo2,
        v14,
        v24,
        v25,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v65);
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v66 = this->fields.supportServantData;
      if ( !v66 )
        goto LABEL_211;
      if ( v66->max_length <= deckNum )
        goto LABEL_212;
      v67 = v66->m_Items[deckNum];
      if ( !v67 )
        goto LABEL_211;
      v68 = v67->fields.eventSetupInfo2;
      v69 = this->fields.tempFixMainQuestSupportDeckIds;
      v70 = this->fields.tempFixEventQuestSupportDeckIds;
      v71 = (CommonUI_o *)isUpdate;
      v72 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B77694(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v72,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v71 )
        goto LABEL_211;
      CommonUI__OpenSupportServantEquipListMenu(v71, v66, deckNum, classPos, v68, v14, v69, v70, v72, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !supportSelectMenu )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v74);
      SupportSelectRootComponent__ChangeDeckName(this, v75);
      return;
    case 5:
      v27 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v27 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v27, isUpdate, v28);
      v30 = 1;
      this->fields.isDragSwapState = 1;
      v31 = this;
      goto LABEL_159;
    case 6:
      v38 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v38 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v38, isUpdate, v39);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v40);
      return;
    case 7:
      v41 = this->fields.supportServantData;
      if ( !v41 )
        goto LABEL_211;
      if ( v41->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v41->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v42 = *(_QWORD *)(isUpdate + 24);
      if ( !v42 )
        goto LABEL_140;
      v44 = *(_QWORD *)(v42 + 48);
      v43 = *(_QWORD *)(v42 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v151.fields.currentCryptoKey = v44;
      *(_QWORD *)&v151.fields.fakeValue = v43;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v151, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_140;
      v45 = this->fields.supportServantData;
      if ( !v45 )
        goto LABEL_211;
      if ( v45->max_length <= deckNum )
        goto LABEL_212;
      v46 = v45->m_Items[deckNum];
      if ( !v46 )
        goto LABEL_211;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v42,
                   v46->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_140;
      v47 = this->fields.supportServantData;
      if ( !v47 )
        goto LABEL_211;
      if ( v47->max_length <= deckNum )
        goto LABEL_212;
      v48 = v47->m_Items[deckNum];
      if ( !v48 )
        goto LABEL_211;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v42, v48->fields.questRestrictionInfo, 0LL) )
        goto LABEL_140;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      v49 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( v49 < 1 )
        goto LABEL_73;
      v50 = this->fields.supportServantData;
      if ( !v50 )
        goto LABEL_211;
      if ( v50->max_length <= deckNum )
        goto LABEL_212;
      v51 = v50->m_Items[deckNum];
      if ( !v51 )
        goto LABEL_211;
      questRestrictionInfo = v51->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_211;
      v53 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34477588(questRestrictionInfo, v53, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_73;
      v54 = this->fields.supportServantData;
      if ( !v54 )
        goto LABEL_211;
      if ( v54->max_length <= deckNum )
        goto LABEL_212;
      v55 = v54->m_Items[deckNum];
      if ( !v55 )
        goto LABEL_211;
      v56 = v55->fields.questRestrictionInfo;
      v58 = *(_QWORD *)(v42 + 48);
      v57 = *(_QWORD *)(v42 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v152.fields.currentCryptoKey = v58;
      *(_QWORD *)&v152.fields.fakeValue = v57;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v152, 0LL);
      v60 = *(_DWORD *)(v42 + 64);
      v61 = v59;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v42, 0LL);
      if ( !v56 )
        goto LABEL_211;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v56, v61, v60, isUpdate, v53, 1, 0LL) )
        goto LABEL_140;
LABEL_73:
      if ( !this->fields.supportInfoJump )
      {
LABEL_140:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
LABEL_144:
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_211;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v11);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( *(_BYTE *)(isUpdate + 140) )
      {
        v62 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v62 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v62->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_211;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10534/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v137 = (System_String_o *)isUpdate;
            v138 = SupportSelectRootComponent___c_TypeInfo;
            if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v138 = SupportSelectRootComponent___c_TypeInfo;
            }
            v139 = v138->static_fields;
            _9__66_2 = v139->__9__66_2;
            v141 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 && !v138->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v138);
                v139 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              }
              v142 = (Il2CppObject *)v139->__9;
              _9__66_2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(
                _9__66_2,
                v142,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v143 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v143->__9__66_2 = _9__66_2;
              sub_B77560(
                (BattleServantConfConponent_o *)&v143->__9__66_2,
                (System_Int32_array **)_9__66_2,
                v144,
                v145,
                v146,
                v147,
                v148,
                v149);
            }
            if ( !Instance )
              goto LABEL_211;
            CommonUI__OpenNotificationDialog(Instance, v141, v137, _9__66_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
            goto LABEL_144;
          }
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      supportInfoJump = this->fields.supportInfoJump;
      if ( !supportInfoJump )
        goto LABEL_211;
      supportInfoJump->fields.selectClassId = this->fields.classPos;
      v64 = this->fields.supportInfoJump;
      if ( !v64 )
        goto LABEL_211;
      v64->fields.selectDeckId = *(_DWORD *)(v42 + 16);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_211;
      if ( !SupportInfoJump__ReturnScene(
              (SupportInfoJump_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isUpdate )
          goto LABEL_211;
        AvalonSceneManager__popScene(
          (AvalonSceneManager_o *)isUpdate,
          1,
          (Il2CppObject *)this->fields.supportInfoJump,
          0LL);
      }
      return;
    case 8:
      v76 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v76 )
        goto LABEL_211;
      if ( v76->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v76->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v77 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_140;
      v78 = this->fields.supportServantData;
      if ( !v78 )
        goto LABEL_211;
      if ( v78->max_length <= deckNum )
        goto LABEL_212;
      v79 = v78->m_Items[deckNum];
      if ( !v79 )
        goto LABEL_211;
      if ( v79->fields.isFriendInfo )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v80 = this->fields.supportServantData;
        if ( !v80 )
          goto LABEL_211;
        if ( v80->max_length <= deckNum )
          goto LABEL_212;
        v81 = v80->m_Items[deckNum];
        if ( !v81 )
          goto LABEL_211;
        kind = v81->fields.kind;
        v83 = *(ServantLeaderInfo_o **)(v77 + 24);
        v84 = (CommonUI_o *)isUpdate;
        v85 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v85,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v84 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18068936(v84, kind, v83, v85, 0LL);
      }
      else
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v97 = this->fields.supportServantData;
        if ( !v97 )
          goto LABEL_211;
        if ( v97->max_length <= deckNum )
          goto LABEL_212;
        v98 = v97->m_Items[deckNum];
        if ( !v98 )
          goto LABEL_211;
        v99 = v98->fields.kind;
        v100 = *(_QWORD *)(v77 + 56);
        v101 = (CommonUI_o *)isUpdate;
        v102 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B77694(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v102,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v101 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18066108(v101, v99, v100, v102, 0LL, 0LL);
      }
      return;
    case 9:
      v86 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v86 )
        goto LABEL_211;
      if ( v86->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v86->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_140;
      v87 = this->fields.supportServantData;
      if ( !v87 )
        goto LABEL_211;
      if ( v87->max_length <= deckNum )
        goto LABEL_212;
      v88 = isUpdate;
      isUpdate = (int64_t)v87->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v90 = this->fields.supportServantData;
      if ( !v90 )
        goto LABEL_211;
      if ( v90->max_length <= deckNum )
        goto LABEL_212;
      v91 = v90->m_Items[deckNum];
      if ( !v91 )
        goto LABEL_211;
      if ( v91->fields.isFriendInfo )
      {
        if ( v91->fields.kind == 5 )
          v92 = 14;
        else
          v92 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_211;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v94 = (CommonUI_o *)isUpdate;
        v95 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v95,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v94 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog_18071300(v94, v92, equipTarget1, v95, 0LL, 0LL);
      }
      else
      {
        v103 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v104 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v104,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v103 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog(v103, 11, v88, 1, v104, 0LL, 0LL);
      }
      return;
    default:
      return;
  }
}


void __fastcall SupportSelectRootComponent__EndSupportServantDragSwap(
        SupportSelectRootComponent_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  int32_t v14; // w22
  struct EquipTargetInfo_o *v15; // x8
  int32_t v16; // w23
  struct EquipTargetInfo_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  int64_t v20; // x25
  struct EquipTargetInfo_o *v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int64_t v24; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x26
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v28; // x1
  struct SupportServantData_array *supportServantData; // x8
  int32_t v30; // w24
  struct SupportServantData_array *v31; // x8
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36[3]; // [xsp+40h] [xbp-B0h] BYREF

  if ( (byte_438E0AF & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E0AF = 1;
  }
  memset(&v36[1], 0, 64);
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_22415800(equipTarget1->fields.svtId, 0LL);
    if ( !leader2 )
      goto LABEL_12;
  }
  else
  {
    v14 = 0;
    if ( !leader2 )
      goto LABEL_12;
  }
  v15 = leader2->fields.equipTarget1;
  if ( v15 )
  {
    v16 = BasicHelper__DecryptValue_22415800(v15->fields.svtId, 0LL);
    if ( !leader1 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_12:
  v16 = 0;
  if ( !leader1 )
    goto LABEL_15;
LABEL_13:
  v17 = leader1->fields.equipTarget1;
  if ( v17 )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    v19 = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    goto LABEL_19;
  }
LABEL_15:
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v36, 0LL, 0LL);
  v19 = *(_OWORD *)&v36[0].fields.currentCryptoKey;
  v18 = *(_OWORD *)&v36[0].fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v36[2].fields.currentCryptoKey = v19;
  *(_OWORD *)&v36[2].fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v35 = v36[2];
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v35, 0LL);
  if ( leader2 && (v21 = leader2->fields.equipTarget1) != 0LL )
  {
    v22 = *(_OWORD *)&v21->fields.userSvtId.fields.fakeValue;
    v23 = *(_OWORD *)&v21->fields.userSvtId.fields.currentCryptoKey;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v36, 0LL, 0LL);
    v23 = *(_OWORD *)&v36[0].fields.currentCryptoKey;
    v22 = *(_OWORD *)&v36[0].fields.fakeValue;
  }
  *(_OWORD *)&v36[1].fields.currentCryptoKey = v23;
  *(_OWORD *)&v36[1].fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v34 = v36[1];
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v34, 0LL);
  if ( classPos1 != classPos2 )
  {
    v26 = v24;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v25);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_43;
    v30 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_43;
      SupportServantData__setEquipData(CenterNum, classPos1, v26, v16, 0LL);
      v31 = this->fields.supportServantData;
      if ( !v31 )
        goto LABEL_43;
      if ( v30 < v31->max_length )
      {
        CenterNum = v31->m_Items[v30];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v20, v14, 0LL);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v30, v32);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v28);
              return;
            }
          }
        }
LABEL_43:
        sub_B7769C(CenterNum, v28);
      }
    }
    v33 = sub_B776C8(CenterNum);
    sub_B77668(v33, 0LL);
  }
}


void __fastcall SupportSelectRootComponent__EndSupportServantEquipListMenu(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v9; // x20
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v28; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v30; // x23
  UserServantLeaderEntity_o *v31; // x24
  UserServantLeaderEntity_o *v32; // x25
  int32_t v33; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  int32_t v35; // w25
  ServantEntity_o *Entity; // x24
  struct UserServantLeaderEntity_array *v37; // x8
  PartyOrganizationUtility_o *v38; // x23
  UserServantLeaderEntity_o *v39; // x25
  UserServantLeaderEntity_o *v40; // x26
  UserServantEntity_o *v41; // x8
  System_String_o *v42; // x22
  __int64 v43; // x8
  int32_t v44; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v47; // x21
  System_String_o *v48; // x0
  CommonUI_o *Instance; // x22
  System_Action_o *v50; // x23
  CommonUI_o *v51; // x19
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  CommonConfirmDialog_ClickDelegate_o *v55; // x24
  __int64 v56; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_438E0AD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__);
    sub_B775C4(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
    sub_B775C4(&StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E0AD = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_B77694(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor((SupportSelectRootComponent___c__DisplayClass71_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_52;
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = item;
  v18 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)item, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v18 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_52;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v56 = sub_B776C8(UserServantLeaderEntity);
      sub_B77668(v56, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_52;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v28 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v18 )
          goto LABEL_52;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 128LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v28->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_52;
          v30 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v32 = userServantLeaderEntityList->m_Items[6];
          v31 = userServantLeaderEntityList->m_Items[7];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v61.fields.currentCryptoKey = v32;
          *(_QWORD *)&v61.fields.fakeValue = v31;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                              v61,
                                                              0LL);
          if ( !v28->fields.userServantLeaderEntityList )
            goto LABEL_52;
          v33 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v28->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v18 )
            goto LABEL_52;
          v34 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v18 + 128LL);
          if ( !v34 )
            goto LABEL_52;
          v35 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                              v34[1],
                                                              0LL);
          if ( !v30 )
            goto LABEL_52;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v30,
                 &skillName,
                 &actMaxRarity,
                 v33,
                 v35,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity,
                                              *(_DWORD *)&v28->fields.isFriendInfo,
                                              (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                }
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v37 = v28->fields.userServantLeaderEntityList;
                if ( v37 )
                {
                  v38 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v40 = v37->m_Items[8];
                  v39 = v37->m_Items[9];
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v62.fields.currentCryptoKey = v40;
                  *(_QWORD *)&v62.fields.fakeValue = v39;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                      v62,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v41 = (UserServantEntity_o *)v28->fields.userServantLeaderEntityList;
                    if ( v41 )
                    {
                      v42 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v41, 0LL);
                      v43 = *(_QWORD *)v18;
                      if ( *(_QWORD *)v18 )
                      {
                        v44 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v43 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          }
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(
                                                                              Name,
                                                                              0LL);
                          if ( v38 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v38,
                                                     &maxLength,
                                                     v42,
                                                     v44,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity,
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                maxLength,
                                0LL);
                              v47 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v47, 0LL);
                              if ( v47 )
                              {
                                System_Text_StringBuilder__Append_42951964(v47, RarityInvalidMessage, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_42951964(v47, v48, 0LL);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v50 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v50,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu(Instance, v50, 0LL);
                                  v51 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v52 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                                                             v47,
                                                             v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v55,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v51 )
                                  {
                                    CommonUI__OpenConfirmDialog_18056028(
                                      v51,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v52,
                                      v53,
                                      v54,
                                      v55,
                                      minFontSize[1],
                                      minFontSize[0],
                                      30.0,
                                      728,
                                      2,
                                      480,
                                      -162.5,
                                      0,
                                      0,
                                      240,
                                      1,
                                      0LL);
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
LABEL_52:
            sub_B7769C(UserServantLeaderEntity, v11);
          }
        }
      }
    }
  }
  SupportSelectRootComponent__SetEquip(
    this,
    *(_DWORD *)(v9 + 24),
    *(_DWORD *)(v9 + 28),
    *(SupportServantEquipListViewItem_o **)(v9 + 32),
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__ExecutionServantSet(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 selectNum; // x20
  SupportSelectRootComponent_o *v6; // x19
  struct SupportServantData_array *v7; // x8
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  struct SupportServantData_array *v11; // x8
  unsigned __int64 v12; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v14; // x11
  __int64 v15; // x0

  selectNum = this->fields.selectNum;
  v6 = this;
  this->fields.state = 1;
  if ( result == 2 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      goto LABEL_33;
    this = (SupportSelectRootComponent_o *)supportServantData->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeServantData((SupportServantData_o *)this, classPos, 0LL);
  }
  else if ( result == 1 )
  {
    v7 = this->fields.supportServantData;
    if ( !v7 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v7->max_length )
      goto LABEL_33;
    this = (SupportSelectRootComponent_o *)v7->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, 0LL);
  }
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v9);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  v11 = v6->fields.supportServantData;
  if ( !v11 )
    goto LABEL_32;
  if ( (int)*(_QWORD *)&v11->max_length >= 1 )
  {
    v12 = 0LL;
    max_length = *(_QWORD *)&v11->max_length;
    while ( v12 < max_length )
    {
      v14 = v11->m_Items[v12];
      if ( v14 )
      {
        if ( !this )
          goto LABEL_32;
        v14->fields.pushUserServantId = (int64_t)this->fields.titleInfo;
      }
      max_length = v11->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_33:
    v15 = sub_B776C8(this);
    sub_B77668(v15, 0LL);
  }
LABEL_22:
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v10);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__Redisp((SupportSelectMenu_o *)this, *(const MethodInfo **)&result);
  this = (SupportSelectRootComponent_o *)v6->fields.titleInfo;
  if ( !this
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SupportSelectRootComponent_o *)v6->fields.backSkinSprite) == 0LL)
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (this = (SupportSelectRootComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL)) == 0LL
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL)) == 0LL
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL )
  {
LABEL_32:
    sub_B7769C(this, *(_QWORD *)&result);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__GetCurrentDeckID(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  return SupportSelectRootComponent__getCenterNum(this, method) + 1;
}


System_Collections_Generic_List_string__o *__fastcall SupportSelectRootComponent__GetFixedErrorList(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        int32_t nowDeckId,
        System_Int32_array *fixDeckIds,
        bool isMain,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t CenterNum; // w22
  __int64 Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x1
  BalanceConfig_c *v15; // x8
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v17; // x24
  int32_t v18; // w9
  int32_t v19; // w26
  __int64 v20; // x23
  __int64 v21; // x19
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x28
  struct SupportServantData_array *v30; // x8
  SupportServantData_o *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  ServantEntity_o *v35; // x27
  int32_t Rarity; // w0
  int v37; // w19
  int64_t v38; // x2
  int32_t v39; // w28
  System_String_o *v40; // x19
  Il2CppObject *v41; // x25
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x25
  __int64 v45; // x2
  Il2CppObject *v46; // x19
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  __int64 v50; // x0
  __int64 v52; // [xsp+10h] [xbp-90h]
  signed __int64 v53; // [xsp+18h] [xbp-88h]
  ServantLimitImageMaster_o *v54; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // [xsp+38h] [xbp-68h]
  int v58; // [xsp+44h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_438E0B5 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_B775C4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__);
    sub_B775C4(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_B775C4(&StringLiteral_12714/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_B775C4(&StringLiteral_12715/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_438E0B5 = 1;
  }
  entity = 0LL;
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v10) )
      return (System_Collections_Generic_List_string__o *)v57;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v10) )
  {
    return (System_Collections_Generic_List_string__o *)v57;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v11);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_76:
    sub_B7769C(Instance, v14);
  }
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v54 = (ServantLimitImageMaster_o *)Instance;
  v15 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v15->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v15->static_fields->FixEventSupportDeckNum;
  }
  v53 = *p_FixMainSupportDeckNum;
  if ( (int)v53 >= 1 )
  {
    v17 = 0LL;
    v52 = (unsigned int)idx;
    do
    {
      if ( v17 != v52 )
      {
        if ( !fixDeckIds )
          goto LABEL_76;
        if ( v17 >= fixDeckIds->max_length )
        {
LABEL_77:
          v50 = sub_B776C8(Instance);
          sub_B77668(v50, 0LL);
        }
        v18 = fixDeckIds->m_Items[v17 + 1];
        if ( v18 )
        {
          v19 = 0;
          v20 = v18 - 1;
          while ( 1 )
          {
            if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v15);
              v15 = BalanceConfig_TypeInfo;
            }
            if ( v19 >= v15->static_fields->SupportDeckMemberMax )
              break;
            v21 = sub_B77694(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v21,
              0LL);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_76;
            if ( CenterNum >= supportServantData->max_length )
              goto LABEL_77;
            Instance = (__int64)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_76;
            Instance = (__int64)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v19,
                                  0LL);
            if ( !v21 )
              goto LABEL_76;
            *(_QWORD *)(v21 + 16) = Instance;
            v29 = v21 + 16;
            sub_B77560(
              (BattleServantConfConponent_o *)(v21 + 16),
              (System_Int32_array **)Instance,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
            if ( !*(_QWORD *)(v21 + 16) )
              goto LABEL_76;
            if ( *(_DWORD *)(*(_QWORD *)(v21 + 16) + 64LL) )
            {
              v30 = this->fields.supportServantData;
              if ( !v30 )
                goto LABEL_76;
              if ( (unsigned int)v20 >= v30->max_length )
                goto LABEL_77;
              v31 = v30->m_Items[v20];
              if ( !v31 )
                goto LABEL_76;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields.userServantLeaderEntityList;
              v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v33,
                (Il2CppObject *)v21,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                (const MethodInfo_29E92C4 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
              v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v33,
                      (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           v34,
                           (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v29 )
                  goto LABEL_76;
                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_76;
                Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      *(_DWORD *)(*(_QWORD *)v29 + 64LL),
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v29 )
                  goto LABEL_76;
                v35 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v29 + 16LL);
                if ( !Instance )
                  goto LABEL_76;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v37 = Rarity;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v29 )
                    goto LABEL_76;
                  v38 = Instance;
                  Instance = (__int64)Master_WarQuestSelectionMaster;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_76;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v38,
                               *(_DWORD *)(*(_QWORD *)v29 + 64LL),
                               0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v29 )
                      goto LABEL_76;
                    if ( !entity )
                      goto LABEL_76;
                    Instance = (__int64)v54;
                    if ( !v54 )
                      goto LABEL_76;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v54,
                                 *(_DWORD *)(*(_QWORD *)v29 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_76;
                    v39 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v39 = -1;
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12714/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v58 = v37;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v58, v45);
                  if ( !v35 )
                    goto LABEL_76;
                  v46 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v35, v39, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v35, 0LL);
                  v43 = System_String__Format_44903000(v44, v46, Name, ClassName, 0LL);
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12715/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v35 )
                    goto LABEL_76;
                  v40 = (System_String_o *)Instance;
                  v41 = (Il2CppObject *)ServantEntity__getName(v35, -1, -1, 0LL);
                  v42 = (Il2CppObject *)ServantEntity__getClassName(v35, 0LL);
                  v43 = System_String__Format_44897472(v40, v41, v42, 0LL);
                }
                v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
                Instance = (__int64)v57;
                if ( !v57 )
                  goto LABEL_76;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v57,
                  v14,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            ++v19;
            v15 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v17;
    }
    while ( (__int64)v17 < v53 );
  }
  return (System_Collections_Generic_List_string__o *)v57;
}


void __fastcall SupportSelectRootComponent__Init(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22
  const MethodInfo *v9; // x4
  __int64 v10; // x0

  if ( (byte_438E0C4 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_438E0C4 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B776C8(CenterNum);
    sub_B77668(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B7769C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v7, v8, v9);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportServantData_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_438E09C & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&SupportServantData___TypeInfo);
    byte_438E09C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportServantData_array *)sub_B775DC(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v3->static_fields->SupportDeckMax);
  this->fields.supportServantData = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SupportSelectRootComponent__RefreshSupportServantData(this, v11);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w22
  int64_t Servant; // x0
  int32_t j; // w20
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v7; // x21
  struct SupportServantData_array *v8; // x8
  struct SupportServantData_array *v9; // x8
  int64_t v10; // x21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v12; // x8
  struct SupportServantData_array *v13; // x9
  SupportServantData_o *v14; // x9
  __int64 v16; // x0

  if ( (byte_438E0CD & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0CD = 1;
  }
  for ( i = 0; ; ++i )
  {
    Servant = (int64_t)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 152LL) )
      break;
    for ( j = 0; ; ++j )
    {
      if ( (*(_BYTE *)(Servant + 307) & 4) != 0 && !*(_DWORD *)(Servant + 224) )
      {
        j_il2cpp_runtime_class_init_0(Servant);
        Servant = (int64_t)BalanceConfig_TypeInfo;
      }
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_34;
      if ( i >= supportServantData->max_length )
        goto LABEL_35;
      v12 = supportServantData->m_Items[i];
      if ( !v12 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      Servant = SupportServantData__getServant(v12, j, 0LL);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
        goto LABEL_35;
      v7 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, 0LL);
      if ( v7 != Servant )
        return 1;
      v8 = this->fields.supportServantData;
      if ( !v8 )
        goto LABEL_34;
      if ( i >= v8->max_length )
        goto LABEL_35;
      Servant = (int64_t)v8->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL);
      v9 = this->fields.orgSupportServantData;
      if ( !v9 )
        goto LABEL_34;
      if ( i >= v9->max_length )
        goto LABEL_35;
      v10 = Servant;
      Servant = (int64_t)v9->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v10 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v13 = this->fields.orgSupportServantData;
    if ( !v13 )
      goto LABEL_34;
    if ( i >= v13->max_length )
    {
LABEL_35:
      v16 = sub_B776C8(Servant);
      sub_B77668(v16, 0LL);
    }
    v14 = v13->m_Items[i];
    if ( !v14 )
LABEL_34:
      sub_B7769C(Servant, method);
    if ( System_String__op_Inequality(v12->fields._deckName_k__BackingField, v14->fields._deckName_k__BackingField, 0LL) )
      return 1;
  }
  return 0;
}


bool __fastcall SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x0

  if ( (byte_438E09E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    byte_438E09E = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_438E09D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    byte_438E09D = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixMainQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsPossibleCopy(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  SupportServantData_o *CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  il2cpp_array_size_t v9; // w22
  unsigned __int64 v10; // x27
  __int64 v11; // x28
  int v12; // w8
  il2cpp_array_size_t v13; // w19
  int32_t i; // w23
  __int64 v15; // x24
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  struct SupportServantData_array *v24; // x8
  SupportServantData_o *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v30; // x0
  System_Int32_array *v32; // [xsp+8h] [xbp-58h]

  if ( (byte_438E0BE & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_B775C4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__);
    sub_B775C4(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_438E0BE = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_B7769C(CenterNum, v7);
  v8 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = (unsigned int)CenterNum;
    v10 = 0LL;
    v11 = (int)CenterNum;
    v32 = fixDeckIds;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
LABEL_29:
        v30 = sub_B776C8(CenterNum);
        sub_B77668(v30, 0LL);
      }
      v12 = fixDeckIds->m_Items[v10 + 1];
      v13 = v12 - 1;
      if ( v12 >= 1 && v13 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[16]) )
            break;
          v15 = sub_B77694(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v15,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v9 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v11];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v15 )
            goto LABEL_28;
          *(_QWORD *)(v15 + 16) = CenterNum;
          sub_B77560(
            (BattleServantConfConponent_o *)(v15 + 16),
            (System_Int32_array **)CenterNum,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          v23 = *(_QWORD *)(v15 + 16);
          if ( !v23 )
            goto LABEL_28;
          if ( *(_DWORD *)(v23 + 64) )
          {
            v24 = this->fields.supportServantData;
            if ( !v24 )
              goto LABEL_28;
            if ( v13 >= v24->max_length )
              goto LABEL_29;
            v25 = v24->m_Items[v13];
            if ( !v25 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v25->fields.userServantLeaderEntityList;
            v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v27,
              (Il2CppObject *)v15,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              (const MethodInfo_29E92C4 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
            v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v27,
                    (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                   v28,
                   (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return 0;
          }
        }
      }
      fixDeckIds = v32;
      ++v10;
      LODWORD(v8) = v32->max_length;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return 1;
}


bool __fastcall SupportSelectRootComponent__IsUpdateDeckId(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_Array_o *v6; // x22
  int klass; // w25
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  BalanceConfig_c *v11; // x0
  Il2CppObject *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  BalanceConfig_c *v14; // x0
  bool v15; // w21
  char v16; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v18; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v21; // x23
  struct SupportSelectRootComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  int32_t v30; // w0
  SupportSelectRootComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v33; // w20
  struct SupportSelectRootComponent___c_StaticFields *v34; // x9
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v36; // x23
  struct SupportSelectRootComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v45; // w0
  bool v46; // w8

  if ( (byte_438E0AB & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__);
    sub_B775C4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__);
    sub_B775C4(&SupportSelectRootComponent___c_TypeInfo);
    byte_438E0AB = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_46;
  v6 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[12].monitor;
  if ( !SelfUserGame )
    goto LABEL_46;
  klass = (int)v6[12].klass;
  if ( SelfUserGame[1].monitor )
  {
    v8 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B77684(v8, int___TypeInfo);
      if ( !v10 )
        goto LABEL_18;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B775DC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v11->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v6[13].klass;
  if ( !SelfUserGame )
LABEL_46:
    sub_B7769C(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
    goto LABEL_19;
  v12 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v12 )
  {
    v13 = 0LL;
    goto LABEL_24;
  }
  v9 = v12;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B77684(v12, int___TypeInfo);
  if ( !v13 )
  {
LABEL_18:
    sub_B77990(v9);
LABEL_19:
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B775DC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v14->static_fields->FixEventSupportDeckNum);
  }
LABEL_24:
  v15 = System_Linq_Enumerable__SequenceEqual_int_(
          v10,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v16 = v15 & System_Linq_Enumerable__SequenceEqual_int_(
                v13,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___) ^ 1;
  if ( (v16 & 1) != 0 )
    goto LABEL_43;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v18 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v18 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_0,
      v21,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    v22 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v22->__9__67_0 = _9__67_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  v30 = System_Linq_Enumerable__Count_int_(v29, (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  v31 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v33 = v30;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v31 = SupportSelectRootComponent___c_TypeInfo;
  }
  v34 = v31->static_fields;
  _9__67_1 = v34->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v34 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_1,
      v36,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    v37 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v37->__9__67_1 = _9__67_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v37->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  v45 = System_Linq_Enumerable__Count_int_(v44, (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v33 >= 1 && v45 > 0 )
LABEL_43:
    v46 = 0;
  else
    v46 = CenterNum + 1 != klass;
  return v46 | v16 & 1;
}


bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_438E09F & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E09F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->SupportDeckMax > index;
}


void __fastcall SupportSelectRootComponent__OnBackSelect(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v9; // x19
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v28; // x22
  UserServantEntity_o *v29; // x8
  PartyOrganizationUtility_o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  int32_t v33; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v35; // w25
  UserServantEntity_o *v36; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x20
  __int64 v38; // x23
  __int64 v39; // x24
  ServantEntity_o *v40; // x23
  PartyOrganizationUtility_o *v41; // x20
  UserServantEntity_o *v42; // x8
  System_String_o *v43; // x21
  EquipTargetInfo_o *v44; // x8
  int32_t v45; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v47; // x21
  System_String_o *v48; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x23
  CommonConfirmDialog_ClickDelegate_o *v53; // x24
  __int64 v54; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_438E0AC & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__);
    sub_B775C4(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
    sub_B775C4(&StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E0AC = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_B77694(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor((SupportSelectRootComponent___c__DisplayClass69_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_44;
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = entity;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)entity, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_44;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v54 = sub_B776C8(UserServantLeaderEntity);
      sub_B77668(v54, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    v28 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v29 = (UserServantEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_44;
      v30 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v59.fields.currentCryptoKey = v32;
      *(_QWORD *)&v59.fields.fakeValue = v31;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          v59,
                                                          0LL);
      if ( !*v18 )
        goto LABEL_44;
      v33 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v18, 0LL);
      oldServantIdList = v28->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_44;
      v35 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v30 )
        goto LABEL_44;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v30,
             &skillName,
             &actMaxRarity,
             v33,
             v35,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
          v36 = (UserServantEntity_o *)*v18;
          if ( *v18 )
          {
            v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity;
            v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v60.fields.currentCryptoKey = v39;
            *(_QWORD *)&v60.fields.fakeValue = v38;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                v60,
                                                                0LL);
            if ( v37 )
            {
              v40 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v37,
                                         (int32_t)UserServantLeaderEntity,
                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v18 )
              {
                v41 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                    (*v18)[6],
                                                                    0LL);
                if ( v40 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      v40,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v42 = (UserServantEntity_o *)*v18;
                  if ( *v18 )
                  {
                    v43 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v42, 0LL);
                    v44 = (EquipTargetInfo_o *)v28->fields.oldServantIdList;
                    if ( v44 )
                    {
                      v45 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v44, 0LL);
                      if ( v41 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v41,
                                                 &maxLength,
                                                 v43,
                                                 v45,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity,
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            maxLength,
                            0LL);
                          v47 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v47, 0LL);
                          if ( v47 )
                          {
                            System_Text_StringBuilder__Append_42951964(v47, RarityInvalidMessage, 0LL);
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_42951964(v47, v48, 0LL);
                            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v50 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                                                       v47,
                                                       v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v53,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_18056028(
                                Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v50,
                                v51,
                                v52,
                                v53,
                                minFontSize[1],
                                minFontSize[0],
                                30.0,
                                728,
                                2,
                                480,
                                -162.5,
                                0,
                                0,
                                240,
                                1,
                                0LL);
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
LABEL_44:
        sub_B7769C(UserServantLeaderEntity, v11);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v9 + 24),
    *(_DWORD *)(v9 + 28),
    *(UserServantEntity_o **)(v9 + 32),
    v25);
}


void __fastcall SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v7; // x1
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v10; // x21
  CancelConfirmMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  SupportServantSelectMenu_o *v15; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x24
  System_Int32_array *v19; // x22
  const MethodInfo *v20; // x2
  BalanceConfig_c *v21; // x0
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x1
  System_Int32_array *v24; // x23
  BalanceConfig_c *v25; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v29; // x27
  __int64 v30; // x0

  if ( (byte_438E0B9 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_B775C4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438E0B9 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v7);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
        {
          v30 = sub_B776C8(CenterNum);
          sub_B77668(v30, 0LL);
        }
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v10 = supportServantData->m_Items[(int)CenterNum];
        v11 = (CancelConfirmMenu_CallbackFunc_o *)sub_B77694(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v10, v11, 0LL);
          return;
        }
      }
      goto LABEL_59;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v12)
      || this->fields.isEdit )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v4);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v13);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21657/*"ok"*/, v20);
        return;
      }
      goto LABEL_59;
    }
    v14 = SupportSelectRootComponent__getCenterNum(this, v12);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_59;
    v15 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_59;
    pushTabButton = (int32_t)v15->fields.pushTabButton;
    if ( CenterNum->fields.basePanelList )
    {
      v17 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v17 )
      {
        v18 = v17;
        v19 = (System_Int32_array *)sub_B77684(v17, int___TypeInfo);
        if ( !v19 )
          goto LABEL_48;
      }
      else
      {
        v19 = 0LL;
      }
    }
    else
    {
      v21 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      v19 = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)v21->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v15->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_59;
    if ( !CenterNum->fields.basePanelList )
      goto LABEL_49;
    v22 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v22 )
    {
      v24 = 0LL;
      goto LABEL_54;
    }
    v18 = v22;
    v24 = (System_Int32_array *)sub_B77684(v22, int___TypeInfo);
    if ( v24 )
    {
LABEL_54:
      SupportSelectRootComponent__getCenterNum(this, v23);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
      tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
      tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
      v29 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_B77694(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
      CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
        0LL);
      if ( cancelConfirmDeckIdDialog )
      {
        CancelConfirmDeckIdDialog__Open(
          cancelConfirmDeckIdDialog,
          v14 + 1,
          pushTabButton,
          tempFixMainQuestSupportDeckIds,
          tempFixEventQuestSupportDeckIds,
          v19,
          v24,
          v29,
          0LL);
        return;
      }
LABEL_59:
      sub_B7769C(CenterNum, v4);
    }
LABEL_48:
    sub_B77990(v18);
LABEL_49:
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    v24 = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)v25->static_fields->FixEventSupportDeckNum);
    goto LABEL_54;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  CenterNum = this->fields.supportServantSelectMenu;
  if ( !CenterNum )
    goto LABEL_59;
  SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_59;
  supportInfoJump->fields.selectClassId = -1;
  CenterNum = (SupportServantSelectMenu_o *)this->fields.supportInfoJump;
  if ( !CenterNum )
    goto LABEL_59;
  if ( !SupportInfoJump__ReturnScene(
          (SupportInfoJump_o *)CenterNum,
          1,
          (Il2CppObject *)this->fields.supportInfoJump,
          0LL) )
  {
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( CenterNum )
    {
      AvalonSceneManager__popScene(
        (AvalonSceneManager_o *)CenterNum,
        1,
        (Il2CppObject *)this->fields.supportInfoJump,
        0LL);
      return;
    }
    goto LABEL_59;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__OnClickFixEventDeckButton(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t CenterNum; // w23
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v13; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  __int64 v23; // x0

  if ( (byte_438E0B7 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    byte_438E0B7 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v7,
                                                                                   this->fields.tempFixEventQuestSupportDeckIds,
                                                                                   0,
                                                                                   v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v23 = sub_B776C8(FixedErrorList);
    sub_B77668(v23, 0LL);
  }
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportServantData__get_IsNoServant(
                                                                                     (SupportServantData_o *)FixedErrorList,
                                                                                     0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v15 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B77694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v15, v16);
        return;
      }
LABEL_21:
      sub_B7769C(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_21;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 1, v11);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v18);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v7, v19);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v21);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v22);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                     v13,
                                                                                     (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_21;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, 0LL);
  }
}


void __fastcall SupportSelectRootComponent__OnClickFixEventQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 0, v2);
}


void __fastcall SupportSelectRootComponent__OnClickFixEventQuestSupportDeck2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 1, v2);
}


void __fastcall SupportSelectRootComponent__OnClickFixEventQuestSupportDeck3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__OnClickFixMainDeckButton(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t CenterNum; // w23
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v13; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  __int64 v23; // x0

  if ( (byte_438E0B6 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    byte_438E0B6 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v7,
                                                                                   this->fields.tempFixMainQuestSupportDeckIds,
                                                                                   1,
                                                                                   v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v23 = sub_B776C8(FixedErrorList);
    sub_B77668(v23, 0LL);
  }
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportServantData__get_IsNoServant(
                                                                                     (SupportServantData_o *)FixedErrorList,
                                                                                     0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v15 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B77694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v15, v16);
        return;
      }
LABEL_21:
      sub_B7769C(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_21;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 0, v11);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v18);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v7, v19);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v21);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v22);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                     v13,
                                                                                     (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_21;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, 0LL);
  }
}


void __fastcall SupportSelectRootComponent__OnClickFixMainQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 0, v2);
}


void __fastcall SupportSelectRootComponent__OnClickFixMainQuestSupportDeck2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 1, v2);
}


void __fastcall SupportSelectRootComponent__OnClickFixMainQuestSupportDeck3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 2, v2);
}


void __fastcall SupportSelectRootComponent__OpenSupportEditMenu(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v8; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v9; // x22
  const MethodInfo *v10; // x4
  __int64 v11; // x0

  if ( (byte_438E0BD & 1) == 0 )
  {
    sub_B775C4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_438E0BD = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v11 = sub_B776C8(CenterNum);
    sub_B77668(v11, 0LL);
  }
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_B7769C(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v8, isEdit, v9, v10);
}


void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19

  if ( (byte_438E0B8 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E0B8 = 1;
  }
  v4 = !isFixed;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v4, 0LL);
}


void __fastcall SupportSelectRootComponent__Quit(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall SupportSelectRootComponent__RefreshInfo(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectRootComponent__RefreshSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v2; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v4; // x22
  __int64 v5; // x24
  unsigned __int64 v6; // x8
  SupportServantData_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  unsigned __int64 v17; // x8
  SupportServantData_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v26; // x22
  __int64 v27; // x24
  unsigned __int64 v28; // x8
  SupportServantData_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  __int64 v37; // x0

  v2 = this;
  if ( (byte_438E09B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B775C4(&SupportServantData_TypeInfo);
    byte_438E09B = 1;
  }
  supportServantData = (unsigned int *)v2->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v4 = 0LL;
  v5 = 8LL;
  while ( 1 )
  {
    v6 = supportServantData[6];
    if ( (__int64)v4 >= (int)v6 )
      break;
    if ( v4 >= v6 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v4 + 8] )
    {
      v7 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_B77684(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v37 = sub_B776BC(this);
          sub_B77668(v37, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
      {
LABEL_37:
        v36 = sub_B776C8(this);
        sub_B77668(v36, 0LL);
      }
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_B77560(
        (BattleServantConfConponent_o *)&supportServantData[v5],
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      supportServantData = (unsigned int *)v2->fields.supportServantData;
    }
    ++v4;
    v5 += 2LL;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v15 = 0LL;
  v16 = 8LL;
  while ( 1 )
  {
    v17 = orgSupportServantData[6];
    if ( (__int64)v15 >= (int)v17 )
      break;
    if ( v15 >= v17 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v15 + 8] )
    {
      v18 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v18, 0LL);
      if ( v18 )
      {
        this = (SupportSelectRootComponent_o *)sub_B77684(v18, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v15 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v15 + 8] = v18;
      sub_B77560(
        (BattleServantConfConponent_o *)&orgSupportServantData[v16],
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v15;
    v16 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_B7769C(this, method);
  v26 = 0LL;
  v27 = 8LL;
  while ( 1 )
  {
    v28 = tmpSupportServantData[6];
    if ( (__int64)v26 >= (int)v28 )
      break;
    if ( v26 >= v28 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v26 + 8] )
    {
      v29 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v29, 0LL);
      if ( v29 )
      {
        this = (SupportSelectRootComponent_o *)sub_B77684(v29, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v26 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v26 + 8] = v29;
      sub_B77560(
        (BattleServantConfConponent_o *)&tmpSupportServantData[v27],
        (System_Int32_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v26;
    v27 += 2LL;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void __fastcall SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22
  const MethodInfo *v9; // x4
  __int64 v10; // x0

  if ( (byte_438E0C2 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_438E0C2 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B776C8(CenterNum);
    sub_B77668(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B7769C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v7, v8, v9);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22
  const MethodInfo *v9; // x4
  __int64 v10; // x0

  if ( (byte_438E0C6 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_438E0C6 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B776C8(CenterNum);
    sub_B77668(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B77694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B7769C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v7, v8, v9);
}


void __fastcall SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  il2cpp_array_size_t i; // w21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  SupportServantData_o *Instance; // x0
  const MethodInfo *v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_438E0A8 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438E0A8 = 1;
  }
  v3 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v4) )
  {
    for ( i = 0; ; ++i )
    {
      Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (signed int)i >= SLODWORD(Instance[1].fields.oldEquipIdList->m_Items[15]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_24;
      if ( i >= supportServantData->max_length )
        goto LABEL_25;
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_24;
      if ( i >= orgSupportServantData->max_length )
      {
LABEL_25:
        v12 = sub_B776C8(Instance);
        sub_B77668(v12, 0LL);
      }
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_24;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_23:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21657/*"ok"*/, v10);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (SupportServantData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v11,
                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_24:
    sub_B7769C(Instance, v5);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v3,
          this->fields.tempFixMainQuestSupportDeckIds,
          this->fields.tempFixEventQuestSupportDeckIds,
          0LL) )
    goto LABEL_23;
}


void __fastcall SupportSelectRootComponent__RequestDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t CenterNum; // w20
  SupportSelectMenu_o *IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct SupportServantData_array *supportServantData; // x8
  System_Int32_array **editDeckName; // x1
  const MethodInfo *v14; // x2
  SupportSelectListViewIndicator_o *indicator; // x19
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
    {
      v17 = sub_B776C8(IsNullOrEmpty);
      sub_B77668(v17, 0LL);
    }
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = (System_Int32_array **)this->fields.editDeckName,
          IsNullOrEmpty->fields.swapButton = (struct UICommonButton_o *)editDeckName,
          sub_B77560(
            (BattleServantConfConponent_o *)&IsNullOrEmpty->fields.swapButton,
            editDeckName,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          SupportSelectRootComponent__SaveTemp(this, -1, v14),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0LL)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, v5),
          !indicator) )
    {
LABEL_8:
      sub_B7769C(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v16);
  }
}


void __fastcall SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_438E0BC & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438E0BC = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v6, v7);
LABEL_12:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v9);
      return;
    }
    goto LABEL_21;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v5);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v6, v10);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
      goto LABEL_12;
    }
LABEL_21:
    sub_B7769C(supportSelectMenu, v6);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_21;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_21;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !supportSelectMenu )
        goto LABEL_21;
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)supportSelectMenu, 39, 1, 0LL, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__SaveTemp(
        SupportSelectRootComponent_o *this,
        int32_t targetIdx,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectRootComponent_o *v5; // x0
  const MethodInfo *v6; // x4
  __int64 v7; // x0

  v3 = this;
  if ( (targetIdx & 0x80000000) != 0 )
  {
    this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                             this,
                                             *(const MethodInfo **)&targetIdx);
    *(_QWORD *)&targetIdx = (unsigned int)this;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( targetIdx >= supportServantData->max_length )
  {
    v7 = sub_B776C8(this);
    sub_B77668(v7, 0LL);
  }
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_B7769C(this, *(_QWORD *)&targetIdx);
  SupportServantData__ResetOld((SupportServantData_o *)this, 0LL);
  SupportSelectRootComponent__CopySupportData(
    v5,
    v3->fields.supportServantData,
    v3->fields.tmpSupportServantData,
    0,
    v6);
}


void __fastcall SupportSelectRootComponent__SelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectEditMenu_o *supportEditMenu; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v8; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  int32_t v16; // w24
  int32_t i; // w25
  int32_t v18; // w26
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v24; // x20
  System_Int32_array *v25; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v26; // x24
  const MethodInfo *v27; // x5

  if ( (byte_438E0BF & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_438E0BF = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
LABEL_28:
    sub_B7769C(supportEditMenu, method);
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v4 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v8);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11 + 1, v12);
  v16 = SupportSelectRootComponent__getCenterNum(this, v14);
  for ( i = 0; ; ++i )
  {
    supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= *((_DWORD *)supportEditMenu[1].monitor + 38) )
      break;
    if ( v16 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v15),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v18 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v18,
                                                         v15),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v4 )
        goto LABEL_28;
      System_Collections_Generic_List_int___Add(
        v4,
        i,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v5 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v18, v15)
      || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                         this,
                                                         i,
                                                         this->fields.tempFixMainQuestSupportDeckIds,
                                                         v20),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v18, v19) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v21);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v5 )
      goto LABEL_28;
LABEL_18:
    System_Collections_Generic_List_int___Add(
      v5,
      i,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    continue;
  }
  if ( !v4 )
    goto LABEL_28;
  copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
  supportServantData = this->fields.supportServantData;
  supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                 v4,
                                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_28;
  v24 = (System_Int32_array *)supportEditMenu;
  v25 = System_Collections_Generic_List_int___ToArray(
          v5,
          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v26 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_B77694(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
  SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
    v26,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
    0LL);
  if ( !copyDeckSelectMenu )
    goto LABEL_28;
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v24, v25, v26, v27);
}


void __fastcall SupportSelectRootComponent__SetActiveApplyIcon(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v4; // x4

  if ( this->fields.supportInfoJump || this->fields.isEdit )
  {
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__HideActiveSupportApplyIcon(supportSelectMenu, method);
      return;
    }
LABEL_7:
    sub_B7769C(supportSelectMenu, method);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, method);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_7;
  SupportSelectMenu__SetActiveSupportApplyIcon(
    this->fields.supportSelectMenu,
    (_DWORD)supportSelectMenu + 1,
    this->fields.tempFixMainQuestSupportDeckIds,
    this->fields.tempFixEventQuestSupportDeckIds,
    v4);
}


void __fastcall SupportSelectRootComponent__SetCacheAssetNameList(
        SupportSelectRootComponent_o *this,
        System_String_array *list,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array *v10; // x19
  BattleServantConfConponent_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1

  if ( (byte_438E0A7 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E0A7 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (BattleServantConfConponent_o *)&this->fields.cacheAssetNameList;
  v10 = cacheAssetNameList;
  if ( list )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_24408996(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (BattleServantConfConponent_c *)list;
  sub_B77560(p_cacheAssetNameList, (System_Int32_array **)list, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_24411040(v10, 0LL);
  }
}


void __fastcall SupportSelectRootComponent__SetCurrentSupportDeckIds(
        SupportSelectRootComponent_o *this,
        int32_t *currentMainQuestSupportDeckId,
        const MethodInfo *method)
{
  *currentMainQuestSupportDeckId = SupportSelectRootComponent__getCenterNum(
                                     this,
                                     (const MethodInfo *)currentMainQuestSupportDeckId)
                                 + 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__SetEquip(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v7; // w23
  SupportSelectRootComponent_o *v8; // x19
  __int64 selectNum; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int32_t v14; // w22
  CommonUI_o *Instance; // x21
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v19; // x8
  SupportSelectRootComponent_o *v20; // x23
  struct SupportServantData_array *v21; // x8
  struct SupportServantData_array *v22; // x8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28[2]; // [xsp+20h] [xbp-70h] BYREF

  v7 = result;
  v8 = this;
  if ( (byte_438E0AE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Array_IndexOf_long___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_B775C4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_438E0AE = 1;
  }
  memset(&v28[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v17 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_28;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_22415800(userSvtEntity->fields.svtId, 0LL);
    v11 = item->fields.userSvtEntity;
    if ( !v11 )
      goto LABEL_34;
    v13 = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
    v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
    v14 = (int)this;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v28, 0LL, 0LL);
    v13 = *(_OWORD *)&v28[0].fields.currentCryptoKey;
    v12 = *(_OWORD *)&v28[0].fields.fakeValue;
    v14 = 0;
  }
  *(_OWORD *)&v28[1].fields.currentCryptoKey = v13;
  *(_OWORD *)&v28[1].fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28[1];
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v27, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_34:
    sub_B7769C(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_35;
  v19 = supportServantData->m_Items[selectNum];
  if ( !v19 )
    goto LABEL_34;
  v20 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v19->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_2005510 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v21 = v8->fields.supportServantData;
    if ( !v21 )
      goto LABEL_34;
    if ( (unsigned int)selectNum >= v21->max_length )
      goto LABEL_35;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v21->m_Items[selectNum];
    if ( !this )
      goto LABEL_34;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, 0LL);
  }
  v22 = v8->fields.supportServantData;
  if ( !v22 )
    goto LABEL_34;
  if ( (unsigned int)selectNum >= v22->max_length )
  {
LABEL_35:
    v26 = sub_B776C8(this);
    sub_B77668(v26, 0LL);
  }
  this = (SupportSelectRootComponent_o *)v22->m_Items[selectNum];
  if ( !this )
    goto LABEL_34;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v20, v14, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v17 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_28:
  v23 = v16;
  System_Action___ctor(v16, (Il2CppObject *)v8, *v17, 0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__CloseSupportServantEquipListMenu(Instance, v23, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v24) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v25);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_34;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v25);
}


void __fastcall SupportSelectRootComponent__SetFriendInfo(
        SupportSelectRootComponent_o *this,
        int32_t *deckIndex,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectRootComponent_o *v9; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v12; // x22
  unsigned int **p_supportServantData; // x21
  __int64 i; // x23
  unsigned int *v15; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v17; // x22
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x23
  __int64 v26; // x25
  __int64 v27; // x24
  struct System_Int32_array *v28; // x8
  unsigned __int64 v29; // x27
  unsigned int *v30; // x28
  SupportServantData_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int *v38; // x8
  struct SupportInfoJump_o *v39; // x10
  struct System_Int32_array *v40; // x9
  __int64 v41; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  unsigned int v50; // w23
  __int64 v51; // x25
  __int64 v52; // x26
  struct System_Int32_array *v53; // x8
  unsigned int *v54; // x24
  SupportServantData_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  unsigned int *v62; // x0
  unsigned int *v63; // x8
  struct SupportInfoJump_o *v64; // x10
  struct System_Int32_array *v65; // x9
  __int64 v66; // x8
  __int64 v67; // x25
  struct System_Int32_array *v68; // x8
  unsigned int *v69; // x28
  SupportServantData_o *v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  unsigned int *v77; // x0
  unsigned int *v78; // x8
  struct SupportInfoJump_o *v79; // x10
  struct System_Int32_array *v80; // x9
  __int64 v81; // x8
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_438E0A0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B775C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_B775C4(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_B775C4(&SupportServantData_TypeInfo);
    byte_438E0A0 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_74;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v12 = 0LL;
  p_supportServantData = (unsigned int **)&v9->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v15 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_74;
    if ( v12 >= v15[6] )
    {
LABEL_75:
      v91 = sub_B776C8(this);
      sub_B77668(v91, 0LL);
    }
    *(_QWORD *)&v15[i] = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v15[i], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ++v12;
  }
  if ( !otherUserGameEntity )
    goto LABEL_74;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_74;
  v17 = *(_QWORD *)&mainSupportDeckIds->max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_74;
    v93 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v43 = (System_Int32_array **)sub_B775DC(SupportServantData___TypeInfo, (unsigned int)(v93 + v17));
    *p_supportServantData = (unsigned int *)v43;
    sub_B77560((BattleServantConfConponent_o *)&v9->fields.supportServantData, v43, v44, v45, v46, v47, v48, v49);
    if ( (int)v17 < 1 )
    {
      v50 = 0;
LABEL_53:
      if ( (int)v93 < 1 )
        goto LABEL_70;
      v67 = 8LL;
      while ( 1 )
      {
        v68 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v68 )
          break;
        if ( v67 - 8 >= (unsigned __int64)v68->max_length )
          goto LABEL_75;
        if ( *((int *)&v68->obj.klass + v67) >= 1 )
        {
          v69 = *p_supportServantData;
          v70 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
          SupportServantData___ctor(v70, 0LL);
          if ( !v69 )
            break;
          if ( v70 )
          {
            this = (SupportSelectRootComponent_o *)sub_B77684(v70, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
            if ( !this )
              goto LABEL_76;
          }
          if ( v50 >= v69[6] )
            goto LABEL_75;
          v77 = &v69[2 * v50];
          *((_QWORD *)v77 + 4) = v70;
          sub_B77560(
            (BattleServantConfConponent_o *)(v77 + 8),
            (System_Int32_array **)v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
          v78 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v50 >= v78[6] )
            goto LABEL_75;
          v79 = v9->fields.supportInfoJump;
          if ( !v79 )
            break;
          v80 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v80 )
            break;
          if ( v67 - 8 >= (unsigned __int64)v80->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v78[2 * v50 + 8];
          if ( !this )
            break;
          SupportServantData__Init_32672980(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v79->fields.kind,
            v79->fields.isSelect,
            v79->fields.eventSetupInfo,
            1,
            *((_DWORD *)&v80->obj.klass + v67),
            0LL);
          ++v50;
        }
        v81 = v67 - 7;
        ++v67;
        if ( v81 >= (int)v93 )
          goto LABEL_70;
      }
    }
    else
    {
      v50 = 0;
      v51 = (int)v17;
      v52 = 8LL;
      while ( 1 )
      {
        v53 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v53 )
          break;
        if ( v52 - 8 >= (unsigned __int64)v53->max_length )
          goto LABEL_75;
        if ( *((int *)&v53->obj.klass + v52) >= 1 )
        {
          v54 = *p_supportServantData;
          v55 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
          SupportServantData___ctor(v55, 0LL);
          if ( !v54 )
            break;
          if ( v55 )
          {
            this = (SupportSelectRootComponent_o *)sub_B77684(v55, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
            if ( !this )
            {
LABEL_76:
              v92 = sub_B776BC(this);
              sub_B77668(v92, 0LL);
            }
          }
          if ( v50 >= v54[6] )
            goto LABEL_75;
          v62 = &v54[2 * v50];
          *((_QWORD *)v62 + 4) = v55;
          sub_B77560(
            (BattleServantConfConponent_o *)(v62 + 8),
            (System_Int32_array **)v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          v63 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v50 >= v63[6] )
            goto LABEL_75;
          v64 = v9->fields.supportInfoJump;
          if ( !v64 )
            break;
          v65 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v65 )
            break;
          if ( v52 - 8 >= (unsigned __int64)v65->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v63[2 * v50 + 8];
          if ( !this )
            break;
          SupportServantData__Init_32672980(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v64->fields.kind,
            v64->fields.isSelect,
            v64->fields.eventSetupInfo,
            0,
            *((_DWORD *)&v65->obj.klass + v52),
            0LL);
          ++v50;
        }
        v66 = v52 - 7;
        ++v52;
        if ( v66 >= v51 )
          goto LABEL_53;
      }
    }
LABEL_74:
    sub_B7769C(this, deckIndex);
  }
  v18 = (System_Int32_array **)sub_B775DC(SupportServantData___TypeInfo, (unsigned int)v17);
  *p_supportServantData = (unsigned int *)v18;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.supportServantData, v18, v19, v20, v21, v22, v23, v24);
  if ( (int)v17 >= 1 )
  {
    v25 = (int)v17;
    v26 = 8LL;
    v27 = 8LL;
    do
    {
      v28 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v28 )
        goto LABEL_74;
      v29 = v26 - 8;
      if ( v26 - 8 >= (unsigned __int64)v28->max_length )
        goto LABEL_75;
      if ( *((int *)&v28->obj.klass + v26) >= 1 )
      {
        v30 = *p_supportServantData;
        v31 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
        SupportServantData___ctor(v31, 0LL);
        if ( !v30 )
          goto LABEL_74;
        if ( v31 )
        {
          this = (SupportSelectRootComponent_o *)sub_B77684(v31, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
          if ( !this )
            goto LABEL_76;
        }
        if ( v29 >= v30[6] )
          goto LABEL_75;
        *(_QWORD *)&v30[v27] = v31;
        sub_B77560((BattleServantConfConponent_o *)&v30[v27], (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
        v38 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_74;
        if ( v29 >= v38[6] )
          goto LABEL_75;
        v39 = v9->fields.supportInfoJump;
        if ( !v39 )
          goto LABEL_74;
        v40 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v40 )
          goto LABEL_74;
        if ( v29 >= v40->max_length )
          goto LABEL_75;
        this = *(SupportSelectRootComponent_o **)&v38[v27];
        if ( !this )
          goto LABEL_74;
        SupportServantData__Init_32672980(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v39->fields.kind,
          v39->fields.isSelect,
          v39->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v40->obj.klass + v26),
          0LL);
      }
      v41 = v26 - 7;
      ++v26;
      v27 += 2LL;
    }
    while ( v41 < v25 );
  }
LABEL_70:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_74;
  indicator = supportSelectMenu->fields.indicator;
  v84 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_74;
  indicator->fields.modifyCenterItemCallBack = v84;
  sub_B77560(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this = (SupportSelectRootComponent_o *)v9->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_74;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL);
}


void __fastcall SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectRootComponent_o *v8; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v10; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x0
  bool v13; // w21
  unsigned __int64 v14; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x23
  unsigned int *v17; // x8
  struct SupportInfoJump_o *v18; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  SupportSelectRootComponent___c_c *v23; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v26; // x23
  struct SupportSelectRootComponent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  unsigned int v35; // w0
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  void *monitor; // x8
  __int64 v44; // x25
  __int64 v45; // x23
  unsigned __int64 v46; // x26
  unsigned int *v47; // x27
  SupportServantData_o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  unsigned int *v55; // x9
  struct SupportInfoJump_o *v56; // x8
  __int64 v57; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct SupportInfoJump_o *v67; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  QuestRestrictionInfo_o *v69; // x20
  __int64 v70; // x0
  __int64 v71; // x0

  v8 = this;
  if ( (byte_438E0A1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_B775C4(&SupportServantData___TypeInfo);
    sub_B775C4(&SupportServantData_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__);
    this = (SupportSelectRootComponent_o *)sub_B775C4(&SupportSelectRootComponent___c_TypeInfo);
    byte_438E0A1 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_63;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = v8->fields.supportInfoJump;
  if ( !v10 )
    goto LABEL_63;
  questRestrictionInfo = v10->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_63;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v13 = !QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
  else
LABEL_11:
    v13 = 1;
  v14 = 0LL;
  p_supportServantData = (unsigned int **)&v8->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v17 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_63;
    if ( v14 >= v17[6] )
      goto LABEL_64;
    *(_QWORD *)&v17[i] = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v17[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v14;
  }
  v18 = v8->fields.supportInfoJump;
  if ( !v18 || (followerInfo = v18->fields.followerInfo) == 0LL )
LABEL_63:
    sub_B7769C(this, method);
  if ( v13 )
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.mainSupportDeckIds;
    if ( !this )
      goto LABEL_63;
  }
  else
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.eventSupportDeckIds;
    if ( !this )
      goto LABEL_63;
  }
  v20 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v20 )
  {
    v21 = v20;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B77684(v20, int___TypeInfo);
    if ( v22 )
      goto LABEL_30;
    sub_B77990(v21);
  }
  v22 = 0LL;
LABEL_30:
  v23 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v23 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v26,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    v27 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v27->__9__49_0 = _9__49_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v27->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          v22,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  v35 = System_Linq_Enumerable__Count_int_(v34, (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  v36 = (System_Int32_array **)sub_B775DC(SupportServantData___TypeInfo, v35);
  *p_supportServantData = (unsigned int *)v36;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.supportServantData, v36, v37, v38, v39, v40, v41, v42);
  if ( !v22 )
    goto LABEL_63;
  monitor = v22[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v44 = 8LL;
    v45 = 8LL;
    while ( 1 )
    {
      v46 = v44 - 8;
      if ( v44 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v22->klass + v44) >= 1 )
      {
        v47 = *p_supportServantData;
        v48 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
        SupportServantData___ctor(v48, 0LL);
        if ( !v47 )
          goto LABEL_63;
        if ( v48 )
        {
          this = (SupportSelectRootComponent_o *)sub_B77684(v48, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
          if ( !this )
          {
            v71 = sub_B776BC(0LL);
            sub_B77668(v71, 0LL);
          }
        }
        if ( v46 >= v47[6] )
          break;
        *(_QWORD *)&v47[v45] = v48;
        sub_B77560((BattleServantConfConponent_o *)&v47[v45], (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
        v55 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_63;
        if ( v46 >= v55[6] )
          break;
        v56 = v8->fields.supportInfoJump;
        if ( !v56 )
          goto LABEL_63;
        if ( v46 >= LODWORD(v22[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v55[v45];
        if ( !this )
          goto LABEL_63;
        SupportServantData__Init_32673844(
          (SupportServantData_o *)this,
          v56->fields.followerInfo,
          v56->fields.kind,
          v56->fields.isSelect,
          v56->fields.eventSetupInfo,
          v56->fields.questRestrictionInfo,
          *((_DWORD *)&v22->klass + v44),
          0LL);
      }
      LODWORD(monitor) = v22[1].monitor;
      v57 = v44 - 7;
      ++v44;
      v45 += 2LL;
      if ( v57 >= (int)monitor )
        goto LABEL_54;
    }
LABEL_64:
    v70 = sub_B776C8(this);
    sub_B77668(v70, 0LL);
  }
LABEL_54:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_63;
  indicator = supportSelectMenu->fields.indicator;
  v60 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_63;
  indicator->fields.modifyCenterItemCallBack = v60;
  sub_B77560(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = v8->fields.supportInfoJump;
  if ( !v67 )
    goto LABEL_63;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  v69 = v67->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (SupportSelectRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_63;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v69,
    (int32_t)this->fields.backSkinSprite,
    0LL,
    0LL);
}


void __fastcall SupportSelectRootComponent__StartUp(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t Int; // w20
  BalanceConfig_c *v9; // x8
  int32_t v10; // w20
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v12; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 i; // x25
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v23; // x9
  SupportServantData_o *followerQuestInfomationDraw; // x0
  unsigned __int64 v25; // x26
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *v27; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 j; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v37; // x9
  struct System_Int32_array *v38; // x9
  unsigned __int64 v39; // x25
  SupportSelectRootComponent_o *v40; // x0
  const MethodInfo *v41; // x4
  SupportSelectRootComponent_o *v42; // x0
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v49; // x5
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v57; // x8
  unsigned __int64 v58; // x22
  System_Int32_array **eventSetupInfo; // x1
  SupportSelectMenu_o *v60; // x21
  SupportServantData_array *v61; // x22
  SupportSelectMenu_CallbackFunc_o *v62; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v63; // x24
  const MethodInfo *v64; // x5
  struct SupportSelectMenu_o *v65; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  struct SupportSelectMenu_o *v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct SupportServantData_array *v82; // x20
  __int64 v83; // x8
  unsigned __int64 v84; // x21
  System_Int32_array **v85; // x1
  SupportSelectMenu_o *v86; // x20
  SupportServantData_array *v87; // x21
  int32_t v88; // w22
  SupportSelectMenu_CallbackFunc_o *v89; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v90; // x24
  const MethodInfo *v91; // x5
  const MethodInfo *v92; // x2
  struct SupportServantData_array *v93; // x8
  bool v94; // w1
  System_Action_o *v95; // x20
  __int64 v96; // x0
  int32_t deckIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438E0A2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_B775C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_B775C4(&StringLiteral_12793/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_438E0A2 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12793/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = UnityEngine_Mathf__Min_41473676(Int, v9->static_fields->SupportDeckMax - 1, 0LL);
    deckIndex = v10;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v12 = (struct System_Int32_array *)sub_B775DC(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v12;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (System_Int32_array **)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    for ( i = 8LL; ; ++i )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v25 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v25 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_79;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v25 < (int)max_length )
      {
        if ( v25 >= max_length )
          goto LABEL_80;
        v23 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_79;
        if ( v25 >= v23->max_length )
          goto LABEL_80;
        *((_DWORD *)&v23->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( (BYTE3(followerQuestInfomationDraw[2].fields.oldServantIdList) & 4) != 0
      && !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v27 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v27;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (System_Int32_array **)v27,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    for ( j = 8LL; ; ++j )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v39 = j - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v39 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_79;
      v37 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v39 < (int)v37 )
      {
        if ( v39 >= v37 )
          goto LABEL_80;
        v38 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_79;
        if ( v39 >= v38->max_length )
          goto LABEL_80;
        *((_DWORD *)&v38->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v6);
    SupportSelectRootComponent__CopySupportData(
      v40,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v41);
    SupportSelectRootComponent__CopySupportData(
      v42,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v43);
    followerQuestInfomationDraw = (SupportServantData_o *)this->fields.followerQuestInfomationDraw;
    if ( followerQuestInfomationDraw )
    {
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)followerQuestInfomationDraw,
        0LL,
        0,
        0LL,
        0LL);
      followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
      if ( followerQuestInfomationDraw )
      {
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v44);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v45);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v46);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_18757436(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            80,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v47);
          supportSelectMenu = this->fields.supportSelectMenu;
          if ( supportSelectMenu )
          {
            followerQuestInfomationDraw = (SupportServantData_o *)supportSelectMenu->fields.headerObject;
            if ( followerQuestInfomationDraw )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 1, 0LL);
              followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
              if ( followerQuestInfomationDraw )
              {
                SupportSelectMenu__SetActiveCurrentSupportSprite(
                  (SupportSelectMenu_o *)followerQuestInfomationDraw,
                  0,
                  0,
                  0,
                  0,
                  v49);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v57 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v57 >= 1 )
                  {
                    v58 = 0LL;
                    while ( v58 < (unsigned int)v57 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v58];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = (System_Int32_array **)this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
                        sub_B77560(
                          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          eventSetupInfo,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                      }
                      LODWORD(v57) = supportServantData->max_length;
                      if ( (__int64)++v58 >= (int)v57 )
                        goto LABEL_51;
                    }
LABEL_80:
                    v96 = sub_B776C8(followerQuestInfomationDraw);
                    sub_B77668(v96, 0LL);
                  }
LABEL_51:
                  v60 = this->fields.supportSelectMenu;
                  v61 = this->fields.supportServantData;
                  v62 = (SupportSelectMenu_CallbackFunc_o *)sub_B77694(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v62,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    0LL);
                  v63 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B77694(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v63,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    0LL);
                  if ( v60 )
                  {
                    SupportSelectMenu__Open(v60, v61, v10, v62, v63, v64);
                    v65 = this->fields.supportSelectMenu;
                    if ( v65 )
                    {
                      indicator = v65->fields.indicator;
                      v67 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v67,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v67;
                        sub_B77560(
                          (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
                          (System_Int32_array **)v67,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72,
                          v73);
                        goto LABEL_73;
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
LABEL_79:
    sub_B7769C(followerQuestInfomationDraw, v6);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v4);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v3);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v7);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  TitleInfoControl__setTitleInfo_18757436(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v74);
  v75 = this->fields.supportSelectMenu;
  if ( !v75 )
    goto LABEL_79;
  followerQuestInfomationDraw = (SupportServantData_o *)v75->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v82 = this->fields.supportServantData;
  if ( !v82 )
    goto LABEL_79;
  v83 = *(_QWORD *)&v82->max_length;
  if ( (int)v83 >= 1 )
  {
    v84 = 0LL;
    while ( v84 < (unsigned int)v83 )
    {
      followerQuestInfomationDraw = v82->m_Items[v84];
      if ( followerQuestInfomationDraw )
      {
        v85 = (System_Int32_array **)this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v85;
        sub_B77560(
          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          v85,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
      }
      LODWORD(v83) = v82->max_length;
      if ( (__int64)++v84 >= (int)v83 )
        goto LABEL_67;
    }
    goto LABEL_80;
  }
LABEL_67:
  v86 = this->fields.supportSelectMenu;
  v87 = this->fields.supportServantData;
  v88 = deckIndex;
  v89 = (SupportSelectMenu_CallbackFunc_o *)sub_B77694(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v89,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v90 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B77694(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v90,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v86 )
    goto LABEL_79;
  SupportSelectMenu__Open(v86, v87, v88, v89, v90, v91);
  v93 = this->fields.supportServantData;
  if ( !v93 )
    goto LABEL_79;
  v94 = (int)v93->max_length >= 2 && v93->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v94, v92);
LABEL_73:
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.backSkinSprite;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  followerQuestInfomationDraw = (SupportServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)followerQuestInfomationDraw,
                                                          0LL);
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v95 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v95, 2, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__UpdateTempFixDeckId(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        int32_t deckId,
        bool isEvent,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v8; // x21
  struct System_Int32_array *tempFixEventQuestSupportDeckIds; // x8
  int32_t v10; // w24
  unsigned __int64 v11; // x23
  __int64 v12; // x22
  struct System_Int32_array *v13; // x8
  char *v14; // x8
  struct System_Int32_array *v15; // x9
  struct System_Int32_array *tempFixMainQuestSupportDeckIds; // x8
  unsigned __int64 v17; // x23
  struct System_Int32_array *v18; // x8
  char *v19; // x8
  int32_t v20; // w8
  __int64 v21; // x0

  v8 = this;
  if ( (byte_438E0B4 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0B4 = 1;
  }
  if ( isEvent )
  {
    tempFixEventQuestSupportDeckIds = v8->fields.tempFixEventQuestSupportDeckIds;
    if ( !tempFixEventQuestSupportDeckIds )
      goto LABEL_40;
    if ( tempFixEventQuestSupportDeckIds->max_length <= idx )
      goto LABEL_41;
    v10 = tempFixEventQuestSupportDeckIds->m_Items[idx + 1];
    v11 = 0LL;
    v12 = idx;
    while ( 1 )
    {
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= SLODWORD(this->fields.bgTxtSprite->fields.onChange) )
        break;
      if ( v10 != deckId && idx != v11 )
      {
        v13 = v8->fields.tempFixEventQuestSupportDeckIds;
        if ( !v13 )
          goto LABEL_40;
        if ( v11 >= v13->max_length )
          goto LABEL_41;
        v14 = (char *)v13 + 4 * v11;
        if ( *((_DWORD *)v14 + 8) == deckId )
          *((_DWORD *)v14 + 8) = 0;
      }
      ++v11;
    }
    v15 = v8->fields.tempFixEventQuestSupportDeckIds;
  }
  else
  {
    tempFixMainQuestSupportDeckIds = v8->fields.tempFixMainQuestSupportDeckIds;
    if ( !tempFixMainQuestSupportDeckIds )
      goto LABEL_40;
    if ( tempFixMainQuestSupportDeckIds->max_length <= idx )
      goto LABEL_41;
    v10 = tempFixMainQuestSupportDeckIds->m_Items[idx + 1];
    v17 = 0LL;
    v12 = idx;
    while ( 1 )
    {
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v17 >= *(&this->fields.bgTxtSprite->fields.mDepth + 1) )
        break;
      if ( v10 != deckId && idx != v17 )
      {
        v18 = v8->fields.tempFixMainQuestSupportDeckIds;
        if ( !v18 )
          goto LABEL_40;
        if ( v17 >= v18->max_length )
          goto LABEL_41;
        v19 = (char *)v18 + 4 * v17;
        if ( *((_DWORD *)v19 + 8) == deckId )
          *((_DWORD *)v19 + 8) = 0;
      }
      ++v17;
    }
    v15 = v8->fields.tempFixMainQuestSupportDeckIds;
  }
  if ( v10 == deckId )
    v20 = 0;
  else
    v20 = deckId;
  if ( !v15 )
LABEL_40:
    sub_B7769C(this, *(_QWORD *)&idx);
  if ( v15->max_length <= idx )
  {
LABEL_41:
    v21 = sub_B776C8(this);
    sub_B77668(v21, 0LL);
  }
  v15->m_Items[v12 + 1] = v20;
}


void __fastcall SupportSelectRootComponent___EndLoadCommonBg_b__52_0(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B7769C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_17679036((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectRootComponent_o *v8; // x19
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v10; // x2

  v8 = this;
  if ( (byte_438E0A6 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_438E0A6 = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectConfirmMenu;
  if ( !this )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v8->fields.cancelConfirmMenu;
  if ( !this )
    goto LABEL_15;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.deckNameInputMenu;
  if ( !this )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.fixErrorDialog;
  if ( !this )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.cancelConfirmDeckIdDialog;
  if ( !this
    || (CancelConfirmDeckIdDialog__Init((CancelConfirmDeckIdDialog_o *)this, 0LL),
        (this = (SupportSelectRootComponent_o *)v8->fields.followerQuestInfomationDraw) == 0LL)
    || (FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL),
        (this = (SupportSelectRootComponent_o *)v8->fields.backSkinSprite) == 0LL)
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_B7769C(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v8->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v8, 0LL, v10);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v5; // x0
  struct SupportServantData_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BalanceConfig_c *v13; // x0
  struct SupportServantData_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BalanceConfig_c *v21; // x0
  struct SupportServantData_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AvalonSceneManager_o *Instance; // x0
  __int64 v30; // x1

  if ( (byte_438E09A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SupportServantData___TypeInfo);
    sub_B775C4(&StringLiteral_13426/*"SvtEqScrollBarValue"*/);
    byte_438E09A = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    v6 = (struct SupportServantData_array *)sub_B775DC(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v5->static_fields->SupportDeckMax);
    this->fields.supportServantData = v6;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.supportServantData,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (struct SupportServantData_array *)sub_B775DC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v13->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v14;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.orgSupportServantData,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v22 = (struct SupportServantData_array *)sub_B775DC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v21->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v22;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.tmpSupportServantData,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13426/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v30);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x10
  Il2CppObject *v11; // x1
  struct SupportInfoJump_o **p_supportInfoJump; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x10
  Il2CppObject *v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct SupportInfoJump_o *v25; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v28; // x20
  EventUpValSetupInfo_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v38; // x20
  EventUpValSetupInfo_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1

  if ( (byte_438E0A3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&SceneJumpInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SupportInfoJump_TypeInfo);
    sub_B775C4(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__);
    byte_438E0A3 = 1;
  }
  if ( data
    && (v10 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v10 - 1] == SupportInfoJump_TypeInfo )
      v11 = data;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  p_supportInfoJump = &this->fields.supportInfoJump;
  this->fields.supportInfoJump = (struct SupportInfoJump_o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.supportInfoJump,
    (System_Int32_array **)v11,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( data
    && (v19 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v19 - 1] == SceneJumpInfo_TypeInfo )
      v20 = data;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sceneJumpInfo,
    (System_Int32_array **)v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v21);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v25 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v25->fields.otherUserGameEntity || !v25->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)bgTxtSprite,
                                                                                       0,
                                                                                       0LL,
                                                                                       0LL);
        v38 = System_Linq_Enumerable__ToArray_int_(
                EventValUpEventIdHash,
                (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
        v39 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_24075556(v39, v38, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v39;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
          (System_Int32_array **)v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        SupportSelectRootComponent__StartUp(this, v46);
        return;
      }
    }
LABEL_33:
    sub_B7769C(bgTxtSprite, v22);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*p_supportInfoJump )
    goto LABEL_33;
  questRestrictionInfo = (*p_supportInfoJump)->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !bgTxtSprite )
    goto LABEL_33;
  OngoingQuestTargetEventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetOngoingQuestTargetEventIds(
                                                                                      (EventQuestMaster_o *)bgTxtSprite,
                                                                                      questRestrictionInfo->fields.questId,
                                                                                      questRestrictionInfo->fields.questPhase,
                                                                                      0LL,
                                                                                      0LL);
  v28 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  v29 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24075556(v29, v28, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v29;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v36, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B7769C(0LL, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, method);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void __fastcall SupportSelectRootComponent__initSupportServantDatas(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v2; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v4; // w20
  __int64 v5; // x22
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0

  v2 = this;
  if ( (byte_438E0CB & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B775C4(&SupportServantData_TypeInfo);
    byte_438E0CB = 1;
  }
  supportServantData = v2->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_B7769C(this, method);
  v4 = 0;
  v5 = 32LL;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) )
    {
      v7 = (SupportServantData_o *)sub_B77694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_B77684(v7, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v15 = sub_B776BC(0LL);
          sub_B77668(v15, 0LL);
        }
      }
      if ( v4 >= supportServantData->max_length )
      {
LABEL_17:
        v14 = sub_B776C8(this);
        sub_B77668(v14, 0LL);
      }
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) = (Il2CppClass *)v7;
      sub_B77560(
        (BattleServantConfConponent_o *)((char *)supportServantData + v5),
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      supportServantData = v2->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v4 >= supportServantData->max_length )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v5);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v4, v2->fields.eventSetupInfo, 0LL);
      supportServantData = v2->fields.supportServantData;
      v5 += 8LL;
      if ( supportServantData )
        continue;
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__isUpdate(
        SupportSelectRootComponent_o *this,
        bool servant,
        bool equip,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 v8; // x1
  __int64 CenterNum; // x24
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *v12; // x8
  SupportServantData_o *v13; // x23
  struct SupportServantData_array *v14; // x8
  struct SupportServantData_array *v15; // x8
  SupportServantData_o *v16; // x23
  char v17; // w20
  struct SupportServantData_array *v18; // x8
  __int64 v20; // x0

  if ( (byte_438E0CA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438E0CA = 1;
  }
  v7 = 0;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)servant);
  while ( 1 )
  {
    OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( v7 >= SHIDWORD(OldServant[1].fields.oldEquipIdList->m_Items[16]) )
    {
      v17 = 0;
      goto LABEL_27;
    }
    if ( servant )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_32;
      OldServant = supportServantData->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, v7, 0LL);
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v12->max_length )
        goto LABEL_32;
      v13 = OldServant;
      OldServant = v12->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, 0LL);
      if ( v13 != OldServant )
        break;
    }
    if ( equip )
    {
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v14->max_length )
        goto LABEL_32;
      OldServant = v14->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, 0LL);
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v15->max_length )
        goto LABEL_32;
      v16 = OldServant;
      OldServant = v15->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, 0LL);
      if ( v16 != OldServant )
        break;
    }
    ++v7;
  }
  v17 = 1;
LABEL_27:
  v18 = this->fields.supportServantData;
  if ( !v18 )
    goto LABEL_31;
  if ( (unsigned int)CenterNum >= v18->max_length )
  {
LABEL_32:
    v20 = sub_B776C8(OldServant);
    sub_B77668(v20, 0LL);
  }
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_31:
    sub_B7769C(OldServant, v8);
  return (v17 | SupportServantData__IsChangeDeckName(OldServant, 0LL)) & 1;
}


void __fastcall SupportSelectRootComponent__modifyCenterItemCallBack(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t CenterNum; // w20
  const MethodInfo *v4; // x1
  System_Int32_array *eventSupportDeckIds; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  struct System_Int32_array *mainSupportDeckIds; // x8
  const MethodInfo *v11; // x5
  int32_t v12; // w3
  char v13; // w1
  char v14; // w2
  int32_t v15; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v19; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_Int32_array *v21; // x8
  int32_t max_length; // w24
  System_Int32_array *v23; // x22
  int32_t v24; // w21
  int32_t v25; // w0
  int32_t v26; // w20
  const MethodInfo *v27; // x4
  __int64 v28; // x0

  if ( (byte_438E0A5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_438E0A5 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v4);
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_36;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  if ( !otherUserGameEntity )
  {
    followerInfo = supportInfoJump->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_35;
    questRestrictionInfo = supportInfoJump->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_39;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    if ( ReturnTypeByQuestId )
    {
      eventSupportDeckIds = followerInfo->fields.eventSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v19 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
      v12 = 0;
      v15 = v19 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v25 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
      v15 = 0;
      v12 = v25 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v13 = ReturnTypeByQuestId == 0;
    v14 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  eventSupportDeckIds = (System_Int32_array *)System_Linq_Enumerable__SequenceEqual_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                                (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)eventSupportDeckIds & 1) == 0 )
  {
    v20 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_1D2A0AC *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v20,
                            (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
    v21 = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !v21 )
      goto LABEL_39;
    max_length = v21->max_length;
    v23 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v24 = 0;
    }
    else
    {
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                    otherUserGameEntity->fields.mainSupportDeckIds,
                                                    eventSupportDeckIds->m_Items[CenterNum + 1],
                                                    (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
      v24 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v15 = 0;
      goto LABEL_27;
    }
    if ( !v23 )
      goto LABEL_39;
    if ( CenterNum < v23->max_length )
    {
      v15 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v23->m_Items[CenterNum + 1],
              (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v14 = CenterNum >= max_length;
      v13 = CenterNum < max_length;
      v12 = v24;
      goto LABEL_34;
    }
LABEL_40:
    v28 = sub_B776C8(eventSupportDeckIds);
    sub_B77668(v28, 0LL);
  }
  if ( !mainSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= mainSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                otherUserGameEntity->fields.mainSupportDeckIds,
                                                mainSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v12 = (_DWORD)eventSupportDeckIds + 1;
  v13 = 1;
  v14 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v15 = v12;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v13, v14, v12, v15, v11);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v26 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v26,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v7),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_B7769C(eventSupportDeckIds, v6);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v26,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__setEditUI(
        SupportSelectRootComponent_o *this,
        bool editOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blackMask; // x0
  bool v6; // w21
  const MethodInfo *v7; // x2
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectMenu_o *v9; // x8
  bool v10; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  bool v14; // w20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  blackMask = (UnityEngine_Component_o *)this->fields.blackMask;
  this->fields.isEdit = editOn;
  if ( !blackMask )
    goto LABEL_12;
  blackMask = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blackMask, 0LL);
  if ( !blackMask )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blackMask, editOn, 0LL);
  blackMask = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !blackMask )
    goto LABEL_12;
  v6 = !editOn;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)blackMask, !editOn, 0LL);
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_12;
  blackMask = (UnityEngine_Component_o *)supportSelectMenu->fields.indicator;
  if ( !blackMask )
    goto LABEL_12;
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)blackMask, v6, v7);
  v9 = this->fields.supportSelectMenu;
  if ( !v9 )
    goto LABEL_12;
  blackMask = (UnityEngine_Component_o *)v9->fields.namePanelCollider;
  if ( !blackMask )
    goto LABEL_12;
  v10 = v6;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)blackMask, v10, 0LL);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
  blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu;
  if ( !blackMask
    || (SupportSelectMenu__SetActiveFixDeckButton((SupportSelectMenu_o *)blackMask, v10, v12),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0LL)
    || (v14 = editOn,
        SupportSelectMenu__SetAbleToSwapDrag((SupportSelectMenu_o *)blackMask, v14, v13),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_12:
    sub_B7769C(blackMask, editOn);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, v14, v15);
  SupportSelectRootComponent__ChangeTitle(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__setInfoUIDisp(
        SupportSelectRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2
  struct SupportSelectMenu_o *supportSelectMenu; // x8

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, disp, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL)
    || (scrollView = (UnityEngine_Behaviour_o *)supportSelectMenu->fields.indicator) == 0LL )
  {
    sub_B7769C(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_43886D9 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectRootComponent___c_TypeInfo);
    byte_43886D9 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall SupportSelectRootComponent___c___ctor(SupportSelectRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SupportSelectRootComponent___c___EndSupportSelectMenu_b__66_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool __fastcall SupportSelectRootComponent___c___EndSupportSelectMenu_b__66_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


void __fastcall SupportSelectRootComponent___c___EndSupportSelectMenu_b__66_2(
        SupportSelectRootComponent___c_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_c *v2; // x0
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43886DA & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationUtility_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43886DA = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


bool __fastcall SupportSelectRootComponent___c___IsUpdateDeckId_b__67_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool __fastcall SupportSelectRootComponent___c___IsUpdateDeckId_b__67_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool __fastcall SupportSelectRootComponent___c___SetFriendInfoPrepareBattle_b__49_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


void __fastcall SupportSelectRootComponent___c__DisplayClass69_0___ctor(
        SupportSelectRootComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent___c__DisplayClass69_0___OnBackSelect_b__0(
        SupportSelectRootComponent___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v8; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  struct SupportSelectRootComponent_o *v12; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v15; // w21
  __int64 callback; // x27
  __int64 v17; // x9
  __int64 v18; // x0

  if ( (byte_43886DB & 1) == 0 )
  {
    sub_B775C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_43886DB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( isDecide )
  {
    if ( !_4__this )
      goto LABEL_15;
    SupportSelectRootComponent__ExecutionServantSet(
      _4__this,
      this->fields.result,
      this->fields.classPos,
      this->fields.entity,
      0LL);
  }
  else
  {
    if ( !_4__this )
      goto LABEL_15;
    supportServantData = _4__this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = _4__this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v18 = sub_B776C8(_4__this);
      sub_B77668(v18, 0LL);
    }
    v8 = supportServantData->m_Items[selectNum];
    if ( !v8 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v8->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v12->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v12->fields.tempFixEventQuestSupportDeckIds;
    v15 = (int)_4__this;
    callback = sub_B77694(SupportServantSelectMenu_CallbackFunc_TypeInfo);
    v17 = *(_QWORD *)Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 16) = v17;
    *(_QWORD *)(callback + 32) = v12;
    sub_B77560(callback + 32);
    if ( !supportServantSelectMenu )
LABEL_15:
      sub_B7769C(_4__this, isDecide);
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v15,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantSelectMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
}


void __fastcall SupportSelectRootComponent___c__DisplayClass71_0___ctor(
        SupportSelectRootComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent___c__DisplayClass71_0___EndSupportServantEquipListMenu_b__0(
        SupportSelectRootComponent___c__DisplayClass71_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v6; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v9; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v12; // x19
  struct SupportSelectRootComponent_o *v13; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v16; // w20
  __int64 callback; // x27
  __int64 v18; // x9
  __int64 v19; // x0

  if ( (byte_43886DC & 1) == 0 )
  {
    sub_B775C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_43886DC = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
    SupportSelectRootComponent__SetEquip(_4__this, this->fields.result, this->fields.classPos, this->fields.item, 0LL);
  }
  else
  {
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_15;
    supportServantData = v6->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v6->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v19 = sub_B776C8(_4__this);
      sub_B77668(v19, 0LL);
    }
    v9 = supportServantData->m_Items[selectNum];
    if ( !v9 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v9->fields.eventSetupInfo2;
    v12 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v13->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v13->fields.tempFixEventQuestSupportDeckIds;
    v16 = (int)_4__this;
    callback = sub_B77694(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    v18 = *(_QWORD *)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 16) = v18;
    *(_QWORD *)(callback + 32) = v13;
    sub_B77560(callback + 32);
    if ( !v12 )
LABEL_15:
      sub_B7769C(_4__this, isDecide);
    CommonUI__OpenSupportServantEquipListMenu(
      v12,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v16,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantEquipListMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
}


void __fastcall SupportSelectRootComponent___c__DisplayClass81_0___ctor(
        SupportSelectRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SupportSelectRootComponent___c__DisplayClass81_0___GetFixedErrorList_b__0(
        SupportSelectRootComponent___c__DisplayClass81_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0LL )
    sub_B7769C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}


void __fastcall SupportSelectRootComponent___c__DisplayClass98_0___ctor(
        SupportSelectRootComponent___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SupportSelectRootComponent___c__DisplayClass98_0___IsPossibleCopy_b__0(
        SupportSelectRootComponent___c__DisplayClass98_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0LL )
    sub_B7769C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}