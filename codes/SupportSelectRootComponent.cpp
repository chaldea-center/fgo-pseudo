void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB446 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectRootComponent_TypeInfo, v1, v2, v3);
    byte_42EB446 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct System_Int32_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EB445 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42EB445 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct System_Int32_array *)sub_B5D5DC(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t CenterNum; // w0
  const MethodInfo *v7; // x2

  if ( (byte_42EB420 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12708/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EB420 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12708/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v7);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SupportServantData_o *CenterNum; // x0
  __int64 v9; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v14; // x23
  __int64 v15; // x0

  if ( (byte_42EB43F & 1) == 0 )
  {
    sub_B5D5C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndChangeDeckName__, v5, v6, v7);
    byte_42EB43F = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v15 = sub_B5D6C8(CenterNum);
    sub_B5D668(v15, 0LL);
  }
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v14 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B5D694(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_B5D69C(CenterNum, v9);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v14, 0LL);
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
    sub_B5D69C(titleInfo, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 CenterNum; // x0
  __int64 v10; // x1
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v13; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v15; // x22
  SupportServantData_o *v16; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v17; // x23
  __int64 v18; // x0

  if ( (byte_42EB438 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, targetDeckId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v6, v7, v8);
    byte_42EB438 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v13 = this->fields.copyTargetDeckId - 1, v13 >= max_length) )
  {
    v18 = sub_B5D6C8(CenterNum);
    sub_B5D668(v18, 0LL);
  }
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v15 = supportServantData->m_Items[(int)CenterNum];
  v16 = supportServantData->m_Items[v13];
  v17 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_B5D69C(CenterNum, v10);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v15, v16, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42EB443 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)orgData, (_DWORD)toData, isInit);
    byte_42EB443 = 1;
  }
  if ( !orgData )
LABEL_19:
    sub_B5D69C(this, orgData);
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
          v12 = sub_B5D6C8(this);
          sub_B5D668(v12, 0LL);
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
  __int64 v3; // x3
  CancelConfirmMenu_o *cancelConfirmMenu; // x0
  SupportSelectRootComponent_o *v7; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_42EB432 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42EB432 = 1;
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
      v7,
      this->fields.tmpSupportServantData,
      this->fields.supportServantData,
      0,
      v8);
    cancelConfirmMenu = (CancelConfirmMenu_o *)this->fields.supportSelectMenu;
    if ( cancelConfirmMenu )
    {
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, isDecide, v9);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v10);
      return;
    }
LABEL_14:
    sub_B5D69C(cancelConfirmMenu, isDecide);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42EB431 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    byte_42EB431 = 1;
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
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21497/*"ok"*/, v10);
      return;
    }
LABEL_14:
    sub_B5D69C(cancelConfirmDeckIdDialog, isDecide);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v16; // x21

  if ( (byte_42EB440 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)changeName, method);
    sub_B5D5C4(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11, v12, v13);
    byte_42EB440 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_B5D560(
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
      v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_32796964(deckNameInputMenu, v16, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(supportEditMenu, isDecide);
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
    sub_B5D69C(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B5D69C(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EB429 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EB429 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
        v11 = sub_B5D6C8(CenterNum);
        sub_B5D668(v11, 0LL);
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
    sub_B5D69C(CenterNum, isDecide);
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
    sub_B5D69C(0LL, flag);
  SupportSelectConfirmMenu__Close_30177088(supportSelectConfirmMenu, 0LL, method);
  this->fields.state = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndInitAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 confirmDeckMenu; // x0
  const MethodInfo *v7; // x1
  struct SupportServantData_array *supportServantData; // x8
  il2cpp_array_size_t v9; // w20
  int32_t i; // w21
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_42EB43C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42EB43C = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_34;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    confirmDeckMenu = SupportSelectRootComponent__getCenterNum(this, v7);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v9 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= supportServantData->max_length )
      {
LABEL_35:
        v17 = sub_B5D6C8(confirmDeckMenu);
        sub_B5D668(v17, 0LL);
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
          if ( v9 >= v11->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v11->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v12 = this->fields.supportServantData;
            if ( !v12 )
              goto LABEL_34;
            if ( v9 >= v12->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v12->m_Items[v9];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
          v13 = this->fields.supportServantData;
          if ( !v13 )
            goto LABEL_34;
          if ( v9 >= v13->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v13->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v14 = this->fields.supportServantData;
            if ( !v14 )
              goto LABEL_34;
            if ( v9 >= v14->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v14->m_Items[v9];
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
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v15);
            SupportSelectRootComponent__setEditUI(this, 1, v16);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_B5D69C(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v12; // x20

  if ( (byte_42EB41B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v8, v9, v10);
    byte_42EB41B = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B5D69C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 1, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndRemoveAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  if ( (byte_42EB43A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42EB43A = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_31;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v8 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v7);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v8 >= SHIDWORD(confirmDeckMenu[1].fields.basePanelList->m_Items[16]) )
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
                                                            v8,
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
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v8, 0LL);
      }
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v12->max_length )
      {
LABEL_32:
        v16 = sub_B5D6C8(confirmDeckMenu);
        sub_B5D668(v16, 0LL);
      }
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v8,
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
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v8, 0LL);
      }
      ++v8;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v14);
        SupportSelectRootComponent__setEditUI(this, 1, v15);
        return;
      }
    }
LABEL_31:
    sub_B5D69C(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndRemoveAllEquip(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_42EB43E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42EB43E = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_23;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v8 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v7);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v8 >= SHIDWORD(confirmDeckMenu[1].fields.basePanelList->m_Items[16]) )
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
                                                            v8,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_23;
        if ( (unsigned int)CenterNum >= v11->max_length )
        {
LABEL_24:
          v14 = sub_B5D6C8(confirmDeckMenu);
          sub_B5D668(v14, 0LL);
        }
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_23;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v8, 0LL);
      }
      ++v8;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v12);
        SupportSelectRootComponent__setEditUI(this, 1, v13);
        return;
      }
    }
LABEL_23:
    sub_B5D69C(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  const MethodInfo *v10; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v14; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v15; // x22
  const MethodInfo *v16; // x4
  __int64 v17; // x0

  if ( (byte_42EB437 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, deckId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v6, v7, v8);
    byte_42EB437 = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, *(const MethodInfo **)&deckId);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v10);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= supportServantData->max_length )
    {
      v17 = sub_B5D6C8(copyDeckSelectMenu);
      sub_B5D668(v17, 0LL);
    }
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v14 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v15 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v15,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_B5D69C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v14, isEdit, v15, v16);
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
  __int64 v3; // x3
  SupportSelectMenu_o *supportSelectMenu; // x0

  if ( (byte_42EB42A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB42A = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_B5D69C(supportSelectMenu, isDecide);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectMenu_o *supportSelectMenu; // x0
  struct SupportServantData_array *supportServantData; // x8
  unsigned __int64 v7; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v9; // x11
  __int64 v10; // x0

  if ( (byte_42EB427 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB427 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_17;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v10 = sub_B5D6C8(supportSelectMenu);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServantWithQuest(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB428 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, questId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v9, v10, v11);
    byte_42EB428 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v14, v15);
    CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
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
    sub_B5D69C(CenterNum, v7);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int32_t CenterNum; // w22
  const MethodInfo *v105; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x2
  const MethodInfo *v109; // x3
  int32_t v110; // w23
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v113; // x21
  CancelConfirmMenu_CallbackFunc_o *v114; // x22
  const MethodInfo *v115; // x2
  struct SupportServantData_array *v116; // x22
  SupportServantData_o *v117; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v120; // x24
  System_Int32_array *v121; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  SupportSelectMenu_o *v123; // x20
  const MethodInfo *v124; // x2
  const MethodInfo *v125; // x2
  bool v126; // w1
  SupportSelectRootComponent_o *v127; // x0
  const MethodInfo *v128; // x2
  struct SupportServantData_array *v129; // x8
  SupportServantData_o *v130; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v132; // x21
  const MethodInfo *v133; // x3
  SupportSelectMenu_o *v134; // x20
  const MethodInfo *v135; // x2
  const MethodInfo *v136; // x1
  struct SupportServantData_array *v137; // x8
  __int64 v138; // x21
  __int64 v139; // x22
  __int64 v140; // x23
  struct SupportServantData_array *v141; // x8
  SupportServantData_o *v142; // x8
  struct SupportServantData_array *v143; // x8
  SupportServantData_o *v144; // x8
  int v145; // w22
  struct SupportServantData_array *v146; // x8
  SupportServantData_o *v147; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v149; // w22
  struct SupportServantData_array *v150; // x8
  SupportServantData_o *v151; // x8
  QuestRestrictionInfo_o *v152; // x20
  __int64 v153; // x23
  __int64 v154; // x24
  int32_t v155; // w0
  int32_t v156; // w23
  int32_t v157; // w24
  PartyOrganizationUtility_c *v158; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v160; // x8
  const MethodInfo *v161; // x2
  struct SupportServantData_array *v162; // x22
  SupportServantData_o *v163; // x8
  EventUpValSetupInfo_o *v164; // x27
  System_Int32_array *v165; // x25
  System_Int32_array *v166; // x26
  CommonUI_o *v167; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v168; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x1
  struct SupportServantData_array *v172; // x8
  int64_t v173; // x21
  struct SupportServantData_array *v174; // x8
  SupportServantData_o *v175; // x8
  struct SupportServantData_array *v176; // x8
  SupportServantData_o *v177; // x8
  int32_t kind; // w20
  ServantLeaderInfo_o *v179; // x21
  CommonUI_o *v180; // x22
  ServantStatusDialog_EndDelegate_o *v181; // x23
  struct SupportServantData_array *v182; // x8
  struct SupportServantData_array *v183; // x8
  int64_t v184; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  struct SupportServantData_array *v186; // x8
  SupportServantData_o *v187; // x8
  int32_t v188; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v190; // x21
  ServantStatusDialog_EndDelegate_o *v191; // x23
  const MethodInfo *v192; // x2
  struct SupportServantData_array *v193; // x8
  SupportServantData_o *v194; // x8
  int32_t v195; // w20
  int64_t v196; // x21
  CommonUI_o *v197; // x22
  ServantStatusDialog_FormationEndDelegate_o *v198; // x23
  CommonUI_o *v199; // x20
  ServantStatusDialog_EndDelegate_o *v200; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v202; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v205; // x23
  struct SupportSelectRootComponent___c_StaticFields *v206; // x0
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v213; // x0
  int32_t v214; // w0
  SupportSelectRootComponent___c_c *v215; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v217; // w20
  struct SupportSelectRootComponent___c_StaticFields *v218; // x9
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v220; // x24
  struct SupportSelectRootComponent___c_StaticFields *v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v228; // x0
  struct SupportServantData_array *v229; // x8
  SupportServantData_o *v230; // x0
  const MethodInfo *v231; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v233; // x21
  SupportSelectRootComponent___c_c *v234; // x8
  struct SupportSelectRootComponent___c_StaticFields *v235; // x9
  System_Action_o *_9__66_2; // x23
  System_String_o *v237; // x22
  Il2CppObject *v238; // x24
  struct SupportSelectRootComponent___c_StaticFields *v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  __int64 v246; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v247; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v248; // 0:x0.16

  if ( (byte_42EB421 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, deckNum, *(_QWORD *)&classPos);
    sub_B5D5C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CancelConfirmMenu_CallbackFunc_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v26, v27, v28);
    sub_B5D5C4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v56, v57, v58);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&SoundManager_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v65, v66, v67);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v68, v69, v70);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndShowEquip__, v71, v72, v73);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v74, v75, v76);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndShowServant__, v77, v78, v79);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v80, v81, v82);
    sub_B5D5C4(&Method_SupportSelectRootComponent_OnBackSelect__, v83, v84, v85);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v86, v87, v88);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v89, v90, v91);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v92, v93, v94);
    sub_B5D5C4(&SupportSelectRootComponent___c_TypeInfo, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_1/*""*/, v101, v102, v103);
    byte_42EB421 = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v105);
  v110 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v109);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_158;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_211;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_212;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v113 = supportServantData->m_Items[CenterNum];
      v114 = (CancelConfirmMenu_CallbackFunc_o *)sub_B5D694(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v114,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_211;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v113, v114, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v109);
      if ( (isUpdate & 1) != 0 )
      {
        v129 = this->fields.supportServantData;
        if ( !v129 )
          goto LABEL_211;
        if ( CenterNum < v129->max_length )
        {
          v130 = v129->m_Items[CenterNum];
          if ( v130 && SupportServantData__get_IsNoServant(v130, 0LL) )
            goto LABEL_30;
          SupportSelectRootComponent__SaveTemp(this, -1, v128);
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
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v107, v192);
          goto LABEL_158;
        }
