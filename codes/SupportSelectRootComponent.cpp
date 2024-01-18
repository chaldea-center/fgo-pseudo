void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AC18 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectRootComponent_TypeInfo, v1);
    byte_418AC18 = 1;
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

  if ( (byte_418AC17 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418AC17 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct System_Int32_array *)sub_B2C374(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v12;
  sub_B2C2F8(
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

  if ( (byte_418ABF2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12560/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_418ABF2 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12560/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v10; // x23
  __int64 v11; // x0

  if ( (byte_418AC11 & 1) == 0 )
  {
    sub_B2C35C(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_418AC11 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v11 = sub_B2C460(CenterNum);
    sub_B2C400(v11, 0LL);
  }
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, v5),
        v10 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B2C42C(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_B2C434(CenterNum, v5);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v10, 0LL);
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
    sub_B2C434(titleInfo, method);
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
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v10; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v12; // x22
  SupportServantData_o *v13; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x23
  __int64 v15; // x0

  if ( (byte_418AC0A & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_418AC0A = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v10 = this->fields.copyTargetDeckId - 1, v10 >= max_length) )
  {
    v15 = sub_B2C460(CenterNum);
    sub_B2C400(v15, 0LL);
  }
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = supportServantData->m_Items[v10];
  v14 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_B2C434(CenterNum, v7);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v12, v13, v14, 0LL);
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

  if ( (byte_418AC15 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&BalanceConfig_TypeInfo, orgData);
    byte_418AC15 = 1;
  }
  if ( !orgData )
LABEL_19:
    sub_B2C434(this, orgData);
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
          v12 = sub_B2C460(this);
          sub_B2C400(v12, 0LL);
        }
        this = *v11;
        if ( !*v11 )
          goto LABEL_19;
        SupportServantData__CopyData((SupportServantData_o *)this, orgData->m_Items[v8], v9, (const MethodInfo *)isInit);
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

  if ( (byte_418AC04 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, isDecide);
    byte_418AC04 = 1;
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
    sub_B2C434(cancelConfirmMenu, isDecide);
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

  if ( (byte_418AC03 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, isDecide);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    byte_418AC03 = 1;
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
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v7);
      return;
    }
LABEL_14:
    sub_B2C434(cancelConfirmDeckIdDialog, isDecide);
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
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v14; // x21

  if ( (byte_418AC12 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11);
    byte_418AC12 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_B2C2F8(
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
      SupportSelectEditMenu__Close(supportEditMenu, 0LL);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_31142960(deckNameInputMenu, v14, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B2C434(supportEditMenu, isDecide);
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
    sub_B2C434(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B2C434(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418ABFB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418ABFB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_o *CenterNum; // x0
  const MethodInfo *v5; // x3
  int32_t v6; // w20
  struct SupportServantData_array *supportServantData; // x9
  unsigned int max_length; // w8
  SupportServantData_o *v9; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  if ( isDecide )
  {
    CenterNum = (SupportSelectConfirmCopyMenu_o *)SupportSelectRootComponent__getCenterNum(
                                                    this,
                                                    (const MethodInfo *)isDecide);
    v6 = this->fields.copyTargetDeckId - 1;
    if ( (_DWORD)CenterNum != v6 )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
      max_length = supportServantData->max_length;
      if ( v6 >= max_length || (unsigned int)CenterNum >= max_length )
      {
        v12 = sub_B2C460(CenterNum);
        sub_B2C400(v12, 0LL);
      }
      v9 = supportServantData->m_Items[v6];
      if ( !v9 )
        goto LABEL_15;
      SupportServantData__CopyData(v9, supportServantData->m_Items[(int)CenterNum], 0, v5);
      SupportSelectRootComponent__SaveTemp(this, v6, v10);
    }
    CenterNum = this->fields.copyConfirmMenu;
    if ( CenterNum )
    {
      SupportSelectConfirmCopyMenu__Close(CenterNum, 0LL);
      CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.copyDeckSelectMenu;
      if ( CenterNum )
      {
        SupportSelectCopyDeckSelectMenu__Close((SupportSelectCopyDeckSelectMenu_o *)CenterNum, 0LL);
        CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportServantSelectMenu;
        if ( CenterNum )
        {
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)CenterNum, 0LL);
          CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, isDecide, v11);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B2C434(CenterNum, isDecide);
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
    sub_B2C434(0LL, flag);
  SupportSelectConfirmMenu__Close_31152572(supportSelectConfirmMenu, 0LL, 0LL);
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
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x21
  System_Int32_array **DefaultDeckName; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  int32_t i; // w21
  struct SupportServantData_array *v20; // x8
  const MethodInfo *v21; // x2
  struct SupportServantData_array *v22; // x8
  struct SupportServantData_array *v23; // x8
  struct SupportServantData_array *v24; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  __int64 v27; // x0

  if ( (byte_418AC0E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isDecide);
    byte_418AC0E = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_34;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, 0LL);
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
        v27 = sub_B2C460(confirmDeckMenu);
        sub_B2C400(v27, 0LL);
      }
      v9 = &supportServantData->obj.klass + (int)confirmDeckMenu;
      v10 = v9[4];
      if ( v10 )
      {
        DefaultDeckName = (System_Int32_array **)SupportServantData__getDefaultDeckName(
                                                   (SupportServantData_o *)v9[4],
                                                   (const MethodInfo *)isDecide);
        v10->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_B2C2F8((BattleServantConfConponent_o *)&v10->_1.klass, DefaultDeckName, v12, v13, v14, v15, v16, v17);
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
          v20 = this->fields.supportServantData;
          if ( !v20 )
            goto LABEL_34;
          if ( v8 >= v20->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v20->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, v18);
          if ( confirmDeckMenu >= 1 )
          {
            v22 = this->fields.supportServantData;
            if ( !v22 )
              goto LABEL_34;
            if ( v8 >= v22->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v22->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, v21);
          }
          v23 = this->fields.supportServantData;
          if ( !v23 )
            goto LABEL_34;
          if ( v8 >= v23->max_length )
            goto LABEL_35;
          confirmDeckMenu = (__int64)v23->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_34;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, v21);
          if ( confirmDeckMenu >= 1 )
          {
            v24 = this->fields.supportServantData;
            if ( !v24 )
              goto LABEL_34;
            if ( v8 >= v24->max_length )
              goto LABEL_35;
            confirmDeckMenu = (__int64)v24->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_34;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v18);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v25);
            SupportSelectRootComponent__setEditUI(this, 1, v26);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v6; // x20

  if ( (byte_418ABED & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_418ABED = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v6, 1, 1, 0LL);
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
  const MethodInfo *v8; // x2
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v11; // x2
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_418AC0C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isDecide);
    byte_418AC0C = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_31;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0LL);
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
                                                            v8);
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
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, v11);
      }
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v13->max_length )
      {
LABEL_32:
        v17 = sub_B2C460(confirmDeckMenu);
        sub_B2C400(v17, 0LL);
      }
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            v11);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v14 = this->fields.supportServantData;
        if ( !v14 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v14->max_length )
          goto LABEL_32;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v14->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_31;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v15);
        SupportSelectRootComponent__setEditUI(this, 1, v16);
        return;
      }
    }
LABEL_31:
    sub_B2C434(confirmDeckMenu, isDecide);
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
  const MethodInfo *v8; // x2
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_418AC10 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isDecide);
    byte_418AC10 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_23;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0LL);
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
                                                            v8);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_23;
        if ( (unsigned int)CenterNum >= v11->max_length )
        {
LABEL_24:
          v14 = sub_B2C460(confirmDeckMenu);
          sub_B2C400(v14, 0LL);
        }
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_23;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, isDecide, v12);
        SupportSelectRootComponent__setEditUI(this, 1, v13);
        return;
      }
    }
