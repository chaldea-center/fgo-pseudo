void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421711C & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectRootComponent_TypeInfo, v1);
    byte_421711C = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421711B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_421711B = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct System_Int32_array *)sub_B0D8BC(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_42170F6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12598/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_42170F6 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12598/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantData_o *CenterNum; // x0
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  SupportDeckNameInputMenu_CallbackFunc_o *v11; // x23
  __int64 v12; // x0

  if ( (byte_4217115 & 1) == 0 )
  {
    sub_B0D8A4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_4217115 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v12 = sub_B0D9A8(CenterNum);
    sub_B0D948(v12, 0LL);
  }
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v11 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B0D974(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v9,
                                                           v10),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_B0D97C(CenterNum);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v11, 0LL);
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
    sub_B0D97C(titleInfo);
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
  __int64 v5; // x1
  __int64 CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v11; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v13; // x22
  SupportServantData_o *v14; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v15; // x23
  __int64 v16; // x0

  if ( (byte_421710E & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_421710E = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v11 = this->fields.copyTargetDeckId - 1, v11 >= max_length) )
  {
    v16 = sub_B0D9A8(CenterNum);
    sub_B0D948(v16, 0LL);
  }
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v13 = supportServantData->m_Items[(int)CenterNum];
  v14 = supportServantData->m_Items[v11];
  v15 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                               SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v15,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_B0D97C(CenterNum);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v13, v14, v15, 0LL);
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

  if ( (byte_4217119 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, orgData);
    byte_4217119 = 1;
  }
  if ( !orgData )
LABEL_19:
    sub_B0D97C(this);
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
          v12 = sub_B0D9A8(this);
          sub_B0D948(v12, 0LL);
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
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4217108 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isDecide);
    byte_4217108 = 1;
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
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, v8, v9);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v10);
      return;
    }
LABEL_14:
    sub_B0D97C(cancelConfirmMenu);
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
  __int64 v5; // x1
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4217107 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isDecide);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    byte_4217107 = 1;
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
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21287/*"ok"*/, v7);
      return;
    }
LABEL_14:
    sub_B0D97C(cancelConfirmDeckIdDialog);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21

  if ( (byte_4217116 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11);
    byte_4217116 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_B0D840(
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
      SupportSelectEditMenu__Close(supportEditMenu, v12);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_31733552(deckNameInputMenu, v17, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(supportEditMenu);
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
    sub_B0D97C(0LL);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B0D97C(0LL);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_42170FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_42170FF = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  const MethodInfo *v10; // x1
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  __int64 v13; // x0

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
        v13 = sub_B0D9A8(CenterNum);
        sub_B0D948(v13, 0LL);
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
        SupportSelectCopyDeckSelectMenu__Close((SupportSelectCopyDeckSelectMenu_o *)CenterNum, v10);
        CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportServantSelectMenu;
        if ( CenterNum )
        {
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)CenterNum, 0LL);
          CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, v11, v12);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B0D97C(CenterNum);
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
    sub_B0D97C(0LL);
  SupportSelectConfirmMenu__Close_29056984(supportSelectConfirmMenu, 0LL, method);
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
  const MethodInfo *v9; // x1
  int32_t i; // w21
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  if ( (byte_4217112 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isDecide);
    byte_4217112 = 1;
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
        v18 = sub_B0D9A8(confirmDeckMenu);
        sub_B0D948(v18, 0LL);
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
          v11 = this->fields.supportServantData;
          if ( !v11 )
            goto LABEL_34;
          if ( v8 >= v11->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v11->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v12 = this->fields.supportServantData;
            if ( !v12 )
              goto LABEL_34;
            if ( v8 >= v12->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v12->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
          v13 = this->fields.supportServantData;
          if ( !v13 )
            goto LABEL_34;
          if ( v8 >= v13->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v13->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v14 = this->fields.supportServantData;
            if ( !v14 )
              goto LABEL_34;
            if ( v8 >= v14->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v14->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v9);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v15, v16);
            SupportSelectRootComponent__setEditUI(this, 1, v17);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_B0D97C(confirmDeckMenu);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *titleInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_42170F1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_42170F1 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v8, 1, 1, 0LL);
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
  const MethodInfo *v8; // x1
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_4217110 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isDecide);
    byte_4217110 = 1;
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
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v11->max_length )
          goto LABEL_32;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_31;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v12->max_length )
      {
LABEL_32:
        v17 = sub_B0D9A8(confirmDeckMenu);
        sub_B0D948(v17, 0LL);
      }
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v13 = this->fields.supportServantData;
        if ( !v13 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v13->max_length )
          goto LABEL_32;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_31;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v14, v15);
        SupportSelectRootComponent__setEditUI(this, 1, v16);
        return;
      }
    }
LABEL_31:
    sub_B0D97C(confirmDeckMenu);
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
  const MethodInfo *v8; // x1
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  if ( (byte_4217114 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isDecide);
    byte_4217114 = 1;
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
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_23;
        if ( (unsigned int)CenterNum >= v11->max_length )
        {
LABEL_24:
          v15 = sub_B0D9A8(confirmDeckMenu);
          sub_B0D948(v15, 0LL);
        }
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_23;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v12, v13);
        SupportSelectRootComponent__setEditUI(this, 1, v14);
        return;
      }
    }
LABEL_23:
    sub_B0D97C(confirmDeckMenu);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v13; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v14; // x22
  const MethodInfo *v15; // x4
  __int64 v16; // x0

  if ( (byte_421710D & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_421710D = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, *(const MethodInfo **)&deckId);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v7);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= supportServantData->max_length )
    {
      v16 = sub_B0D9A8(copyDeckSelectMenu);
      sub_B0D948(v16, 0LL);
    }
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v13 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v14 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                          SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                          v8,
                                                          v9);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_B0D97C(copyDeckSelectMenu);
    SupportSelectEditMenu__Open(supportEditMenu, v13, isEdit, v14, v15);
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
  const MethodInfo *v5; // x1

  if ( (byte_4217100 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4217100 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_B0D97C(supportSelectMenu);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  unsigned __int64 v7; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v9; // x11
  __int64 v10; // x0

  if ( (byte_42170FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_42170FD = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_17;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_17;
  if ( (int)*(_QWORD *)&supportServantData->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&supportServantData->max_length;
    do
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B0D9A8(supportSelectMenu);
        sub_B0D948(v10, 0LL);
      }
      v9 = supportServantData->m_Items[v7];
      if ( v9 && !v9->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_17;
        v9->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.swapButton;
      }
      max_length = supportServantData->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_17:
    sub_B0D97C(supportSelectMenu);
  SupportSelectMenu__Redisp(supportSelectMenu, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServantWithQuest(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42170FE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_42170FE = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B0D97C(v12);
    CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
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
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_B0D97C(CenterNum);
  SupportSelectMenu__moveCenterItem(supportSelectMenu, CenterNum, v7);
  switch ( resultKind )
  {
    case 0:
      SupportSelectRootComponent__SelectCopySupportDeck(this, v8);
      break;
    case 1:
      SupportSelectRootComponent__RemoveAll(this, v8);
      break;
    case 2:
      SupportSelectRootComponent__InitAll(this, v8);
      break;
    case 3:
      SupportSelectRootComponent__RemoveAllEquip(this, v8);
      break;
    case 4:
      SupportSelectRootComponent__ChangeDeckName(this, v8);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  int32_t CenterNum; // w22
  const MethodInfo *v41; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  int32_t v46; // w23
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v51; // x21
  CancelConfirmMenu_CallbackFunc_o *v52; // x22
  const MethodInfo *v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  struct SupportServantData_array *v56; // x22
  SupportServantData_o *v57; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v60; // x24
  System_Int32_array *v61; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  SupportSelectMenu_o *v63; // x20
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  bool v66; // w1
  SupportSelectRootComponent_o *v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  struct SupportServantData_array *v70; // x8
  SupportServantData_o *v71; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v75; // x21
  const MethodInfo *v76; // x3
  SupportSelectMenu_o *v77; // x20
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  struct SupportServantData_array *v80; // x8
  __int64 v81; // x21
  __int64 v82; // x22
  __int64 v83; // x23
  struct SupportServantData_array *v84; // x8
  SupportServantData_o *v85; // x8
  struct SupportServantData_array *v86; // x8
  SupportServantData_o *v87; // x8
  int v88; // w22
  struct SupportServantData_array *v89; // x8
  SupportServantData_o *v90; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v92; // w22
  struct SupportServantData_array *v93; // x8
  SupportServantData_o *v94; // x8
  QuestRestrictionInfo_o *v95; // x20
  __int64 v96; // x23
  __int64 v97; // x24
  int32_t v98; // w0
  int32_t v99; // w23
  int32_t v100; // w24
  PartyOrganizationUtility_c *v101; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v103; // x8
  const MethodInfo *v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  struct SupportServantData_array *v107; // x22
  SupportServantData_o *v108; // x8
  EventUpValSetupInfo_o *v109; // x27
  System_Int32_array *v110; // x25
  System_Int32_array *v111; // x26
  CommonUI_o *v112; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v113; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v115; // x2
  const MethodInfo *v116; // x1
  struct SupportServantData_array *v117; // x8
  int64_t v118; // x21
  struct SupportServantData_array *v119; // x8
  SupportServantData_o *v120; // x8
  __int64 v121; // x1
  __int64 v122; // x2
  struct SupportServantData_array *v123; // x8
  SupportServantData_o *v124; // x8
  int32_t kind; // w20
  ServantLeaderInfo_o *v126; // x21
  CommonUI_o *v127; // x22
  ServantStatusDialog_EndDelegate_o *v128; // x23
  struct SupportServantData_array *v129; // x8
  struct SupportServantData_array *v130; // x8
  int64_t v131; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  struct SupportServantData_array *v133; // x8
  SupportServantData_o *v134; // x8
  int32_t v135; // w20
  __int64 v136; // x1
  __int64 v137; // x2
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v139; // x21
  ServantStatusDialog_EndDelegate_o *v140; // x23
  const MethodInfo *v141; // x1
  int32_t v142; // w1
  const MethodInfo *v143; // x2
  __int64 v144; // x1
  __int64 v145; // x2
  struct SupportServantData_array *v146; // x8
  SupportServantData_o *v147; // x8
  int32_t v148; // w20
  int64_t v149; // x21
  CommonUI_o *v150; // x22
  ServantStatusDialog_FormationEndDelegate_o *v151; // x23
  CommonUI_o *v152; // x20
  __int64 v153; // x1
  __int64 v154; // x2
  ServantStatusDialog_EndDelegate_o *v155; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v157; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v160; // x23
  struct SupportSelectRootComponent___c_StaticFields *v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v168; // x0
  int32_t v169; // w0
  __int64 v170; // x1
  __int64 v171; // x2
  SupportSelectRootComponent___c_c *v172; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v174; // w20
  struct SupportSelectRootComponent___c_StaticFields *v175; // x9
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v177; // x24
  struct SupportSelectRootComponent___c_StaticFields *v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v185; // x0
  struct SupportServantData_array *v186; // x8
  SupportServantData_o *v187; // x0
  const MethodInfo *v188; // x1
  CommonUI_o *Instance; // x20
  __int64 v190; // x1
  __int64 v191; // x2
  System_String_o *v192; // x21
  SupportSelectRootComponent___c_c *v193; // x8
  struct SupportSelectRootComponent___c_StaticFields *v194; // x9
  System_Action_o *_9__66_2; // x23
  System_String_o *v196; // x22
  Il2CppObject *v197; // x24
  struct SupportSelectRootComponent___c_StaticFields *v198; // x0
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  __int64 v205; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  if ( (byte_42170F7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v8);
    sub_B0D8A4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&CancelConfirmMenu_CallbackFunc_TypeInfo, v11);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_B0D8A4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v16);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    sub_B0D8A4(&SoundManager_TypeInfo, v26);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v27);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v28);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndShowEquip__, v29);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v30);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndShowServant__, v31);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v32);
    sub_B0D8A4(&Method_SupportSelectRootComponent_OnBackSelect__, v33);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v34);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v35);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v36);
    sub_B0D8A4(&SupportSelectRootComponent___c_TypeInfo, v37);
    sub_B0D8A4(&StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v38);
    sub_B0D8A4(&StringLiteral_1/*""*/, v39);
    byte_42170F7 = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
  v46 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v45);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_158;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_211;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_212;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v51 = supportServantData->m_Items[CenterNum];
      v52 = (CancelConfirmMenu_CallbackFunc_o *)sub_B0D974(CancelConfirmMenu_CallbackFunc_TypeInfo, v47, v48);
      CancelConfirmMenu_CallbackFunc___ctor(
        v52,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_211;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v51, v52, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v45);
      if ( (isUpdate & 1) != 0 )
      {
        v70 = this->fields.supportServantData;
        if ( !v70 )
          goto LABEL_211;
        if ( CenterNum < v70->max_length )
        {
          v71 = v70->m_Items[CenterNum];
          if ( v71 && SupportServantData__get_IsNoServant(v71, 0LL) )
            goto LABEL_30;
          SupportSelectRootComponent__SaveTemp(this, -1, v69);
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
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, v142, v143);
          goto LABEL_158;
        }