LABEL_212:
        v246 = sub_B5D6C8(isUpdate);
        sub_B5D668(v246, 0LL);
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v107);
        v127 = this;
        v126 = 0;
        this->fields.isDragSwapState = 0;
LABEL_159:
        SupportSelectRootComponent__setEditUI(v127, v126, v125);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v202 = SupportSelectRootComponent___c_TypeInfo;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v202 = SupportSelectRootComponent___c_TypeInfo;
      }
      static_fields = v202->static_fields;
      _9__66_0 = static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( (BYTE3(v202->vtable._0_Equals.methodPtr) & 4) != 0 && !v202->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v202);
          static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v205 = (Il2CppObject *)static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v205,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v206 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v206->__9__66_0 = _9__66_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v206->__9__66_0,
          (System_Int32_array **)_9__66_0,
          v207,
          v208,
          v209,
          v210,
          v211,
          v212);
      }
      v213 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
      v214 = System_Linq_Enumerable__Count_int_(
               v213,
               (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      v215 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v217 = v214;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v215 = SupportSelectRootComponent___c_TypeInfo;
      }
      v218 = v215->static_fields;
      _9__66_1 = v218->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( (BYTE3(v215->vtable._0_Equals.methodPtr) & 4) != 0 && !v215->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v215);
          v218 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v220 = (Il2CppObject *)v218->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v220,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v221 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v221->__9__66_1 = _9__66_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v221->__9__66_1,
          (System_Int32_array **)_9__66_1,
          v222,
          v223,
          v224,
          v225,
          v226,
          v227);
      }
      v228 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v228,
                   (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( v217 < 1 || (int)isUpdate <= 0 )
      {
        v229 = this->fields.supportServantData;
        if ( !v229 )
          goto LABEL_211;
        if ( CenterNum >= v229->max_length )
          goto LABEL_212;
        v230 = v229->m_Items[CenterNum];
        if ( v230 && SupportServantData__get_IsNoServant(v230, 0LL) )
        {
LABEL_30:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v132 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B5D694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v132,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v132, v133);
            return;
          }
LABEL_211:
          sub_B5D69C(isUpdate, v107);
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
      SupportSelectRootComponent__RequestApi(this, v231);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v108);
      SupportSelectRootComponent__setEditUI(this, 1, v115);
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
      v116 = this->fields.supportServantData;
      if ( !v116 )
        goto LABEL_211;
      if ( v116->max_length <= deckNum )
        goto LABEL_212;
      v117 = v116->m_Items[deckNum];
      if ( !v117 )
        goto LABEL_211;
      eventSetupInfo2 = v117->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v120 = this->fields.tempFixMainQuestSupportDeckIds;
      v121 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_211;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v116,
        deckNum,
        classPos,
        eventSetupInfo2,
        v110,
        v120,
        v121,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v108);
      SupportSelectRootComponent__setEditUI(this, 1, v161);
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v162 = this->fields.supportServantData;
      if ( !v162 )
        goto LABEL_211;
      if ( v162->max_length <= deckNum )
        goto LABEL_212;
      v163 = v162->m_Items[deckNum];
      if ( !v163 )
        goto LABEL_211;
      v164 = v163->fields.eventSetupInfo2;
      v165 = this->fields.tempFixMainQuestSupportDeckIds;
      v166 = this->fields.tempFixEventQuestSupportDeckIds;
      v167 = (CommonUI_o *)isUpdate;
      v168 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v168,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v167 )
        goto LABEL_211;
      CommonUI__OpenSupportServantEquipListMenu(v167, v162, deckNum, classPos, v164, v110, v165, v166, v168, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v107);
      if ( !supportSelectMenu )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v170);
      SupportSelectRootComponent__ChangeDeckName(this, v171);
      return;
    case 5:
      v123 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v107);
      if ( !v123 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v123, isUpdate, v124);
      v126 = 1;
      this->fields.isDragSwapState = 1;
      v127 = this;
      goto LABEL_159;
    case 6:
      v134 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v107);
      if ( !v134 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v134, isUpdate, v135);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v136);
      return;
    case 7:
      v137 = this->fields.supportServantData;
      if ( !v137 )
        goto LABEL_211;
      if ( v137->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v137->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v138 = *(_QWORD *)(isUpdate + 24);
      if ( !v138 )
        goto LABEL_140;
      v140 = *(_QWORD *)(v138 + 48);
      v139 = *(_QWORD *)(v138 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v247.fields.currentCryptoKey = v140;
      *(_QWORD *)&v247.fields.fakeValue = v139;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v247, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_140;
      v141 = this->fields.supportServantData;
      if ( !v141 )
        goto LABEL_211;
      if ( v141->max_length <= deckNum )
        goto LABEL_212;
      v142 = v141->m_Items[deckNum];
      if ( !v142 )
        goto LABEL_211;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v138,
                   v142->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_140;
      v143 = this->fields.supportServantData;
      if ( !v143 )
        goto LABEL_211;
      if ( v143->max_length <= deckNum )
        goto LABEL_212;
      v144 = v143->m_Items[deckNum];
      if ( !v144 )
        goto LABEL_211;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v138, v144->fields.questRestrictionInfo, 0LL) )
        goto LABEL_140;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      v145 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( v145 < 1 )
        goto LABEL_73;
      v146 = this->fields.supportServantData;
      if ( !v146 )
        goto LABEL_211;
      if ( v146->max_length <= deckNum )
        goto LABEL_212;
      v147 = v146->m_Items[deckNum];
      if ( !v147 )
        goto LABEL_211;
      questRestrictionInfo = v147->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_211;
      v149 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, v149, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_73;
      v150 = this->fields.supportServantData;
      if ( !v150 )
        goto LABEL_211;
      if ( v150->max_length <= deckNum )
        goto LABEL_212;
      v151 = v150->m_Items[deckNum];
      if ( !v151 )
        goto LABEL_211;
      v152 = v151->fields.questRestrictionInfo;
      v154 = *(_QWORD *)(v138 + 48);
      v153 = *(_QWORD *)(v138 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v248.fields.currentCryptoKey = v154;
      *(_QWORD *)&v248.fields.fakeValue = v153;
      v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v248, 0LL);
      v156 = *(_DWORD *)(v138 + 64);
      v157 = v155;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v138, 0LL);
      if ( !v152 )
        goto LABEL_211;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v152, v157, v156, isUpdate, v149, 1, 0LL) )
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
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v107);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( *(_BYTE *)(isUpdate + 140) )
      {
        v158 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v158 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v158->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_211;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v233 = (System_String_o *)isUpdate;
            v234 = SupportSelectRootComponent___c_TypeInfo;
            if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v234 = SupportSelectRootComponent___c_TypeInfo;
            }
            v235 = v234->static_fields;
            _9__66_2 = v235->__9__66_2;
            v237 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( (BYTE3(v234->vtable._0_Equals.methodPtr) & 4) != 0 && !v234->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v234);
                v235 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              }
              v238 = (Il2CppObject *)v235->__9;
              _9__66_2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                _9__66_2,
                v238,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v239 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v239->__9__66_2 = _9__66_2;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v239->__9__66_2,
                (System_Int32_array **)_9__66_2,
                v240,
                v241,
                v242,
                v243,
                v244,
                v245);
            }
            if ( !Instance )
              goto LABEL_211;
            CommonUI__OpenNotificationDialog(Instance, v237, v233, _9__66_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
      v160 = this->fields.supportInfoJump;
      if ( !v160 )
        goto LABEL_211;
      v160->fields.selectDeckId = *(_DWORD *)(v138 + 16);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_211;
      if ( !SupportInfoJump__ReturnScene(
              (SupportInfoJump_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v172 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v172 )
        goto LABEL_211;
      if ( v172->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v172->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_211;
      v173 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_140;
      v174 = this->fields.supportServantData;
      if ( !v174 )
        goto LABEL_211;
      if ( v174->max_length <= deckNum )
        goto LABEL_212;
      v175 = v174->m_Items[deckNum];
      if ( !v175 )
        goto LABEL_211;
      if ( v175->fields.isFriendInfo )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v176 = this->fields.supportServantData;
        if ( !v176 )
          goto LABEL_211;
        if ( v176->max_length <= deckNum )
          goto LABEL_212;
        v177 = v176->m_Items[deckNum];
        if ( !v177 )
          goto LABEL_211;
        kind = v177->fields.kind;
        v179 = *(ServantLeaderInfo_o **)(v173 + 24);
        v180 = (CommonUI_o *)isUpdate;
        v181 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v181,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v180 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18214956(v180, kind, v179, v181, 0LL);
      }
      else
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v193 = this->fields.supportServantData;
        if ( !v193 )
          goto LABEL_211;
        if ( v193->max_length <= deckNum )
          goto LABEL_212;
        v194 = v193->m_Items[deckNum];
        if ( !v194 )
          goto LABEL_211;
        v195 = v194->fields.kind;
        v196 = *(_QWORD *)(v173 + 56);
        v197 = (CommonUI_o *)isUpdate;
        v198 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B5D694(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v198,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v197 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18212128(v197, v195, v196, v198, 0LL, 0LL);
      }
      return;
    case 9:
      v182 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v182 )
        goto LABEL_211;
      if ( v182->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v182->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_140;
      v183 = this->fields.supportServantData;
      if ( !v183 )
        goto LABEL_211;
      if ( v183->max_length <= deckNum )
        goto LABEL_212;
      v184 = isUpdate;
      isUpdate = (int64_t)v183->m_Items[deckNum];
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
      v186 = this->fields.supportServantData;
      if ( !v186 )
        goto LABEL_211;
      if ( v186->max_length <= deckNum )
        goto LABEL_212;
      v187 = v186->m_Items[deckNum];
      if ( !v187 )
        goto LABEL_211;
      if ( v187->fields.isFriendInfo )
      {
        if ( v187->fields.kind == 5 )
          v188 = 14;
        else
          v188 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_211;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v190 = (CommonUI_o *)isUpdate;
        v191 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v191,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v190 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog_18217320(v190, v188, equipTarget1, v191, 0LL, 0LL);
      }
      else
      {
        v199 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v200 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v200,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v199 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog(v199, 11, v184, 1, v200, 0LL, 0LL);
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

  if ( (byte_42EB426 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, kind, classPos1, leader1);
    byte_42EB426 = 1;
  }
  memset(&v36[1], 0, 64);
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_21084824(equipTarget1->fields.svtId, 0LL);
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
    v16 = BasicHelper__DecryptValue_21084824(v15->fields.svtId, 0LL);
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
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL);
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
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v34, 0LL);
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
        sub_B5D69C(CenterNum, v28);
      }
    }
    v33 = sub_B5D6C8(CenterNum);
    sub_B5D668(v33, 0LL);
  }
}