LABEL_23:
    sub_B2C434(confirmDeckMenu, isDecide);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v11; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v12; // x22
  __int64 v13; // x0

  if ( (byte_418AC09 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_418AC09 = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, 0LL);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v7);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= supportServantData->max_length )
    {
      v13 = sub_B2C460(copyDeckSelectMenu);
      sub_B2C400(v13, 0LL);
    }
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v11 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v12 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_B2C434(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v11, isEdit, v12, 0LL);
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

  if ( (byte_418ABFC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418ABFC = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_B2C434(supportSelectMenu, isDecide);
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

  if ( (byte_418ABF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418ABF9 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_17;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v9 = sub_B2C460(supportSelectMenu);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418ABFA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_418ABFA = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B2C434(v10, v11);
    CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
    sub_B2C434(CenterNum, v7);
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
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v49; // x21
  CancelConfirmMenu_CallbackFunc_o *v50; // x22
  const MethodInfo *v51; // x2
  struct SupportServantData_array *v52; // x22
  SupportServantData_o *v53; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v56; // x24
  System_Int32_array *v57; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  SupportSelectMenu_o *v59; // x20
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  bool v62; // w1
  SupportSelectRootComponent_o *v63; // x0
  const MethodInfo *v64; // x2
  struct SupportServantData_array *v65; // x8
  SupportServantData_o *v66; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v68; // x21
  SupportSelectMenu_o *v69; // x20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  struct SupportServantData_array *v72; // x8
  __int64 v73; // x21
  __int64 v74; // x22
  __int64 v75; // x23
  struct SupportServantData_array *v76; // x8
  SupportServantData_o *v77; // x8
  struct SupportServantData_array *v78; // x8
  SupportServantData_o *v79; // x8
  int v80; // w22
  struct SupportServantData_array *v81; // x8
  SupportServantData_o *v82; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v84; // w22
  struct SupportServantData_array *v85; // x8
  SupportServantData_o *v86; // x8
  QuestRestrictionInfo_o *v87; // x20
  __int64 v88; // x23
  __int64 v89; // x24
  int32_t v90; // w0
  int32_t v91; // w23
  int32_t v92; // w24
  PartyOrganizationUtility_c *v93; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v95; // x8
  const MethodInfo *v96; // x2
  struct SupportServantData_array *v97; // x22
  SupportServantData_o *v98; // x8
  EventUpValSetupInfo_o *v99; // x27
  System_Int32_array *v100; // x25
  System_Int32_array *v101; // x26
  CommonUI_o *v102; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v103; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x1
  struct SupportServantData_array *v107; // x8
  int64_t v108; // x21
  struct SupportServantData_array *v109; // x8
  SupportServantData_o *v110; // x8
  struct SupportServantData_array *v111; // x8
  SupportServantData_o *v112; // x8
  int32_t kind; // w20
  ServantLeaderInfo_o *v114; // x21
  CommonUI_o *v115; // x22
  ServantStatusDialog_EndDelegate_o *v116; // x23
  struct SupportServantData_array *v117; // x8
  const MethodInfo *v118; // x2
  struct SupportServantData_array *v119; // x8
  int64_t v120; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  struct SupportServantData_array *v122; // x8
  SupportServantData_o *v123; // x8
  int32_t v124; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v126; // x21
  ServantStatusDialog_EndDelegate_o *v127; // x23
  const MethodInfo *v128; // x2
  struct SupportServantData_array *v129; // x8
  SupportServantData_o *v130; // x8
  int32_t v131; // w20
  int64_t v132; // x21
  CommonUI_o *v133; // x22
  ServantStatusDialog_FormationEndDelegate_o *v134; // x23
  CommonUI_o *v135; // x20
  ServantStatusDialog_EndDelegate_o *v136; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v138; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v141; // x23
  struct SupportSelectRootComponent___c_StaticFields *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  int32_t v150; // w0
  SupportSelectRootComponent___c_c *v151; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v153; // w20
  struct SupportSelectRootComponent___c_StaticFields *v154; // x9
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v156; // x24
  struct SupportSelectRootComponent___c_StaticFields *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v164; // x0
  struct SupportServantData_array *v165; // x8
  SupportServantData_o *v166; // x0
  const MethodInfo *v167; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v169; // x21
  SupportSelectRootComponent___c_c *v170; // x8
  struct SupportSelectRootComponent___c_StaticFields *v171; // x9
  System_Action_o *_9__66_2; // x23
  System_String_o *v173; // x22
  Il2CppObject *v174; // x24
  struct SupportSelectRootComponent___c_StaticFields *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  __int64 v182; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_418ABF3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&CancelConfirmMenu_CallbackFunc_TypeInfo, v11);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_B2C35C(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v16);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    sub_B2C35C(&SoundManager_TypeInfo, v26);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v27);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndConfirmMenu__, v28);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndShowEquip__, v29);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v30);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndShowServant__, v31);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v32);
    sub_B2C35C(&Method_SupportSelectRootComponent_OnBackSelect__, v33);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v34);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v35);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v36);
    sub_B2C35C(&SupportSelectRootComponent___c_TypeInfo, v37);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v38);
    sub_B2C35C(&StringLiteral_1/*""*/, v39);
    byte_418ABF3 = 1;
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
      v49 = supportServantData->m_Items[CenterNum];
      v50 = (CancelConfirmMenu_CallbackFunc_o *)sub_B2C42C(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v50,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_211;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v49, v50, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v45);
      if ( (isUpdate & 1) != 0 )
      {
        v65 = this->fields.supportServantData;
        if ( !v65 )
          goto LABEL_211;
        if ( CenterNum < v65->max_length )
        {
          v66 = v65->m_Items[CenterNum];
          if ( v66 && SupportServantData__get_IsNoServant(v66, v43) )
            goto LABEL_30;
          SupportSelectRootComponent__SaveTemp(this, -1, v64);
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
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v43, v128);
          goto LABEL_158;
        }
LABEL_212:
        v182 = sub_B2C460(isUpdate);
        sub_B2C400(v182, 0LL);
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v43);
        v63 = this;
        v62 = 0;
        this->fields.isDragSwapState = 0;
LABEL_159:
        SupportSelectRootComponent__setEditUI(v63, v62, v61);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v138 = SupportSelectRootComponent___c_TypeInfo;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v138 = SupportSelectRootComponent___c_TypeInfo;
      }
      static_fields = v138->static_fields;
      _9__66_0 = static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 && !v138->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v138);
          static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v141 = (Il2CppObject *)static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v141,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v142 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v142->__9__66_0 = _9__66_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v142->__9__66_0,
          (System_Int32_array **)_9__66_0,
          v143,
          v144,
          v145,
          v146,
          v147,
          v148);
      }
      v149 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
      v150 = System_Linq_Enumerable__Count_int_(
               v149,
               (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      v151 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v153 = v150;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v151 = SupportSelectRootComponent___c_TypeInfo;
      }
      v154 = v151->static_fields;
      _9__66_1 = v154->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( (BYTE3(v151->vtable._0_Equals.methodPtr) & 4) != 0 && !v151->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v151);
          v154 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v156 = (Il2CppObject *)v154->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v156,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v157 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v157->__9__66_1 = _9__66_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v157->__9__66_1,
          (System_Int32_array **)_9__66_1,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
      }
      v164 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v164,
                   (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v153 < 1 || (int)isUpdate <= 0 )
      {
        v165 = this->fields.supportServantData;
        if ( !v165 )
          goto LABEL_211;
        if ( CenterNum >= v165->max_length )
          goto LABEL_212;
        v166 = v165->m_Items[CenterNum];
        if ( v166 && SupportServantData__get_IsNoServant(v166, v43) )
        {
LABEL_30:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v68 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v68,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v68, 0LL);
            return;
          }