LABEL_212:
        v205 = sub_B0D9A8(isUpdate);
        sub_B0D948(v205, 0LL);
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v47);
        v67 = this;
        v66 = 0;
        this->fields.isDragSwapState = 0;
LABEL_159:
        SupportSelectRootComponent__setEditUI(v67, v66, v65);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v157 = SupportSelectRootComponent___c_TypeInfo;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v157 = SupportSelectRootComponent___c_TypeInfo;
      }
      static_fields = v157->static_fields;
      _9__66_0 = static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( (BYTE3(v157->vtable._0_Equals.methodPtr) & 4) != 0 && !v157->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v157);
          static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v160 = (Il2CppObject *)static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v68, v69);
        System_Func_int__bool____ctor(
          _9__66_0,
          v160,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v161 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v161->__9__66_0 = _9__66_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v161->__9__66_0,
          (System_Int32_array **)_9__66_0,
          v162,
          v163,
          v164,
          v165,
          v166,
          v167);
      }
      v168 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
      v169 = System_Linq_Enumerable__Count_int_(
               v168,
               (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      v172 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v174 = v169;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v172 = SupportSelectRootComponent___c_TypeInfo;
      }
      v175 = v172->static_fields;
      _9__66_1 = v175->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( (BYTE3(v172->vtable._0_Equals.methodPtr) & 4) != 0 && !v172->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v172);
          v175 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v177 = (Il2CppObject *)v175->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v170, v171);
        System_Func_int__bool____ctor(
          _9__66_1,
          v177,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v178 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v178->__9__66_1 = _9__66_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v178->__9__66_1,
          (System_Int32_array **)_9__66_1,
          v179,
          v180,
          v181,
          v182,
          v183,
          v184);
      }
      v185 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v185,
                   (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v174 < 1 || (int)isUpdate <= 0 )
      {
        v186 = this->fields.supportServantData;
        if ( !v186 )
          goto LABEL_211;
        if ( CenterNum >= v186->max_length )
          goto LABEL_212;
        v187 = v186->m_Items[CenterNum];
        if ( v187 && SupportServantData__get_IsNoServant(v187, 0LL) )
        {
LABEL_30:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v75 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                             SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                             v73,
                                                             v74);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v75,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v75, v76);
            return;
          }
LABEL_211:
          sub_B0D97C(isUpdate);
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
      SupportSelectRootComponent__RequestApi(this, v188);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v53);
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
      v56 = this->fields.supportServantData;
      if ( !v56 )
        goto LABEL_211;
      if ( v56->max_length <= deckNum )
        goto LABEL_212;
      v57 = v56->m_Items[deckNum];
      if ( !v57 )
        goto LABEL_211;
      eventSetupInfo2 = v57->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v60 = this->fields.tempFixMainQuestSupportDeckIds;
      v61 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                              SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                              v54,
                                                              v55);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_211;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v56,
        deckNum,
        classPos,
        eventSetupInfo2,
        v46,
        v60,
        v61,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v104);
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v107 = this->fields.supportServantData;
      if ( !v107 )
        goto LABEL_211;
      if ( v107->max_length <= deckNum )
        goto LABEL_212;
      v108 = v107->m_Items[deckNum];
      if ( !v108 )
        goto LABEL_211;
      v109 = v108->fields.eventSetupInfo2;
      v110 = this->fields.tempFixMainQuestSupportDeckIds;
      v111 = this->fields.tempFixEventQuestSupportDeckIds;
      v112 = (CommonUI_o *)isUpdate;
      v113 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B0D974(
                                                             SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                             v105,
                                                             v106);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v113,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v112 )
        goto LABEL_211;
      CommonUI__OpenSupportServantEquipListMenu(v112, v107, deckNum, classPos, v109, v46, v110, v111, v113, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !supportSelectMenu )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v115);
      SupportSelectRootComponent__ChangeDeckName(this, v116);
      return;
    case 5:
      v63 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v63 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v63, isUpdate, v64);
      v66 = 1;
      this->fields.isDragSwapState = 1;
      v67 = this;
      goto LABEL_159;
    case 6:
      v77 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v77 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v77, isUpdate, v78);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v79);
      return;
    case 7:
      v80 = this->fields.supportServantData;
      if ( !v80 )
        goto LABEL_211;
      if ( v80->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v80->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v81 = *(_QWORD *)(isUpdate + 24);
      if ( !v81 )
        goto LABEL_140;
      v83 = *(_QWORD *)(v81 + 48);
      v82 = *(_QWORD *)(v81 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v206.fields.currentCryptoKey = v83;
      *(_QWORD *)&v206.fields.fakeValue = v82;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v206, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_140;
      v84 = this->fields.supportServantData;
      if ( !v84 )
        goto LABEL_211;
      if ( v84->max_length <= deckNum )
        goto LABEL_212;
      v85 = v84->m_Items[deckNum];
      if ( !v85 )
        goto LABEL_211;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v81,
                   v85->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_140;
      v86 = this->fields.supportServantData;
      if ( !v86 )
        goto LABEL_211;
      if ( v86->max_length <= deckNum )
        goto LABEL_212;
      v87 = v86->m_Items[deckNum];
      if ( !v87 )
        goto LABEL_211;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v81, v87->fields.questRestrictionInfo, 0LL) )
        goto LABEL_140;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      v88 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( v88 < 1 )
        goto LABEL_73;
      v89 = this->fields.supportServantData;
      if ( !v89 )
        goto LABEL_211;
      if ( v89->max_length <= deckNum )
        goto LABEL_212;
      v90 = v89->m_Items[deckNum];
      if ( !v90 )
        goto LABEL_211;
      questRestrictionInfo = v90->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_211;
      v92 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfo, v92, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_73;
      v93 = this->fields.supportServantData;
      if ( !v93 )
        goto LABEL_211;
      if ( v93->max_length <= deckNum )
        goto LABEL_212;
      v94 = v93->m_Items[deckNum];
      if ( !v94 )
        goto LABEL_211;
      v95 = v94->fields.questRestrictionInfo;
      v97 = *(_QWORD *)(v81 + 48);
      v96 = *(_QWORD *)(v81 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v207.fields.currentCryptoKey = v97;
      *(_QWORD *)&v207.fields.fakeValue = v96;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v207, 0LL);
      v99 = *(_DWORD *)(v81 + 64);
      v100 = v98;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v81, 0LL);
      if ( !v95 )
        goto LABEL_211;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v95, v100, v99, isUpdate, v92, 1, 0LL) )
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
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v141);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( *(_BYTE *)(isUpdate + 140) )
      {
        v101 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v101 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v101->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_211;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v192 = (System_String_o *)isUpdate;
            v193 = SupportSelectRootComponent___c_TypeInfo;
            if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v193 = SupportSelectRootComponent___c_TypeInfo;
            }
            v194 = v193->static_fields;
            _9__66_2 = v194->__9__66_2;
            v196 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( (BYTE3(v193->vtable._0_Equals.methodPtr) & 4) != 0 && !v193->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v193);
                v194 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              }
              v197 = (Il2CppObject *)v194->__9;
              _9__66_2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v190, v191);
              System_Action___ctor(
                _9__66_2,
                v197,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v198 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v198->__9__66_2 = _9__66_2;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v198->__9__66_2,
                (System_Int32_array **)_9__66_2,
                v199,
                v200,
                v201,
                v202,
                v203,
                v204);
            }
            if ( !Instance )
              goto LABEL_211;
            CommonUI__OpenNotificationDialog(Instance, v196, v192, _9__66_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
      v103 = this->fields.supportInfoJump;
      if ( !v103 )
        goto LABEL_211;
      v103->fields.selectDeckId = *(_DWORD *)(v81 + 16);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_211;
      if ( !SupportInfoJump__ReturnScene(
              (SupportInfoJump_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v117 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v117 )
        goto LABEL_211;
      if ( v117->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v117->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v118 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_140;
      v119 = this->fields.supportServantData;
      if ( !v119 )
        goto LABEL_211;
      if ( v119->max_length <= deckNum )
        goto LABEL_212;
      v120 = v119->m_Items[deckNum];
      if ( !v120 )
        goto LABEL_211;
      if ( v120->fields.isFriendInfo )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v123 = this->fields.supportServantData;
        if ( !v123 )
          goto LABEL_211;
        if ( v123->max_length <= deckNum )
          goto LABEL_212;
        v124 = v123->m_Items[deckNum];
        if ( !v124 )
          goto LABEL_211;
        kind = v124->fields.kind;
        v126 = *(ServantLeaderInfo_o **)(v118 + 24);
        v127 = (CommonUI_o *)isUpdate;
        v128 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v121, v122);
        ServantStatusDialog_EndDelegate___ctor(
          v128,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v127 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_17029768(v127, kind, v126, v128, 0LL);
      }
      else
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v146 = this->fields.supportServantData;
        if ( !v146 )
          goto LABEL_211;
        if ( v146->max_length <= deckNum )
          goto LABEL_212;
        v147 = v146->m_Items[deckNum];
        if ( !v147 )
          goto LABEL_211;
        v148 = v147->fields.kind;
        v149 = *(_QWORD *)(v118 + 56);
        v150 = (CommonUI_o *)isUpdate;
        v151 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B0D974(
                                                               ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                               v144,
                                                               v145);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v151,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v150 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_17026940(v150, v148, v149, v151, 0LL, 0LL);
      }
      return;
    case 9:
      v129 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v129 )
        goto LABEL_211;
      if ( v129->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v129->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_140;
      v130 = this->fields.supportServantData;
      if ( !v130 )
        goto LABEL_211;
      if ( v130->max_length <= deckNum )
        goto LABEL_212;
      v131 = isUpdate;
      isUpdate = (int64_t)v130->m_Items[deckNum];
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
      v133 = this->fields.supportServantData;
      if ( !v133 )
        goto LABEL_211;
      if ( v133->max_length <= deckNum )
        goto LABEL_212;
      v134 = v133->m_Items[deckNum];
      if ( !v134 )
        goto LABEL_211;
      if ( v134->fields.isFriendInfo )
      {
        if ( v134->fields.kind == 5 )
          v135 = 14;
        else
          v135 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_211;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v139 = (CommonUI_o *)isUpdate;
        v140 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v136, v137);
        ServantStatusDialog_EndDelegate___ctor(
          v140,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v139 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog_17032132(v139, v135, equipTarget1, v140, 0LL, 0LL);
      }
      else
      {
        v152 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v155 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v153, v154);
        ServantStatusDialog_EndDelegate___ctor(
          v155,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v152 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog(v152, 11, v131, 1, v155, 0LL, 0LL);
      }
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  struct SupportServantData_array *supportServantData; // x8
  int32_t v29; // w24
  struct SupportServantData_array *v30; // x8
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36[3]; // [xsp+40h] [xbp-B0h] BYREF

  if ( (byte_42170FC & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_42170FC = 1;
  }
  memset(&v36[1], 0, 64);
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_18713680(equipTarget1->fields.svtId, 0LL);
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
    v16 = BasicHelper__DecryptValue_18713680(v15->fields.svtId, 0LL);
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
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v35, 0LL);
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
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v34, 0LL);
  if ( classPos1 != classPos2 )
  {
    v26 = v24;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v25);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_43;
    v29 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_43;
      SupportServantData__setEquipData(CenterNum, classPos1, v26, v16, 0LL);
      v30 = this->fields.supportServantData;
      if ( !v30 )
        goto LABEL_43;
      if ( v29 < v30->max_length )
      {
        CenterNum = v30->m_Items[v29];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v20, v14, 0LL);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v29, v31);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v32);
              return;
            }
          }
        }