void __fastcall SupportSelectRootComponent__EndSupportServantEquipListMenu(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  __int64 v63; // x20
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v82; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v84; // x23
  UserServantLeaderEntity_o *v85; // x24
  UserServantLeaderEntity_o *v86; // x25
  int32_t v87; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  int32_t v89; // w25
  ServantEntity_o *Entity; // x24
  struct UserServantLeaderEntity_array *v91; // x8
  PartyOrganizationUtility_o *v92; // x23
  UserServantLeaderEntity_o *v93; // x25
  UserServantLeaderEntity_o *v94; // x26
  UserServantEntity_o *v95; // x8
  System_String_o *v96; // x22
  __int64 v97; // x8
  int32_t v98; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v101; // x21
  System_String_o *v102; // x0
  CommonUI_o *Instance; // x22
  System_Action_o *v104; // x23
  CommonUI_o *v105; // x19
  System_String_o *v106; // x21
  System_String_o *v107; // x22
  System_String_o *v108; // x23
  CommonConfirmDialog_ClickDelegate_o *v109; // x24
  __int64 v110; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_42EB424 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, classPos, item);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v42, v43, v44);
    sub_B5D5C4(
      &Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
      v45,
      v46,
      v47);
    sub_B5D5C4(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    byte_42EB424 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v63 = sub_B5D694(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v63,
    0LL);
  if ( !v63 )
    goto LABEL_52;
  *(_QWORD *)(v63 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 16), (System_Int32_array **)this, v66, v67, v68, v69, v70, v71);
  *(_QWORD *)(v63 + 32) = item;
  v72 = v63 + 32;
  *(_DWORD *)(v63 + 24) = result;
  *(_DWORD *)(v63 + 28) = classPos;
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 32), (System_Int32_array **)item, v73, v74, v75, v76, v77, v78);
  if ( *(_DWORD *)(v63 + 24) == 1 && *(_QWORD *)v72 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_52;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v110 = sub_B5D6C8(UserServantLeaderEntity);
      sub_B5D668(v110, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_52;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v63 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v82 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v72 )
          goto LABEL_52;
        if ( *(_QWORD *)(*(_QWORD *)v72 + 128LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v82->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_52;
          v84 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v86 = userServantLeaderEntityList->m_Items[6];
          v85 = userServantLeaderEntityList->m_Items[7];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v115.fields.currentCryptoKey = v86;
          *(_QWORD *)&v115.fields.fakeValue = v85;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v115,
                                                              0LL);
          if ( !v82->fields.userServantLeaderEntityList )
            goto LABEL_52;
          v87 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v82->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v72 )
            goto LABEL_52;
          v88 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v72 + 128LL);
          if ( !v88 )
            goto LABEL_52;
          v89 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v88[1],
                                                              0LL);
          if ( !v84 )
            goto LABEL_52;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v84,
                 &skillName,
                 &actMaxRarity,
                 v87,
                 v89,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity,
                                              *(_DWORD *)&v82->fields.isFriendInfo,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                }
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v91 = v82->fields.userServantLeaderEntityList;
                if ( v91 )
                {
                  v92 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v94 = v91->m_Items[8];
                  v93 = v91->m_Items[9];
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v116.fields.currentCryptoKey = v94;
                  *(_QWORD *)&v116.fields.fakeValue = v93;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                      v116,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v95 = (UserServantEntity_o *)v82->fields.userServantLeaderEntityList;
                    if ( v95 )
                    {
                      v96 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v95, 0LL);
                      v97 = *(_QWORD *)v72;
                      if ( *(_QWORD *)v72 )
                      {
                        v98 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v97 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          }
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
                                                                              Name,
                                                                              0LL);
                          if ( v92 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v92,
                                                     &maxLength,
                                                     v96,
                                                     v98,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity,
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                maxLength,
                                0LL);
                              v101 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v101, 0LL);
                              if ( v101 )
                              {
                                System_Text_StringBuilder__Append_42953744(v101, RarityInvalidMessage, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v102 = LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_42953744(v101, v102, 0LL);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v104 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v104,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu(Instance, v104, 0LL);
                                  v105 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v106 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v101->klass->vtable._3_ToString.method)(
                                                              v101,
                                                              v101->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v109 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v109,
                                    (Il2CppObject *)v63,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v105 )
                                  {
                                    CommonUI__OpenConfirmDialog_18202048(
                                      v105,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v106,
                                      v107,
                                      v108,
                                      v109,
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
            sub_B5D69C(UserServantLeaderEntity, v65);
          }
        }
      }
    }
  }
  SupportSelectRootComponent__SetEquip(
    this,
    *(_DWORD *)(v63 + 24),
    *(_DWORD *)(v63 + 28),
    *(SupportServantEquipListViewItem_o **)(v63 + 32),
    v79);
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
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&result);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  int32_t CenterNum; // w22
  __int64 Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x1
  BalanceConfig_c *v78; // x8
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v80; // x24
  int32_t v81; // w9
  int32_t v82; // w26
  __int64 v83; // x23
  __int64 v84; // x19
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x28
  struct SupportServantData_array *v93; // x8
  SupportServantData_o *v94; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v96; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  ServantEntity_o *v98; // x27
  int32_t Rarity; // w0
  int v100; // w19
  int64_t v101; // x2
  int32_t v102; // w28
  System_String_o *v103; // x19
  Il2CppObject *v104; // x25
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  System_String_o *v107; // x25
  Il2CppObject *v108; // x19
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  __int64 v112; // x0
  __int64 v114; // [xsp+10h] [xbp-90h]
  signed __int64 v115; // [xsp+18h] [xbp-88h]
  ServantLimitImageMaster_o *v116; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // [xsp+38h] [xbp-68h]
  int v120; // [xsp+44h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42EB42C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, idx, nowDeckId, fixDeckIds);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&int_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&NetworkManager_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58, v59, v60);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v61, v62, v63);
    sub_B5D5C4(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_12629/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_12630/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v70, v71, v72);
    byte_42EB42C = 1;
  }
  entity = 0LL;
  v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v119,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v73) )
      return (System_Collections_Generic_List_string__o *)v119;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v73) )
  {
    return (System_Collections_Generic_List_string__o *)v119;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v74);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_76:
    sub_B5D69C(Instance, v77);
  }
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v116 = (ServantLimitImageMaster_o *)Instance;
  v78 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v78 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v78->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v78 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v78->static_fields->FixEventSupportDeckNum;
  }
  v115 = *p_FixMainSupportDeckNum;
  if ( (int)v115 >= 1 )
  {
    v80 = 0LL;
    v114 = (unsigned int)idx;
    do
    {
      if ( v80 != v114 )
      {
        if ( !fixDeckIds )
          goto LABEL_76;
        if ( v80 >= fixDeckIds->max_length )
        {
LABEL_77:
          v112 = sub_B5D6C8(Instance);
          sub_B5D668(v112, 0LL);
        }
        v81 = fixDeckIds->m_Items[v80 + 1];
        if ( v81 )
        {
          v82 = 0;
          v83 = v81 - 1;
          while ( 1 )
          {
            if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v78);
              v78 = BalanceConfig_TypeInfo;
            }
            if ( v82 >= v78->static_fields->SupportDeckMemberMax )
              break;
            v84 = sub_B5D694(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v84,
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
                                  v82,
                                  0LL);
            if ( !v84 )
              goto LABEL_76;
            *(_QWORD *)(v84 + 16) = Instance;
            v92 = v84 + 16;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v84 + 16),
              (System_Int32_array **)Instance,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            if ( !*(_QWORD *)(v84 + 16) )
              goto LABEL_76;
            if ( *(_DWORD *)(*(_QWORD *)(v84 + 16) + 64LL) )
            {
              v93 = this->fields.supportServantData;
              if ( !v93 )
                goto LABEL_76;
              if ( (unsigned int)v83 >= v93->max_length )
                goto LABEL_77;
              v94 = v93->m_Items[v83];
              if ( !v94 )
                goto LABEL_76;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v94->fields.userServantLeaderEntityList;
              v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v96,
                (Il2CppObject *)v84,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
              v97 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v96,
                      (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           v97,
                           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v92 )
                  goto LABEL_76;
                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_76;
                Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      *(_DWORD *)(*(_QWORD *)v92 + 64LL),
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v92 )
                  goto LABEL_76;
                v98 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v92 + 16LL);
                if ( !Instance )
                  goto LABEL_76;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v100 = Rarity;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v92 )
                    goto LABEL_76;
                  v101 = Instance;
                  Instance = (__int64)Master_WarQuestSelectionMaster;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_76;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v101,
                               *(_DWORD *)(*(_QWORD *)v92 + 64LL),
                               0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v92 )
                      goto LABEL_76;
                    if ( !entity )
                      goto LABEL_76;
                    Instance = (__int64)v116;
                    if ( !v116 )
                      goto LABEL_76;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v116,
                                 *(_DWORD *)(*(_QWORD *)v92 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_76;
                    v102 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v102 = -1;
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12629/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v120 = v100;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v120);
                  if ( !v98 )
                    goto LABEL_76;
                  v108 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v98, v102, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v98, 0LL);
                  v106 = System_String__Format_44578852(v107, v108, Name, ClassName, 0LL);
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12630/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v98 )
                    goto LABEL_76;
                  v103 = (System_String_o *)Instance;
                  v104 = (Il2CppObject *)ServantEntity__getName(v98, -1, -1, 0LL);
                  v105 = (Il2CppObject *)ServantEntity__getClassName(v98, 0LL);
                  v106 = System_String__Format_44573324(v103, v104, v105, 0LL);
                }
                v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)v106;
                Instance = (__int64)v119;
                if ( !v119 )
                  goto LABEL_76;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v119,
                  v77,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            ++v82;
            v78 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v80;
    }
    while ( (__int64)v80 < v115 );
  }
  return (System_Collections_Generic_List_string__o *)v119;
}