LABEL_211:
          sub_B2C434(isUpdate, v43);
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
      SupportSelectRootComponent__RequestApi(this, v167);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v51);
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
      v52 = this->fields.supportServantData;
      if ( !v52 )
        goto LABEL_211;
      if ( v52->max_length <= deckNum )
        goto LABEL_212;
      v53 = v52->m_Items[deckNum];
      if ( !v53 )
        goto LABEL_211;
      eventSetupInfo2 = v53->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v56 = this->fields.tempFixMainQuestSupportDeckIds;
      v57 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_211;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v52,
        deckNum,
        classPos,
        eventSetupInfo2,
        v46,
        v56,
        v57,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v96);
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v97 = this->fields.supportServantData;
      if ( !v97 )
        goto LABEL_211;
      if ( v97->max_length <= deckNum )
        goto LABEL_212;
      v98 = v97->m_Items[deckNum];
      if ( !v98 )
        goto LABEL_211;
      v99 = v98->fields.eventSetupInfo2;
      v100 = this->fields.tempFixMainQuestSupportDeckIds;
      v101 = this->fields.tempFixEventQuestSupportDeckIds;
      v102 = (CommonUI_o *)isUpdate;
      v103 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v103,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v102 )
        goto LABEL_211;
      CommonUI__OpenSupportServantEquipListMenu(v102, v97, deckNum, classPos, v99, v46, v100, v101, v103, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !supportSelectMenu )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v105);
      SupportSelectRootComponent__ChangeDeckName(this, v106);
      return;
    case 5:
      v59 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v59 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v59, isUpdate, v60);
      v62 = 1;
      this->fields.isDragSwapState = 1;
      v63 = this;
      goto LABEL_159;
    case 6:
      v69 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v69 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v69, isUpdate, v70);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v71);
      return;
    case 7:
      v72 = this->fields.supportServantData;
      if ( !v72 )
        goto LABEL_211;
      if ( v72->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v72->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v44);
      if ( !isUpdate )
        goto LABEL_211;
      v73 = *(_QWORD *)(isUpdate + 24);
      if ( !v73 )
        goto LABEL_140;
      v75 = *(_QWORD *)(v73 + 48);
      v74 = *(_QWORD *)(v73 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v183.fields.currentCryptoKey = v75;
      *(_QWORD *)&v183.fields.fakeValue = v74;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v183, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_140;
      v76 = this->fields.supportServantData;
      if ( !v76 )
        goto LABEL_211;
      if ( v76->max_length <= deckNum )
        goto LABEL_212;
      v77 = v76->m_Items[deckNum];
      if ( !v77 )
        goto LABEL_211;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v73,
                   v77->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_140;
      v78 = this->fields.supportServantData;
      if ( !v78 )
        goto LABEL_211;
      if ( v78->max_length <= deckNum )
        goto LABEL_212;
      v79 = v78->m_Items[deckNum];
      if ( !v79 )
        goto LABEL_211;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v73, v79->fields.questRestrictionInfo, 0LL) )
        goto LABEL_140;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      v80 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( v80 < 1 )
        goto LABEL_73;
      v81 = this->fields.supportServantData;
      if ( !v81 )
        goto LABEL_211;
      if ( v81->max_length <= deckNum )
        goto LABEL_212;
      v82 = v81->m_Items[deckNum];
      if ( !v82 )
        goto LABEL_211;
      questRestrictionInfo = v82->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_211;
      v84 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, v84, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_73;
      v85 = this->fields.supportServantData;
      if ( !v85 )
        goto LABEL_211;
      if ( v85->max_length <= deckNum )
        goto LABEL_212;
      v86 = v85->m_Items[deckNum];
      if ( !v86 )
        goto LABEL_211;
      v87 = v86->fields.questRestrictionInfo;
      v89 = *(_QWORD *)(v73 + 48);
      v88 = *(_QWORD *)(v73 + 56);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v184.fields.currentCryptoKey = v89;
      *(_QWORD *)&v184.fields.fakeValue = v88;
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v184, 0LL);
      v91 = *(_DWORD *)(v73 + 64);
      v92 = v90;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v73, 0LL);
      if ( !v87 )
        goto LABEL_211;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v87, v92, v91, isUpdate, v84, 1, 0LL) )
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
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v43);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( *(_BYTE *)(isUpdate + 140) )
      {
        v93 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v93 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v93->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_211;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v169 = (System_String_o *)isUpdate;
            v170 = SupportSelectRootComponent___c_TypeInfo;
            if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v170 = SupportSelectRootComponent___c_TypeInfo;
            }
            v171 = v170->static_fields;
            _9__66_2 = v171->__9__66_2;
            v173 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( (BYTE3(v170->vtable._0_Equals.methodPtr) & 4) != 0 && !v170->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v170);
                v171 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              }
              v174 = (Il2CppObject *)v171->__9;
              _9__66_2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                _9__66_2,
                v174,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v175 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v175->__9__66_2 = _9__66_2;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v175->__9__66_2,
                (System_Int32_array **)_9__66_2,
                v176,
                v177,
                v178,
                v179,
                v180,
                v181);
            }
            if ( !Instance )
              goto LABEL_211;
            CommonUI__OpenNotificationDialog(Instance, v173, v169, _9__66_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
      v95 = this->fields.supportInfoJump;
      if ( !v95 )
        goto LABEL_211;
      v95->fields.selectDeckId = *(_DWORD *)(v73 + 16);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_211;
      if ( !SupportInfoJump__ReturnScene(
              (SupportInfoJump_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v107 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v107 )
        goto LABEL_211;
      if ( v107->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v107->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v44);
      if ( !isUpdate )
        goto LABEL_211;
      v108 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_140;
      v109 = this->fields.supportServantData;
      if ( !v109 )
        goto LABEL_211;
      if ( v109->max_length <= deckNum )
        goto LABEL_212;
      v110 = v109->m_Items[deckNum];
      if ( !v110 )
        goto LABEL_211;
      if ( v110->fields.isFriendInfo )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v111 = this->fields.supportServantData;
        if ( !v111 )
          goto LABEL_211;
        if ( v111->max_length <= deckNum )
          goto LABEL_212;
        v112 = v111->m_Items[deckNum];
        if ( !v112 )
          goto LABEL_211;
        kind = v112->fields.kind;
        v114 = *(ServantLeaderInfo_o **)(v108 + 24);
        v115 = (CommonUI_o *)isUpdate;
        v116 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v116,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v115 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_17984076(v115, kind, v114, v116, 0LL);
      }
      else
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v129 = this->fields.supportServantData;
        if ( !v129 )
          goto LABEL_211;
        if ( v129->max_length <= deckNum )
          goto LABEL_212;
        v130 = v129->m_Items[deckNum];
        if ( !v130 )
          goto LABEL_211;
        v131 = v130->fields.kind;
        v132 = *(_QWORD *)(v108 + 56);
        v133 = (CommonUI_o *)isUpdate;
        v134 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B2C42C(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v134,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v133 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_17981336(v133, v131, v132, v134, 0LL, 0LL);
      }
      return;
    case 9:
      v117 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v117 )
        goto LABEL_211;
      if ( v117->max_length <= deckNum )
        goto LABEL_212;
      isUpdate = (int64_t)v117->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, v44);
      if ( !isUpdate )
        goto LABEL_140;
      v119 = this->fields.supportServantData;
      if ( !v119 )
        goto LABEL_211;
      if ( v119->max_length <= deckNum )
        goto LABEL_212;
      v120 = isUpdate;
      isUpdate = (int64_t)v119->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_211;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  v118);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v122 = this->fields.supportServantData;
      if ( !v122 )
        goto LABEL_211;
      if ( v122->max_length <= deckNum )
        goto LABEL_212;
      v123 = v122->m_Items[deckNum];
      if ( !v123 )
        goto LABEL_211;
      if ( v123->fields.isFriendInfo )
      {
        if ( v123->fields.kind == 5 )
          v124 = 14;
        else
          v124 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_211;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v126 = (CommonUI_o *)isUpdate;
        v127 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v127,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v126 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog_17986440(v126, v124, equipTarget1, v127, 0LL, 0LL);
      }
      else
      {
        v135 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v136 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v136,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v135 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog(v135, 11, v120, 1, v136, 0LL, 0LL);
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
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x4
  struct SupportServantData_array *supportServantData; // x8
  int32_t v31; // w24
  const MethodInfo *v32; // x4
  struct SupportServantData_array *v33; // x8
  const MethodInfo *v34; // x2
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38[3]; // [xsp+40h] [xbp-B0h] BYREF

  if ( (byte_418ABF8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_418ABF8 = 1;
  }
  memset(&v38[1], 0, 64);
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_19216120(equipTarget1->fields.svtId, 0LL);
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
    v16 = BasicHelper__DecryptValue_19216120(v15->fields.svtId, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v38, 0LL, 0LL);
  v19 = *(_OWORD *)&v38[0].fields.currentCryptoKey;
  v18 = *(_OWORD *)&v38[0].fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v38[2].fields.currentCryptoKey = v19;
  *(_OWORD *)&v38[2].fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38[2];
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v38, 0LL, 0LL);
    v23 = *(_OWORD *)&v38[0].fields.currentCryptoKey;
    v22 = *(_OWORD *)&v38[0].fields.fakeValue;
  }
  *(_OWORD *)&v38[1].fields.currentCryptoKey = v23;
  *(_OWORD *)&v38[1].fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v36 = v38[1];
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v36, 0LL);
  if ( classPos1 != classPos2 )
  {
    v26 = v24;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v25);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_43;
    v31 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_43;
      SupportServantData__setEquipData(CenterNum, classPos1, v26, v16, v29);
      v33 = this->fields.supportServantData;
      if ( !v33 )
        goto LABEL_43;
      if ( v31 < v33->max_length )
      {
        CenterNum = v33->m_Items[v31];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v20, v14, v32);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v31, v34);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v28);
              return;
            }
          }
        }