LABEL_43:
        sub_B0D97C(CenterNum);
      }
    }
    v33 = sub_B0D9A8(CenterNum);
    sub_B0D948(v33, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSupportServantEquipListMenu(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  __int64 v27; // x20
  SupportServantData_o *UserServantLeaderEntity; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v45; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v47; // x23
  UserServantLeaderEntity_o *v48; // x24
  UserServantLeaderEntity_o *v49; // x25
  int32_t v50; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  int32_t v52; // w25
  ServantEntity_o *Entity; // x24
  struct UserServantLeaderEntity_array *v54; // x8
  PartyOrganizationUtility_o *v55; // x23
  UserServantLeaderEntity_o *v56; // x25
  UserServantLeaderEntity_o *v57; // x26
  UserServantEntity_o *v58; // x8
  System_String_o *v59; // x22
  __int64 v60; // x8
  int32_t v61; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  System_Text_StringBuilder_o *v66; // x21
  System_String_o *v67; // x0
  CommonUI_o *Instance; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  System_Action_o *v71; // x23
  CommonUI_o *v72; // x19
  System_String_o *v73; // x21
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  __int64 v76; // x1
  __int64 v77; // x2
  CommonConfirmDialog_ClickDelegate_o *v78; // x24
  __int64 v79; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_42170FA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v18);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v20);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v21);
    sub_B0D8A4(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v23);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v24);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v25);
    sub_B0D8A4(&StringLiteral_1/*""*/, v26);
    byte_42170FA = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v27 = sub_B0D974(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_52;
  *(_QWORD *)(v27 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v27 + 32) = item;
  v35 = v27 + 32;
  *(_DWORD *)(v27 + 24) = result;
  *(_DWORD *)(v27 + 28) = classPos;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)item, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v27 + 24) == 1 && *(_QWORD *)v35 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_52;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v79 = sub_B0D9A8(UserServantLeaderEntity);
      sub_B0D948(v79, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_52;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v27 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v45 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v35 )
          goto LABEL_52;
        if ( *(_QWORD *)(*(_QWORD *)v35 + 128LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v45->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_52;
          v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v49 = userServantLeaderEntityList->m_Items[6];
          v48 = userServantLeaderEntityList->m_Items[7];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v84.fields.currentCryptoKey = v49;
          *(_QWORD *)&v84.fields.fakeValue = v48;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                              v84,
                                                              0LL);
          if ( !v45->fields.userServantLeaderEntityList )
            goto LABEL_52;
          v50 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v45->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v35 )
            goto LABEL_52;
          v51 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v35 + 128LL);
          if ( !v51 )
            goto LABEL_52;
          v52 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                              v51[1],
                                                              0LL);
          if ( !v47 )
            goto LABEL_52;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v47,
                 &skillName,
                 &actMaxRarity,
                 v50,
                 v52,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity,
                                              *(_DWORD *)&v45->fields.isFriendInfo,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                }
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v54 = v45->fields.userServantLeaderEntityList;
                if ( v54 )
                {
                  v55 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v57 = v54->m_Items[8];
                  v56 = v54->m_Items[9];
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v85.fields.currentCryptoKey = v57;
                  *(_QWORD *)&v85.fields.fakeValue = v56;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                      v85,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v58 = (UserServantEntity_o *)v45->fields.userServantLeaderEntityList;
                    if ( v58 )
                    {
                      v59 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v58, 0LL);
                      v60 = *(_QWORD *)v35;
                      if ( *(_QWORD *)v35 )
                      {
                        v61 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v60 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          }
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(
                                                                              Name,
                                                                              0LL);
                          if ( v55 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v55,
                                                     &maxLength,
                                                     v59,
                                                     v61,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity,
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                maxLength,
                                0LL);
                              v66 = (System_Text_StringBuilder_o *)sub_B0D974(
                                                                     System_Text_StringBuilder_TypeInfo,
                                                                     v64,
                                                                     v65);
                              System_Text_StringBuilder___ctor(v66, 0LL);
                              if ( v66 )
                              {
                                System_Text_StringBuilder__Append_42155400(v66, RarityInvalidMessage, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_42155400(v66, v67, 0LL);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v71 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v69, v70);
                                System_Action___ctor(
                                  v71,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu(Instance, v71, 0LL);
                                  v72 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v73 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                                                             v66,
                                                             v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                 v76,
                                                                                 v77);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v78,
                                    (Il2CppObject *)v27,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v72 )
                                  {
                                    CommonUI__OpenConfirmDialog_17016836(
                                      v72,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v73,
                                      v74,
                                      v75,
                                      v78,
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
            sub_B0D97C(UserServantLeaderEntity);
          }
        }
      }
    }
  }
  SupportSelectRootComponent__SetEquip(
    this,
    *(_DWORD *)(v27 + 24),
    *(_DWORD *)(v27 + 28),
    *(SupportServantEquipListViewItem_o **)(v27 + 32),
    v42);
}


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
  const MethodInfo *v15; // x1
  __int64 v16; // x0

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
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
  }
LABEL_22:
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v10);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__Redisp((SupportSelectMenu_o *)this, v15);
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__GetCurrentDeckID(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  return SupportSelectRootComponent__getCenterNum(this, method) + 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall SupportSelectRootComponent__GetFixedErrorList(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        int32_t nowDeckId,
        System_Int32_array *fixDeckIds,
        bool isMain,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
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
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  int32_t CenterNum; // w22
  __int64 Instance; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  BalanceConfig_c *v37; // x8
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v39; // x24
  int32_t v40; // w9
  int32_t v41; // w26
  __int64 v42; // x23
  __int64 v43; // x19
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x28
  struct SupportServantData_array *v52; // x8
  SupportServantData_o *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  ServantEntity_o *v57; // x27
  int32_t Rarity; // w0
  int v59; // w19
  int64_t v60; // x2
  int32_t v61; // w28
  System_String_o *v62; // x19
  Il2CppObject *v63; // x25
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x25
  Il2CppObject *v67; // x19
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x1
  __int64 v72; // x0
  __int64 v74; // [xsp+10h] [xbp-90h]
  signed __int64 v75; // [xsp+18h] [xbp-88h]
  ServantLimitImageMaster_o *v76; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // [xsp+38h] [xbp-68h]
  int v80; // [xsp+44h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4217102 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_B0D8A4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v19);
    sub_B0D8A4(&int_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v22);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v24);
    sub_B0D8A4(&NetworkManager_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v27);
    sub_B0D8A4(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v28);
    sub_B0D8A4(&StringLiteral_12519/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v29);
    sub_B0D8A4(&StringLiteral_12520/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v30);
    byte_4217102 = 1;
  }
  entity = 0LL;
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&idx,
                                                                                                  *(_QWORD *)&nowDeckId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v31) )
      return (System_Collections_Generic_List_string__o *)v79;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v31) )
  {
    return (System_Collections_Generic_List_string__o *)v79;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v32);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_76:
    sub_B0D97C(Instance);
  }
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v76 = (ServantLimitImageMaster_o *)Instance;
  v37 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v37->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v37->static_fields->FixEventSupportDeckNum;
  }
  v75 = *p_FixMainSupportDeckNum;
  if ( (int)v75 >= 1 )
  {
    v39 = 0LL;
    v74 = (unsigned int)idx;
    do
    {
      if ( v39 != v74 )
      {
        if ( !fixDeckIds )
          goto LABEL_76;
        if ( v39 >= fixDeckIds->max_length )
        {
LABEL_77:
          v72 = sub_B0D9A8(Instance);
          sub_B0D948(v72, 0LL);
        }
        v40 = fixDeckIds->m_Items[v39 + 1];
        if ( v40 )
        {
          v41 = 0;
          v42 = v40 - 1;
          while ( 1 )
          {
            if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v37 = BalanceConfig_TypeInfo;
            }
            if ( v41 >= v37->static_fields->SupportDeckMemberMax )
              break;
            v43 = sub_B0D974(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v35, v36);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v43,
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
                                  v41,
                                  0LL);
            if ( !v43 )
              goto LABEL_76;
            *(_QWORD *)(v43 + 16) = Instance;
            v51 = v43 + 16;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v43 + 16),
              (System_Int32_array **)Instance,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            if ( !*(_QWORD *)(v43 + 16) )
              goto LABEL_76;
            if ( *(_DWORD *)(*(_QWORD *)(v43 + 16) + 64LL) )
            {
              v52 = this->fields.supportServantData;
              if ( !v52 )
                goto LABEL_76;
              if ( (unsigned int)v42 >= v52->max_length )
                goto LABEL_77;
              v53 = v52->m_Items[v42];
              if ( !v53 )
                goto LABEL_76;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v53->fields.userServantLeaderEntityList;
              v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                         System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                                                         v35,
                                                                                         v36);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v55,
                (Il2CppObject *)v43,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                (const MethodInfo_26189B8 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
              v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v55,
                      (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           v56,
                           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v51 )
                  goto LABEL_76;
                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_76;
                Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      *(_DWORD *)(*(_QWORD *)v51 + 64LL),
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v51 )
                  goto LABEL_76;
                v57 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v51 + 16LL);
                if ( !Instance )
                  goto LABEL_76;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v59 = Rarity;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v51 )
                    goto LABEL_76;
                  v60 = Instance;
                  Instance = (__int64)Master_WarQuestSelectionMaster;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_76;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v60,
                               *(_DWORD *)(*(_QWORD *)v51 + 64LL),
                               0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v51 )
                      goto LABEL_76;
                    if ( !entity )
                      goto LABEL_76;
                    Instance = (__int64)v76;
                    if ( !v76 )
                      goto LABEL_76;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v76,
                                 *(_DWORD *)(*(_QWORD *)v51 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_76;
                    v61 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v61 = -1;
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v80 = v59;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v80);
                  if ( !v57 )
                    goto LABEL_76;
                  v67 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v57, v61, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v57, 0LL);
                  v65 = System_String__Format_43850968(v66, v67, Name, ClassName, 0LL);
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v57 )
                    goto LABEL_76;
                  v62 = (System_String_o *)Instance;
                  v63 = (Il2CppObject *)ServantEntity__getName(v57, -1, -1, 0LL);
                  v64 = (Il2CppObject *)ServantEntity__getClassName(v57, 0LL);
                  v65 = System_String__Format_43845440(v62, v63, v64, 0LL);
                }
                v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
                Instance = (__int64)v79;
                if ( !v79 )
                  goto LABEL_76;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v79,
                  v70,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            ++v41;
            v37 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v39;
    }
    while ( (__int64)v39 < v75 );
  }
  return (System_Collections_Generic_List_string__o *)v79;
}