void __fastcall SupportSelectRootComponent__Init(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 CenterNum; // x0
  __int64 v9; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22
  const MethodInfo *v14; // x4
  __int64 v15; // x0

  if ( (byte_42EB43B & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndInitAll__, v5, v6, v7);
    byte_42EB43B = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v15 = sub_B5D6C8(CenterNum);
    sub_B5D668(v15, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B5D69C(CenterNum, v9);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v12, v13, v14);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct SupportServantData_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1

  if ( (byte_42EB413 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SupportServantData___TypeInfo, v5, v6, v7);
    byte_42EB413 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SupportServantData_array *)sub_B5D5DC(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v8->static_fields->SupportDeckMax);
  this->fields.supportServantData = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  SupportSelectRootComponent__RefreshSupportServantData(this, v16);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w22
  int64_t Servant; // x0
  int32_t j; // w20
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v9; // x21
  struct SupportServantData_array *v10; // x8
  struct SupportServantData_array *v11; // x8
  int64_t v12; // x21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v14; // x8
  struct SupportServantData_array *v15; // x9
  SupportServantData_o *v16; // x9
  __int64 v18; // x0

  if ( (byte_42EB444 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB444 = 1;
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
      v14 = supportServantData->m_Items[i];
      if ( !v14 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      Servant = SupportServantData__getServant(v14, j, 0LL);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
        goto LABEL_35;
      v9 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, 0LL);
      if ( v9 != Servant )
        return 1;
      v10 = this->fields.supportServantData;
      if ( !v10 )
        goto LABEL_34;
      if ( i >= v10->max_length )
        goto LABEL_35;
      Servant = (int64_t)v10->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL);
      v11 = this->fields.orgSupportServantData;
      if ( !v11 )
        goto LABEL_34;
      if ( i >= v11->max_length )
        goto LABEL_35;
      v12 = Servant;
      Servant = (int64_t)v11->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v12 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v15 = this->fields.orgSupportServantData;
    if ( !v15 )
      goto LABEL_34;
    if ( i >= v15->max_length )
    {
LABEL_35:
      v18 = sub_B5D6C8(Servant);
      sub_B5D668(v18, 0LL);
    }
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_B5D69C(Servant, method);
    if ( System_String__op_Inequality(v14->fields._deckName_k__BackingField, v16->fields._deckName_k__BackingField, 0LL) )
      return 1;
  }
  return 0;
}


bool __fastcall SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x0

  if ( (byte_42EB415 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, checkDeckId, (_DWORD)method, v3);
    byte_42EB415 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_42EB414 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, checkDeckId, (_DWORD)method, v3);
    byte_42EB414 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixMainQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsPossibleCopy(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  SupportServantData_o *CenterNum; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  il2cpp_array_size_t v27; // w22
  unsigned __int64 v28; // x27
  __int64 v29; // x28
  int v30; // w8
  il2cpp_array_size_t v31; // w19
  int32_t i; // w23
  __int64 v33; // x24
  struct SupportServantData_array *supportServantData; // x8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  struct SupportServantData_array *v42; // x8
  SupportServantData_o *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  __int64 v48; // x0
  System_Int32_array *v50; // [xsp+8h] [xbp-58h]

  v4 = fixDeckIds;
  if ( (byte_42EB435 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, idx, (_DWORD)fixDeckIds, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v18, v19, v20);
    sub_B5D5C4(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v21, v22, v23);
    byte_42EB435 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !v4 )
LABEL_28:
    sub_B5D69C(CenterNum, v25);
  v26 = *(_QWORD *)&v4->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = (unsigned int)CenterNum;
    v28 = 0LL;
    v29 = (int)CenterNum;
    v50 = v4;
    do
    {
      if ( v28 >= (unsigned int)v26 )
      {
LABEL_29:
        v48 = sub_B5D6C8(CenterNum);
        sub_B5D668(v48, 0LL);
      }
      v30 = v4->m_Items[v28 + 1];
      v31 = v30 - 1;
      if ( v30 >= 1 && v31 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            JUMPOUT(0x1CDCA54LL);
          }
          if ( i >= BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax )
            break;
          v33 = sub_B5D694(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v33,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v27 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v29];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v33 )
            goto LABEL_28;
          *(_QWORD *)(v33 + 16) = CenterNum;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v33 + 16),
            (System_Int32_array **)CenterNum,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = *(_QWORD *)(v33 + 16);
          if ( !v41 )
            goto LABEL_28;
          if ( *(_DWORD *)(v41 + 64) )
          {
            v42 = this->fields.supportServantData;
            if ( !v42 )
              goto LABEL_28;
            if ( v31 >= v42->max_length )
              goto LABEL_29;
            v43 = v42->m_Items[v31];
            if ( !v43 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v43->fields.userServantLeaderEntityList;
            v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v45,
              (Il2CppObject *)v33,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
            v46 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v45,
                    (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                   v46,
                   (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return 0;
          }
        }
      }
      v4 = v50;
      ++v28;
      LODWORD(v26) = v50->max_length;
    }
    while ( (__int64)v28 < (int)v26 );
  }
  return 1;
}


bool __fastcall SupportSelectRootComponent__IsUpdateDeckId(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v34; // x1
  System_Array_o *v35; // x22
  int klass; // w25
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  BalanceConfig_c *v40; // x0
  Il2CppObject *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  BalanceConfig_c *v43; // x0
  bool v44; // w21
  char v45; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v47; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v50; // x23
  struct SupportSelectRootComponent___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  int32_t v59; // w0
  SupportSelectRootComponent___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v62; // w20
  struct SupportSelectRootComponent___c_StaticFields *v63; // x9
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v65; // x23
  struct SupportSelectRootComponent___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  int32_t v74; // w0
  bool v75; // w8

  if ( (byte_42EB422 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v23, v24, v25);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v26, v27, v28);
    sub_B5D5C4(&SupportSelectRootComponent___c_TypeInfo, v29, v30, v31);
    byte_42EB422 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_46;
  v35 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[12].monitor;
  if ( !SelfUserGame )
    goto LABEL_46;
  klass = (int)v35[12].klass;
  if ( SelfUserGame[1].monitor )
  {
    v37 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v37 )
    {
      v38 = v37;
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D684(v37, int___TypeInfo);
      if ( !v39 )
        goto LABEL_18;
    }
    else
    {
      v39 = 0LL;
    }
  }
  else
  {
    v40 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D5DC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v40->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v35[13].klass;
  if ( !SelfUserGame )
LABEL_46:
    sub_B5D69C(SelfUserGame, v34);
  if ( !SelfUserGame[1].monitor )
    goto LABEL_19;
  v41 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v41 )
  {
    v42 = 0LL;
    goto LABEL_24;
  }
  v38 = v41;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D684(v41, int___TypeInfo);
  if ( !v42 )
  {
LABEL_18:
    sub_B5D990(v38);
LABEL_19:
    v43 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v43 = BalanceConfig_TypeInfo;
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D5DC(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v43->static_fields->FixEventSupportDeckNum);
  }
LABEL_24:
  v44 = System_Linq_Enumerable__SequenceEqual_int_(
          v39,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v45 = v44 & System_Linq_Enumerable__SequenceEqual_int_(
                v42,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) ^ 1;
  if ( (v45 & 1) != 0 )
    goto LABEL_43;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v47 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v47 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_0,
      v50,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v51 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v51->__9__67_0 = _9__67_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v51->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v59 = System_Linq_Enumerable__Count_int_(v58, (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  v60 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v62 = v59;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v60 = SupportSelectRootComponent___c_TypeInfo;
  }
  v63 = v60->static_fields;
  _9__67_1 = v63->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v63 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_1,
      v65,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v66 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v66->__9__67_1 = _9__67_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v74 = System_Linq_Enumerable__Count_int_(v73, (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v62 >= 1 && v74 > 0 )
LABEL_43:
    v75 = 0;
  else
    v75 = CenterNum + 1 != klass;
  return v75 | v45 & 1;
}


bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BalanceConfig_c *v5; // x0

  if ( (byte_42EB416 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)method, v3);
    byte_42EB416 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->SupportDeckMax > index;
}


void __fastcall SupportSelectRootComponent__OnBackSelect(
        SupportSelectRootComponent_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x19
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v73; // x22
  UserServantEntity_o *v74; // x8
  PartyOrganizationUtility_o *v75; // x23
  __int64 v76; // x24
  __int64 v77; // x25
  int32_t v78; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v80; // w25
  UserServantEntity_o *v81; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // x20
  __int64 v83; // x23
  __int64 v84; // x24
  ServantEntity_o *v85; // x23
  PartyOrganizationUtility_o *v86; // x20
  UserServantEntity_o *v87; // x8
  System_String_o *v88; // x21
  EquipTargetInfo_o *v89; // x8
  int32_t v90; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v92; // x21
  System_String_o *v93; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v95; // x21
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  CommonConfirmDialog_ClickDelegate_o *v98; // x24
  __int64 v99; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_42EB423 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, result, classPos, entity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v36, v37, v38);
    sub_B5D5C4(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    byte_42EB423 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v54 = sub_B5D694(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v54,
    0LL);
  if ( !v54 )
    goto LABEL_44;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  *(_QWORD *)(v54 + 32) = entity;
  v63 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v54 + 32);
  *(_DWORD *)(v54 + 24) = result;
  *(_DWORD *)(v54 + 28) = classPos;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), (System_Int32_array **)entity, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v54 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_44;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v99 = sub_B5D6C8(UserServantLeaderEntity);
      sub_B5D668(v99, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v54 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    v73 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v74 = (UserServantEntity_o *)*v63;
      if ( !*v63 )
        goto LABEL_44;
      v75 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v77 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
      v76 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v104.fields.currentCryptoKey = v77;
      *(_QWORD *)&v104.fields.fakeValue = v76;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v104,
                                                          0LL);
      if ( !*v63 )
        goto LABEL_44;
      v78 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v63, 0LL);
      oldServantIdList = v73->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_44;
      v80 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v75 )
        goto LABEL_44;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v75,
             &skillName,
             &actMaxRarity,
             v78,
             v80,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          v81 = (UserServantEntity_o *)*v63;
          if ( *v63 )
          {
            v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity;
            v84 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
            v83 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v105.fields.currentCryptoKey = v84;
            *(_QWORD *)&v105.fields.fakeValue = v83;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                v105,
                                                                0LL);
            if ( v82 )
            {
              v85 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v82,
                                         (int32_t)UserServantLeaderEntity,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v63 )
              {
                v86 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                    (*v63)[6],
                                                                    0LL);
                if ( v85 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      v85,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v87 = (UserServantEntity_o *)*v63;
                  if ( *v63 )
                  {
                    v88 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v87, 0LL);
                    v89 = (EquipTargetInfo_o *)v73->fields.oldServantIdList;
                    if ( v89 )
                    {
                      v90 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v89, 0LL);
                      if ( v86 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v86,
                                                 &maxLength,
                                                 v88,
                                                 v90,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity,
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            maxLength,
                            0LL);
                          v92 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v92, 0LL);
                          if ( v92 )
                          {
                            System_Text_StringBuilder__Append_42953744(v92, RarityInvalidMessage, 0LL);
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_42953744(v92, v93, 0LL);
                            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v95 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v92->klass->vtable._3_ToString.method)(
                                                       v92,
                                                       v92->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v98 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v98,
                              (Il2CppObject *)v54,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_18202048(
                                Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v95,
                                v96,
                                v97,
                                v98,
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
        sub_B5D69C(UserServantLeaderEntity, v56);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v54 + 24),
    *(_DWORD *)(v54 + 28),
    *(UserServantEntity_o **)(v54 + 32),
    v70);
}