LABEL_43:
        sub_B2C434(CenterNum, v28);
      }
    }
    v35 = sub_B2C460(CenterNum);
    sub_B2C400(v35, 0LL);
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
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v47; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v49; // x23
  UserServantLeaderEntity_o *v50; // x24
  UserServantLeaderEntity_o *v51; // x25
  int32_t v52; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  int32_t v54; // w25
  ServantEntity_o *Entity; // x24
  struct UserServantLeaderEntity_array *v56; // x8
  PartyOrganizationUtility_o *v57; // x23
  UserServantLeaderEntity_o *v58; // x25
  UserServantLeaderEntity_o *v59; // x26
  UserServantEntity_o *v60; // x8
  System_String_o *v61; // x22
  __int64 v62; // x8
  int32_t v63; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v66; // x21
  System_String_o *v67; // x0
  CommonUI_o *Instance; // x22
  System_Action_o *v69; // x23
  CommonUI_o *v70; // x19
  System_String_o *v71; // x21
  System_String_o *v72; // x22
  System_String_o *v73; // x23
  CommonConfirmDialog_ClickDelegate_o *v74; // x24
  __int64 v75; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_418ABF6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v18);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v20);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v21);
    sub_B2C35C(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v23);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v24);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_418ABF6 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v27 = sub_B2C42C(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_52;
  *(_QWORD *)(v27 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 32) = item;
  v36 = v27 + 32;
  *(_DWORD *)(v27 + 24) = result;
  *(_DWORD *)(v27 + 28) = classPos;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)item, v37, v38, v39, v40, v41, v42);
  if ( *(_DWORD *)(v27 + 24) == 1 && *(_QWORD *)v36 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_52;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v75 = sub_B2C460(UserServantLeaderEntity);
      sub_B2C400(v75, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_52;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v27 + 28),
                                                        v43);
    if ( UserServantLeaderEntity )
    {
      v47 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v36 )
          goto LABEL_52;
        if ( *(_QWORD *)(*(_QWORD *)v36 + 128LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v47->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_52;
          v49 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v51 = userServantLeaderEntityList->m_Items[6];
          v50 = userServantLeaderEntityList->m_Items[7];
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v80.fields.currentCryptoKey = v51;
          *(_QWORD *)&v80.fields.fakeValue = v50;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                              v80,
                                                              0LL);
          if ( !v47->fields.userServantLeaderEntityList )
            goto LABEL_52;
          v52 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v47->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v36 )
            goto LABEL_52;
          v53 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v36 + 128LL);
          if ( !v53 )
            goto LABEL_52;
          v54 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                              v53[1],
                                                              0LL);
          if ( !v49 )
            goto LABEL_52;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v49,
                 &skillName,
                 &actMaxRarity,
                 v52,
                 v54,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity,
                                              *(_DWORD *)&v47->fields.isFriendInfo,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                }
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v56 = v47->fields.userServantLeaderEntityList;
                if ( v56 )
                {
                  v57 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v59 = v56->m_Items[8];
                  v58 = v56->m_Items[9];
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v81.fields.currentCryptoKey = v59;
                  *(_QWORD *)&v81.fields.fakeValue = v58;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                      v81,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v60 = (UserServantEntity_o *)v47->fields.userServantLeaderEntityList;
                    if ( v60 )
                    {
                      v61 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v60, 0LL);
                      v62 = *(_QWORD *)v36;
                      if ( *(_QWORD *)v36 )
                      {
                        v63 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v62 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          }
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(
                                                                              Name,
                                                                              0LL);
                          if ( v57 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v57,
                                                     &maxLength,
                                                     v61,
                                                     v63,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity,
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                maxLength,
                                0LL);
                              v66 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v66, 0LL);
                              if ( v66 )
                              {
                                System_Text_StringBuilder__Append_42408700(v66, RarityInvalidMessage, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_42408700(v66, v67, 0LL);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v69 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v69,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu(Instance, v69, 0LL);
                                  v70 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v71 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                                                             v66,
                                                             v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v74 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v74,
                                    (Il2CppObject *)v27,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v70 )
                                  {
                                    CommonUI__OpenConfirmDialog_17971264(
                                      v70,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v71,
                                      v72,
                                      v73,
                                      v74,
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
            sub_B2C434(UserServantLeaderEntity, v29);
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
    v44);
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
    SupportServantData__removeServantData((SupportServantData_o *)this, classPos, *(const MethodInfo **)&classPos);
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
    SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, (const MethodInfo *)entity);
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
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&result);
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
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x1
  BalanceConfig_c *v36; // x8
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v38; // x24
  int32_t v39; // w9
  int32_t v40; // w26
  __int64 v41; // x23
  __int64 v42; // x19
  const MethodInfo *v43; // x2
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
  __int64 v71; // x0
  __int64 v73; // [xsp+10h] [xbp-90h]
  signed __int64 v74; // [xsp+18h] [xbp-88h]
  ServantLimitImageMaster_o *v75; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // [xsp+38h] [xbp-68h]
  int v79; // [xsp+44h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_418ABFE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_B2C35C(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v18);
    sub_B2C35C(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v19);
    sub_B2C35C(&int_TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v22);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_B2C35C(&LocalizationManager_TypeInfo, v24);
    sub_B2C35C(&NetworkManager_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v27);
    sub_B2C35C(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_12481/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v29);
    sub_B2C35C(&StringLiteral_12482/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v30);
    byte_418ABFE = 1;
  }
  entity = 0LL;
  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v78,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v31) )
      return (System_Collections_Generic_List_string__o *)v78;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v31) )
  {
    return (System_Collections_Generic_List_string__o *)v78;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v32);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_76:
    sub_B2C434(Instance, v35);
  }
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v75 = (ServantLimitImageMaster_o *)Instance;
  v36 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v36->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v36->static_fields->FixEventSupportDeckNum;
  }
  v74 = *p_FixMainSupportDeckNum;
  if ( (int)v74 >= 1 )
  {
    v38 = 0LL;
    v73 = (unsigned int)idx;
    do
    {
      if ( v38 != v73 )
      {
        if ( !fixDeckIds )
          goto LABEL_76;
        if ( v38 >= fixDeckIds->max_length )
        {
LABEL_77:
          v71 = sub_B2C460(Instance);
          sub_B2C400(v71, 0LL);
        }
        v39 = fixDeckIds->m_Items[v38 + 1];
        if ( v39 )
        {
          v40 = 0;
          v41 = v39 - 1;
          while ( 1 )
          {
            if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = BalanceConfig_TypeInfo;
            }
            if ( v40 >= v36->static_fields->SupportDeckMemberMax )
              break;
            v42 = sub_B2C42C(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v42,
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
                                  v40,
                                  v43);
            if ( !v42 )
              goto LABEL_76;
            *(_QWORD *)(v42 + 16) = Instance;
            v51 = v42 + 16;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v42 + 16),
              (System_Int32_array **)Instance,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            if ( !*(_QWORD *)(v42 + 16) )
              goto LABEL_76;
            if ( *(_DWORD *)(*(_QWORD *)(v42 + 16) + 64LL) )
            {
              v52 = this->fields.supportServantData;
              if ( !v52 )
                goto LABEL_76;
              if ( (unsigned int)v41 >= v52->max_length )
                goto LABEL_77;
              v53 = v52->m_Items[v41];
              if ( !v53 )
                goto LABEL_76;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v53->fields.userServantLeaderEntityList;
              v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v55,
                (Il2CppObject *)v42,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                (const MethodInfo_2711C04 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
              v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v55,
                      (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           v56,
                           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
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
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                    Instance = (__int64)v75;
                    if ( !v75 )
                      goto LABEL_76;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v75,
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
                  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v79 = v59;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v79);
                  if ( !v57 )
                    goto LABEL_76;
                  v67 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v57, v61, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v57, 0LL);
                  v65 = System_String__Format_44306596(v66, v67, Name, ClassName, 0LL);
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v57 )
                    goto LABEL_76;
                  v62 = (System_String_o *)Instance;
                  v63 = (Il2CppObject *)ServantEntity__getName(v57, -1, -1, 0LL);
                  v64 = (Il2CppObject *)ServantEntity__getClassName(v57, 0LL);
                  v65 = System_String__Format_44301068(v62, v63, v64, 0LL);
                }
                v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
                Instance = (__int64)v78;
                if ( !v78 )
                  goto LABEL_76;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v78,
                  v35,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            ++v40;
            v36 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v38;
    }
    while ( (__int64)v38 < v74 );
  }
  return (System_Collections_Generic_List_string__o *)v78;
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_418AC0D & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_418AC0D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B2C460(CenterNum);
    sub_B2C400(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B2C434(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v8, v9, 0LL);
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

  if ( (byte_418ABE5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&SupportServantData___TypeInfo, v3);
    byte_418ABE5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_B2C374(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_B2C2F8(
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
  const MethodInfo *v2; // x2
  il2cpp_array_size_t i; // w22
  int64_t Servant; // x0
  int32_t j; // w20
  const MethodInfo *v7; // x2
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v9; // x21
  const MethodInfo *v10; // x2
  struct SupportServantData_array *v11; // x8
  const MethodInfo *v12; // x2
  struct SupportServantData_array *v13; // x8
  int64_t v14; // x21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v16; // x8
  struct SupportServantData_array *v17; // x9
  SupportServantData_o *v18; // x9
  __int64 v20; // x0

  if ( (byte_418AC16 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418AC16 = 1;
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
      v16 = supportServantData->m_Items[i];
      if ( !v16 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      Servant = SupportServantData__getServant(v16, j, v2);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
        goto LABEL_35;
      v9 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, v7);
      if ( v9 != Servant )
        return 1;
      v11 = this->fields.supportServantData;
      if ( !v11 )
        goto LABEL_34;
      if ( i >= v11->max_length )
        goto LABEL_35;
      Servant = (int64_t)v11->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, v10);
      v13 = this->fields.orgSupportServantData;
      if ( !v13 )
        goto LABEL_34;
      if ( i >= v13->max_length )
        goto LABEL_35;
      v14 = Servant;
      Servant = (int64_t)v13->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v14 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, v12) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v17 = this->fields.orgSupportServantData;
    if ( !v17 )
      goto LABEL_34;
    if ( i >= v17->max_length )
    {
LABEL_35:
      v20 = sub_B2C460(Servant);
      sub_B2C400(v20, 0LL);
    }
    v18 = v17->m_Items[i];
    if ( !v18 )
LABEL_34:
      sub_B2C434(Servant, method);
    if ( System_String__op_Inequality(v16->fields._deckName_k__BackingField, v18->fields._deckName_k__BackingField, 0LL) )
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

  if ( (byte_418ABE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_418ABE7 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_418ABE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_418ABE6 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) >= 0;
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
  __int64 v14; // x8
  il2cpp_array_size_t v15; // w22
  unsigned __int64 v16; // x27
  __int64 v17; // x28
  int v18; // w8
  il2cpp_array_size_t v19; // w19
  int32_t i; // w23
  __int64 v21; // x24
  const MethodInfo *v22; // x2
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

  if ( (byte_418AC07 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_B2C35C(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v10);
    sub_B2C35C(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v11);
    byte_418AC07 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_B2C434(CenterNum, v13);
  v14 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (unsigned int)CenterNum;
    v16 = 0LL;
    v17 = (int)CenterNum;
    v39 = fixDeckIds;
    do
    {
      if ( v16 >= (unsigned int)v14 )
      {
LABEL_29:
        v37 = sub_B2C460(CenterNum);
        sub_B2C400(v37, 0LL);
      }
      v18 = fixDeckIds->m_Items[v16 + 1];
      v19 = v18 - 1;
      if ( v18 >= 1 && v19 != idx )
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
          v21 = sub_B2C42C(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v21,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v15 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v17];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, v22);
          if ( !v21 )
            goto LABEL_28;
          *(_QWORD *)(v21 + 16) = CenterNum;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v21 + 16),
            (System_Int32_array **)CenterNum,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v30 = *(_QWORD *)(v21 + 16);
          if ( !v30 )
            goto LABEL_28;
          if ( *(_DWORD *)(v30 + 64) )
          {
            v31 = this->fields.supportServantData;
            if ( !v31 )
              goto LABEL_28;
            if ( v19 >= v31->max_length )
              goto LABEL_29;
            v32 = v31->m_Items[v19];
            if ( !v32 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v32->fields.userServantLeaderEntityList;
            v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v34,
              (Il2CppObject *)v21,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              (const MethodInfo_2711C04 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
            v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v34,
                    (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                   v35,
                   (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return 0;
          }
        }
      }
      fixDeckIds = v39;
      ++v16;
      LODWORD(v14) = v39->max_length;
    }
    while ( (__int64)v16 < (int)v14 );
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
  __int64 v14; // x1
  System_Array_o *v15; // x22
  int klass; // w25
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  BalanceConfig_c *v20; // x0
  Il2CppObject *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  BalanceConfig_c *v23; // x0
  bool v24; // w21
  char v25; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v27; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v30; // x23
  struct SupportSelectRootComponent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  int32_t v39; // w0
  SupportSelectRootComponent___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v42; // w20
  struct SupportSelectRootComponent___c_StaticFields *v43; // x9
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v45; // x23
  struct SupportSelectRootComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  int32_t v54; // w0
  bool v55; // w8

  if ( (byte_418ABF4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v9);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v10);
    sub_B2C35C(&SupportSelectRootComponent___c_TypeInfo, v11);
    byte_418ABF4 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_46;
  v15 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[12].monitor;
  if ( !SelfUserGame )
    goto LABEL_46;
  klass = (int)v15[12].klass;
  if ( SelfUserGame[1].monitor )
  {
    v17 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v17 )
    {
      v18 = v17;
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C41C(v17, int___TypeInfo);
      if ( !v19 )
        goto LABEL_18;
    }
    else
    {
      v19 = 0LL;
    }
  }
  else
  {
    v20 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C374(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v20->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v15[13].klass;
  if ( !SelfUserGame )
LABEL_46:
    sub_B2C434(SelfUserGame, v14);
  if ( !SelfUserGame[1].monitor )
    goto LABEL_19;
  v21 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v21 )
  {
    v22 = 0LL;
    goto LABEL_24;
  }
  v18 = v21;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C41C(v21, int___TypeInfo);
  if ( !v22 )
  {
LABEL_18:
    sub_B2C728(v18);
LABEL_19:
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C374(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v23->static_fields->FixEventSupportDeckNum);
  }
LABEL_24:
  v24 = System_Linq_Enumerable__SequenceEqual_int_(
          v19,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v25 = v24 & System_Linq_Enumerable__SequenceEqual_int_(
                v22,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) ^ 1;
  if ( (v25 & 1) != 0 )
    goto LABEL_43;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v27 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v27 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_0,
      v30,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v31 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v31->__9__67_0 = _9__67_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  v39 = System_Linq_Enumerable__Count_int_(v38, (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  v40 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v42 = v39;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v40 = SupportSelectRootComponent___c_TypeInfo;
  }
  v43 = v40->static_fields;
  _9__67_1 = v43->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v43 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__67_1,
      v45,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v46 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v46->__9__67_1 = _9__67_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v46->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  v54 = System_Linq_Enumerable__Count_int_(v53, (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v42 >= 1 && v54 > 0 )
LABEL_43:
    v55 = 0;
  else
    v55 = CenterNum + 1 != klass;
  return v55 | v25 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_418ABE8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_418ABE8 = 1;
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
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v44; // x22
  UserServantEntity_o *v45; // x8
  PartyOrganizationUtility_o *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  int32_t v49; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v51; // w25
  UserServantEntity_o *v52; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x20
  __int64 v54; // x23
  __int64 v55; // x24
  ServantEntity_o *v56; // x23
  PartyOrganizationUtility_o *v57; // x20
  UserServantEntity_o *v58; // x8
  System_String_o *v59; // x21
  EquipTargetInfo_o *v60; // x8
  int32_t v61; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v63; // x21
  System_String_o *v64; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  System_String_o *v68; // x23
  CommonConfirmDialog_ClickDelegate_o *v69; // x24
  __int64 v70; // x0
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_418ABF5 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v16);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v18);
    sub_B2C35C(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v20);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v21);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    byte_418ABF5 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v24 = sub_B2C42C(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_44;
  *(_QWORD *)(v24 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 32) = entity;
  v33 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v24 + 32);
  *(_DWORD *)(v24 + 24) = result;
  *(_DWORD *)(v24 + 28) = classPos;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)entity, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v24 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_44;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v70 = sub_B2C460(UserServantLeaderEntity);
      sub_B2C400(v70, 0LL);
    }
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v24 + 28),
                                                        v40);
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    v44 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v45 = (UserServantEntity_o *)*v33;
      if ( !*v33 )
        goto LABEL_44;
      v46 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v75.fields.currentCryptoKey = v48;
      *(_QWORD *)&v75.fields.fakeValue = v47;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v75,
                                                          0LL);
      if ( !*v33 )
        goto LABEL_44;
      v49 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v33, 0LL);
      oldServantIdList = v44->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_44;
      v51 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v46 )
        goto LABEL_44;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v46,
             &skillName,
             &actMaxRarity,
             v49,
             v51,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v52 = (UserServantEntity_o *)*v33;
          if ( *v33 )
          {
            v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantLeaderEntity;
            v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
            v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v76.fields.currentCryptoKey = v55;
            *(_QWORD *)&v76.fields.fakeValue = v54;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                v76,
                                                                0LL);
            if ( v53 )
            {
              v56 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v53,
                                         (int32_t)UserServantLeaderEntity,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v33 )
              {
                v57 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                    (*v33)[6],
                                                                    0LL);
                if ( v56 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      v56,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v58 = (UserServantEntity_o *)*v33;
                  if ( *v33 )
                  {
                    v59 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v58, 0LL);
                    v60 = (EquipTargetInfo_o *)v44->fields.oldServantIdList;
                    if ( v60 )
                    {
                      v61 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v60, 0LL);
                      if ( v57 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v57,
                                                 &maxLength,
                                                 v59,
                                                 v61,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity,
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            maxLength,
                            0LL);
                          v63 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v63, 0LL);
                          if ( v63 )
                          {
                            System_Text_StringBuilder__Append_42408700(v63, RarityInvalidMessage, 0LL);
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_42408700(v63, v64, 0LL);
                            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v66 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v63->klass->vtable._3_ToString.method)(
                                                       v63,
                                                       v63->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v69 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v69,
                              (Il2CppObject *)v24,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_17971264(
                                Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v66,
                                v67,
                                v68,
                                v69,
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
        sub_B2C434(UserServantLeaderEntity, v26);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v24 + 24),
    *(_DWORD *)(v24 + 28),
    *(UserServantEntity_o **)(v24 + 32),
    v41);
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
  const MethodInfo *v12; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v15; // x1
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v18; // x21
  CancelConfirmMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w20
  SupportServantSelectMenu_o *v23; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x24
  System_Int32_array *v27; // x22
  const MethodInfo *v28; // x2
  BalanceConfig_c *v29; // x0
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x1
  System_Int32_array *v32; // x23
  BalanceConfig_c *v33; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v37; // x27
  __int64 v38; // x0

  if ( (byte_418AC02 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v9);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v10);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v11);
    byte_418AC02 = 1;
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
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v15);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
        {
          v38 = sub_B2C460(CenterNum);
          sub_B2C400(v38, 0LL);
        }
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v18 = supportServantData->m_Items[(int)CenterNum];
        v19 = (CancelConfirmMenu_CallbackFunc_o *)sub_B2C42C(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v18, v19, 0LL);
          return;
        }
      }
      goto LABEL_59;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v20)
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v12);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v21);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v28);
        return;
      }
      goto LABEL_59;
    }
    v22 = SupportSelectRootComponent__getCenterNum(this, v20);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_59;
    v23 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_59;
    pushTabButton = (int32_t)v23->fields.pushTabButton;
    if ( CenterNum->fields.basePanelList )
    {
      v25 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v25 )
      {
        v26 = v25;
        v27 = (System_Int32_array *)sub_B2C41C(v25, int___TypeInfo);
        if ( !v27 )
          goto LABEL_48;
      }
      else
      {
        v27 = 0LL;
      }
    }
    else
    {
      v29 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v27 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v29->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v23->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_59;
    if ( !CenterNum->fields.basePanelList )
      goto LABEL_49;
    v30 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v30 )
    {
      v32 = 0LL;
      goto LABEL_54;
    }
    v26 = v30;
    v32 = (System_Int32_array *)sub_B2C41C(v30, int___TypeInfo);
    if ( v32 )
    {
LABEL_54:
      SupportSelectRootComponent__getCenterNum(this, v31);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
      tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
      tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
      v37 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_B2C42C(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
      CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
        0LL);
      if ( cancelConfirmDeckIdDialog )
      {
        CancelConfirmDeckIdDialog__Open(
          cancelConfirmDeckIdDialog,
          v22 + 1,
          pushTabButton,
          tempFixMainQuestSupportDeckIds,
          tempFixEventQuestSupportDeckIds,
          v27,
          v32,
          v37,
          0LL);
        return;
      }
LABEL_59:
      sub_B2C434(CenterNum, v12);
    }