void __fastcall SupportSelectRootComponent__Init(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x4
  __int64 v12; // x0

  if ( (byte_4217111 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_4217111 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v12 = sub_B0D9A8(CenterNum);
    sub_B0D948(v12, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B0D97C(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v9, v10, v11);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportServantData_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42170E9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&SupportServantData___TypeInfo, v3);
    byte_42170E9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_B0D8BC(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SupportSelectRootComponent__RefreshSupportServantData(this, v12);
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

  if ( (byte_421711A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_421711A = 1;
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
      v16 = sub_B0D9A8(Servant);
      sub_B0D948(v16, 0LL);
    }
    v14 = v13->m_Items[i];
    if ( !v14 )
LABEL_34:
      sub_B0D97C(Servant);
    if ( System_String__op_Inequality(v12->fields._deckName_k__BackingField, v14->fields._deckName_k__BackingField, 0LL) )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x0

  if ( (byte_42170EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_42170EB = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_42170EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_42170EA = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixMainQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsPossibleCopy(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  SupportServantData_o *CenterNum; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  il2cpp_array_size_t v16; // w22
  unsigned __int64 v17; // x27
  __int64 v18; // x28
  int v19; // w8
  il2cpp_array_size_t v20; // w19
  int32_t i; // w23
  __int64 v22; // x24
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  struct SupportServantData_array *v31; // x8
  SupportServantData_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v37; // x0
  System_Int32_array *v39; // [xsp+8h] [xbp-58h]

  if ( (byte_421710B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_B0D8A4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v10);
    sub_B0D8A4(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v11);
    byte_421710B = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_B0D97C(CenterNum);
  v15 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = (unsigned int)CenterNum;
    v17 = 0LL;
    v18 = (int)CenterNum;
    v39 = fixDeckIds;
    do
    {
      if ( v17 >= (unsigned int)v15 )
      {
LABEL_29:
        v37 = sub_B0D9A8(CenterNum);
        sub_B0D948(v37, 0LL);
      }
      v19 = fixDeckIds->m_Items[v17 + 1];
      v20 = v19 - 1;
      if ( v19 >= 1 && v20 != idx )
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
          v22 = sub_B0D974(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v13, v14);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v22,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v16 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v18];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v22 )
            goto LABEL_28;
          *(_QWORD *)(v22 + 16) = CenterNum;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v22 + 16),
            (System_Int32_array **)CenterNum,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v30 = *(_QWORD *)(v22 + 16);
          if ( !v30 )
            goto LABEL_28;
          if ( *(_DWORD *)(v30 + 64) )
          {
            v31 = this->fields.supportServantData;
            if ( !v31 )
              goto LABEL_28;
            if ( v20 >= v31->max_length )
              goto LABEL_29;
            v32 = v31->m_Items[v20];
            if ( !v32 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v32->fields.userServantLeaderEntityList;
            v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                                                       v13,
                                                                                       v14);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v34,
              (Il2CppObject *)v22,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              (const MethodInfo_26189B8 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
            v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v34,
                    (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                   v35,
                   (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return 0;
          }
        }
      }
      fixDeckIds = v39;
      ++v17;
      LODWORD(v15) = v39->max_length;
    }
    while ( (__int64)v17 < (int)v15 );
  }
  return 1;
}


bool __fastcall SupportSelectRootComponent__IsUpdateDeckId(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  System_Array_o *v14; // x22
  int klass; // w25
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  BalanceConfig_c *v19; // x0
  Il2CppObject *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x22
  BalanceConfig_c *v22; // x0
  bool v23; // w21
  __int64 v24; // x1
  __int64 v25; // x2
  char v26; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v28; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v31; // x23
  struct SupportSelectRootComponent___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  int32_t v40; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  SupportSelectRootComponent___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v45; // w20
  struct SupportSelectRootComponent___c_StaticFields *v46; // x9
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v48; // x23
  struct SupportSelectRootComponent___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int32_t v57; // w0
  bool v58; // w8

  if ( (byte_42170F8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v9);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v10);
    sub_B0D8A4(&SupportSelectRootComponent___c_TypeInfo, v11);
    byte_42170F8 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_46;
  v14 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[12].monitor;
  if ( !SelfUserGame )
    goto LABEL_46;
  klass = (int)v14[12].klass;
  if ( SelfUserGame[1].monitor )
  {
    v16 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v16 )
    {
      v17 = v16;
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D964(v16, int___TypeInfo);
      if ( !v18 )
        goto LABEL_18;
    }
    else
    {
      v18 = 0LL;
    }
  }
  else
  {
    v19 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D8BC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v19->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v14[13].klass;
  if ( !SelfUserGame )
LABEL_46:
    sub_B0D97C(SelfUserGame);
  if ( !SelfUserGame[1].monitor )
    goto LABEL_19;
  v20 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v20 )
  {
    v21 = 0LL;
    goto LABEL_24;
  }
  v17 = v20;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D964(v20, int___TypeInfo);
  if ( !v21 )
  {
LABEL_18:
    sub_B0DC70(v17);
LABEL_19:
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D8BC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v22->static_fields->FixEventSupportDeckNum);
  }
LABEL_24:
  v23 = System_Linq_Enumerable__SequenceEqual_int_(
          v18,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v26 = v23 & System_Linq_Enumerable__SequenceEqual_int_(
                v21,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___) ^ 1;
  if ( (v26 & 1) != 0 )
    goto LABEL_43;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v28 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v28 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v24, v25);
    System_Func_int__bool____ctor(
      _9__67_0,
      v31,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v32 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v32->__9__67_0 = _9__67_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  v40 = System_Linq_Enumerable__Count_int_(v39, (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  v43 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v45 = v40;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v43 = SupportSelectRootComponent___c_TypeInfo;
  }
  v46 = v43->static_fields;
  _9__67_1 = v46->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v46 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v41, v42);
    System_Func_int__bool____ctor(
      _9__67_1,
      v48,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v49 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v49->__9__67_1 = _9__67_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v49->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  v57 = System_Linq_Enumerable__Count_int_(v56, (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v45 >= 1 && v57 > 0 )
LABEL_43:
    v58 = 0;
  else
    v58 = CenterNum + 1 != klass;
  return v58 | v26 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_42170EC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_42170EC = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__OnBackSelect(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  __int64 v24; // x19
  SupportServantData_o *UserServantLeaderEntity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v42; // x22
  UserServantEntity_o *v43; // x8
  PartyOrganizationUtility_o *v44; // x23
  __int64 v45; // x24
  __int64 v46; // x25
  int32_t v47; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v49; // w25
  UserServantEntity_o *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x20
  __int64 v52; // x23
  __int64 v53; // x24
  ServantEntity_o *v54; // x23
  PartyOrganizationUtility_o *v55; // x20
  UserServantEntity_o *v56; // x8
  System_String_o *v57; // x21
  EquipTargetInfo_o *v58; // x8
  int32_t v59; // w22
  System_String_o *RarityInvalidMessage; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  System_Text_StringBuilder_o *v63; // x21
  System_String_o *v64; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  System_String_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  CommonConfirmDialog_ClickDelegate_o *v71; // x24
  __int64 v72; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_42170F9 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v16);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v18);
    sub_B0D8A4(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v20);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v21);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    byte_42170F9 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v24 = sub_B0D974(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_44;
  *(_QWORD *)(v24 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v24 + 32) = entity;
  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v24 + 32);
  *(_DWORD *)(v24 + 24) = result;
  *(_DWORD *)(v24 + 28) = classPos;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)entity, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v24 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_44;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v72 = sub_B0D9A8(UserServantLeaderEntity);
      sub_B0D948(v72, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v24 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    v42 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v43 = (UserServantEntity_o *)*v32;
      if ( !*v32 )
        goto LABEL_44;
      v44 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v77.fields.currentCryptoKey = v46;
      *(_QWORD *)&v77.fields.fakeValue = v45;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                          v77,
                                                          0LL);
      if ( !*v32 )
        goto LABEL_44;
      v47 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v32, 0LL);
      oldServantIdList = v42->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_44;
      v49 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v44 )
        goto LABEL_44;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v44,
             &skillName,
             &actMaxRarity,
             v47,
             v49,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v50 = (UserServantEntity_o *)*v32;
          if ( *v32 )
          {
            v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity;
            v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v78.fields.currentCryptoKey = v53;
            *(_QWORD *)&v78.fields.fakeValue = v52;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                v78,
                                                                0LL);
            if ( v51 )
            {
              v54 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v51,
                                         (int32_t)UserServantLeaderEntity,
                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v32 )
              {
                v55 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                    (*v32)[6],
                                                                    0LL);
                if ( v54 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      v54,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v56 = (UserServantEntity_o *)*v32;
                  if ( *v32 )
                  {
                    v57 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v56, 0LL);
                    v58 = (EquipTargetInfo_o *)v42->fields.oldServantIdList;
                    if ( v58 )
                    {
                      v59 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v58, 0LL);
                      if ( v55 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v55,
                                                 &maxLength,
                                                 v57,
                                                 v59,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity,
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            maxLength,
                            0LL);
                          v63 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v61, v62);
                          System_Text_StringBuilder___ctor(v63, 0LL);
                          if ( v63 )
                          {
                            System_Text_StringBuilder__Append_42155400(v63, RarityInvalidMessage, 0LL);
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_42155400(v63, v64, 0LL);
                            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v66 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v63->klass->vtable._3_ToString.method)(
                                                       v63,
                                                       v63->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v71 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                           v69,
                                                                           v70);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v71,
                              (Il2CppObject *)v24,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_17016836(
                                Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v66,
                                v67,
                                v68,
                                v71,
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
        sub_B0D97C(UserServantLeaderEntity);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v24 + 24),
    *(_DWORD *)(v24 + 28),
    *(UserServantEntity_o **)(v24 + 32),
    v39);
}