void __fastcall SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v32; // x1
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v35; // x21
  CancelConfirmMenu_CallbackFunc_o *v36; // x22
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int32_t v39; // w20
  SupportServantSelectMenu_o *v40; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x24
  System_Int32_array *v44; // x22
  const MethodInfo *v45; // x2
  BalanceConfig_c *v46; // x0
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x1
  System_Int32_array *v49; // x23
  BalanceConfig_c *v50; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v54; // x27
  __int64 v55; // x0

  if ( (byte_42EB430 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CancelConfirmMenu_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v20, v21, v22);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v26, v27, v28);
    byte_42EB430 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v3) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v32);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
        {
          v55 = sub_B5D6C8(CenterNum);
          sub_B5D668(v55, 0LL);
        }
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v35 = supportServantData->m_Items[(int)CenterNum];
        v36 = (CancelConfirmMenu_CallbackFunc_o *)sub_B5D694(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v35, v36, 0LL);
          return;
        }
      }
      goto LABEL_59;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v37)
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v29);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v38);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21497/*"ok"*/, v45);
        return;
      }
      goto LABEL_59;
    }
    v39 = SupportSelectRootComponent__getCenterNum(this, v37);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_59;
    v40 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_59;
    pushTabButton = (int32_t)v40->fields.pushTabButton;
    if ( CenterNum->fields.basePanelList )
    {
      v42 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v42 )
      {
        v43 = v42;
        v44 = (System_Int32_array *)sub_B5D684(v42, int___TypeInfo);
        if ( !v44 )
          goto LABEL_48;
      }
      else
      {
        v44 = 0LL;
      }
    }
    else
    {
      v46 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v46 = BalanceConfig_TypeInfo;
      }
      v44 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v46->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v40->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_59;
    if ( !CenterNum->fields.basePanelList )
      goto LABEL_49;
    v47 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v47 )
    {
      v49 = 0LL;
      goto LABEL_54;
    }
    v43 = v47;
    v49 = (System_Int32_array *)sub_B5D684(v47, int___TypeInfo);
    if ( v49 )
    {
LABEL_54:
      SupportSelectRootComponent__getCenterNum(this, v48);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
      tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
      tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
      v54 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_B5D694(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
      CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        v54,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
        0LL);
      if ( cancelConfirmDeckIdDialog )
      {
        CancelConfirmDeckIdDialog__Open(
          cancelConfirmDeckIdDialog,
          v39 + 1,
          pushTabButton,
          tempFixMainQuestSupportDeckIds,
          tempFixEventQuestSupportDeckIds,
          v44,
          v49,
          v54,
          0LL);
        return;
      }
LABEL_59:
      sub_B5D69C(CenterNum, v29);
    }
LABEL_48:
    sub_B5D990(v43);
LABEL_49:
    v50 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v50 = BalanceConfig_TypeInfo;
    }
    v49 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v50->static_fields->FixEventSupportDeckNum);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t CenterNum; // w23
  const MethodInfo *v19; // x1
  int32_t v20; // w21
  const MethodInfo *v21; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v26; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  __int64 v36; // x0

  if ( (byte_42EB42E & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v15, v16, v17);
    byte_42EB42E = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v20 = SupportSelectRootComponent__getCenterNum(this, v19) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v20,
                                                                                   this->fields.tempFixEventQuestSupportDeckIds,
                                                                                   0,
                                                                                   v21);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v36 = sub_B5D6C8(FixedErrorList);
    sub_B5D668(v36, 0LL);
  }
  v26 = FixedErrorList;
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
      v28 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B5D694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v28, v29);
        return;
      }
LABEL_21:
      sub_B5D69C(FixedErrorList, v23);
    }
  }
  if ( !v26 )
    goto LABEL_21;
  if ( v26->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v20, 1, v24);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v20,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v31);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v20, v32);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v34);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v35);
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
                                                                                     v26,
                                                                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t CenterNum; // w23
  const MethodInfo *v19; // x1
  int32_t v20; // w21
  const MethodInfo *v21; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *FixedErrorList; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v26; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  __int64 v36; // x0

  if ( (byte_42EB42D & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndConfirmMenu__, v15, v16, v17);
    byte_42EB42D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v20 = SupportSelectRootComponent__getCenterNum(this, v19) + 1;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                                   this,
                                                                                   idx,
                                                                                   v20,
                                                                                   this->fields.tempFixMainQuestSupportDeckIds,
                                                                                   1,
                                                                                   v21);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_21;
  if ( CenterNum >= supportServantData->max_length )
  {
    v36 = sub_B5D6C8(FixedErrorList);
    sub_B5D668(v36, 0LL);
  }
  v26 = FixedErrorList;
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
      v28 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B5D694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v28, v29);
        return;
      }
LABEL_21:
      sub_B5D69C(FixedErrorList, v23);
    }
  }
  if ( !v26 )
    goto LABEL_21;
  if ( v26->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v20, 0, v24);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v20,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v31);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v20, v32);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v34);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v35);
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
                                                                                     v26,
                                                                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 CenterNum; // x0
  __int64 v9; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v13; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v14; // x22
  const MethodInfo *v15; // x4
  __int64 v16; // x0

  if ( (byte_42EB434 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5, v6, v7);
    byte_42EB434 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v16 = sub_B5D6C8(CenterNum);
    sub_B5D668(v16, 0LL);
  }
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v13 = supportServantData->m_Items[(int)CenterNum];
  v14 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_B5D69C(CenterNum, v9);
  SupportSelectEditMenu__Open(supportEditMenu, v13, isEdit, v14, v15);
}


void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 v5; // w19

  if ( (byte_42EB42F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isFixed, (_DWORD)method, v3);
    byte_42EB42F = 1;
  }
  v5 = !isFixed;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v6; // x22
  __int64 v7; // x24
  unsigned __int64 v8; // x8
  SupportServantData_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v17; // x22
  __int64 v18; // x24
  unsigned __int64 v19; // x8
  SupportServantData_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v28; // x22
  __int64 v29; // x24
  unsigned __int64 v30; // x8
  SupportServantData_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x0

  v4 = this;
  if ( (byte_42EB412 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&SupportServantData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB412 = 1;
  }
  supportServantData = (unsigned int *)v4->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v6 = 0LL;
  v7 = 8LL;
  while ( 1 )
  {
    v8 = supportServantData[6];
    if ( (__int64)v6 >= (int)v8 )
      break;
    if ( v6 >= v8 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v6 + 8] )
    {
      v9 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v9, 0LL);
      if ( v9 )
      {
        this = (SupportSelectRootComponent_o *)sub_B5D684(v9, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v39 = sub_B5D6BC(this);
          sub_B5D668(v39, 0LL);
        }
      }
      if ( v6 >= supportServantData[6] )
      {
LABEL_37:
        v38 = sub_B5D6C8(this);
        sub_B5D668(v38, 0LL);
      }
      *(_QWORD *)&supportServantData[2 * v6 + 8] = v9;
      sub_B5D560(
        (BattleServantConfConponent_o *)&supportServantData[v7],
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      supportServantData = (unsigned int *)v4->fields.supportServantData;
    }
    ++v6;
    v7 += 2LL;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v4->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v17 = 0LL;
  v18 = 8LL;
  while ( 1 )
  {
    v19 = orgSupportServantData[6];
    if ( (__int64)v17 >= (int)v19 )
      break;
    if ( v17 >= v19 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v17 + 8] )
    {
      v20 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v20, 0LL);
      if ( v20 )
      {
        this = (SupportSelectRootComponent_o *)sub_B5D684(v20, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v17 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v17 + 8] = v20;
      sub_B5D560(
        (BattleServantConfConponent_o *)&orgSupportServantData[v18],
        (System_Int32_array **)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      orgSupportServantData = (unsigned int *)v4->fields.orgSupportServantData;
    }
    ++v17;
    v18 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v4->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_B5D69C(this, method);
  v28 = 0LL;
  v29 = 8LL;
  while ( 1 )
  {
    v30 = tmpSupportServantData[6];
    if ( (__int64)v28 >= (int)v30 )
      break;
    if ( v28 >= v30 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v28 + 8] )
    {
      v31 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v31, 0LL);
      if ( v31 )
      {
        this = (SupportSelectRootComponent_o *)sub_B5D684(v31, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v28 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v28 + 8] = v31;
      sub_B5D560(
        (BattleServantConfConponent_o *)&tmpSupportServantData[v29],
        (System_Int32_array **)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      tmpSupportServantData = (unsigned int *)v4->fields.tmpSupportServantData;
    }
    ++v28;
    v29 += 2LL;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void __fastcall SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 CenterNum; // x0
  __int64 v9; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22
  const MethodInfo *v14; // x4
  __int64 v15; // x0

  if ( (byte_42EB439 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndRemoveAll__, v5, v6, v7);
    byte_42EB439 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v15 = sub_B5D6C8(CenterNum);
    sub_B5D668(v15, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B5D69C(CenterNum, v9);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v12, v13, v14);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 CenterNum; // x0
  __int64 v9; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22
  const MethodInfo *v14; // x4
  __int64 v15; // x0

  if ( (byte_42EB43D & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v5, v6, v7);
    byte_42EB43D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v15 = sub_B5D6C8(CenterNum);
    sub_B5D668(v15, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B5D694(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B5D69C(CenterNum, v9);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v12, v13, v14);
}


void __fastcall SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  il2cpp_array_size_t i; // w21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  SupportServantData_o *Instance; // x0
  const MethodInfo *v29; // x2
  NetworkManager_ResultCallbackFunc_o *v30; // x0
  __int64 v31; // x0

  if ( (byte_42EB41F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v20, v21, v22);
    byte_42EB41F = 1;
  }
  SupportSelectRootComponent__getCenterNum(this, method);
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v23) )
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
        goto LABEL_20;
      if ( i >= supportServantData->max_length )
        goto LABEL_21;
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_20;
      if ( i >= orgSupportServantData->max_length )
      {
LABEL_21:
        v31 = sub_B5D6C8(Instance);
        sub_B5D668(v31, 0LL);
      }
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_20;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
LABEL_17:
    Instance = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
        0LL);
      JUMPOUT(0x1CDCA5CLL);
    }
LABEL_20:
    sub_B5D69C(Instance, v24);
  }
  if ( SupportSelectRootComponent__IsUpdateDeckId(this, v24) )
    goto LABEL_17;
  SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21497/*"ok"*/, v29);
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
      v17 = sub_B5D6C8(IsNullOrEmpty);
      sub_B5D668(v17, 0LL);
    }
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = (System_Int32_array **)this->fields.editDeckName,
          IsNullOrEmpty->fields.swapButton = (struct UICommonButton_o *)editDeckName,
          sub_B5D560(
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
      sub_B5D69C(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v16);
  }
}