LABEL_48:
    sub_B2C728(v26);
LABEL_49:
    v33 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v32 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v33->static_fields->FixEventSupportDeckNum);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v17; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v19; // x21
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  __int64 v26; // x0

  if ( (byte_418AC00 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_418AC00 = 1;
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
    v26 = sub_B2C460(FixedErrorList);
    sub_B2C400(v26, 0LL);
  }
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportServantData__get_IsNoServant(
                                                                                     (SupportServantData_o *)FixedErrorList,
                                                                                     v14);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v19 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v19, 0LL);
        return;
      }
LABEL_21:
      sub_B2C434(FixedErrorList, v14);
    }
  }
  if ( !v17 )
    goto LABEL_21;
  if ( v17->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 1, v15);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v21);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v22);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v24);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v25);
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
                                                                                     v17,
                                                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v17; // x22
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v19; // x21
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  __int64 v26; // x0

  if ( (byte_418ABFF & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_418ABFF = 1;
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
    v26 = sub_B2C460(FixedErrorList);
    sub_B2C400(v26, 0LL);
  }
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)SupportServantData__get_IsNoServant(
                                                                                     (SupportServantData_o *)FixedErrorList,
                                                                                     v14);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v19 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v19, 0LL);
        return;
      }
LABEL_21:
      sub_B2C434(FixedErrorList, v14);
    }
  }
  if ( !v17 )
    goto LABEL_21;
  if ( v17->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 0, v15);
    FixedErrorList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v21);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v22);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v24);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v25);
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
                                                                                     v17,
                                                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v9; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_418AC06 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_418AC06 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v11 = sub_B2C460(CenterNum);
    sub_B2C400(v11, 0LL);
  }
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_B2C434(CenterNum, v5);
  SupportSelectEditMenu__Open(supportEditMenu, v9, isEdit, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19

  if ( (byte_418AC01 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, isFixed);
    byte_418AC01 = 1;
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
  const MethodInfo *v8; // x1
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
  const MethodInfo *v20; // x1
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
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x0

  v2 = this;
  if ( (byte_418ABE4 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&SupportServantData_TypeInfo, method);
    byte_418ABE4 = 1;
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
      v7 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, v8);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_B2C41C(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v40 = sub_B2C454(this);
          sub_B2C400(v40, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
      {
LABEL_37:
        v39 = sub_B2C460(this);
        sub_B2C400(v39, 0LL);
      }
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&supportServantData[v5],
        (System_Int32_array **)v7,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
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
      v19 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
      SupportServantData___ctor(v19, v20);
      if ( v19 )
      {
        this = (SupportSelectRootComponent_o *)sub_B2C41C(v19, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v16 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v16 + 8] = v19;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&orgSupportServantData[v17],
        (System_Int32_array **)v19,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v16;
    v17 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_B2C434(this, method);
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
      v31 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
      SupportServantData___ctor(v31, v32);
      if ( v31 )
      {
        this = (SupportSelectRootComponent_o *)sub_B2C41C(v31, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v28 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v28 + 8] = v31;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&tmpSupportServantData[v29],
        (System_Int32_array **)v31,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v28;
    v29 += 2LL;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void __fastcall SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_418AC0B & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_418AC0B = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B2C460(CenterNum);
    sub_B2C400(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B2C434(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v8, v9, 0LL);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_418AC0F & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_418AC0F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    v10 = sub_B2C460(CenterNum);
    sub_B2C400(v10, 0LL);
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B2C42C(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B2C434(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v8, v9, 0LL);
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
  const MethodInfo *v12; // x2
  il2cpp_array_size_t i; // w21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  SupportServantData_o *Instance; // x0
  const MethodInfo *v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  __int64 v19; // x0

  if ( (byte_418ABF1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v8);
    byte_418ABF1 = 1;
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
        v19 = sub_B2C460(Instance);
        sub_B2C400(v19, 0LL);
      }
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_24;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], v12);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_23:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v17);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (SupportServantData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v18,
                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_24:
    sub_B2C434(Instance, v11);
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
      v17 = sub_B2C460(IsNullOrEmpty);
      sub_B2C400(v17, 0LL);
    }
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = (System_Int32_array **)this->fields.editDeckName,
          IsNullOrEmpty->fields.swapButton = (struct UICommonButton_o *)editDeckName,
          sub_B2C2F8(
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
      sub_B2C434(IsNullOrEmpty, v5);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_418AC05 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418AC05 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
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
      SupportSelectMenu__Reset(supportSelectMenu, v8, v12);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v13);
      goto LABEL_12;
    }
LABEL_21:
    sub_B2C434(supportSelectMenu, v8);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_21;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_21;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_B2C434(this, *(_QWORD *)&targetIdx);
  SupportServantData__ResetOld((SupportServantData_o *)this, *(const MethodInfo **)&targetIdx);
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
  System_Collections_Generic_List_int__o *v10; // x20
  System_Collections_Generic_List_int__o *v11; // x21
  const MethodInfo *v12; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v14; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w24
  int32_t i; // w25
  int32_t v24; // w26
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v30; // x20
  System_Int32_array *v31; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v32; // x24

  if ( (byte_418AC08 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_418AC08 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
LABEL_28:
    sub_B2C434(supportEditMenu, method);
  SupportSelectEditMenu__Close(supportEditMenu, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v12);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v14);
  v17 = SupportSelectRootComponent__getCenterNum(this, v16);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v17 + 1, v18);
  v22 = SupportSelectRootComponent__getCenterNum(this, v20);
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
    if ( v22 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v21),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v24 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v24,
                                                         v21),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v10 )
        goto LABEL_28;
      System_Collections_Generic_List_int___Add(
        v10,
        i,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v11 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v24, v21)
      || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                         this,
                                                         i,
                                                         this->fields.tempFixMainQuestSupportDeckIds,
                                                         v26),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v24, v25) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v27);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v11 )
      goto LABEL_28;