void __fastcall SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v19; // x21
  CancelConfirmMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w20
  SupportServantSelectMenu_o *v25; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x24
  System_Int32_array *v29; // x22
  const MethodInfo *v30; // x2
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x1
  System_Int32_array *v34; // x23
  BalanceConfig_c *v35; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  CancelConfirmDeckIdDialog_CallbackFunc_o *v41; // x27
  __int64 v42; // x0

  if ( (byte_4217106 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v9);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v10);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v11);
    byte_4217106 = 1;
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
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v14);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
        {
          v42 = sub_B0D9A8(CenterNum);
          sub_B0D948(v42, 0LL);
        }
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v19 = supportServantData->m_Items[(int)CenterNum];
        v20 = (CancelConfirmMenu_CallbackFunc_o *)sub_B0D974(CancelConfirmMenu_CallbackFunc_TypeInfo, v15, v16);
        CancelConfirmMenu_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v19, v20, 0LL);
          return;
        }
      }
      goto LABEL_59;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v21)
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v22);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v23);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21287/*"ok"*/, v30);
        return;
      }
      goto LABEL_59;
    }
    v24 = SupportSelectRootComponent__getCenterNum(this, v21);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_59;
    v25 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_59;
    pushTabButton = (int32_t)v25->fields.pushTabButton;
    if ( CenterNum->fields.basePanelList )
    {
      v27 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v27 )
      {
        v28 = v27;
        v29 = (System_Int32_array *)sub_B0D964(v27, int___TypeInfo);
        if ( !v29 )
          goto LABEL_48;
      }
      else
      {
        v29 = 0LL;
      }
    }
    else
    {
      v31 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      v29 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v31->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v25->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_59;
    if ( !CenterNum->fields.basePanelList )
      goto LABEL_49;
    v32 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v32 )
    {
      v34 = 0LL;
      goto LABEL_54;
    }
    v28 = v32;
    v34 = (System_Int32_array *)sub_B0D964(v32, int___TypeInfo);
    if ( v34 )
    {
LABEL_54:
      SupportSelectRootComponent__getCenterNum(this, v33);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
      tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
      tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
      v41 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_B0D974(
                                                          CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo,
                                                          v39,
                                                          v40);
      CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
        0LL);
      if ( cancelConfirmDeckIdDialog )
      {
        CancelConfirmDeckIdDialog__Open(
          cancelConfirmDeckIdDialog,
          v24 + 1,
          pushTabButton,
          tempFixMainQuestSupportDeckIds,
          tempFixEventQuestSupportDeckIds,
          v29,
          v34,
          v41,
          0LL);
        return;
      }
LABEL_59:
      sub_B0D97C(CenterNum);
    }
LABEL_48:
    sub_B0DC70(v28);
LABEL_49:
    v35 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    v34 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v35->static_fields->FixEventSupportDeckNum);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t CenterNum; // w23
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  const MethodInfo *v14; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v16; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  __int64 v28; // x0

  if ( (byte_4217104 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_4217104 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v11,
                                                                                   this->fields.tempFixEventQuestSupportDeckIds,
                                                                                   0,
                                                                                   v12);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v28 = sub_B0D9A8(FixedErrorList);
    sub_B0D948(v28, 0LL);
  }
  v16 = FixedErrorList;
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
      v20 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v18,
                                                         v19);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v20, v21);
        return;
      }
LABEL_21:
      sub_B0D97C(FixedErrorList);
    }
  }
  if ( !v16 )
    goto LABEL_21;
  if ( v16->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 1, v14);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v23);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v24);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v26);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v27);
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
                                                                                     v16,
                                                                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t CenterNum; // w23
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  const MethodInfo *v14; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v16; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  __int64 v28; // x0

  if ( (byte_4217103 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_4217103 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v11,
                                                                                   this->fields.tempFixMainQuestSupportDeckIds,
                                                                                   1,
                                                                                   v12);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v28 = sub_B0D9A8(FixedErrorList);
    sub_B0D948(v28, 0LL);
  }
  v16 = FixedErrorList;
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
      v20 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v18,
                                                         v19);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v20, v21);
        return;
      }
LABEL_21:
      sub_B0D97C(FixedErrorList);
    }
  }
  if ( !v16 )
    goto LABEL_21;
  if ( v16->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 0, v14);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v23);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v24);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v26);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v27);
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
                                                                                     v16,
                                                                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v10; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v11; // x22
  const MethodInfo *v12; // x4
  __int64 v13; // x0

  if ( (byte_421710A & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_421710A = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v13 = sub_B0D9A8(CenterNum);
    sub_B0D948(v13, 0LL);
  }
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v10 = supportServantData->m_Items[(int)CenterNum];
  v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                        SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                        v5,
                                                        v6);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_B0D97C(CenterNum);
  SupportSelectEditMenu__Open(supportEditMenu, v10, isEdit, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19

  if ( (byte_4217105 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isFixed);
    byte_4217105 = 1;
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
  __int64 v2; // x2
  SupportSelectRootComponent_o *v3; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v5; // x22
  __int64 v6; // x24
  unsigned __int64 v7; // x8
  SupportServantData_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v16; // x22
  __int64 v17; // x24
  unsigned __int64 v18; // x8
  SupportServantData_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v27; // x22
  __int64 v28; // x24
  unsigned __int64 v29; // x8
  SupportServantData_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x0

  v3 = this;
  if ( (byte_42170E8 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&SupportServantData_TypeInfo, method);
    byte_42170E8 = 1;
  }
  supportServantData = (unsigned int *)v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v5 = 0LL;
  v6 = 8LL;
  while ( 1 )
  {
    v7 = supportServantData[6];
    if ( (__int64)v5 >= (int)v7 )
      break;
    if ( v5 >= v7 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v5 + 8] )
    {
      v8 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v8, 0LL);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_B0D964(v8, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v38 = sub_B0D99C(this);
          sub_B0D948(v38, 0LL);
        }
      }
      if ( v5 >= supportServantData[6] )
      {
LABEL_37:
        v37 = sub_B0D9A8(this);
        sub_B0D948(v37, 0LL);
      }
      *(_QWORD *)&supportServantData[2 * v5 + 8] = v8;
      sub_B0D840(
        (BattleServantConfConponent_o *)&supportServantData[v6],
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      supportServantData = (unsigned int *)v3->fields.supportServantData;
    }
    ++v5;
    v6 += 2LL;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v16 = 0LL;
  v17 = 8LL;
  while ( 1 )
  {
    v18 = orgSupportServantData[6];
    if ( (__int64)v16 >= (int)v18 )
      break;
    if ( v16 >= v18 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v16 + 8] )
    {
      v19 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v19, 0LL);
      if ( v19 )
      {
        this = (SupportSelectRootComponent_o *)sub_B0D964(v19, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v16 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v16 + 8] = v19;
      sub_B0D840(
        (BattleServantConfConponent_o *)&orgSupportServantData[v17],
        (System_Int32_array **)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
    }
    ++v16;
    v17 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_B0D97C(this);
  v27 = 0LL;
  v28 = 8LL;
  while ( 1 )
  {
    v29 = tmpSupportServantData[6];
    if ( (__int64)v27 >= (int)v29 )
      break;
    if ( v27 >= v29 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v27 + 8] )
    {
      v30 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v30, 0LL);
      if ( v30 )
      {
        this = (SupportSelectRootComponent_o *)sub_B0D964(v30, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v27 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v27 + 8] = v30;
      sub_B0D840(
        (BattleServantConfConponent_o *)&tmpSupportServantData[v28],
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
    }
    ++v27;
    v28 += 2LL;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void __fastcall SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x4
  __int64 v12; // x0

  if ( (byte_421710F & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_421710F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v12 = sub_B0D9A8(CenterNum);
    sub_B0D948(v12, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B0D97C(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v9, v10, v11);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x4
  __int64 v12; // x0

  if ( (byte_4217113 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_4217113 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v12 = sub_B0D9A8(CenterNum);
    sub_B0D948(v12, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B0D974(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B0D97C(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v9, v10, v11);
}


void __fastcall SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  il2cpp_array_size_t i; // w21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  SupportServantData_o *Instance; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  __int64 v20; // x0

  if ( (byte_42170F5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v8);
    byte_42170F5 = 1;
  }
  v9 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v10) )
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
        v20 = sub_B0D9A8(Instance);
        sub_B0D948(v20, 0LL);
      }
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_24;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_23:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21287/*"ok"*/, v16);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (SupportServantData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v19,
                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_24:
    sub_B0D97C(Instance);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v9,
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SupportServantData_array *supportServantData; // x8
  System_Int32_array **editDeckName; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
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
      v17 = sub_B0D9A8(IsNullOrEmpty);
      sub_B0D948(v17, 0LL);
    }
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = (System_Int32_array **)this->fields.editDeckName,
          IsNullOrEmpty->fields.swapButton = (struct UICommonButton_o *)editDeckName,
          sub_B0D840(
            (BattleServantConfConponent_o *)&IsNullOrEmpty->fields.swapButton,
            editDeckName,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          SupportSelectRootComponent__SaveTemp(this, -1, v13),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0LL)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, v14),
          !indicator) )
    {
LABEL_8:
      sub_B0D97C(IsNullOrEmpty);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v16);
  }
}


void __fastcall SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4217109 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_4217109 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
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
      SupportSelectMenu__Reset(supportSelectMenu, v8, v9);
LABEL_12:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v11);
      return;
    }
    goto LABEL_21;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v7);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v12, v13);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v14);
      goto LABEL_12;
    }
LABEL_21:
    sub_B0D97C(supportSelectMenu);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_21;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_21;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    targetIdx = (int)this;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( targetIdx >= supportServantData->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SupportSelectEditMenu_o *supportEditMenu; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v18; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v20; // x1
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w24
  int32_t i; // w25
  int32_t v28; // w26
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v34; // x20
  System_Int32_array *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v38; // x24
  const MethodInfo *v39; // x5

  if ( (byte_421710C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_421710C = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
LABEL_28:
    sub_B0D97C(supportEditMenu);
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v16);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v18);
  v21 = SupportSelectRootComponent__getCenterNum(this, v20);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v21 + 1, v22);
  v26 = SupportSelectRootComponent__getCenterNum(this, v24);
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
    if ( v26 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v25),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v28 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v28,
                                                         v25),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v12 )
        goto LABEL_28;
      System_Collections_Generic_List_int___Add(
        v12,
        i,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v15 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v28, v25)
      || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                         this,
                                                         i,
                                                         this->fields.tempFixMainQuestSupportDeckIds,
                                                         v30),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v28, v29) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v31);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v15 )
      goto LABEL_28;