void __fastcall SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_42EB433 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EB433 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
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
      SupportSelectMenu__Reset(supportSelectMenu, v13, v14);
LABEL_12:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v16);
      return;
    }
    goto LABEL_21;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v12);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v13, v17);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v18);
      goto LABEL_12;
    }
LABEL_21:
    sub_B5D69C(supportSelectMenu, v13);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_21;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_21;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_B5D69C(this, *(_QWORD *)&targetIdx);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  SupportSelectEditMenu_o *supportEditMenu; // x0
  System_Collections_Generic_List_int__o *v24; // x20
  System_Collections_Generic_List_int__o *v25; // x21
  const MethodInfo *v26; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v28; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v30; // x1
  int32_t v31; // w0
  const MethodInfo *v32; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  int32_t v36; // w24
  int32_t i; // w25
  int32_t v38; // w26
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v44; // x20
  System_Int32_array *v45; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v46; // x24
  const MethodInfo *v47; // x5

  if ( (byte_42EB436 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v20, v21, v22);
    byte_42EB436 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
LABEL_28:
    sub_B5D69C(supportEditMenu, method);
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v26);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v28);
  v31 = SupportSelectRootComponent__getCenterNum(this, v30);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v31 + 1, v32);
  v36 = SupportSelectRootComponent__getCenterNum(this, v34);
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
    if ( v36 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v35),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v38 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v38,
                                                         v35),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v24 )
        goto LABEL_28;
      System_Collections_Generic_List_int___Add(
        v24,
        i,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v25 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v38, v35)
      || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                         this,
                                                         i,
                                                         this->fields.tempFixMainQuestSupportDeckIds,
                                                         v40),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v38, v39) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v41);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v25 )
      goto LABEL_28;
LABEL_18:
    System_Collections_Generic_List_int___Add(
      v25,
      i,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    continue;
  }
  if ( !v24 )
    goto LABEL_28;
  copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
  supportServantData = this->fields.supportServantData;
  supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                 v24,
                                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v25 )
    goto LABEL_28;
  v44 = (System_Int32_array *)supportEditMenu;
  v45 = System_Collections_Generic_List_int___ToArray(
          v25,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v46 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_B5D694(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
  SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
    v46,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
    0LL);
  if ( !copyDeckSelectMenu )
    goto LABEL_28;
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v44, v45, v46, v47);
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
    sub_B5D69C(supportSelectMenu, method);
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

  if ( (byte_42EB41E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)list, (_DWORD)method, v3);
    byte_42EB41E = 1;
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
    AssetManager__loadAssetStorage_30664084(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (BattleServantConfConponent_c *)list;
  sub_B5D560(p_cacheAssetNameList, (System_Int32_array **)list, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30666128(v10, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 selectNum; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int32_t v29; // w22
  CommonUI_o *Instance; // x21
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v34; // x8
  SupportSelectRootComponent_o *v35; // x23
  struct SupportServantData_array *v36; // x8
  struct SupportServantData_array *v37; // x8
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43[2]; // [xsp+20h] [xbp-70h] BYREF

  v7 = result;
  v8 = this;
  if ( (byte_42EB425 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, classPos, item);
    sub_B5D5C4(&Method_System_Array_IndexOf_long___, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v18, v19, v20);
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v21,
                                             v22,
                                             v23);
    byte_42EB425 = 1;
  }
  memset(&v43[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v32 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_28;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_21084824(userSvtEntity->fields.svtId, 0LL);
    v26 = item->fields.userSvtEntity;
    if ( !v26 )
      goto LABEL_34;
    v28 = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
    v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
    v29 = (int)this;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v43, 0LL, 0LL);
    v28 = *(_OWORD *)&v43[0].fields.currentCryptoKey;
    v27 = *(_OWORD *)&v43[0].fields.fakeValue;
    v29 = 0;
  }
  *(_OWORD *)&v43[1].fields.currentCryptoKey = v28;
  *(_OWORD *)&v43[1].fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43[1];
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_34:
    sub_B5D69C(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_35;
  v34 = supportServantData->m_Items[selectNum];
  if ( !v34 )
    goto LABEL_34;
  v35 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v34->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_1FC184C *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v36 = v8->fields.supportServantData;
    if ( !v36 )
      goto LABEL_34;
    if ( (unsigned int)selectNum >= v36->max_length )
      goto LABEL_35;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v36->m_Items[selectNum];
    if ( !this )
      goto LABEL_34;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, 0LL);
  }
  v37 = v8->fields.supportServantData;
  if ( !v37 )
    goto LABEL_34;
  if ( (unsigned int)selectNum >= v37->max_length )
  {
LABEL_35:
    v41 = sub_B5D6C8(this);
    sub_B5D668(v41, 0LL);
  }
  this = (SupportSelectRootComponent_o *)v37->m_Items[selectNum];
  if ( !this )
    goto LABEL_34;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v35, v29, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v32 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_28:
  v38 = v31;
  System_Action___ctor(v31, (Il2CppObject *)v8, *v32, 0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__CloseSupportServantEquipListMenu(Instance, v38, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v39) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v40);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_34;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v40);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v27; // x22
  unsigned int **p_supportServantData; // x21
  __int64 i; // x23
  unsigned int *v30; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v32; // x22
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x23
  __int64 v41; // x25
  __int64 v42; // x24
  struct System_Int32_array *v43; // x8
  unsigned __int64 v44; // x27
  unsigned int *v45; // x28
  SupportServantData_o *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  unsigned int *v53; // x8
  struct SupportInfoJump_o *v54; // x10
  struct System_Int32_array *v55; // x9
  __int64 v56; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  unsigned int v65; // w23
  __int64 v66; // x25
  __int64 v67; // x26
  struct System_Int32_array *v68; // x8
  unsigned int *v69; // x24
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
  __int64 v82; // x25
  struct System_Int32_array *v83; // x8
  unsigned int *v84; // x28
  SupportServantData_o *v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  unsigned int *v92; // x0
  unsigned int *v93; // x8
  struct SupportInfoJump_o *v94; // x10
  struct System_Int32_array *v95; // x9
  __int64 v96; // x8
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_42EB417 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)deckIndex, (_DWORD)method, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v13, v14, v15);
    sub_B5D5C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v16, v17, v18);
    sub_B5D5C4(&SupportServantData___TypeInfo, v19, v20, v21);
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&SupportServantData_TypeInfo, v22, v23, v24);
    byte_42EB417 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_74;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v27 = 0LL;
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
    if ( (__int64)v27 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v30 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_74;
    if ( v27 >= v30[6] )
    {
LABEL_75:
      v106 = sub_B5D6C8(this);
      sub_B5D668(v106, 0LL);
    }
    *(_QWORD *)&v30[i] = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v30[i], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ++v27;
  }
  if ( !otherUserGameEntity )
    goto LABEL_74;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_74;
  v32 = *(_QWORD *)&mainSupportDeckIds->max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_74;
    v108 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v58 = (System_Int32_array **)sub_B5D5DC(SupportServantData___TypeInfo, (unsigned int)(v108 + v32));
    *p_supportServantData = (unsigned int *)v58;
    sub_B5D560((BattleServantConfConponent_o *)&v9->fields.supportServantData, v58, v59, v60, v61, v62, v63, v64);
    if ( (int)v32 < 1 )
    {
      v65 = 0;
LABEL_53:
      if ( (int)v108 < 1 )
        goto LABEL_70;
      v82 = 8LL;
      while ( 1 )
      {
        v83 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v83 )
          break;
        if ( v82 - 8 >= (unsigned __int64)v83->max_length )
          goto LABEL_75;
        if ( *((int *)&v83->obj.klass + v82) >= 1 )
        {
          v84 = *p_supportServantData;
          v85 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
          SupportServantData___ctor(v85, 0LL);
          if ( !v84 )
            break;
          if ( v85 )
          {
            this = (SupportSelectRootComponent_o *)sub_B5D684(v85, *(_QWORD *)(*(_QWORD *)v84 + 64LL));
            if ( !this )
              goto LABEL_76;
          }
          if ( v65 >= v84[6] )
            goto LABEL_75;
          v92 = &v84[2 * v65];
          *((_QWORD *)v92 + 4) = v85;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v92 + 8),
            (System_Int32_array **)v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91);
          v93 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v65 >= v93[6] )
            goto LABEL_75;
          v94 = v9->fields.supportInfoJump;
          if ( !v94 )
            break;
          v95 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v95 )
            break;
          if ( v82 - 8 >= (unsigned __int64)v95->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v93[2 * v65 + 8];
          if ( !this )
            break;
          SupportServantData__Init_32118612(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v94->fields.kind,
            v94->fields.isSelect,
            v94->fields.eventSetupInfo,
            1,
            *((_DWORD *)&v95->obj.klass + v82),
            0LL);
          ++v65;
        }
        v96 = v82 - 7;
        ++v82;
        if ( v96 >= (int)v108 )
          goto LABEL_70;
      }
    }
    else
    {
      v65 = 0;
      v66 = (int)v32;
      v67 = 8LL;
      while ( 1 )
      {
        v68 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v68 )
          break;
        if ( v67 - 8 >= (unsigned __int64)v68->max_length )
          goto LABEL_75;
        if ( *((int *)&v68->obj.klass + v67) >= 1 )
        {
          v69 = *p_supportServantData;
          v70 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
          SupportServantData___ctor(v70, 0LL);
          if ( !v69 )
            break;
          if ( v70 )
          {
            this = (SupportSelectRootComponent_o *)sub_B5D684(v70, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
            if ( !this )
            {
LABEL_76:
              v107 = sub_B5D6BC(this);
              sub_B5D668(v107, 0LL);
            }
          }
          if ( v65 >= v69[6] )
            goto LABEL_75;
          v77 = &v69[2 * v65];
          *((_QWORD *)v77 + 4) = v70;
          sub_B5D560(
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
          if ( v65 >= v78[6] )
            goto LABEL_75;
          v79 = v9->fields.supportInfoJump;
          if ( !v79 )
            break;
          v80 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v80 )
            break;
          if ( v67 - 8 >= (unsigned __int64)v80->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v78[2 * v65 + 8];
          if ( !this )
            break;
          SupportServantData__Init_32118612(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v79->fields.kind,
            v79->fields.isSelect,
            v79->fields.eventSetupInfo,
            0,
            *((_DWORD *)&v80->obj.klass + v67),
            0LL);
          ++v65;
        }
        v81 = v67 - 7;
        ++v67;
        if ( v81 >= v66 )
          goto LABEL_53;
      }
    }
LABEL_74:
    sub_B5D69C(this, deckIndex);
  }
  v33 = (System_Int32_array **)sub_B5D5DC(SupportServantData___TypeInfo, (unsigned int)v32);
  *p_supportServantData = (unsigned int *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.supportServantData, v33, v34, v35, v36, v37, v38, v39);
  if ( (int)v32 >= 1 )
  {
    v40 = (int)v32;
    v41 = 8LL;
    v42 = 8LL;
    do
    {
      v43 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v43 )
        goto LABEL_74;
      v44 = v41 - 8;
      if ( v41 - 8 >= (unsigned __int64)v43->max_length )
        goto LABEL_75;
      if ( *((int *)&v43->obj.klass + v41) >= 1 )
      {
        v45 = *p_supportServantData;
        v46 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
        SupportServantData___ctor(v46, 0LL);
        if ( !v45 )
          goto LABEL_74;
        if ( v46 )
        {
          this = (SupportSelectRootComponent_o *)sub_B5D684(v46, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
          if ( !this )
            goto LABEL_76;
        }
        if ( v44 >= v45[6] )
          goto LABEL_75;
        *(_QWORD *)&v45[v42] = v46;
        sub_B5D560((BattleServantConfConponent_o *)&v45[v42], (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
        v53 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_74;
        if ( v44 >= v53[6] )
          goto LABEL_75;
        v54 = v9->fields.supportInfoJump;
        if ( !v54 )
          goto LABEL_74;
        v55 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v55 )
          goto LABEL_74;
        if ( v44 >= v55->max_length )
          goto LABEL_75;
        this = *(SupportSelectRootComponent_o **)&v53[v42];
        if ( !this )
          goto LABEL_74;
        SupportServantData__Init_32118612(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v54->fields.kind,
          v54->fields.isSelect,
          v54->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v55->obj.klass + v41),
          0LL);
      }
      v56 = v41 - 7;
      ++v41;
      v42 += 2LL;
    }
    while ( v56 < v40 );
  }