LABEL_18:
    System_Collections_Generic_List_int___Add(
      v11,
      i,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    continue;
  }
  if ( !v10 )
    goto LABEL_28;
  copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
  supportServantData = this->fields.supportServantData;
  supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                 v10,
                                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_28;
  v30 = (System_Int32_array *)supportEditMenu;
  v31 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v32 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_B2C42C(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
  SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
    v32,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
    0LL);
  if ( !copyDeckSelectMenu )
    goto LABEL_28;
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v30, v31, v32, 0LL);
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
    sub_B2C434(supportSelectMenu, method);
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

  if ( (byte_418ABF0 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, list);
    byte_418ABF0 = 1;
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
    AssetManager__loadAssetStorage_30159204(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (BattleServantConfConponent_c *)list;
  sub_B2C2F8(p_cacheAssetNameList, (System_Int32_array **)list, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30161248(v10, 0LL);
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
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v24; // x8
  SupportSelectRootComponent_o *v25; // x23
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  struct SupportServantData_array *v28; // x8
  struct SupportServantData_array *v29; // x8
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35[2]; // [xsp+20h] [xbp-70h] BYREF

  v7 = result;
  v8 = this;
  if ( (byte_418ABF7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_System_Array_IndexOf_long___, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_B2C35C(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_418ABF7 = 1;
  }
  memset(&v35[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v22 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_28;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_19216120(userSvtEntity->fields.svtId, 0LL);
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v35, 0LL, 0LL);
    v18 = *(_OWORD *)&v35[0].fields.currentCryptoKey;
    v17 = *(_OWORD *)&v35[0].fields.fakeValue;
    v19 = 0;
  }
  *(_OWORD *)&v35[1].fields.currentCryptoKey = v18;
  *(_OWORD *)&v35[1].fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v34 = v35[1];
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v34, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_34:
    sub_B2C434(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_35;
  v24 = supportServantData->m_Items[selectNum];
  if ( !v24 )
    goto LABEL_34;
  v25 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v24->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_1FFD60C *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v28 = v8->fields.supportServantData;
    if ( !v28 )
      goto LABEL_34;
    if ( (unsigned int)selectNum >= v28->max_length )
      goto LABEL_35;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v28->m_Items[selectNum];
    if ( !this )
      goto LABEL_34;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, v26);
  }
  v29 = v8->fields.supportServantData;
  if ( !v29 )
    goto LABEL_34;
  if ( (unsigned int)selectNum >= v29->max_length )
  {
LABEL_35:
    v33 = sub_B2C460(this);
    sub_B2C400(v33, 0LL);
  }
  this = (SupportSelectRootComponent_o *)v29->m_Items[selectNum];
  if ( !this )
    goto LABEL_34;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v25, v19, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v22 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_28:
  v30 = v21;
  System_Action___ctor(v21, (Il2CppObject *)v8, *v22, 0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__CloseSupportServantEquipListMenu(Instance, v30, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v31) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v32);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_34;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v32);
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
  __int64 v30; // x23
  __int64 v31; // x25
  __int64 v32; // x24
  struct System_Int32_array *v33; // x8
  unsigned __int64 v34; // x27
  unsigned int *v35; // x28
  SupportServantData_o *v36; // x22
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x7
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
  const MethodInfo *v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  unsigned int *v70; // x0
  const MethodInfo *v71; // x7
  unsigned int *v72; // x8
  struct SupportInfoJump_o *v73; // x10
  struct System_Int32_array *v74; // x9
  __int64 v75; // x8
  __int64 v76; // x25
  struct System_Int32_array *v77; // x8
  unsigned int *v78; // x28
  SupportServantData_o *v79; // x22
  const MethodInfo *v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  unsigned int *v87; // x0
  const MethodInfo *v88; // x7
  unsigned int *v89; // x8
  struct SupportInfoJump_o *v90; // x10
  struct System_Int32_array *v91; // x9
  __int64 v92; // x8
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v95; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_418ABE9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, deckIndex);
    sub_B2C35C(&BalanceConfig_TypeInfo, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_B2C35C(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v12);
    sub_B2C35C(&SupportServantData___TypeInfo, v13);
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&SupportServantData_TypeInfo, v14);
    byte_418ABE9 = 1;
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
      v102 = sub_B2C460(this);
      sub_B2C400(v102, 0LL);
    }
    *(_QWORD *)&v20[i] = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v20[i], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ++v17;
  }
  if ( !otherUserGameEntity )
    goto LABEL_74;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_74;
  v22 = *(_QWORD *)&mainSupportDeckIds->max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_74;
    v104 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v50 = (System_Int32_array **)sub_B2C374(SupportServantData___TypeInfo, (unsigned int)(v104 + v22));
    *p_supportServantData = (unsigned int *)v50;
    sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.supportServantData, v50, v51, v52, v53, v54, v55, v56);
    if ( (int)v22 < 1 )
    {
      v57 = 0;
LABEL_53:
      if ( (int)v104 < 1 )
        goto LABEL_70;
      v76 = 8LL;
      while ( 1 )
      {
        v77 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v77 )
          break;
        if ( v76 - 8 >= (unsigned __int64)v77->max_length )
          goto LABEL_75;
        if ( *((int *)&v77->obj.klass + v76) >= 1 )
        {
          v78 = *p_supportServantData;
          v79 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
          SupportServantData___ctor(v79, v80);
          if ( !v78 )
            break;
          if ( v79 )
          {
            this = (SupportSelectRootComponent_o *)sub_B2C41C(v79, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
            if ( !this )
              goto LABEL_76;
          }
          if ( v57 >= v78[6] )
            goto LABEL_75;
          v87 = &v78[2 * v57];
          *((_QWORD *)v87 + 4) = v79;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v87 + 8),
            (System_Int32_array **)v79,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
          v89 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v89[6] )
            goto LABEL_75;
          v90 = v9->fields.supportInfoJump;
          if ( !v90 )
            break;
          v91 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v91 )
            break;
          if ( v76 - 8 >= (unsigned __int64)v91->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v89[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_30842024(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v90->fields.kind,
            v90->fields.isSelect,
            v90->fields.eventSetupInfo,
            1,
            *((_DWORD *)&v91->obj.klass + v76),
            v88);
          ++v57;
        }
        v92 = v76 - 7;
        ++v76;
        if ( v92 >= (int)v104 )
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
          v62 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
          SupportServantData___ctor(v62, v63);
          if ( !v61 )
            break;
          if ( v62 )
          {
            this = (SupportSelectRootComponent_o *)sub_B2C41C(v62, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
            if ( !this )
            {
LABEL_76:
              v103 = sub_B2C454(this);
              sub_B2C400(v103, 0LL);
            }
          }
          if ( v57 >= v61[6] )
            goto LABEL_75;
          v70 = &v61[2 * v57];
          *((_QWORD *)v70 + 4) = v62;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v70 + 8),
            (System_Int32_array **)v62,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          v72 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v72[6] )
            goto LABEL_75;
          v73 = v9->fields.supportInfoJump;
          if ( !v73 )
            break;
          v74 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v74 )
            break;
          if ( v59 - 8 >= (unsigned __int64)v74->max_length )
            goto LABEL_75;
          this = *(SupportSelectRootComponent_o **)&v72[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_30842024(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v73->fields.kind,
            v73->fields.isSelect,
            v73->fields.eventSetupInfo,
            0,
            *((_DWORD *)&v74->obj.klass + v59),
            v71);
          ++v57;
        }
        v75 = v59 - 7;
        ++v59;
        if ( v75 >= v58 )
          goto LABEL_53;
      }
    }