LABEL_18:
    System_Collections_Generic_List_int___Add(
      v15,
      i,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    continue;
  }
  if ( !v12 )
    goto LABEL_28;
  copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
  supportServantData = this->fields.supportServantData;
  supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                 v12,
                                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v15 )
    goto LABEL_28;
  v34 = (System_Int32_array *)supportEditMenu;
  v35 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v38 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_B0D974(
                                                             SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo,
                                                             v36,
                                                             v37);
  SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
    v38,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
    0LL);
  if ( !copyDeckSelectMenu )
    goto LABEL_28;
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v34, v35, v38, v39);
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
    sub_B0D97C(supportSelectMenu);
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

  if ( (byte_42170F4 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, list);
    byte_42170F4 = 1;
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
    AssetManager__loadAssetStorage_29522920(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (BattleServantConfConponent_c *)list;
  sub_B0D840(p_cacheAssetNameList, (System_Int32_array **)list, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_29524964(v10, 0LL);
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
  SupportSelectRootComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 selectNum; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  __int128 v18; // q1
  int32_t v19; // w22
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x0
  __int64 *v24; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v26; // x8
  SupportSelectRootComponent_o *v27; // x23
  struct SupportServantData_array *v28; // x8
  int32_t v29; // w1
  struct SupportServantData_array *v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38[2]; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_42170FB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_System_Array_IndexOf_long___, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_42170FB = 1;
  }
  memset(&v38[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( result != 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
    v24 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_28;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_18713680(userSvtEntity->fields.svtId, 0LL);
    v16 = item->fields.userSvtEntity;
    if ( !v16 )
      goto LABEL_34;
    v18 = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v19 = (int)this;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v38, 0LL, 0LL);
    v18 = *(_OWORD *)&v38[0].fields.currentCryptoKey;
    v17 = *(_OWORD *)&v38[0].fields.fakeValue;
    v19 = 0;
  }
  *(_OWORD *)&v38[1].fields.currentCryptoKey = v18;
  *(_OWORD *)&v38[1].fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38[1];
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v37, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_34:
    sub_B0D97C(this);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_35;
  v26 = supportServantData->m_Items[selectNum];
  if ( !v26 )
    goto LABEL_34;
  v27 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v26->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_1F69C00 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v28 = v8->fields.supportServantData;
    if ( !v28 )
      goto LABEL_34;
    if ( (unsigned int)selectNum >= v28->max_length )
      goto LABEL_35;
    v29 = (int)this;
    this = (SupportSelectRootComponent_o *)v28->m_Items[selectNum];
    if ( !this )
      goto LABEL_34;
    SupportServantData__removeEquipData((SupportServantData_o *)this, v29, 0LL);
  }
  v30 = v8->fields.supportServantData;
  if ( !v30 )
    goto LABEL_34;
  if ( (unsigned int)selectNum >= v30->max_length )
  {
LABEL_35:
    v36 = sub_B0D9A8(this);
    sub_B0D948(v36, 0LL);
  }
  this = (SupportSelectRootComponent_o *)v30->m_Items[selectNum];
  if ( !this )
    goto LABEL_34;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v27, v19, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  v24 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_28:
  v33 = v23;
  System_Action___ctor(v23, (Il2CppObject *)v8, *v24, 0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__CloseSupportServantEquipListMenu(Instance, v33, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v34) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v35);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_34;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v35);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v17; // x22
  unsigned int **p_supportServantData; // x21
  __int64 i; // x23
  unsigned int *v20; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v22; // x22
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x23
  __int64 v33; // x25
  __int64 v34; // x24
  struct System_Int32_array *v35; // x8
  unsigned __int64 v36; // x27
  unsigned int *v37; // x28
  SupportServantData_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  unsigned int *v45; // x8
  struct SupportInfoJump_o *v46; // x10
  struct System_Int32_array *v47; // x9
  __int64 v48; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  unsigned int v57; // w23
  __int64 v58; // x25
  __int64 v59; // x26
  struct System_Int32_array *v60; // x8
  unsigned int *v61; // x24
  SupportServantData_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  unsigned int *v69; // x0
  unsigned int *v70; // x8
  struct SupportInfoJump_o *v71; // x10
  struct System_Int32_array *v72; // x9
  __int64 v73; // x8
  __int64 v74; // x25
  struct System_Int32_array *v75; // x8
  unsigned int *v76; // x28
  SupportServantData_o *v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  unsigned int *v84; // x0
  unsigned int *v85; // x8
  struct SupportInfoJump_o *v86; // x10
  struct System_Int32_array *v87; // x9
  __int64 v88; // x8
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_42170ED & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, deckIndex);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_B0D8A4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v12);
    sub_B0D8A4(&SupportServantData___TypeInfo, v13);
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&SupportServantData_TypeInfo, v14);
    byte_42170ED = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_74;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v17 = 0LL;
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
    if ( (__int64)v17 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v20 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_74;
    if ( v17 >= v20[6] )
    {
LABEL_75:
      v98 = sub_B0D9A8(this);
      sub_B0D948(v98, 0LL);
    }
    *(_QWORD *)&v20[i] = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v20[i], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ++v17;
  }
  if ( !otherUserGameEntity )
    goto LABEL_74;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_74;
  v22 = *(_QWORD *)&mainSupportDeckIds->max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_74;
    v100 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v50 = (System_Int32_array **)sub_B0D8BC(SupportServantData___TypeInfo, (unsigned int)(v100 + v22));
    *p_supportServantData = (unsigned int *)v50;
    sub_B0D840((BattleServantConfConponent_o *)&v9->fields.supportServantData, v50, v51, v52, v53, v54, v55, v56);
    if ( (int)v22 < 1 )
    {
      v57 = 0;
LABEL_53:
      if ( (int)v100 < 1 )
        goto LABEL_70;
      v74 = 8LL;
      while ( 1 )
      {
        v75 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v75 )
          break;
        if ( v74 - 8 >= (unsigned __int64)v75->max_length )
          goto LABEL_75;
        if ( *((int *)&v75->obj.klass + v74) >= 1 )
        {
          v76 = *p_supportServantData;
          v77 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, v30, v31);
          SupportServantData___ctor(v77, 0LL);
          if ( !v76 )
            break;
          if ( v77 )
          {
            this = (SupportSelectRootComponent_o *)sub_B0D964(v77, *(_QWORD *)(*(_QWORD *)v76 + 64LL));
            if ( !this )
              goto LABEL_76;
          }
          if ( v57 >= v76[6] )
            goto LABEL_75;
          v84 = &v76[2 * v57];
          *((_QWORD *)v84 + 4) = v77;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v84 + 8),
            (System_Int32_array **)v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v85 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v85[6] )
            goto LABEL_75;
          v86 = v9->fields.supportInfoJump;
          if ( !v86 )
            break;
          v87 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v87 )
            break;
          if ( v74 - 8 >= (unsigned __int64)v87->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v85[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_30963752(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v86->fields.kind,
            v86->fields.isSelect,
            v86->fields.eventSetupInfo,
            1,
            *((_DWORD *)&v87->obj.klass + v74),
            0LL);
          ++v57;
        }
        v88 = v74 - 7;
        ++v74;
        if ( v88 >= (int)v100 )
          goto LABEL_70;
      }
    }
    else
    {
      v57 = 0;
      v58 = (int)v22;
      v59 = 8LL;
      while ( 1 )
      {
        v60 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v60 )
          break;
        if ( v59 - 8 >= (unsigned __int64)v60->max_length )
          goto LABEL_75;
        if ( *((int *)&v60->obj.klass + v59) >= 1 )
        {
          v61 = *p_supportServantData;
          v62 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, v30, v31);
          SupportServantData___ctor(v62, 0LL);
          if ( !v61 )
            break;
          if ( v62 )
          {
            this = (SupportSelectRootComponent_o *)sub_B0D964(v62, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
            if ( !this )
            {
LABEL_76:
              v99 = sub_B0D99C(this);
              sub_B0D948(v99, 0LL);
            }
          }
          if ( v57 >= v61[6] )
            goto LABEL_75;
          v69 = &v61[2 * v57];
          *((_QWORD *)v69 + 4) = v62;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v69 + 8),
            (System_Int32_array **)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v70 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v70[6] )
            goto LABEL_75;
          v71 = v9->fields.supportInfoJump;
          if ( !v71 )
            break;
          v72 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v72 )
            break;
          if ( v59 - 8 >= (unsigned __int64)v72->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v70[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_30963752(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v71->fields.kind,
            v71->fields.isSelect,
            v71->fields.eventSetupInfo,
            0,
            *((_DWORD *)&v72->obj.klass + v59),
            0LL);
          ++v57;
        }
        v73 = v59 - 7;
        ++v59;
        if ( v73 >= v58 )
          goto LABEL_53;
      }
    }
LABEL_74:
    sub_B0D97C(this);
  }
  v23 = (System_Int32_array **)sub_B0D8BC(SupportServantData___TypeInfo, (unsigned int)v22);
  *p_supportServantData = (unsigned int *)v23;
  sub_B0D840((BattleServantConfConponent_o *)&v9->fields.supportServantData, v23, v24, v25, v26, v27, v28, v29);
  if ( (int)v22 >= 1 )
  {
    v32 = (int)v22;
    v33 = 8LL;
    v34 = 8LL;
    do
    {
      v35 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v35 )
        goto LABEL_74;
      v36 = v33 - 8;
      if ( v33 - 8 >= (unsigned __int64)v35->max_length )
        goto LABEL_75;
      if ( *((int *)&v35->obj.klass + v33) >= 1 )
      {
        v37 = *p_supportServantData;
        v38 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, v30, v31);
        SupportServantData___ctor(v38, 0LL);
        if ( !v37 )
          goto LABEL_74;
        if ( v38 )
        {
          this = (SupportSelectRootComponent_o *)sub_B0D964(v38, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
          if ( !this )
            goto LABEL_76;
        }
        if ( v36 >= v37[6] )
          goto LABEL_75;
        *(_QWORD *)&v37[v34] = v38;
        sub_B0D840((BattleServantConfConponent_o *)&v37[v34], (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
        v45 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_74;
        if ( v36 >= v45[6] )
          goto LABEL_75;
        v46 = v9->fields.supportInfoJump;
        if ( !v46 )
          goto LABEL_74;
        v47 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v47 )
          goto LABEL_74;
        if ( v36 >= v47->max_length )
          goto LABEL_75;
        this = *(SupportSelectRootComponent_o **)&v45[v34];
        if ( !this )
          goto LABEL_74;
        SupportServantData__Init_30963752(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v46->fields.kind,
          v46->fields.isSelect,
          v46->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v47->obj.klass + v33),
          0LL);
      }
      v48 = v33 - 7;
      ++v33;
      v34 += 2LL;
    }
    while ( v48 < v32 );
  }