LABEL_70:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_74;
  indicator = supportSelectMenu->fields.indicator;
  v99 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_74;
  indicator->fields.modifyCenterItemCallBack = v99;
  sub_B5D560(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v58; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x0
  bool v61; // w21
  unsigned __int64 v62; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x23
  unsigned int *v65; // x8
  struct SupportInfoJump_o *v66; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x21
  SupportSelectRootComponent___c_c *v71; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v74; // x23
  struct SupportSelectRootComponent___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  unsigned int v83; // w0
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  void *monitor; // x8
  __int64 v92; // x25
  __int64 v93; // x23
  unsigned __int64 v94; // x26
  unsigned int *v95; // x27
  SupportServantData_o *v96; // x22
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  unsigned int *v103; // x9
  struct SupportInfoJump_o *v104; // x8
  __int64 v105; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v108; // x21
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct SupportInfoJump_o *v115; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  QuestRestrictionInfo_o *v117; // x20
  __int64 v118; // x0
  __int64 v119; // x0

  v8 = this;
  if ( (byte_42EB418 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&int___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v42, v43, v44);
    sub_B5D5C4(&SupportServantData___TypeInfo, v45, v46, v47);
    sub_B5D5C4(&SupportServantData_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v51, v52, v53);
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&SupportSelectRootComponent___c_TypeInfo, v54, v55, v56);
    byte_42EB418 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_63;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v58 = v8->fields.supportInfoJump;
  if ( !v58 )
    goto LABEL_63;
  questRestrictionInfo = v58->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_63;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v61 = !QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
  else
LABEL_11:
    v61 = 1;
  v62 = 0LL;
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
    if ( (__int64)v62 >= SLODWORD(this->fields.bgTxtSprite->fields.mColor.fields.a) )
      break;
    v65 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_63;
    if ( v62 >= v65[6] )
      goto LABEL_64;
    *(_QWORD *)&v65[i] = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v65[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v62;
  }
  v66 = v8->fields.supportInfoJump;
  if ( !v66 || (followerInfo = v66->fields.followerInfo) == 0LL )
LABEL_63:
    sub_B5D69C(this, method);
  if ( v61 )
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
  v68 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v68 )
  {
    v69 = v68;
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D684(v68, int___TypeInfo);
    if ( v70 )
      goto LABEL_30;
    sub_B5D990(v69);
  }
  v70 = 0LL;
LABEL_30:
  v71 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v71 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v71->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v74,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v75 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v75->__9__49_0 = _9__49_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v75->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  v82 = System_Linq_Enumerable__Where_int_(
          v70,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v83 = System_Linq_Enumerable__Count_int_(v82, (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  v84 = (System_Int32_array **)sub_B5D5DC(SupportServantData___TypeInfo, v83);
  *p_supportServantData = (unsigned int *)v84;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.supportServantData, v84, v85, v86, v87, v88, v89, v90);
  if ( !v70 )
    goto LABEL_63;
  monitor = v70[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v92 = 8LL;
    v93 = 8LL;
    while ( 1 )
    {
      v94 = v92 - 8;
      if ( v92 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v70->klass + v92) >= 1 )
      {
        v95 = *p_supportServantData;
        v96 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
        SupportServantData___ctor(v96, 0LL);
        if ( !v95 )
          goto LABEL_63;
        if ( v96 )
        {
          this = (SupportSelectRootComponent_o *)sub_B5D684(v96, *(_QWORD *)(*(_QWORD *)v95 + 64LL));
          if ( !this )
          {
            v119 = sub_B5D6BC(0LL);
            sub_B5D668(v119, 0LL);
          }
        }
        if ( v94 >= v95[6] )
          break;
        *(_QWORD *)&v95[v93] = v96;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v95[v93],
          (System_Int32_array **)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        v103 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_63;
        if ( v94 >= v103[6] )
          break;
        v104 = v8->fields.supportInfoJump;
        if ( !v104 )
          goto LABEL_63;
        if ( v94 >= LODWORD(v70[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v103[v93];
        if ( !this )
          goto LABEL_63;
        SupportServantData__Init_32119476(
          (SupportServantData_o *)this,
          v104->fields.followerInfo,
          v104->fields.kind,
          v104->fields.isSelect,
          v104->fields.eventSetupInfo,
          v104->fields.questRestrictionInfo,
          *((_DWORD *)&v70->klass + v92),
          0LL);
      }
      LODWORD(monitor) = v70[1].monitor;
      v105 = v92 - 7;
      ++v92;
      v93 += 2LL;
      if ( v105 >= (int)monitor )
        goto LABEL_54;
    }
LABEL_64:
    v118 = sub_B5D6C8(this);
    sub_B5D668(v118, 0LL);
  }
LABEL_54:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_63;
  indicator = supportSelectMenu->fields.indicator;
  v108 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_63;
  indicator->fields.modifyCenterItemCallBack = v108;
  sub_B5D560(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  v115 = v8->fields.supportInfoJump;
  if ( !v115 )
    goto LABEL_63;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  v117 = v115->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (SupportSelectRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_63;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v117,
    (int32_t)this->fields.backSkinSprite,
    0LL,
    0LL);
}


void __fastcall SupportSelectRootComponent__StartUp(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  int32_t Int; // w20
  BalanceConfig_c *v41; // x8
  int32_t v42; // w20
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v44; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 i; // x25
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v55; // x9
  SupportServantData_o *followerQuestInfomationDraw; // x0
  unsigned __int64 v57; // x26
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *v59; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 j; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v69; // x9
  struct System_Int32_array *v70; // x9
  unsigned __int64 v71; // x25
  SupportSelectRootComponent_o *v72; // x0
  const MethodInfo *v73; // x4
  SupportSelectRootComponent_o *v74; // x0
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v81; // x5
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v89; // x8
  unsigned __int64 v90; // x22
  System_Int32_array **eventSetupInfo; // x1
  SupportSelectMenu_o *v92; // x21
  SupportServantData_array *v93; // x22
  SupportSelectMenu_CallbackFunc_o *v94; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v95; // x24
  const MethodInfo *v96; // x5
  struct SupportSelectMenu_o *v97; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  const MethodInfo *v106; // x1
  struct SupportSelectMenu_o *v107; // x8
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct SupportServantData_array *v114; // x20
  __int64 v115; // x8
  unsigned __int64 v116; // x21
  System_Int32_array **v117; // x1
  SupportSelectMenu_o *v118; // x20
  SupportServantData_array *v119; // x21
  int32_t v120; // w22
  SupportSelectMenu_CallbackFunc_o *v121; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v122; // x24
  const MethodInfo *v123; // x5
  const MethodInfo *v124; // x2
  struct SupportServantData_array *v125; // x8
  bool v126; // w1
  System_Action_o *v127; // x20
  __int64 v128; // x0
  int32_t deckIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EB419 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SupportSelectMenu_CallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v20, v21, v22);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v23, v24, v25);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v26, v27, v28);
    sub_B5D5C4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12708/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v32, v33, v34);
    byte_42EB419 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12708/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v41 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v41 = BalanceConfig_TypeInfo;
    }
    v42 = UnityEngine_Mathf__Min_41629336(Int, v41->static_fields->SupportDeckMax - 1, 0LL);
    deckIndex = v42;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v44 = (struct System_Int32_array *)sub_B5D5DC(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v44;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (System_Int32_array **)v44,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    for ( i = 8LL; ; ++i )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v57 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v57 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_79;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v57 < (int)max_length )
      {
        if ( v57 >= max_length )
          goto LABEL_80;
        v55 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_79;
        if ( v57 >= v55->max_length )
          goto LABEL_80;
        *((_DWORD *)&v55->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( (BYTE3(followerQuestInfomationDraw[2].fields.oldServantIdList) & 4) != 0
      && !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v59 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v59;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (System_Int32_array **)v59,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    for ( j = 8LL; ; ++j )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v71 = j - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v71 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_79;
      v69 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v71 < (int)v69 )
      {
        if ( v71 >= v69 )
          goto LABEL_80;
        v70 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_79;
        if ( v71 >= v70->max_length )
          goto LABEL_80;
        *((_DWORD *)&v70->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v38);
    SupportSelectRootComponent__CopySupportData(
      v72,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v73);
    SupportSelectRootComponent__CopySupportData(
      v74,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v75);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v76);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v77);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v78);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_18381532(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            80,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v79);
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
                  v81);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v89 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v89 >= 1 )
                  {
                    v90 = 0LL;
                    while ( v90 < (unsigned int)v89 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v90];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = (System_Int32_array **)this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          eventSetupInfo,
                          v82,
                          v83,
                          v84,
                          v85,
                          v86,
                          v87);
                      }
                      LODWORD(v89) = supportServantData->max_length;
                      if ( (__int64)++v90 >= (int)v89 )
                        goto LABEL_51;
                    }
LABEL_80:
                    v128 = sub_B5D6C8(followerQuestInfomationDraw);
                    sub_B5D668(v128, 0LL);
                  }