LABEL_74:
    sub_B2C434(this, deckIndex);
  }
  v23 = (System_Int32_array **)sub_B2C374(SupportServantData___TypeInfo, (unsigned int)v22);
  *p_supportServantData = (unsigned int *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.supportServantData, v23, v24, v25, v26, v27, v28, v29);
  if ( (int)v22 >= 1 )
  {
    v30 = (int)v22;
    v31 = 8LL;
    v32 = 8LL;
    do
    {
      v33 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v33 )
        goto LABEL_74;
      v34 = v31 - 8;
      if ( v31 - 8 >= (unsigned __int64)v33->max_length )
        goto LABEL_75;
      if ( *((int *)&v33->obj.klass + v31) >= 1 )
      {
        v35 = *p_supportServantData;
        v36 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
        SupportServantData___ctor(v36, v37);
        if ( !v35 )
          goto LABEL_74;
        if ( v36 )
        {
          this = (SupportSelectRootComponent_o *)sub_B2C41C(v36, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
          if ( !this )
            goto LABEL_76;
        }
        if ( v34 >= v35[6] )
          goto LABEL_75;
        *(_QWORD *)&v35[v32] = v36;
        sub_B2C2F8((BattleServantConfConponent_o *)&v35[v32], (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
        v45 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_74;
        if ( v34 >= v45[6] )
          goto LABEL_75;
        v46 = v9->fields.supportInfoJump;
        if ( !v46 )
          goto LABEL_74;
        v47 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v47 )
          goto LABEL_74;
        if ( v34 >= v47->max_length )
          goto LABEL_75;
        this = *(SupportSelectRootComponent_o **)&v45[v32];
        if ( !this )
          goto LABEL_74;
        SupportServantData__Init_30842024(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v46->fields.kind,
          v46->fields.isSelect,
          v46->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v47->obj.klass + v31),
          v44);
      }
      v48 = v31 - 7;
      ++v31;
      v32 += 2LL;
    }
    while ( v48 < v30 );
  }
LABEL_70:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_74;
  indicator = supportSelectMenu->fields.indicator;
  v95 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v95, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_74;
  indicator->fields.modifyCenterItemCallBack = v95;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
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
  Il2CppObject *v37; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  SupportSelectRootComponent___c_c *v39; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v42; // x23
  struct SupportSelectRootComponent___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  unsigned int v51; // w0
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  void *monitor; // x8
  __int64 v60; // x25
  __int64 v61; // x23
  unsigned __int64 v62; // x26
  unsigned int *v63; // x27
  SupportServantData_o *v64; // x22
  const MethodInfo *v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x7
  unsigned int *v73; // x9
  struct SupportInfoJump_o *v74; // x8
  __int64 v75; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct SupportInfoJump_o *v85; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  QuestRestrictionInfo_o *v87; // x20
  __int64 v88; // x0
  __int64 v89; // x0

  v8 = this;
  if ( (byte_418ABEA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v14);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v15);
    sub_B2C35C(&int___TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B2C35C(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v20);
    sub_B2C35C(&SupportServantData___TypeInfo, v21);
    sub_B2C35C(&SupportServantData_TypeInfo, v22);
    sub_B2C35C(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v23);
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&SupportSelectRootComponent___c_TypeInfo, v24);
    byte_418ABEA = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_63;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v26 = v8->fields.supportInfoJump;
  if ( !v26 )
    goto LABEL_63;
  questRestrictionInfo = v26->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_63;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&v33[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v30;
  }
  v34 = v8->fields.supportInfoJump;
  if ( !v34 || (followerInfo = v34->fields.followerInfo) == 0LL )
LABEL_63:
    sub_B2C434(this, method);
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
    v37 = v36;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C41C(v36, int___TypeInfo);
    if ( v38 )
      goto LABEL_30;
    sub_B2C728(v37);
  }
  v38 = 0LL;