LABEL_70:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_74;
  indicator = supportSelectMenu->fields.indicator;
  v91 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v91, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_74;
  indicator->fields.modifyCenterItemCallBack = v91;
  sub_B0D840(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v26; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x0
  bool v29; // w21
  unsigned __int64 v30; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x23
  unsigned int *v33; // x8
  struct SupportInfoJump_o *v34; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  SupportSelectRootComponent___c_c *v41; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v44; // x23
  struct SupportSelectRootComponent___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  unsigned int v53; // w0
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  void *monitor; // x8
  __int64 v64; // x25
  __int64 v65; // x23
  unsigned __int64 v66; // x26
  unsigned int *v67; // x27
  SupportServantData_o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  unsigned int *v75; // x9
  struct SupportInfoJump_o *v76; // x8
  __int64 v77; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct SupportInfoJump_o *v87; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  QuestRestrictionInfo_o *v89; // x20
  __int64 v90; // x0
  __int64 v91; // x0

  v8 = this;
  if ( (byte_42170EE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v14);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v15);
    sub_B0D8A4(&int___TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B0D8A4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v20);
    sub_B0D8A4(&SupportServantData___TypeInfo, v21);
    sub_B0D8A4(&SupportServantData_TypeInfo, v22);
    sub_B0D8A4(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v23);
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&SupportSelectRootComponent___c_TypeInfo, v24);
    byte_42170EE = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_63;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v26 = v8->fields.supportInfoJump;
  if ( !v26 )
    goto LABEL_63;
  questRestrictionInfo = v26->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_63;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v29 = !QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
  else
LABEL_11:
    v29 = 1;
  v30 = 0LL;
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
    if ( (__int64)v30 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v33 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_63;
    if ( v30 >= v33[6] )
      goto LABEL_64;
    *(_QWORD *)&v33[i] = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v33[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v30;
  }
  v34 = v8->fields.supportInfoJump;
  if ( !v34 || (followerInfo = v34->fields.followerInfo) == 0LL )
LABEL_63:
    sub_B0D97C(this);
  if ( v29 )
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
  v36 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v36 )
  {
    v39 = v36;
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D964(v36, int___TypeInfo);
    if ( v40 )
      goto LABEL_30;
    sub_B0DC70(v39);
  }
  v40 = 0LL;
LABEL_30:
  v41 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v41 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v37, v38);
    System_Func_int__bool____ctor(
      _9__49_0,
      v44,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v45 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v45->__9__49_0 = _9__49_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v45->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = System_Linq_Enumerable__Where_int_(
          v40,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  v53 = System_Linq_Enumerable__Count_int_(v52, (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  v54 = (System_Int32_array **)sub_B0D8BC(SupportServantData___TypeInfo, v53);
  *p_supportServantData = (unsigned int *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.supportServantData, v54, v55, v56, v57, v58, v59, v60);
  if ( !v40 )
    goto LABEL_63;
  monitor = v40[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v64 = 8LL;
    v65 = 8LL;
    while ( 1 )
    {
      v66 = v64 - 8;
      if ( v64 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v40->klass + v64) >= 1 )
      {
        v67 = *p_supportServantData;
        v68 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, v61, v62);
        SupportServantData___ctor(v68, 0LL);
        if ( !v67 )
          goto LABEL_63;
        if ( v68 )
        {
          this = (SupportSelectRootComponent_o *)sub_B0D964(v68, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
          if ( !this )
          {
            v91 = sub_B0D99C(0LL);
            sub_B0D948(v91, 0LL);
          }
        }
        if ( v66 >= v67[6] )
          break;
        *(_QWORD *)&v67[v65] = v68;
        sub_B0D840((BattleServantConfConponent_o *)&v67[v65], (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
        v75 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_63;
        if ( v66 >= v75[6] )
          break;
        v76 = v8->fields.supportInfoJump;
        if ( !v76 )
          goto LABEL_63;
        if ( v66 >= LODWORD(v40[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v75[v65];
        if ( !this )
          goto LABEL_63;
        SupportServantData__Init_30964616(
          (SupportServantData_o *)this,
          v76->fields.followerInfo,
          v76->fields.kind,
          v76->fields.isSelect,
          v76->fields.eventSetupInfo,
          v76->fields.questRestrictionInfo,
          *((_DWORD *)&v40->klass + v64),
          0LL);
      }
      LODWORD(monitor) = v40[1].monitor;
      v77 = v64 - 7;
      ++v64;
      v65 += 2LL;
      if ( v77 >= (int)monitor )
        goto LABEL_54;
    }
LABEL_64:
    v90 = sub_B0D9A8(this);
    sub_B0D948(v90, 0LL);
  }
LABEL_54:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_63;
  indicator = supportSelectMenu->fields.indicator;
  v80 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v61, v62);
  System_Action___ctor(v80, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_63;
  indicator->fields.modifyCenterItemCallBack = v80;
  sub_B0D840(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = v8->fields.supportInfoJump;
  if ( !v87 )
    goto LABEL_63;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  v89 = v87->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (SupportSelectRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_63;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v89,
    (int32_t)this->fields.backSkinSprite,
    0LL,
    0LL);
}


void __fastcall SupportSelectRootComponent__StartUp(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v16; // x2
  int32_t Int; // w20
  BalanceConfig_c *v18; // x8
  int32_t v19; // w20
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v21; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 i; // x25
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v32; // x9
  SupportServantData_o *followerQuestInfomationDraw; // x0
  unsigned __int64 v34; // x26
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  __int64 j; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v47; // x9
  struct System_Int32_array *v48; // x9
  unsigned __int64 v49; // x25
  SupportSelectRootComponent_o *v50; // x0
  const MethodInfo *v51; // x4
  SupportSelectRootComponent_o *v52; // x0
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v59; // x5
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v68; // x8
  unsigned __int64 v69; // x22
  System_Int32_array **eventSetupInfo; // x1
  SupportSelectMenu_o *v71; // x21
  SupportServantData_array *v72; // x22
  SupportSelectMenu_CallbackFunc_o *v73; // x23
  __int64 v74; // x1
  __int64 v75; // x2
  SupportSelectMenu_DragSwapCallbackFunc_o *v76; // x24
  const MethodInfo *v77; // x5
  __int64 v78; // x1
  __int64 v79; // x2
  struct SupportSelectMenu_o *v80; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  const MethodInfo *v89; // x1
  struct SupportSelectMenu_o *v90; // x8
  __int64 v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct SupportServantData_array *v98; // x20
  __int64 v99; // x8
  unsigned __int64 v100; // x21
  System_Int32_array **v101; // x1
  SupportSelectMenu_o *v102; // x20
  SupportServantData_array *v103; // x21
  int32_t v104; // w22
  SupportSelectMenu_CallbackFunc_o *v105; // x23
  __int64 v106; // x1
  __int64 v107; // x2
  SupportSelectMenu_DragSwapCallbackFunc_o *v108; // x24
  const MethodInfo *v109; // x5
  const MethodInfo *v110; // x2
  struct SupportServantData_array *v111; // x8
  bool v112; // w1
  __int64 v113; // x1
  __int64 v114; // x2
  System_Action_o *v115; // x20
  __int64 v116; // x0
  int32_t deckIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42170EF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v4);
    sub_B0D8A4(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_B0D8A4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_B0D8A4(&StringLiteral_12598/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_42170EF = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12598/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v19 = UnityEngine_Mathf__Min_40819044(Int, v18->static_fields->SupportDeckMax - 1, 0LL);
    deckIndex = v19;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v21 = (struct System_Int32_array *)sub_B0D8BC(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v21;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (System_Int32_array **)v21,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    for ( i = 8LL; ; ++i )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v34 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v34 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_79;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v34 < (int)max_length )
      {
        if ( v34 >= max_length )
          goto LABEL_80;
        v32 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_79;
        if ( v34 >= v32->max_length )
          goto LABEL_80;
        *((_DWORD *)&v32->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( (BYTE3(followerQuestInfomationDraw[2].fields.oldServantIdList) & 4) != 0
      && !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v36 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v36;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (System_Int32_array **)v36,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    for ( j = 8LL; ; ++j )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v49 = j - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v49 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_79;
      v47 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v49 < (int)v47 )
      {
        if ( v49 >= v47 )
          goto LABEL_80;
        v48 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_79;
        if ( v49 >= v48->max_length )
          goto LABEL_80;
        *((_DWORD *)&v48->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v44);
    SupportSelectRootComponent__CopySupportData(
      v50,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v51);
    SupportSelectRootComponent__CopySupportData(
      v52,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v53);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v54);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v55);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v56);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_17507952(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            80,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v57);
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
                  v59);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v68 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v68 >= 1 )
                  {
                    v69 = 0LL;
                    while ( v69 < (unsigned int)v68 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v69];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = (System_Int32_array **)this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          eventSetupInfo,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65,
                          v66);
                      }
                      LODWORD(v68) = supportServantData->max_length;
                      if ( (__int64)++v69 >= (int)v68 )
                        goto LABEL_51;
                    }
LABEL_80:
                    v116 = sub_B0D9A8(followerQuestInfomationDraw);
                    sub_B0D948(v116, 0LL);
                  }
LABEL_51:
                  v71 = this->fields.supportSelectMenu;
                  v72 = this->fields.supportServantData;
                  v73 = (SupportSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                              SupportSelectMenu_CallbackFunc_TypeInfo,
                                                              v60,
                                                              v61);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v73,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    0LL);
                  v76 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B0D974(
                                                                      SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                                      v74,
                                                                      v75);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v76,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    0LL);
                  if ( v71 )
                  {
                    SupportSelectMenu__Open(v71, v72, v19, v73, v76, v77);
                    v80 = this->fields.supportSelectMenu;
                    if ( v80 )
                    {
                      indicator = v80->fields.indicator;
                      v82 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v78, v79);
                      System_Action___ctor(
                        v82,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v82;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
                          (System_Int32_array **)v82,
                          v83,
                          v84,
                          v85,
                          v86,
                          v87,
                          v88);
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
    sub_B0D97C(followerQuestInfomationDraw);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v16);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  TitleInfoControl__setTitleInfo_17507952(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v89);
  v90 = this->fields.supportSelectMenu;
  if ( !v90 )
    goto LABEL_79;
  followerQuestInfomationDraw = (SupportServantData_o *)v90->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v98 = this->fields.supportServantData;
  if ( !v98 )
    goto LABEL_79;
  v99 = *(_QWORD *)&v98->max_length;
  if ( (int)v99 >= 1 )
  {
    v100 = 0LL;
    while ( v100 < (unsigned int)v99 )
    {
      followerQuestInfomationDraw = v98->m_Items[v100];
      if ( followerQuestInfomationDraw )
      {
        v101 = (System_Int32_array **)this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v101;
        sub_B0D840(
          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          v101,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      LODWORD(v99) = v98->max_length;
      if ( (__int64)++v100 >= (int)v99 )
        goto LABEL_67;
    }
    goto LABEL_80;
  }
LABEL_67:
  v102 = this->fields.supportSelectMenu;
  v103 = this->fields.supportServantData;
  v104 = deckIndex;
  v105 = (SupportSelectMenu_CallbackFunc_o *)sub_B0D974(SupportSelectMenu_CallbackFunc_TypeInfo, v91, v92);
  SupportSelectMenu_CallbackFunc___ctor(
    v105,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v108 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B0D974(
                                                       SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                       v106,
                                                       v107);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v108,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v102 )
    goto LABEL_79;
  SupportSelectMenu__Open(v102, v103, v104, v105, v108, v109);
  v111 = this->fields.supportServantData;
  if ( !v111 )
    goto LABEL_79;
  v112 = (int)v111->max_length >= 2 && v111->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v112, v110);
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
  v115 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v113, v114);
  System_Action___ctor(v115, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v115, 2, 1, 0LL);
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
  if ( (byte_4217101 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_4217101 = 1;
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
    sub_B0D97C(this);
  if ( v15->max_length <= idx )
  {
LABEL_41:
    v21 = sub_B0D9A8(this);
    sub_B0D948(v21, 0LL);
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
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_16655688((SceneRootComponent_o *)this, 0LL);
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  v8 = this;
  if ( (byte_42170F3 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method);
    byte_42170F3 = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectConfirmMenu;
  if ( !this )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, v10);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v8->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v8, 0LL, v11);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v8; // x0
  struct SupportServantData_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BalanceConfig_c *v16; // x0
  struct SupportServantData_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BalanceConfig_c *v24; // x0
  struct SupportServantData_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_42170E7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&SupportServantData___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_13222/*"SvtEqScrollBarValue"*/, v5);
    byte_42170E7 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (struct SupportServantData_array *)sub_B0D8BC(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.supportServantData,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_B0D8BC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v17;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.orgSupportServantData,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = (struct SupportServantData_array *)sub_B0D8BC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v24->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v25;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.tmpSupportServantData,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13222/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x10
  Il2CppObject *v21; // x1
  struct SupportInfoJump_o **p_supportInfoJump; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x10
  Il2CppObject *v30; // x1
  const MethodInfo *v31; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct SupportInfoJump_o *v34; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  EventUpValSetupInfo_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  EventUpValSetupInfo_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x1

  if ( (byte_42170F0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AtlasManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v15);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v18);
    sub_B0D8A4(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v19);
    byte_42170F0 = 1;
  }
  if ( data
    && (v20 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
  {
    if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v20 - 1] == SupportInfoJump_TypeInfo )
      v21 = data;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  p_supportInfoJump = &this->fields.supportInfoJump;
  this->fields.supportInfoJump = (struct SupportInfoJump_o *)v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.supportInfoJump,
    (System_Int32_array **)v21,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( data
    && (v29 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v29 - 1] == SceneJumpInfo_TypeInfo )
      v30 = data;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sceneJumpInfo,
    (System_Int32_array **)v30,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v31);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v34 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v34->fields.otherUserGameEntity || !v34->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)bgTxtSprite,
                                                                                       0,
                                                                                       0LL);
        v51 = System_Linq_Enumerable__ToArray_int_(
                EventValUpEventIdHash,
                (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        v54 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v52, v53);
        EventUpValSetupInfo___ctor_25655088(v54, v51, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v54;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        SupportSelectRootComponent__StartUp(this, v61);
        return;
      }
    }
LABEL_33:
    sub_B0D97C(bgTxtSprite);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*p_supportInfoJump )
    goto LABEL_33;
  questRestrictionInfo = (*p_supportInfoJump)->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !bgTxtSprite )
    goto LABEL_33;
  OngoingQuestTargetEventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetOngoingQuestTargetEventIds(
                                                                                      (EventQuestMaster_o *)bgTxtSprite,
                                                                                      questRestrictionInfo->fields.questId,
                                                                                      questRestrictionInfo->fields.questPhase,
                                                                                      0LL);
  v37 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v40 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v38, v39);
  EventUpValSetupInfo___ctor_25655088(v40, v37, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v40;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v49, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B0D97C(0LL);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, method);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void __fastcall SupportSelectRootComponent__initSupportServantDatas(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v5; // w20
  __int64 v6; // x22
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x0

  v3 = this;
  if ( (byte_4217118 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B0D8A4(&SupportServantData_TypeInfo, method);
    byte_4217118 = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_B0D97C(this);
  v5 = 0;
  v6 = 32LL;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) )
    {
      v8 = (SupportServantData_o *)sub_B0D974(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v8, 0LL);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_B0D964(v8, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v16 = sub_B0D99C(0LL);
          sub_B0D948(v16, 0LL);
        }
      }
      if ( v5 >= supportServantData->max_length )
      {
LABEL_17:
        v15 = sub_B0D9A8(this);
        sub_B0D948(v15, 0LL);
      }
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) = (Il2CppClass *)v8;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)supportServantData + v6),
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      supportServantData = v3->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v5 >= supportServantData->max_length )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v6);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v5, v3->fields.eventSetupInfo, 0LL);
      supportServantData = v3->fields.supportServantData;
      v6 += 8LL;
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
  __int64 CenterNum; // x24
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *v11; // x8
  SupportServantData_o *v12; // x23
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  SupportServantData_o *v15; // x23
  char v16; // w20
  struct SupportServantData_array *v17; // x8
  __int64 v19; // x0

  if ( (byte_4217117 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, servant);
    byte_4217117 = 1;
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
      v16 = 0;
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
      v11 = this->fields.supportServantData;
      if ( !v11 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v11->max_length )
        goto LABEL_32;
      v12 = OldServant;
      OldServant = v11->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, 0LL);
      if ( v12 != OldServant )
        break;
    }
    if ( equip )
    {
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v13->max_length )
        goto LABEL_32;
      OldServant = v13->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, 0LL);
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v14->max_length )
        goto LABEL_32;
      v15 = OldServant;
      OldServant = v14->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, 0LL);
      if ( v15 != OldServant )
        break;
    }
    ++v7;
  }
  v16 = 1;