LABEL_51:
                  v92 = this->fields.supportSelectMenu;
                  v93 = this->fields.supportServantData;
                  v94 = (SupportSelectMenu_CallbackFunc_o *)sub_B5D694(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v94,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    0LL);
                  v95 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B5D694(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v95,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    0LL);
                  if ( v92 )
                  {
                    SupportSelectMenu__Open(v92, v93, v42, v94, v95, v96);
                    v97 = this->fields.supportSelectMenu;
                    if ( v97 )
                    {
                      indicator = v97->fields.indicator;
                      v99 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v99,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v99;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
                          (System_Int32_array **)v99,
                          v100,
                          v101,
                          v102,
                          v103,
                          v104,
                          v105);
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
    sub_B5D69C(followerQuestInfomationDraw, v38);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v36);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v35);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v39);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  TitleInfoControl__setTitleInfo_18381532(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v106);
  v107 = this->fields.supportSelectMenu;
  if ( !v107 )
    goto LABEL_79;
  followerQuestInfomationDraw = (SupportServantData_o *)v107->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v114 = this->fields.supportServantData;
  if ( !v114 )
    goto LABEL_79;
  v115 = *(_QWORD *)&v114->max_length;
  if ( (int)v115 >= 1 )
  {
    v116 = 0LL;
    while ( v116 < (unsigned int)v115 )
    {
      followerQuestInfomationDraw = v114->m_Items[v116];
      if ( followerQuestInfomationDraw )
      {
        v117 = (System_Int32_array **)this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v117;
        sub_B5D560(
          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          v117,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
      }
      LODWORD(v115) = v114->max_length;
      if ( (__int64)++v116 >= (int)v115 )
        goto LABEL_67;
    }
    goto LABEL_80;
  }
LABEL_67:
  v118 = this->fields.supportSelectMenu;
  v119 = this->fields.supportServantData;
  v120 = deckIndex;
  v121 = (SupportSelectMenu_CallbackFunc_o *)sub_B5D694(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v121,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v122 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B5D694(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v122,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v118 )
    goto LABEL_79;
  SupportSelectMenu__Open(v118, v119, v120, v121, v122, v123);
  v125 = this->fields.supportServantData;
  if ( !v125 )
    goto LABEL_79;
  v126 = (int)v125->max_length >= 2 && v125->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v126, v124);
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
  v127 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v127, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v127, 2, 1, 0LL);
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
  if ( (byte_42EB42B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, idx, deckId, isEvent);
    byte_42EB42B = 1;
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
    sub_B5D69C(this, *(_QWORD *)&idx);
  if ( v15->max_length <= idx )
  {
LABEL_41:
    v21 = sub_B5D6C8(this);
    sub_B5D668(v21, 0LL);
  }
  v15->m_Items[v12 + 1] = v20;
}


void __fastcall SupportSelectRootComponent___EndChangeDeckName_b__110_0(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectRootComponent__RequestDeckName(this, method);
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
    sub_B5D69C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
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
  if ( (byte_42EB41D & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             (_DWORD)method,
                                             (_DWORD)v2,
                                             v3);
    byte_42EB41D = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v8->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v8, 0LL, v10);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x1
  struct SupportServantData_array *supportServantData; // x8
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
  BalanceConfig_c *v32; // x0
  struct SupportServantData_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  AvalonSceneManager_o *Instance; // x0
  __int64 v41; // x1

  if ( (byte_42EB411 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SupportServantData___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13334/*"SvtEqScrollBarValue"*/, v11, v12, v13);
    byte_42EB411 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_B5D5DC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.supportServantData = v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.supportServantData,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = (struct SupportServantData_array *)sub_B5D5DC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v24->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v25;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.orgSupportServantData,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    v33 = (struct SupportServantData_array *)sub_B5D5DC(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v32->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tmpSupportServantData,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v14);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13334/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v41);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  __int64 v40; // x10
  Il2CppObject *v41; // x1
  struct SupportInfoJump_o **p_supportInfoJump; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x10
  Il2CppObject *v50; // x1
  const MethodInfo *v51; // x1
  __int64 v52; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct SupportInfoJump_o *v55; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v58; // x20
  EventUpValSetupInfo_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Action_o *v66; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v68; // x20
  EventUpValSetupInfo_o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x1

  if ( (byte_42EB41A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventQuestMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v22, v23, v24);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v37, v38, v39);
    byte_42EB41A = 1;
  }
  if ( data
    && (v40 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
  {
    if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v40 - 1] == SupportInfoJump_TypeInfo )
      v41 = data;
    else
      v41 = 0LL;
  }
  else
  {
    v41 = 0LL;
  }
  p_supportInfoJump = &this->fields.supportInfoJump;
  this->fields.supportInfoJump = (struct SupportInfoJump_o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportInfoJump,
    (System_Int32_array **)v41,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( data
    && (v49 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v49) )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v49 - 1] == SceneJumpInfo_TypeInfo )
      v50 = data;
    else
      v50 = 0LL;
  }
  else
  {
    v50 = 0LL;
  }
  this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sceneJumpInfo,
    (System_Int32_array **)v50,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v51);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v55 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v55->fields.otherUserGameEntity || !v55->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)bgTxtSprite,
                                                                                       0,
                                                                                       0LL);
        v68 = System_Linq_Enumerable__ToArray_int_(
                EventValUpEventIdHash,
                (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        v69 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_24751852(v69, v68, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v69;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
          (System_Int32_array **)v69,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
        SupportSelectRootComponent__StartUp(this, v76);
        return;
      }
    }
LABEL_33:
    sub_B5D69C(bgTxtSprite, v52);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v58 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v59 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(v59, v58, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v66, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B5D69C(0LL, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, method);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void __fastcall SupportSelectRootComponent__initSupportServantDatas(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v6; // w20
  __int64 v7; // x22
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42EB442 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B5D5C4(&SupportServantData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB442 = 1;
  }
  supportServantData = v4->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_B5D69C(this, method);
  v6 = 0;
  v7 = 32LL;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v7) )
    {
      v9 = (SupportServantData_o *)sub_B5D694(SupportServantData_TypeInfo);
      SupportServantData___ctor(v9, 0LL);
      if ( v9 )
      {
        this = (SupportSelectRootComponent_o *)sub_B5D684(v9, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v17 = sub_B5D6BC(0LL);
          sub_B5D668(v17, 0LL);
        }
      }
      if ( v6 >= supportServantData->max_length )
      {
LABEL_17:
        v16 = sub_B5D6C8(this);
        sub_B5D668(v16, 0LL);
      }
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v7) = (Il2CppClass *)v9;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)supportServantData + v7),
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      supportServantData = v4->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v6 >= supportServantData->max_length )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v7);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v6, v4->fields.eventSetupInfo, 0LL);
      supportServantData = v4->fields.supportServantData;
      v7 += 8LL;
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

  if ( (byte_42EB441 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, servant, equip, method);
    byte_42EB441 = 1;
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
    v20 = sub_B5D6C8(OldServant);
    sub_B5D668(v20, 0LL);
  }
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_31:
    sub_B5D69C(OldServant, v8);
  return (v17 | SupportServantData__IsChangeDeckName(OldServant, 0LL)) & 1;
}


void __fastcall SupportSelectRootComponent__modifyCenterItemCallBack(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t CenterNum; // w20
  const MethodInfo *v15; // x1
  System_Int32_array *eventSupportDeckIds; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  struct System_Int32_array *mainSupportDeckIds; // x8
  const MethodInfo *v22; // x5
  int32_t v23; // w3
  char v24; // w1
  char v25; // w2
  int32_t v26; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v30; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Int32_array *v32; // x8
  int32_t max_length; // w24
  System_Int32_array *v34; // x22
  int32_t v35; // w21
  int32_t v36; // w0
  int32_t v37; // w20
  const MethodInfo *v38; // x4
  __int64 v39; // x0

  if ( (byte_42EB41C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12, v13);
    byte_42EB41C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v15);
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
      v30 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      v23 = 0;
      v26 = v30 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v36 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      v26 = 0;
      v23 = v36 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v24 = ReturnTypeByQuestId == 0;
    v25 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  eventSupportDeckIds = (System_Int32_array *)System_Linq_Enumerable__SequenceEqual_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                                (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)eventSupportDeckIds & 1) == 0 )
  {
    v31 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_1CA4918 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v31,
                            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    v32 = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !v32 )
      goto LABEL_39;
    max_length = v32->max_length;
    v34 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v35 = 0;
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
                                                    (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      v35 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v26 = 0;
      goto LABEL_27;
    }
    if ( !v34 )
      goto LABEL_39;
    if ( CenterNum < v34->max_length )
    {
      v26 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v34->m_Items[CenterNum + 1],
              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v25 = CenterNum >= max_length;
      v24 = CenterNum < max_length;
      v23 = v35;
      goto LABEL_34;
    }
LABEL_40:
    v39 = sub_B5D6C8(eventSupportDeckIds);
    sub_B5D668(v39, 0LL);
  }
  if ( !mainSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= mainSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                otherUserGameEntity->fields.mainSupportDeckIds,
                                                mainSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v23 = (_DWORD)eventSupportDeckIds + 1;
  v24 = 1;
  v25 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v26 = v23;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v24, v25, v23, v26, v22);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v37 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v37,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v18),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_B5D69C(eventSupportDeckIds, v17);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v37,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v38);
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
    sub_B5D69C(blackMask, editOn);
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
    sub_B5D69C(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E648A & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E648A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PartyOrganizationUtility_c *v7; // x0
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E648B & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E648B = 1;
  }
  v7 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v7 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v15; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  struct SupportSelectRootComponent_o *v19; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v22; // w21
  __int64 callback; // x27
  __int64 v24; // x9
  __int64 v25; // x0

  if ( (byte_42E648C & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportSelectRootComponent_OnBackSelect__, v9, v10, v11);
    byte_42E648C = 1;
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
      v25 = sub_B5D6C8(_4__this);
      sub_B5D668(v25, 0LL);
    }
    v15 = supportServantData->m_Items[selectNum];
    if ( !v15 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v15->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v19->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v19->fields.tempFixEventQuestSupportDeckIds;
    v22 = (int)_4__this;
    callback = sub_B5D694(SupportServantSelectMenu_CallbackFunc_TypeInfo);
    v24 = *(_QWORD *)Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 16) = v24;
    *(_QWORD *)(callback + 32) = v19;
    sub_B5D560(callback + 32);
    if ( !supportServantSelectMenu )
LABEL_15:
      sub_B5D69C(_4__this, isDecide);
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v22,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantSelectMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v13; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v16; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v19; // x19
  struct SupportSelectRootComponent_o *v20; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v23; // w20
  __int64 callback; // x27
  __int64 v25; // x9
  __int64 v26; // x0

  if ( (byte_42E648D & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v9, v10, v11);
    byte_42E648D = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_15;
    supportServantData = v13->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v13->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v26 = sub_B5D6C8(_4__this);
      sub_B5D668(v26, 0LL);
    }
    v16 = supportServantData->m_Items[selectNum];
    if ( !v16 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v16->fields.eventSetupInfo2;
    v19 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v20->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v20->fields.tempFixEventQuestSupportDeckIds;
    v23 = (int)_4__this;
    callback = sub_B5D694(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    v25 = *(_QWORD *)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 16) = v25;
    *(_QWORD *)(callback + 32) = v20;
    sub_B5D560(callback + 32);
    if ( !v19 )
LABEL_15:
      sub_B5D69C(_4__this, isDecide);
    CommonUI__OpenSupportServantEquipListMenu(
      v19,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v23,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantEquipListMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}