LABEL_30:
  v39 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v39 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v42,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v43 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v43->__9__49_0 = _9__49_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v43->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = System_Linq_Enumerable__Where_int_(
          v38,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  v51 = System_Linq_Enumerable__Count_int_(v50, (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  v52 = (System_Int32_array **)sub_B2C374(SupportServantData___TypeInfo, v51);
  *p_supportServantData = (unsigned int *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.supportServantData, v52, v53, v54, v55, v56, v57, v58);
  if ( !v38 )
    goto LABEL_63;
  monitor = v38[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v60 = 8LL;
    v61 = 8LL;
    while ( 1 )
    {
      v62 = v60 - 8;
      if ( v60 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v38->klass + v60) >= 1 )
      {
        v63 = *p_supportServantData;
        v64 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
        SupportServantData___ctor(v64, v65);
        if ( !v63 )
          goto LABEL_63;
        if ( v64 )
        {
          this = (SupportSelectRootComponent_o *)sub_B2C41C(v64, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
          if ( !this )
          {
            v89 = sub_B2C454(0LL);
            sub_B2C400(v89, 0LL);
          }
        }
        if ( v62 >= v63[6] )
          break;
        *(_QWORD *)&v63[v61] = v64;
        sub_B2C2F8((BattleServantConfConponent_o *)&v63[v61], (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
        v73 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_63;
        if ( v62 >= v73[6] )
          break;
        v74 = v8->fields.supportInfoJump;
        if ( !v74 )
          goto LABEL_63;
        if ( v62 >= LODWORD(v38[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v73[v61];
        if ( !this )
          goto LABEL_63;
        SupportServantData__Init_30844168(
          (SupportServantData_o *)this,
          v74->fields.followerInfo,
          v74->fields.kind,
          v74->fields.isSelect,
          v74->fields.eventSetupInfo,
          v74->fields.questRestrictionInfo,
          *((_DWORD *)&v38->klass + v60),
          v72);
      }
      LODWORD(monitor) = v38[1].monitor;
      v75 = v60 - 7;
      ++v60;
      v61 += 2LL;
      if ( v75 >= (int)monitor )
        goto LABEL_54;
    }
LABEL_64:
    v88 = sub_B2C460(this);
    sub_B2C400(v88, 0LL);
  }
LABEL_54:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_63;
  indicator = supportSelectMenu->fields.indicator;
  v78 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_63;
  indicator->fields.modifyCenterItemCallBack = v78;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = v8->fields.supportInfoJump;
  if ( !v85 )
    goto LABEL_63;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  v87 = v85->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (SupportSelectRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_63;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v87,
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
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int32_t Int; // w20
  BalanceConfig_c *v19; // x8
  int32_t v20; // w20
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 i; // x25
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v33; // x9
  SupportServantData_o *followerQuestInfomationDraw; // x0
  unsigned __int64 v35; // x26
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
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
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v67; // x8
  unsigned __int64 v68; // x22
  System_Int32_array **eventSetupInfo; // x1
  SupportSelectMenu_o *v70; // x21
  SupportServantData_array *v71; // x22
  SupportSelectMenu_CallbackFunc_o *v72; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v73; // x24
  const MethodInfo *v74; // x5
  struct SupportSelectMenu_o *v75; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  const MethodInfo *v84; // x1
  struct SupportSelectMenu_o *v85; // x8
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct SupportServantData_array *v92; // x20
  __int64 v93; // x8
  unsigned __int64 v94; // x21
  System_Int32_array **v95; // x1
  SupportSelectMenu_o *v96; // x20
  SupportServantData_array *v97; // x21
  int32_t v98; // w22
  SupportSelectMenu_CallbackFunc_o *v99; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v100; // x24
  const MethodInfo *v101; // x5
  const MethodInfo *v102; // x2
  struct SupportServantData_array *v103; // x8
  bool v104; // w1
  System_Action_o *v105; // x20
  __int64 v106; // x0
  int32_t deckIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418ABEB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&BalanceConfig_TypeInfo, v4);
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_B2C35C(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_B2C35C(&StringLiteral_12560/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_418ABEB = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12560/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v19 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v20 = UnityEngine_Mathf__Min_40694704(Int, v19->static_fields->SupportDeckMax - 1, 0LL);
    deckIndex = v20;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v22 = (struct System_Int32_array *)sub_B2C374(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v22;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (System_Int32_array **)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    for ( i = 8LL; ; ++i )
    {
      followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      v35 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v35 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_79;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v35 < (int)max_length )
      {
        if ( v35 >= max_length )
          goto LABEL_80;
        v33 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_79;
        if ( v35 >= v33->max_length )
          goto LABEL_80;
        *((_DWORD *)&v33->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( (BYTE3(followerQuestInfomationDraw[2].fields.oldServantIdList) & 4) != 0
      && !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v37 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v37;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (System_Int32_array **)v37,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
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
    SupportSelectRootComponent__initSupportServantDatas(this, v16);
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
          TitleInfoControl__setTitleInfo_19532804(
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
                  v67 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v67 >= 1 )
                  {
                    v68 = 0LL;
                    while ( v68 < (unsigned int)v67 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v68];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = (System_Int32_array **)this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          eventSetupInfo,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65);
                      }
                      LODWORD(v67) = supportServantData->max_length;
                      if ( (__int64)++v68 >= (int)v67 )
                        goto LABEL_51;
                    }
LABEL_80:
                    v106 = sub_B2C460(followerQuestInfomationDraw);
                    sub_B2C400(v106, 0LL);
                  }
LABEL_51:
                  v70 = this->fields.supportSelectMenu;
                  v71 = this->fields.supportServantData;
                  v72 = (SupportSelectMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v72,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    0LL);
                  v73 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B2C42C(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v73,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    0LL);
                  if ( v70 )
                  {
                    SupportSelectMenu__Open(v70, v71, v20, v72, v73, v74);
                    v75 = this->fields.supportSelectMenu;
                    if ( v75 )
                    {
                      indicator = v75->fields.indicator;
                      v77 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                      System_Action___ctor(
                        v77,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v77;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
                          (System_Int32_array **)v77,
                          v78,
                          v79,
                          v80,
                          v81,
                          v82,
                          v83);
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
    sub_B2C434(followerQuestInfomationDraw, v16);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v17);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  TitleInfoControl__setTitleInfo_19532804(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v84);
  v85 = this->fields.supportSelectMenu;
  if ( !v85 )
    goto LABEL_79;
  followerQuestInfomationDraw = (SupportServantData_o *)v85->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v92 = this->fields.supportServantData;
  if ( !v92 )
    goto LABEL_79;
  v93 = *(_QWORD *)&v92->max_length;
  if ( (int)v93 >= 1 )
  {
    v94 = 0LL;
    while ( v94 < (unsigned int)v93 )
    {
      followerQuestInfomationDraw = v92->m_Items[v94];
      if ( followerQuestInfomationDraw )
      {
        v95 = (System_Int32_array **)this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v95;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          v95,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
      }
      LODWORD(v93) = v92->max_length;
      if ( (__int64)++v94 >= (int)v93 )
        goto LABEL_67;
    }
    goto LABEL_80;
  }
LABEL_67:
  v96 = this->fields.supportSelectMenu;
  v97 = this->fields.supportServantData;
  v98 = deckIndex;
  v99 = (SupportSelectMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v99,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v100 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B2C42C(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v100,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v96 )
    goto LABEL_79;
  SupportSelectMenu__Open(v96, v97, v98, v99, v100, v101);
  v103 = this->fields.supportServantData;
  if ( !v103 )
    goto LABEL_79;
  v104 = (int)v103->max_length >= 2 && v103->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v104, v102);
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
  v105 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v105, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v105, 2, 1, 0LL);
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
  if ( (byte_418ABFD & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_418ABFD = 1;
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
    sub_B2C434(this, *(_QWORD *)&idx);
  if ( v15->max_length <= idx )
  {
LABEL_41:
    v21 = sub_B2C460(this);
    sub_B2C400(v21, 0LL);
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
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
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
  if ( (byte_418ABEF & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B2C35C(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method);
    byte_418ABEF = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectConfirmMenu;
  if ( !this )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0LL);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_B2C434(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v8->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v8, 0LL, v10);
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
  __int64 v33; // x1

  if ( (byte_418ABE3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&SupportServantData___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_13178/*"SvtEqScrollBarValue"*/, v5);
    byte_418ABE3 = 1;
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
    v9 = (struct SupportServantData_array *)sub_B2C374(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_B2C2F8(
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
    v17 = (struct SupportServantData_array *)sub_B2C374(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v17;
    sub_B2C2F8(
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
    v25 = (struct SupportServantData_array *)sub_B2C374(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v24->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v25;
    sub_B2C2F8(
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13178/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v33);
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
  __int64 v17; // x10
  Il2CppObject *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x10
  Il2CppObject *v26; // x1
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Int32_array *EventValUpEventIdList; // x20
  EventUpValSetupInfo_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  System_Action_o *v41; // x20

  if ( (byte_418ABEC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v12);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&SupportInfoJump_TypeInfo, v15);
    sub_B2C35C(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v16);
    byte_418ABEC = 1;
  }
  if ( data
    && (v17 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v17 - 1] == SupportInfoJump_TypeInfo )
      v18 = data;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  this->fields.supportInfoJump = (struct SupportInfoJump_o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportInfoJump,
    (System_Int32_array **)v18,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( data
    && (v25 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
  {
    if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v25 - 1] == SceneJumpInfo_TypeInfo )
      v26 = data;
    else
      v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sceneJumpInfo,
    (System_Int32_array **)v26,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v27);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)bgTxtSprite,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B2C434(bgTxtSprite, v28);
  }
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)bgTxtSprite, 0, 0LL);
  v32 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(v32, EventValUpEventIdList, 0, 0LL);
  this->fields.eventSetupInfo = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  supportInfoJump = this->fields.supportInfoJump;
  if ( supportInfoJump && supportInfoJump->fields.otherUserGameEntity && supportInfoJump->fields.questRestrictionInfo )
  {
    v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadOutGameAtlas(v41, 0LL);
  }
  else
  {
    SupportSelectRootComponent__StartUp(this, v39);
  }
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B2C434(0LL, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, method);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void __fastcall SupportSelectRootComponent__initSupportServantDatas(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v5; // w20
  __int64 v6; // x22
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v8; // x21
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x0

  v3 = this;
  if ( (byte_418AC14 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B2C35C(&SupportServantData_TypeInfo, method);
    byte_418AC14 = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_B2C434(this, method);
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
      v8 = (SupportServantData_o *)sub_B2C42C(SupportServantData_TypeInfo);
      SupportServantData___ctor(v8, v9);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_B2C41C(v8, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v17 = sub_B2C454(0LL);
          sub_B2C400(v17, 0LL);
        }
      }
      if ( v5 >= supportServantData->max_length )
      {
LABEL_17:
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) = (Il2CppClass *)v8;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)supportServantData + v6),
        (System_Int32_array **)v8,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      supportServantData = v3->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v5 >= supportServantData->max_length )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v6);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v5, v3->fields.eventSetupInfo, v2);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 CenterNum; // x24
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *OldServant; // x0
  const MethodInfo *v13; // x2
  struct SupportServantData_array *v14; // x8
  SupportServantData_o *v15; // x23
  struct SupportServantData_array *v16; // x8
  const MethodInfo *v17; // x2
  struct SupportServantData_array *v18; // x8
  SupportServantData_o *v19; // x23
  char v20; // w20
  struct SupportServantData_array *v21; // x8
  SupportServantData_o *v22; // x8
  __int64 v24; // x0

  if ( (byte_418AC13 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, servant);
    byte_418AC13 = 1;
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
      v20 = 0;
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
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, v7, v9);
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v14->max_length )
        goto LABEL_32;
      v15 = OldServant;
      OldServant = v14->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, v13);
      if ( v15 != OldServant )
        break;
    }
    if ( equip )
    {
      v16 = this->fields.supportServantData;
      if ( !v16 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v16->max_length )
        goto LABEL_32;
      OldServant = v16->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, v9);
      v18 = this->fields.supportServantData;
      if ( !v18 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v18->max_length )
        goto LABEL_32;
      v19 = OldServant;
      OldServant = v18->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_31;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, v17);
      if ( v19 != OldServant )
        break;
    }
    ++v7;
  }
  v20 = 1;
LABEL_27:
  v21 = this->fields.supportServantData;
  if ( !v21 )
    goto LABEL_31;
  if ( (unsigned int)CenterNum >= v21->max_length )
  {
LABEL_32:
    v24 = sub_B2C460(OldServant);
    sub_B2C400(v24, 0LL);
  }
  v22 = v21->m_Items[CenterNum];
  if ( !v22 )
LABEL_31:
    sub_B2C434(OldServant, v8);
  return (v20 | System_String__op_Inequality(
                  v22->fields._oldDeckName_k__BackingField,
                  v22->fields._deckName_k__BackingField,
                  0LL)) & 1;
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  struct System_Int32_array *mainSupportDeckIds; // x8
  const MethodInfo *v14; // x5
  int32_t v15; // w3
  char v16; // w1
  char v17; // w2
  int32_t v18; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v22; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct System_Int32_array *v24; // x8
  int32_t max_length; // w24
  System_Int32_array *v26; // x22
  int32_t v27; // w21
  int32_t v28; // w0
  int32_t v29; // w20
  const MethodInfo *v30; // x4
  __int64 v31; // x0

  if ( (byte_418ABEE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_418ABEE = 1;
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
      v22 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      v15 = 0;
      v18 = v22 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v28 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      v18 = 0;
      v15 = v28 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v16 = ReturnTypeByQuestId == 0;
    v17 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  eventSupportDeckIds = (System_Int32_array *)System_Linq_Enumerable__SequenceEqual_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                                (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)eventSupportDeckIds & 1) == 0 )
  {
    v23 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v23,
                            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    v24 = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !v24 )
      goto LABEL_39;
    max_length = v24->max_length;
    v26 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v27 = 0;
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
                                                    (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
      v27 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v18 = 0;
      goto LABEL_27;
    }
    if ( !v26 )
      goto LABEL_39;
    if ( CenterNum < v26->max_length )
    {
      v18 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v26->m_Items[CenterNum + 1],
              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v17 = CenterNum >= max_length;
      v16 = CenterNum < max_length;
      v15 = v27;
      goto LABEL_34;
    }
LABEL_40:
    v31 = sub_B2C460(eventSupportDeckIds);
    sub_B2C400(v31, 0LL);
  }
  if ( !mainSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= mainSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                otherUserGameEntity->fields.mainSupportDeckIds,
                                                mainSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v15 = (_DWORD)eventSupportDeckIds + 1;
  v16 = 1;
  v17 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v18 = v15;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v16, v17, v15, v18, v14);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v29 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v29,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v10),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_B2C434(eventSupportDeckIds, v9);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v29,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v30);
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
    sub_B2C434(blackMask, editOn);
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
    sub_B2C434(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41847D4 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_41847D4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v5; // x1

  if ( (byte_41847D5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_41847D5 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
  struct SupportSelectRootComponent_o *v14; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v17; // w21
  __int64 callback; // x27
  __int64 v19; // x9
  __int64 v20; // x0

  if ( (byte_41847D6 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_41847D6 = 1;
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
      v20 = sub_B2C460(_4__this);
      sub_B2C400(v20, 0LL);
    }
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v14->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v14->fields.tempFixEventQuestSupportDeckIds;
    v17 = (int)_4__this;
    callback = sub_B2C42C(SupportServantSelectMenu_CallbackFunc_TypeInfo);
    v19 = *(_QWORD *)Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_OnBackSelect__;
    *(_QWORD *)(callback + 16) = v19;
    *(_QWORD *)(callback + 32) = v14;
    sub_B2C2F8(callback + 32, v14);
    if ( !supportServantSelectMenu )
LABEL_15:
      sub_B2C434(_4__this, isDecide);
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v17,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantSelectMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  struct SupportSelectRootComponent_o *v15; // x28
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  int32_t v18; // w20
  __int64 callback; // x27
  __int64 v20; // x9
  __int64 v21; // x0

  if ( (byte_41847D7 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_41847D7 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_15;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v8->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      v21 = sub_B2C460(_4__this);
      sub_B2C400(v21, 0LL);
    }
    v11 = supportServantData->m_Items[selectNum];
    if ( !v11 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v11->fields.eventSetupInfo2;
    v14 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_15;
    tempFixMainQuestSupportDeckIds = v15->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = v15->fields.tempFixEventQuestSupportDeckIds;
    v18 = (int)_4__this;
    callback = sub_B2C42C(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    v20 = *(_QWORD *)Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 40) = Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__;
    *(_QWORD *)(callback + 16) = v20;
    *(_QWORD *)(callback + 32) = v15;
    sub_B2C2F8(callback + 32, v15);
    if ( !v14 )
LABEL_15:
      sub_B2C434(_4__this, isDecide);
    CommonUI__OpenSupportServantEquipListMenu(
      v14,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v18,
      tempFixMainQuestSupportDeckIds,
      tempFixEventQuestSupportDeckIds,
      (SupportServantEquipListMenu_CallbackFunc_o *)callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}