LABEL_27:
  v17 = this->fields.supportServantData;
  if ( !v17 )
    goto LABEL_31;
  if ( (unsigned int)CenterNum >= v17->max_length )
  {
LABEL_32:
    v19 = sub_B0D9A8(OldServant);
    sub_B0D948(v19, 0LL);
  }
  OldServant = v17->m_Items[CenterNum];
  if ( !OldServant )
LABEL_31:
    sub_B0D97C(OldServant);
  return (v16 | SupportServantData__IsChangeDeckName(OldServant, 0LL)) & 1;
}


void __fastcall SupportSelectRootComponent__modifyCenterItemCallBack(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t CenterNum; // w20
  const MethodInfo *v7; // x1
  System_Int32_array *eventSupportDeckIds; // x0
  const MethodInfo *v9; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  struct System_Int32_array *mainSupportDeckIds; // x8
  const MethodInfo *v13; // x5
  int32_t v14; // w3
  char v15; // w1
  char v16; // w2
  int32_t v17; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v21; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Int32_array *v23; // x8
  int32_t max_length; // w24
  System_Int32_array *v25; // x22
  int32_t v26; // w21
  int32_t v27; // w0
  int32_t v28; // w20
  const MethodInfo *v29; // x4
  __int64 v30; // x0

  if ( (byte_42170F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_42170F2 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v7);
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
      v21 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      v14 = 0;
      v17 = v21 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v27 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      v17 = 0;
      v14 = v27 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v15 = ReturnTypeByQuestId == 0;
    v16 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  eventSupportDeckIds = (System_Int32_array *)System_Linq_Enumerable__SequenceEqual_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                                (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)eventSupportDeckIds & 1) == 0 )
  {
    v22 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v22,
                            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    v23 = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !v23 )
      goto LABEL_39;
    max_length = v23->max_length;
    v25 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v26 = 0;
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
                                                    (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      v26 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v17 = 0;
      goto LABEL_27;
    }
    if ( !v25 )
      goto LABEL_39;
    if ( CenterNum < v25->max_length )
    {
      v17 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v25->m_Items[CenterNum + 1],
              (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v16 = CenterNum >= max_length;
      v15 = CenterNum < max_length;
      v14 = v26;
      goto LABEL_34;
    }
LABEL_40:
    v30 = sub_B0D9A8(eventSupportDeckIds);
    sub_B0D948(v30, 0LL);
  }
  if ( !mainSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= mainSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                otherUserGameEntity->fields.mainSupportDeckIds,
                                                mainSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v14 = (_DWORD)eventSupportDeckIds + 1;
  v15 = 1;
  v16 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v17 = v14;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v15, v16, v14, v17, v13);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v28 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v28,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v9),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_B0D97C(eventSupportDeckIds);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v28,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v29);
}


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
    sub_B0D97C(blackMask);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, v14, v15);
  SupportSelectRootComponent__ChangeTitle(this, v16);
}


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
    sub_B0D97C(scrollView);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211769 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_4211769 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SupportSelectRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_421176A & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_421176A = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v10; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  struct SupportSelectRootComponent_o *v16; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v19; // w21
  __int64 callback; // x27
  __int64 v21; // x9
  __int64 v22; // x0

  if ( (byte_421176B & 1) == 0 )
  {
    sub_B0D8A4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_421176B = 1;
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
      v22 = sub_B0D9A8(_4__this);
      sub_B0D948(v22, 0LL);
    }
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v16->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v16->fields.tempFixEventQuestSupportDeckIds;
    v19 = (int)_4__this;
    callback = sub_B0D974(SupportServantSelectMenu_CallbackFunc_TypeInfo, v14, v15);
    v21 = *(_QWORD *)Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 16) = v21;
    *(_QWORD *)(callback + 32) = v16;
    sub_B0D840(callback + 32, v16);
    if ( !supportServantSelectMenu )
LABEL_15:
      sub_B0D97C(_4__this);
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v19,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantSelectMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v8; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v11; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  struct SupportSelectRootComponent_o *v17; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v20; // w20
  __int64 callback; // x27
  __int64 v22; // x9
  __int64 v23; // x0

  if ( (byte_421176C & 1) == 0 )
  {
    sub_B0D8A4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_421176C = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_15;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v8->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v23 = sub_B0D9A8(_4__this);
      sub_B0D948(v23, 0LL);
    }
    v11 = supportServantData->m_Items[selectNum];
    if ( !v11 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v11->fields.eventSetupInfo2;
    v14 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v17->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v17->fields.tempFixEventQuestSupportDeckIds;
    v20 = (int)_4__this;
    callback = sub_B0D974(SupportServantEquipListMenu_CallbackFunc_TypeInfo, v15, v16);
    v22 = *(_QWORD *)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 16) = v22;
    *(_QWORD *)(callback + 32) = v17;
    sub_B0D840(callback + 32, v17);
    if ( !v14 )
LABEL_15:
      sub_B0D97C(_4__this);
    CommonUI__OpenSupportServantEquipListMenu(
      v14,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v20,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantEquipListMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.svtId == svtInfo->fields.svtId;
}