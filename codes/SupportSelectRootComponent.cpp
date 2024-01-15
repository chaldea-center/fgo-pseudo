void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD296 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectRootComponent_TypeInfo, v1);
    byte_40FD296 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x2
  struct System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FD295 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FD295 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_B17014(
                                      int___TypeInfo,
                                      (unsigned int)v5->static_fields->FixMainSupportDeckNum,
                                      v2);
  this->fields.tempFixMainQuestSupportDeckIds = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = (struct System_Int32_array *)sub_B17014(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum,
                                       v13);
  this->fields.tempFixEventQuestSupportDeckIds = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_40FD270 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12504/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_40FD270 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12504/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v8; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  SupportDeckNameInputMenu_CallbackFunc_o *v16; // x23

  if ( (byte_40FD28F & 1) == 0 )
  {
    sub_B16FFC(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_40FD28F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    sub_B17100(CenterNum, v5, v6);
    sub_B170A0();
  }
  v8 = supportServantData->m_Items[(int)CenterNum];
  if ( !v8
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = v8->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(v8, v5),
        v16 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_B170CC(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13,
                                                           v14,
                                                           v15),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_B170D4();
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v16, 0LL);
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
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v13; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v15; // x22
  SupportServantData_o *v16; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v17; // x23

  if ( (byte_40FD288 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_40FD288 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v13 = this->fields.copyTargetDeckId - 1, v13 >= max_length) )
  {
    sub_B17100(CenterNum, v7, v8);
    sub_B170A0();
  }
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v15 = supportServantData->m_Items[(int)CenterNum];
  v16 = supportServantData->m_Items[v13];
  v17 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                               SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_B170D4();
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
  SupportServantData_o **v11; // x25
  BalanceConfig_c *v12; // x0

  if ( (byte_40FD293 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, orgData);
    byte_40FD293 = 1;
  }
  if ( !orgData )
LABEL_19:
    sub_B170D4();
  if ( (int)orgData->max_length >= 1 )
  {
    v8 = 0LL;
    v9 = isInit;
    do
    {
      v10 = 0;
      v11 = &toData->m_Items[v8];
      while ( 1 )
      {
        v12 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        if ( v10 >= v12->static_fields->SupportDeckMemberMax )
          break;
        if ( !toData )
          goto LABEL_19;
        if ( v8 >= toData->max_length || v8 >= orgData->max_length )
        {
          sub_B17100(v12, orgData, toData);
          sub_B170A0();
        }
        if ( !*v11 )
          goto LABEL_19;
        SupportServantData__CopyData(*v11, orgData->m_Items[v8], v9, (const MethodInfo *)isInit);
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
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2

  if ( (byte_40FD282 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, isDecide);
    byte_40FD282 = 1;
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
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v8, v9);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v11);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  SupportServantSelectMenu_o *supportServantSelectMenu; // x0
  const MethodInfo *v8; // x2

  if ( (byte_40FD281 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, isDecide);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    byte_40FD281 = 1;
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
    supportServantSelectMenu = this->fields.supportServantSelectMenu;
    if ( supportServantSelectMenu )
    {
      SupportServantSelectMenu__ClearScrollValue(supportServantSelectMenu, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21129/*"ok"*/, v8);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x21
  SupportDeckNameInputMenu_o *v19; // x0

  if ( (byte_40FD290 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11);
    byte_40FD290 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_B16F98(
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
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_31160248(deckNameInputMenu, v18, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
  }
  v19 = this->fields.deckNameInputMenu;
  if ( !v19 )
    goto LABEL_9;
  SupportDeckNameInputMenu__Close(v19, 0LL);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListCancel(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B170D4();
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_B170D4();
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FD279 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FD279 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  int32_t v8; // w20
  struct SupportServantData_array *supportServantData; // x9
  unsigned int max_length; // w8
  SupportServantData_o *v11; // x8
  const MethodInfo *v12; // x2
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x0
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  SupportServantSelectMenu_o *supportServantSelectMenu; // x0
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectConfirmCopyMenu_o *v19; // x0

  if ( isDecide )
  {
    CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)isDecide);
    v8 = this->fields.copyTargetDeckId - 1;
    if ( (_DWORD)CenterNum != v8 )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
      max_length = supportServantData->max_length;
      if ( v8 >= max_length || (unsigned int)CenterNum >= max_length )
      {
        sub_B17100(CenterNum, v5, v6);
        sub_B170A0();
      }
      v11 = supportServantData->m_Items[v8];
      if ( !v11 )
        goto LABEL_15;
      SupportServantData__CopyData(v11, supportServantData->m_Items[(int)CenterNum], 0, v7);
      SupportSelectRootComponent__SaveTemp(this, v8, v12);
    }
    copyConfirmMenu = this->fields.copyConfirmMenu;
    if ( copyConfirmMenu )
    {
      SupportSelectConfirmCopyMenu__Close(copyConfirmMenu, 0LL);
      copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
      if ( copyDeckSelectMenu )
      {
        SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, 0LL);
        supportServantSelectMenu = this->fields.supportServantSelectMenu;
        if ( supportServantSelectMenu )
        {
          SupportServantSelectMenu__ModifyItem(supportServantSelectMenu, 0LL);
          supportSelectMenu = this->fields.supportSelectMenu;
          if ( supportSelectMenu )
          {
            SupportSelectMenu__Reset(supportSelectMenu, v16, v17);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v19 = this->fields.copyConfirmMenu;
  if ( !v19 )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(v19, 0LL);
}


void __fastcall SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_B170D4();
  SupportSelectConfirmMenu__Close_31169860(supportSelectConfirmMenu, 0LL, 0LL);
  this->fields.state = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndInitAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  __int64 CenterNum; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct SupportServantData_array *supportServantData; // x8
  il2cpp_array_size_t v11; // w20
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  System_Int32_array **DefaultDeckName; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t i; // w21
  struct SupportServantData_array *v22; // x8
  SupportServantData_o *v23; // x0
  struct SupportServantData_array *v24; // x8
  SupportServantData_o *v25; // x0
  struct SupportServantData_array *v26; // x8
  SupportServantData_o *v27; // x0
  struct SupportServantData_array *v28; // x8
  SupportServantData_o *v29; // x0
  SupportSelectEditMenu_o *supportEditMenu; // x0
  int32_t v31; // w1
  const MethodInfo *v32; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v34; // x2

  if ( (byte_40FD28C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isDecide);
    byte_40FD28C = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_34;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v11 = CenterNum;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
      {
LABEL_35:
        sub_B17100(CenterNum, v8, v9);
        sub_B170A0();
      }
      v12 = &supportServantData->obj.klass + (int)CenterNum;
      v13 = v12[4];
      if ( v13 )
      {
        DefaultDeckName = (System_Int32_array **)SupportServantData__getDefaultDeckName(
                                                   (SupportServantData_o *)v12[4],
                                                   v8);
        v13->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_B16F98((BattleServantConfConponent_o *)&v13->_1.klass, DefaultDeckName, v15, v16, v17, v18, v19, v20);
        for ( i = 0; ; ++i )
        {
          CenterNum = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            CenterNum = (__int64)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(CenterNum + 184) + 164LL) )
            break;
          v22 = this->fields.supportServantData;
          if ( !v22 )
            goto LABEL_34;
          if ( v11 >= v22->max_length )
            goto LABEL_35;
          v23 = v22->m_Items[v11];
          if ( !v23 )
            goto LABEL_34;
          CenterNum = SupportServantData__getServant(v23, i, v9);
          if ( CenterNum >= 1 )
          {
            v24 = this->fields.supportServantData;
            if ( !v24 )
              goto LABEL_34;
            if ( v11 >= v24->max_length )
              goto LABEL_35;
            v25 = v24->m_Items[v11];
            if ( !v25 )
              goto LABEL_34;
            SupportServantData__removeServantData(v25, i, v9);
          }
          v26 = this->fields.supportServantData;
          if ( !v26 )
            goto LABEL_34;
          if ( v11 >= v26->max_length )
            goto LABEL_35;
          v27 = v26->m_Items[v11];
          if ( !v27 )
            goto LABEL_34;
          CenterNum = SupportServantData__getEquip(v27, i, v9);
          if ( CenterNum >= 1 )
          {
            v28 = this->fields.supportServantData;
            if ( !v28 )
              goto LABEL_34;
            if ( v11 >= v28->max_length )
              goto LABEL_35;
            v29 = v28->m_Items[v11];
            if ( !v29 )
              goto LABEL_34;
            SupportServantData__removeEquipData(v29, i, v9);
          }
        }
        supportEditMenu = this->fields.supportEditMenu;
        if ( supportEditMenu )
        {
          SupportSelectEditMenu__Close(supportEditMenu, 0LL);
          supportSelectMenu = this->fields.supportSelectMenu;
          if ( supportSelectMenu )
          {
            SupportSelectMenu__Reset(supportSelectMenu, v31, v32);
            SupportSelectRootComponent__setEditUI(this, 1, v34);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x20

  if ( (byte_40FD26B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_40FD26B = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 1, 0LL);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v13, 1, 1, 0LL);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v12; // x0
  __int64 Servant; // x0
  struct SupportServantData_array *v14; // x8
  SupportServantData_o *v15; // x0
  struct SupportServantData_array *v16; // x8
  SupportServantData_o *v17; // x0
  struct SupportServantData_array *v18; // x8
  SupportServantData_o *v19; // x0
  SupportSelectEditMenu_o *supportEditMenu; // x0
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v24; // x2

  if ( (byte_40FD28A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isDecide);
    byte_40FD28A = 1;
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
      Servant = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Servant = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v7 >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_32;
      v12 = supportServantData->m_Items[CenterNum];
      if ( !v12 )
        goto LABEL_31;
      Servant = SupportServantData__getServant(v12, v7, v9);
      if ( Servant >= 1 )
      {
        v14 = this->fields.supportServantData;
        if ( !v14 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v14->max_length )
          goto LABEL_32;
        v15 = v14->m_Items[CenterNum];
        if ( !v15 )
          goto LABEL_31;
        SupportServantData__removeServantData(v15, v7, v9);
      }
      v16 = this->fields.supportServantData;
      if ( !v16 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v16->max_length )
      {
LABEL_32:
        sub_B17100(Servant, v8, v9);
        sub_B170A0();
      }
      v17 = v16->m_Items[CenterNum];
      if ( !v17 )
        goto LABEL_31;
      Servant = SupportServantData__getEquip(v17, v7, v9);
      if ( Servant >= 1 )
      {
        v18 = this->fields.supportServantData;
        if ( !v18 )
          goto LABEL_31;
        if ( (unsigned int)CenterNum >= v18->max_length )
          goto LABEL_32;
        v19 = v18->m_Items[CenterNum];
        if ( !v19 )
          goto LABEL_31;
        SupportServantData__removeEquipData(v19, v7, v9);
      }
      ++v7;
    }
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0LL);
      supportSelectMenu = this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__Reset(supportSelectMenu, v21, v22);
        SupportSelectRootComponent__setEditUI(this, 1, v24);
        return;
      }
    }
LABEL_31:
    sub_B170D4();
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v12; // x0
  __int64 Equip; // x0
  struct SupportServantData_array *v14; // x8
  SupportServantData_o *v15; // x0
  SupportSelectEditMenu_o *supportEditMenu; // x0
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v20; // x2

  if ( (byte_40FD28E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isDecide);
    byte_40FD28E = 1;
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
      Equip = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Equip = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v7 >= *(_DWORD *)(*(_QWORD *)(Equip + 184) + 164LL) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_23;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_24;
      v12 = supportServantData->m_Items[CenterNum];
      if ( !v12 )
        goto LABEL_23;
      Equip = SupportServantData__getEquip(v12, v7, v9);
      if ( Equip >= 1 )
      {
        v14 = this->fields.supportServantData;
        if ( !v14 )
          goto LABEL_23;
        if ( (unsigned int)CenterNum >= v14->max_length )
        {
LABEL_24:
          sub_B17100(Equip, v8, v9);
          sub_B170A0();
        }
        v15 = v14->m_Items[CenterNum];
        if ( !v15 )
          goto LABEL_23;
        SupportServantData__removeEquipData(v15, v7, v9);
      }
      ++v7;
    }
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0LL);
      supportSelectMenu = this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__Reset(supportSelectMenu, v17, v18);
        SupportSelectRootComponent__setEditUI(this, 1, v20);
        return;
      }
    }
LABEL_23:
    sub_B170D4();
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
  __int64 CenterNum; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v16; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v17; // x22

  if ( (byte_40FD287 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_40FD287 = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, 0LL);
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v7);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)CenterNum >= supportServantData->max_length )
    {
      sub_B17100(CenterNum, v9, v10);
      sub_B170A0();
    }
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v16 = supportServantData->m_Items[(int)CenterNum];
    v17 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                          SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                          v9,
                                                          v10,
                                                          v11,
                                                          v12);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_B170D4();
    SupportSelectEditMenu__Open(supportEditMenu, v16, isEdit, v17, 0LL);
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  SupportSelectMenu_o *v7; // x0

  if ( (byte_40FD27A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD27A = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL), (v7 = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_B170D4();
  }
  SupportSelectMenu__Redisp(v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  CommonUI_o *Instance; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  struct SupportServantData_array *supportServantData; // x8
  unsigned __int64 v10; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v12; // x11
  SupportSelectMenu_o *v13; // x0

  if ( (byte_40FD277 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD277 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_17;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_17;
  if ( (int)*(_QWORD *)&supportServantData->max_length >= 1 )
  {
    v10 = 0LL;
    max_length = *(_QWORD *)&supportServantData->max_length;
    do
    {
      if ( v10 >= max_length )
      {
        sub_B17100(SelfUserGame, v7, v8);
        sub_B170A0();
      }
      v12 = supportServantData->m_Items[v10];
      if ( v12 && !v12->fields.isFriendInfo )
      {
        if ( !SelfUserGame )
          goto LABEL_17;
        v12->fields.pushUserServantId = SelfUserGame->fields.pushUserSvtId;
      }
      max_length = supportServantData->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)max_length );
  }
  v13 = this->fields.supportSelectMenu;
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  SupportSelectMenu__Redisp(v13, v7);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FD278 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_40FD278 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B170D4();
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
  int32_t CenterNum; // w0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_B170D4();
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
  __int64 v47; // x3
  __int64 v48; // x4
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v51; // x21
  CancelConfirmMenu_CallbackFunc_o *v52; // x22
  SupportSelectMenu_o *v53; // x0
  const MethodInfo *v54; // x2
  UnityEngine_Component_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x3
  __int64 v63; // x4
  struct SupportServantData_array *v64; // x22
  SupportServantData_o *v65; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *v67; // x27
  System_Int32_array *v68; // x24
  System_Int32_array *v69; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  SupportSelectMenu_o *v71; // x20
  int32_t v72; // w0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  bool v75; // w1
  SupportSelectRootComponent_o *v76; // x0
  __int64 v77; // x3
  __int64 v78; // x4
  struct SupportServantData_array *v79; // x8
  SupportServantData_o *v80; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  SupportSelectConfirmMenu_CallbackFunc_o *v86; // x21
  SupportSelectMenu_o *v87; // x20
  int32_t v88; // w0
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x1
  struct SupportServantData_array *v91; // x8
  SupportServantData_o *v92; // x0
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x21
  __int64 v95; // x22
  __int64 v96; // x23
  struct SupportServantData_array *v97; // x8
  SupportServantData_o *v98; // x8
  struct SupportServantData_array *v99; // x8
  SupportServantData_o *v100; // x8
  clsQuestCheck_o *v101; // x0
  int qrs; // w22
  struct SupportServantData_array *v103; // x8
  SupportServantData_o *v104; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v106; // w22
  struct SupportServantData_array *v107; // x8
  SupportServantData_o *v108; // x8
  QuestRestrictionInfo_o *v109; // x20
  __int64 v110; // x23
  __int64 v111; // x24
  int32_t v112; // w0
  int32_t limitCount; // w23
  int32_t v114; // w24
  int32_t DispLimitCount; // w0
  WebViewManager_o *Instance; // x0
  PartyOrganizationUtility_c *v117; // x0
  PartyOrganizationUtility_o *v118; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v120; // x8
  SupportInfoJump_o *v121; // x0
  AvalonSceneManager_o *v122; // x0
  SupportSelectMenu_o *v123; // x0
  const MethodInfo *v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  struct SupportServantData_array *v127; // x22
  SupportServantData_o *v128; // x8
  EventUpValSetupInfo_o *v129; // x27
  System_Int32_array *v130; // x25
  System_Int32_array *v131; // x26
  CommonUI_o *v132; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v133; // x28
  SupportSelectMenu_o *v134; // x20
  int32_t v135; // w0
  const MethodInfo *v136; // x2
  const MethodInfo *v137; // x1
  struct SupportServantData_array *v138; // x8
  SupportServantData_o *v139; // x0
  int64_t v140; // x21
  struct SupportServantData_array *v141; // x8
  SupportServantData_o *v142; // x8
  __int64 v143; // x3
  __int64 v144; // x4
  struct SupportServantData_array *v145; // x8
  SupportServantData_o *v146; // x8
  int32_t kind; // w20
  ServantLeaderInfo_o *v148; // x21
  CommonUI_o *v149; // x22
  ServantStatusDialog_EndDelegate_o *v150; // x23
  struct SupportServantData_array *v151; // x8
  SupportServantData_o *v152; // x0
  struct SupportServantData_array *v153; // x8
  int64_t v154; // x21
  SupportServantData_o *v155; // x0
  UserServantLeaderEntity_o *v156; // x22
  struct SupportServantData_array *v157; // x8
  SupportServantData_o *v158; // x8
  int32_t v159; // w20
  WebViewManager_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v166; // x21
  ServantStatusDialog_EndDelegate_o *v167; // x23
  const MethodInfo *v168; // x1
  SupportSelectMenu_o *v169; // x0
  SupportServantSelectMenu_o *supportServantSelectMenu; // x0
  SupportServantSelectMenu_o *v171; // x0
  int32_t v172; // w1
  const MethodInfo *v173; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  __int64 v175; // x3
  __int64 v176; // x4
  struct SupportServantData_array *v177; // x8
  SupportServantData_o *v178; // x8
  int32_t v179; // w20
  int64_t v180; // x21
  CommonUI_o *v181; // x22
  ServantStatusDialog_FormationEndDelegate_o *v182; // x23
  CommonUI_o *v183; // x20
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x3
  __int64 v187; // x4
  ServantStatusDialog_EndDelegate_o *v188; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v190; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v193; // x23
  struct SupportSelectRootComponent___c_StaticFields *v194; // x0
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v201; // x0
  int32_t v202; // w0
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x3
  __int64 v206; // x4
  SupportSelectRootComponent___c_c *v207; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v209; // w20
  struct SupportSelectRootComponent___c_StaticFields *v210; // x9
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v212; // x24
  struct SupportSelectRootComponent___c_StaticFields *v213; // x0
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v220; // x0
  struct SupportServantData_array *v221; // x8
  SupportServantData_o *v222; // x0
  SupportServantSelectMenu_o *v223; // x0
  SupportServantSelectMenu_o *v224; // x0
  const MethodInfo *v225; // x1
  CommonUI_o *v226; // x20
  __int64 v227; // x1
  __int64 v228; // x2
  __int64 v229; // x3
  __int64 v230; // x4
  System_String_o *v231; // x21
  SupportSelectRootComponent___c_c *v232; // x8
  struct SupportSelectRootComponent___c_StaticFields *v233; // x9
  System_Action_o *_9__66_2; // x23
  System_String_o *v235; // x22
  Il2CppObject *v236; // x24
  struct SupportSelectRootComponent___c_StaticFields *v237; // x0
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16

  if ( (byte_40FD271 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&CancelConfirmMenu_CallbackFunc_TypeInfo, v11);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_B16FFC(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v16);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    sub_B16FFC(&SoundManager_TypeInfo, v26);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v27);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v28);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndShowEquip__, v29);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v30);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndShowServant__, v31);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v32);
    sub_B16FFC(&Method_SupportSelectRootComponent_OnBackSelect__, v33);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v34);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v35);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v36);
    sub_B16FFC(&SupportSelectRootComponent___c_TypeInfo, v37);
    sub_B16FFC(&StringLiteral_10317/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v38);
    sub_B16FFC(&StringLiteral_1/*""*/, v39);
    byte_40FD271 = 1;
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
      v52 = (CancelConfirmMenu_CallbackFunc_o *)sub_B170CC(CancelConfirmMenu_CallbackFunc_TypeInfo, v43, v44, v47, v48);
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
        v79 = this->fields.supportServantData;
        if ( !v79 )
          goto LABEL_211;
        if ( CenterNum < v79->max_length )
        {
          v80 = v79->m_Items[CenterNum];
          if ( v80 && SupportServantData__get_IsNoServant(v80, v43) )
            goto LABEL_30;
          SupportSelectRootComponent__SaveTemp(this, -1, v44);
          supportServantSelectMenu = this->fields.supportServantSelectMenu;
          if ( !supportServantSelectMenu )
            goto LABEL_211;
          SupportServantSelectMenu__ClearScrollValue(supportServantSelectMenu, 0LL);
          v171 = this->fields.supportServantSelectMenu;
          if ( !v171 )
            goto LABEL_211;
          SupportServantSelectMenu__ModifyItem(v171, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          supportSelectMenu = this->fields.supportSelectMenu;
          if ( !supportSelectMenu )
            goto LABEL_211;
          SupportSelectMenu__Reset(supportSelectMenu, v172, v173);
          goto LABEL_158;
        }
LABEL_212:
        sub_B17100(isUpdate, v43, v44);
        sub_B170A0();
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
        v76 = this;
        v75 = 0;
        this->fields.isDragSwapState = 0;
LABEL_159:
        SupportSelectRootComponent__setEditUI(v76, v75, v74);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v190 = SupportSelectRootComponent___c_TypeInfo;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v190 = SupportSelectRootComponent___c_TypeInfo;
      }
      static_fields = v190->static_fields;
      _9__66_0 = static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) != 0 && !v190->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v190);
          static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v193 = (Il2CppObject *)static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v43, v44, v77, v78);
        System_Func_int__bool____ctor(
          _9__66_0,
          v193,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v194 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v194->__9__66_0 = _9__66_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v194->__9__66_0,
          (System_Int32_array **)_9__66_0,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200);
      }
      v201 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
      v202 = System_Linq_Enumerable__Count_int_(
               v201,
               (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v207 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v209 = v202;
      if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v207 = SupportSelectRootComponent___c_TypeInfo;
      }
      v210 = v207->static_fields;
      _9__66_1 = v210->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( (BYTE3(v207->vtable._0_Equals.methodPtr) & 4) != 0 && !v207->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v207);
          v210 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        }
        v212 = (Il2CppObject *)v210->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v203, v204, v205, v206);
        System_Func_int__bool____ctor(
          _9__66_1,
          v212,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v213 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v213->__9__66_1 = _9__66_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v213->__9__66_1,
          (System_Int32_array **)_9__66_1,
          v214,
          v215,
          v216,
          v217,
          v218,
          v219);
      }
      v220 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v220,
                   (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v209 < 1 || (int)isUpdate <= 0 )
      {
        v221 = this->fields.supportServantData;
        if ( !v221 )
          goto LABEL_211;
        if ( CenterNum >= v221->max_length )
          goto LABEL_212;
        v222 = v221->m_Items[CenterNum];
        if ( v222 && SupportServantData__get_IsNoServant(v222, v43) )
        {
LABEL_30:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v86 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                             SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                             v82,
                                                             v83,
                                                             v84,
                                                             v85);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v86,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v86, 0LL);
            return;
          }
LABEL_211:
          sub_B170D4();
        }
      }
      v223 = this->fields.supportServantSelectMenu;
      if ( !v223 )
        goto LABEL_211;
      SupportServantSelectMenu__ClearScrollValue(v223, 0LL);
      v224 = this->fields.supportServantSelectMenu;
      if ( !v224 )
        goto LABEL_211;
      SupportServantSelectMenu__ModifyItem(v224, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v225);
      return;
    case 2:
      v53 = this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !v53 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v53, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v54);
      titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_211;
      gameObject = UnityEngine_Component__get_gameObject(titleInfo, 0LL);
      if ( !gameObject )
        goto LABEL_211;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
      if ( !backSkinSprite )
        goto LABEL_211;
      v58 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL);
      if ( !v58 )
        goto LABEL_211;
      transform = UnityEngine_GameObject__get_transform(v58, 0LL);
      if ( !transform )
        goto LABEL_211;
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        goto LABEL_211;
      v61 = UnityEngine_Component__get_gameObject(parent, 0LL);
      if ( !v61 )
        goto LABEL_211;
      UnityEngine_GameObject__SetActive(v61, 0, 0LL);
      v64 = this->fields.supportServantData;
      if ( !v64 )
        goto LABEL_211;
      if ( v64->max_length <= deckNum )
        goto LABEL_212;
      v65 = v64->m_Items[deckNum];
      if ( !v65 )
        goto LABEL_211;
      eventSetupInfo2 = v65->fields.eventSetupInfo2;
      v67 = this->fields.supportServantSelectMenu;
      v68 = this->fields.tempFixMainQuestSupportDeckIds;
      v69 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                              SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                              v43,
                                                              v44,
                                                              v62,
                                                              v63);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !v67 )
        goto LABEL_211;
      SupportServantSelectMenu__Open(v67, v64, deckNum, classPos, eventSetupInfo2, v46, v68, v69, callback, 0LL);
      return;
    case 3:
      v123 = this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !v123 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v123, this->fields.selectNum, v44);
      SupportSelectRootComponent__setEditUI(this, 1, v124);
      isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v127 = this->fields.supportServantData;
      if ( !v127 )
        goto LABEL_211;
      if ( v127->max_length <= deckNum )
        goto LABEL_212;
      v128 = v127->m_Items[deckNum];
      if ( !v128 )
        goto LABEL_211;
      v129 = v128->fields.eventSetupInfo2;
      v130 = this->fields.tempFixMainQuestSupportDeckIds;
      v131 = this->fields.tempFixEventQuestSupportDeckIds;
      v132 = (CommonUI_o *)isUpdate;
      v133 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B170CC(
                                                             SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                             v43,
                                                             v44,
                                                             v125,
                                                             v126);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v133,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v132 )
        goto LABEL_211;
      CommonUI__OpenSupportServantEquipListMenu(v132, v127, deckNum, classPos, v129, v46, v130, v131, v133, 0LL);
      return;
    case 4:
      v134 = this->fields.supportSelectMenu;
      v135 = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v134 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v134, v135, v136);
      SupportSelectRootComponent__ChangeDeckName(this, v137);
      return;
    case 5:
      v71 = this->fields.supportSelectMenu;
      v72 = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v71 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v71, v72, v73);
      v75 = 1;
      this->fields.isDragSwapState = 1;
      v76 = this;
      goto LABEL_159;
    case 6:
      v87 = this->fields.supportSelectMenu;
      v88 = SupportSelectRootComponent__getCenterNum(this, v43);
      if ( !v87 )
        goto LABEL_211;
      SupportSelectMenu__moveCenterItem(v87, v88, v89);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v90);
      return;
    case 7:
      v91 = this->fields.supportServantData;
      if ( !v91 )
        goto LABEL_211;
      if ( v91->max_length <= deckNum )
        goto LABEL_212;
      v92 = v91->m_Items[deckNum];
      if ( !v92 )
        goto LABEL_211;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v92, this->fields.classPos, v44);
      if ( !UserServantLeaderEntity )
        goto LABEL_211;
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_140;
      v96 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v95 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v244.fields.currentCryptoKey = v96;
      *(_QWORD *)&v244.fields.fakeValue = v95;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v244, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_140;
      v97 = this->fields.supportServantData;
      if ( !v97 )
        goto LABEL_211;
      if ( v97->max_length <= deckNum )
        goto LABEL_212;
      v98 = v97->m_Items[deckNum];
      if ( !v98 )
        goto LABEL_211;
      isUpdate = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v98->fields.questRestrictionInfo, 0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_140;
      v99 = this->fields.supportServantData;
      if ( !v99 )
        goto LABEL_211;
      if ( v99->max_length <= deckNum )
        goto LABEL_212;
      v100 = v99->m_Items[deckNum];
      if ( !v100 )
        goto LABEL_211;
      if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v100->fields.questRestrictionInfo, 0LL) )
        goto LABEL_140;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v101 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v101 )
        goto LABEL_211;
      qrs = (int)v101[1].fields.qrs;
      isUpdate = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_211;
      if ( qrs < 1 )
        goto LABEL_73;
      v103 = this->fields.supportServantData;
      if ( !v103 )
        goto LABEL_211;
      if ( v103->max_length <= deckNum )
        goto LABEL_212;
      v104 = v103->m_Items[deckNum];
      if ( !v104 )
        goto LABEL_211;
      questRestrictionInfo = v104->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_211;
      v106 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfo, v106, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_73;
      v107 = this->fields.supportServantData;
      if ( !v107 )
        goto LABEL_211;
      if ( v107->max_length <= deckNum )
        goto LABEL_212;
      v108 = v107->m_Items[deckNum];
      if ( !v108 )
        goto LABEL_211;
      v109 = v108->fields.questRestrictionInfo;
      v111 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v110 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v245.fields.currentCryptoKey = v111;
      *(_QWORD *)&v245.fields.fakeValue = v110;
      v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v245, 0LL);
      limitCount = servantLeaderInfo->fields.limitCount;
      v114 = v112;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
      if ( !v109 )
        goto LABEL_211;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v109, v114, limitCount, DispLimitCount, v106, 1, 0LL) )
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
        v169 = this->fields.supportSelectMenu;
        if ( !v169 )
          goto LABEL_211;
        SupportSelectMenu__Active(v169, v168);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        goto LABEL_211;
      if ( BYTE4(Instance[1].fields.baseWindow) )
      {
        v117 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v117 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v117->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v118 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !v118 )
            goto LABEL_211;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(v118, 0LL) )
          {
            v226 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v231 = LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v232 = SupportSelectRootComponent___c_TypeInfo;
            if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v232 = SupportSelectRootComponent___c_TypeInfo;
            }
            v233 = v232->static_fields;
            _9__66_2 = v233->__9__66_2;
            v235 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( (BYTE3(v232->vtable._0_Equals.methodPtr) & 4) != 0 && !v232->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v232);
                v233 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              }
              v236 = (Il2CppObject *)v233->__9;
              _9__66_2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v227, v228, v229, v230);
              System_Action___ctor(
                _9__66_2,
                v236,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v237 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v237->__9__66_2 = _9__66_2;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v237->__9__66_2,
                (System_Int32_array **)_9__66_2,
                v238,
                v239,
                v240,
                v241,
                v242,
                v243);
            }
            if ( !v226 )
              goto LABEL_211;
            CommonUI__OpenNotificationDialog(v226, v235, v231, _9__66_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
      v120 = this->fields.supportInfoJump;
      if ( !v120 )
        goto LABEL_211;
      v120->fields.selectDeckId = servantLeaderInfo->fields.supportDeckId;
      v121 = this->fields.supportInfoJump;
      if ( !v121 )
        goto LABEL_211;
      if ( !SupportInfoJump__ReturnScene(v121, 1, (Il2CppObject *)this->fields.supportInfoJump, 0LL) )
      {
        v122 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v122 )
          goto LABEL_211;
        AvalonSceneManager__popScene(v122, 1, (Il2CppObject *)this->fields.supportInfoJump, 0LL);
      }
      return;
    case 8:
      v138 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v138 )
        goto LABEL_211;
      if ( v138->max_length <= deckNum )
        goto LABEL_212;
      v139 = v138->m_Items[deckNum];
      if ( !v139 )
        goto LABEL_211;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(v139, this->fields.classPos, v44);
      if ( !isUpdate )
        goto LABEL_211;
      v140 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_140;
      v141 = this->fields.supportServantData;
      if ( !v141 )
        goto LABEL_211;
      if ( v141->max_length <= deckNum )
        goto LABEL_212;
      v142 = v141->m_Items[deckNum];
      if ( !v142 )
        goto LABEL_211;
      if ( v142->fields.isFriendInfo )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v145 = this->fields.supportServantData;
        if ( !v145 )
          goto LABEL_211;
        if ( v145->max_length <= deckNum )
          goto LABEL_212;
        v146 = v145->m_Items[deckNum];
        if ( !v146 )
          goto LABEL_211;
        kind = v146->fields.kind;
        v148 = *(ServantLeaderInfo_o **)(v140 + 24);
        v149 = (CommonUI_o *)isUpdate;
        v150 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v43,
                                                      v44,
                                                      v143,
                                                      v144);
        ServantStatusDialog_EndDelegate___ctor(
          v150,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v149 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18250312(v149, kind, v148, v150, 0LL);
      }
      else
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        isUpdate = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v177 = this->fields.supportServantData;
        if ( !v177 )
          goto LABEL_211;
        if ( v177->max_length <= deckNum )
          goto LABEL_212;
        v178 = v177->m_Items[deckNum];
        if ( !v178 )
          goto LABEL_211;
        v179 = v178->fields.kind;
        v180 = *(_QWORD *)(v140 + 56);
        v181 = (CommonUI_o *)isUpdate;
        v182 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B170CC(
                                                               ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                               v43,
                                                               v44,
                                                               v175,
                                                               v176);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v182,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v181 )
          goto LABEL_211;
        CommonUI__OpenServantStatusDialog_18247572(v181, v179, v180, v182, 0LL, 0LL);
      }
      return;
    case 9:
      v151 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v151 )
        goto LABEL_211;
      if ( v151->max_length <= deckNum )
        goto LABEL_212;
      v152 = v151->m_Items[deckNum];
      if ( !v152 )
        goto LABEL_211;
      isUpdate = SupportServantData__getEquip(v152, this->fields.classPos, v44);
      if ( !isUpdate )
        goto LABEL_140;
      v153 = this->fields.supportServantData;
      if ( !v153 )
        goto LABEL_211;
      if ( v153->max_length <= deckNum )
        goto LABEL_212;
      v154 = isUpdate;
      v155 = v153->m_Items[deckNum];
      if ( !v155 )
        goto LABEL_211;
      v156 = SupportServantData__getUserServantLeaderEntity(v155, this->fields.classPos, v44);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v157 = this->fields.supportServantData;
      if ( !v157 )
        goto LABEL_211;
      if ( v157->max_length <= deckNum )
        goto LABEL_212;
      v158 = v157->m_Items[deckNum];
      if ( !v158 )
        goto LABEL_211;
      if ( v158->fields.isFriendInfo )
      {
        if ( v158->fields.kind == 5 )
          v159 = 14;
        else
          v159 = 13;
        v160 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v156 )
          goto LABEL_211;
        equipTarget1 = v156->fields.equipTarget1;
        v166 = (CommonUI_o *)v160;
        v167 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v161,
                                                      v162,
                                                      v163,
                                                      v164);
        ServantStatusDialog_EndDelegate___ctor(
          v167,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v166 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog_18252676(v166, v159, equipTarget1, v167, 0LL, 0LL);
      }
      else
      {
        v183 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v188 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v184,
                                                      v185,
                                                      v186,
                                                      v187);
        ServantStatusDialog_EndDelegate___ctor(
          v188,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v183 )
          goto LABEL_211;
        CommonUI__OpenServantEquipStatusDialog(v183, 11, v154, 1, v188, 0LL, 0LL);
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
  __int64 CenterNum; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x4
  struct SupportServantData_array *supportServantData; // x8
  int32_t v32; // w24
  SupportServantData_o *v33; // x0
  const MethodInfo *v34; // x4
  struct SupportServantData_array *v35; // x8
  SupportServantData_o *v36; // x0
  const MethodInfo *v37; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v39; // x1
  SupportSelectMenu_o *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43[3]; // [xsp+40h] [xbp-B0h] BYREF

  if ( (byte_40FD276 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_40FD276 = 1;
  }
  memset(&v43[1], 0, 64);
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_19259816(equipTarget1->fields.svtId, 0LL);
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
    v16 = BasicHelper__DecryptValue_19259816(v15->fields.svtId, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v43, 0LL, 0LL);
  v19 = *(_OWORD *)&v43[0].fields.currentCryptoKey;
  v18 = *(_OWORD *)&v43[0].fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v43[2].fields.currentCryptoKey = v19;
  *(_OWORD *)&v43[2].fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43[2];
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v43, 0LL, 0LL);
    v23 = *(_OWORD *)&v43[0].fields.currentCryptoKey;
    v22 = *(_OWORD *)&v43[0].fields.fakeValue;
  }
  *(_OWORD *)&v43[1].fields.currentCryptoKey = v23;
  *(_OWORD *)&v43[1].fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v41 = v43[1];
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
  if ( classPos1 != classPos2 )
  {
    v26 = v24;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v25);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_43;
    v32 = CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      v33 = supportServantData->m_Items[(int)CenterNum];
      if ( !v33 )
        goto LABEL_43;
      SupportServantData__setEquipData(v33, classPos1, v26, v16, v30);
      v35 = this->fields.supportServantData;
      if ( !v35 )
        goto LABEL_43;
      if ( v32 < v35->max_length )
      {
        v36 = v35->m_Items[v32];
        if ( v36 )
        {
          SupportServantData__setEquipData(v36, classPos2, v20, v14, v34);
          supportSelectMenu = this->fields.supportSelectMenu;
          if ( supportSelectMenu )
          {
            SupportSelectMenu__moveCenterItem(supportSelectMenu, v32, v37);
            v40 = this->fields.supportSelectMenu;
            if ( v40 )
            {
              SupportSelectMenu__Redisp(v40, v39);
              return;
            }
          }
        }
LABEL_43:
        sub_B170D4();
      }
    }
    sub_B17100(CenterNum, v28, v29);
    sub_B170A0();
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v47; // x0
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  UserServantLeaderEntity_o *v49; // x22
  clsQuestCheck_o *v50; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v52; // x23
  __int64 v53; // x24
  __int64 v54; // x25
  int32_t v55; // w0
  int32_t v56; // w24
  int32_t Rarity; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  int32_t v59; // w25
  int32_t v60; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x24
  clsQuestCheck_o *v64; // x0
  struct UserServantEntity_o *v65; // x8
  PartyOrganizationUtility_o *v66; // x23
  __int64 v67; // x25
  __int64 v68; // x26
  int32_t v69; // w0
  System_String_o *Name; // x0
  UserServantEntity_o *v71; // x8
  System_String_o *v72; // x22
  int32_t v73; // w0
  __int64 v74; // x8
  int32_t v75; // w21
  ServantEntity_o *v76; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v77; // x24
  System_String_o *v78; // x0
  System_String_o *RarityInvalidMessage; // x22
  PartyOrganizationUtility_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Text_StringBuilder_o *v85; // x21
  System_String_o *v86; // x0
  CommonUI_o *v87; // x22
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  System_Action_o *v92; // x23
  CommonUI_o *v93; // x19
  System_String_o *v94; // x21
  System_String_o *v95; // x22
  System_String_o *v96; // x23
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  CommonConfirmDialog_ClickDelegate_o *v101; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_40FD274 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v18);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v20);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v21);
    sub_B16FFC(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_10175/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v23);
    sub_B16FFC(&StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, v24);
    sub_B16FFC(&StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, v25);
    sub_B16FFC(&StringLiteral_1/*""*/, v26);
    byte_40FD274 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v27 = sub_B170CC(
          SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&classPos,
          item,
          method);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_52;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v27 + 32) = item;
  v34 = v27 + 32;
  *(_DWORD *)(v27 + 24) = result;
  *(_DWORD *)(v27 + 28) = classPos;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)item, v35, v36, v37, v38, v39, v40);
  if ( *(_DWORD *)(v27 + 24) == 1 && *(_QWORD *)v34 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_52;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      sub_B17100(v41, v42, v43);
      sub_B170A0();
    }
    v47 = supportServantData->m_Items[selectNum];
    if ( !v47 )
      goto LABEL_52;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v47, *(_DWORD *)(v27 + 28), v43);
    if ( UserServantLeaderEntity )
    {
      v49 = UserServantLeaderEntity;
      if ( UserServantLeaderEntity->fields.svtId >= 1 )
      {
        if ( !*(_QWORD *)v34 )
          goto LABEL_52;
        if ( *(_QWORD *)(*(_QWORD *)v34 + 128LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v50 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantEntity = v49->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_52;
          v52 = (PartyOrganizationUtility_o *)v50;
          v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v53 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v106.fields.currentCryptoKey = v54;
          *(_QWORD *)&v106.fields.fakeValue = v53;
          v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v106, 0LL);
          if ( !v49->fields.userServantEntity )
            goto LABEL_52;
          v56 = v55;
          Rarity = UserServantEntity__getRarity(v49->fields.userServantEntity, 0LL);
          if ( !*(_QWORD *)v34 )
            goto LABEL_52;
          v58 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v34 + 128LL);
          if ( !v58 )
            goto LABEL_52;
          v59 = Rarity;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58[1], 0LL);
          if ( !v52 )
            goto LABEL_52;
          if ( PartyOrganizationUtility__IsRarityRestriction(v52, &skillName, &actMaxRarity, v56, v59, v60, -1, 0LL) )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                    (DataManager_o *)Instance,
                                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( MasterData_WarQuestSelectionMaster )
              {
                Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              v49->fields.svtId,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                }
                v64 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v65 = v49->fields.userServantEntity;
                if ( v65 )
                {
                  v66 = (PartyOrganizationUtility_o *)v64;
                  v68 = *(_QWORD *)&v65->fields.limitCount.fields.currentCryptoKey;
                  v67 = *(_QWORD *)&v65->fields.limitCount.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v107.fields.currentCryptoKey = v68;
                  *(_QWORD *)&v107.fields.fakeValue = v67;
                  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v107, 0LL);
                  if ( Entity )
                  {
                    Name = ServantEntity__getName(Entity, v69, -1, 0LL);
                    v71 = v49->fields.userServantEntity;
                    if ( v71 )
                    {
                      v72 = Name;
                      v73 = UserServantEntity__getRarity(v71, 0LL);
                      v74 = *(_QWORD *)v34;
                      if ( *(_QWORD *)v34 )
                      {
                        v75 = v73;
                        v76 = *(ServantEntity_o **)(v74 + 128);
                        if ( v76 )
                        {
                          v77 = ServantEntity__GetName(v76, -1, 0, -1, 0LL);
                          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          }
                          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v77, 0LL);
                          if ( v66 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v66,
                                                     &maxLength,
                                                     v72,
                                                     v75,
                                                     v78,
                                                     skillName,
                                                     actMaxRarity,
                                                     0LL);
                            v80 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( v80 )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                v80,
                                &minFontSize[1],
                                minFontSize,
                                maxLength,
                                0LL);
                              v85 = (System_Text_StringBuilder_o *)sub_B170CC(
                                                                     System_Text_StringBuilder_TypeInfo,
                                                                     v81,
                                                                     v82,
                                                                     v83,
                                                                     v84);
                              System_Text_StringBuilder___ctor(v85, 0LL);
                              if ( v85 )
                              {
                                System_Text_StringBuilder__Append_41914240(v85, RarityInvalidMessage, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10175/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_41914240(v85, v86, 0LL);
                                v87 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v92 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v88, v89, v90, v91);
                                System_Action___ctor(
                                  v92,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( v87 )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu(v87, v92, 0LL);
                                  v93 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v94 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v85->klass->vtable._3_ToString.method)(
                                                             v85,
                                                             v85->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v101 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                  v97,
                                                                                  v98,
                                                                                  v99,
                                                                                  v100);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v101,
                                    (Il2CppObject *)v27,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v93 )
                                  {
                                    CommonUI__OpenConfirmDialog_18237500(
                                      v93,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v94,
                                      v95,
                                      v96,
                                      v101,
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
            sub_B170D4();
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
  SupportServantData_o *v8; // x0
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v10; // x0
  const MethodInfo *v11; // x2
  struct SupportServantData_array *v12; // x8
  unsigned __int64 v13; // x9
  il2cpp_array_size_t max_length; // w11
  SupportServantData_o *v15; // x11
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v17; // x1
  SupportSelectMenu_o *v18; // x0
  UnityEngine_Component_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v25; // x0

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
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_32;
    SupportServantData__removeServantData(v10, classPos, *(const MethodInfo **)&classPos);
  }
  else if ( result == 1 )
  {
    v7 = this->fields.supportServantData;
    if ( !v7 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v7->max_length )
      goto LABEL_33;
    v8 = v7->m_Items[selectNum];
    if ( !v8 )
      goto LABEL_32;
    SupportServantData__setServantData(v8, classPos, entity, (const MethodInfo *)entity);
  }
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v11);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  v12 = v6->fields.supportServantData;
  if ( !v12 )
    goto LABEL_32;
  if ( (int)*(_QWORD *)&v12->max_length >= 1 )
  {
    v13 = 0LL;
    max_length = *(_QWORD *)&v12->max_length;
    while ( v13 < max_length )
    {
      v15 = v12->m_Items[v13];
      if ( v15 )
      {
        if ( !this )
          goto LABEL_32;
        v15->fields.pushUserServantId = (int64_t)this->fields.titleInfo;
      }
      max_length = v12->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_33:
    sub_B17100(this, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_B170A0();
  }
LABEL_22:
  supportSelectMenu = v6->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, selectNum, *(const MethodInfo **)&classPos);
  v18 = v6->fields.supportSelectMenu;
  if ( !v18 )
    goto LABEL_32;
  SupportSelectMenu__Redisp(v18, v17);
  titleInfo = (UnityEngine_Component_o *)v6->fields.titleInfo;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)v6->fields.backSkinSprite) == 0LL)
    || (v22 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(v22, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (v25 = UnityEngine_Component__get_gameObject(parent, 0LL)) == 0LL )
  {
LABEL_32:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v25, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v35; // x0
  WarQuestSelectionMaster_o *v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  BalanceConfig_c *v41; // x8
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v43; // x24
  int32_t v44; // w9
  int32_t v45; // w26
  __int64 v46; // x23
  __int64 v47; // x19
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v49; // x0
  System_Int32_array **UserServantLeaderEntity; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x28
  struct SupportServantData_array *v58; // x8
  SupportServantData_o *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  WarEntity_o *v63; // x0
  ServantEntity_o *v64; // x27
  UserServantEntity_o *v65; // x0
  int32_t Rarity; // w0
  int v67; // w19
  int64_t UserId; // x0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v70; // w28
  System_String_o *v71; // x0
  System_String_o *v72; // x19
  Il2CppObject *v73; // x25
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x25
  __int64 v77; // x0
  Il2CppObject *v78; // x19
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  __int64 v83; // [xsp+10h] [xbp-90h]
  signed __int64 v84; // [xsp+18h] [xbp-88h]
  ServantLimitImageMaster_o *v85; // [xsp+20h] [xbp-80h]
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // [xsp+38h] [xbp-68h]
  int v89; // [xsp+44h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FD27C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_B16FFC(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v18);
    sub_B16FFC(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v19);
    sub_B16FFC(&int_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v22);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_B16FFC(&LocalizationManager_TypeInfo, v24);
    sub_B16FFC(&NetworkManager_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v27);
    sub_B16FFC(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_12425/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v29);
    sub_B16FFC(&StringLiteral_12426/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v30);
    byte_40FD27C = 1;
  }
  entity = 0LL;
  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&idx,
                                                                                                  *(_QWORD *)&nowDeckId,
                                                                                                  fixDeckIds,
                                                                                                  isMain);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v88,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v31) )
      return (System_Collections_Generic_List_string__o *)v88;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v31) )
  {
    return (System_Collections_Generic_List_string__o *)v88;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        (v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_76:
    sub_B170D4();
  }
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v35,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v36 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v85 = (ServantLimitImageMaster_o *)v36;
  v41 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v41 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v41->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v41 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v41->static_fields->FixEventSupportDeckNum;
  }
  v84 = *p_FixMainSupportDeckNum;
  if ( (int)v84 >= 1 )
  {
    v43 = 0LL;
    v83 = (unsigned int)idx;
    do
    {
      if ( v43 != v83 )
      {
        if ( !fixDeckIds )
          goto LABEL_76;
        if ( v43 >= fixDeckIds->max_length )
        {
LABEL_77:
          sub_B17100(v36, v37, v38);
          sub_B170A0();
        }
        v44 = fixDeckIds->m_Items[v43 + 1];
        if ( v44 )
        {
          v45 = 0;
          v46 = v44 - 1;
          while ( 1 )
          {
            if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v41);
              v41 = BalanceConfig_TypeInfo;
            }
            if ( v45 >= v41->static_fields->SupportDeckMemberMax )
              break;
            v47 = sub_B170CC(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v37, v38, v39, v40);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v47,
              0LL);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_76;
            if ( CenterNum >= supportServantData->max_length )
              goto LABEL_77;
            v49 = supportServantData->m_Items[CenterNum];
            if ( !v49 )
              goto LABEL_76;
            UserServantLeaderEntity = (System_Int32_array **)SupportServantData__getUserServantLeaderEntity(
                                                               v49,
                                                               v45,
                                                               v38);
            if ( !v47 )
              goto LABEL_76;
            *(_QWORD *)(v47 + 16) = UserServantLeaderEntity;
            v57 = v47 + 16;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v47 + 16),
              UserServantLeaderEntity,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
            if ( !*(_QWORD *)(v47 + 16) )
              goto LABEL_76;
            if ( *(_DWORD *)(*(_QWORD *)(v47 + 16) + 64LL) )
            {
              v58 = this->fields.supportServantData;
              if ( !v58 )
                goto LABEL_76;
              if ( (unsigned int)v46 >= v58->max_length )
                goto LABEL_77;
              v59 = v58->m_Items[v46];
              if ( !v59 )
                goto LABEL_76;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields.userServantLeaderEntityList;
              v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                         System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                                                         v37,
                                                                                         v38,
                                                                                         v39,
                                                                                         v40);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v61,
                (Il2CppObject *)v47,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
              v62 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v61,
                      (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              v36 = (WarQuestSelectionMaster_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                   v62,
                                                   (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)v36 >= 1 )
              {
                if ( !*(_QWORD *)v57 )
                  goto LABEL_76;
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_76;
                v63 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        *(_DWORD *)(*(_QWORD *)v57 + 64LL),
                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v57 )
                  goto LABEL_76;
                v64 = (ServantEntity_o *)v63;
                v65 = *(UserServantEntity_o **)(*(_QWORD *)v57 + 16LL);
                if ( !v65 )
                  goto LABEL_76;
                Rarity = UserServantEntity__getRarity(v65, 0LL);
                if ( Rarity )
                {
                  v67 = Rarity;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  UserId = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v57 || !Master_WarQuestSelectionMaster )
                    goto LABEL_76;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         Master_WarQuestSelectionMaster,
                         &entity,
                         UserId,
                         *(_DWORD *)(*(_QWORD *)v57 + 64LL),
                         0LL) )
                  {
                    if ( !*(_QWORD *)v57 )
                      goto LABEL_76;
                    if ( !entity )
                      goto LABEL_76;
                    if ( !v85 )
                      goto LABEL_76;
                    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v85,
                                                   *(_DWORD *)(*(_QWORD *)v57 + 64LL),
                                                   entity->fields.maxLimitCount,
                                                   0LL);
                    if ( !entity )
                      goto LABEL_76;
                    v70 = ServantLimitCountSealAfter == entity->fields.maxLimitCount ? -1 : ServantLimitCountSealAfter;
                  }
                  else
                  {
                    v70 = -1;
                  }
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v89 = v67;
                  v77 = j_il2cpp_value_box_0(int_TypeInfo, &v89);
                  if ( !v64 )
                    goto LABEL_76;
                  v78 = (Il2CppObject *)v77;
                  Name = (Il2CppObject *)ServantEntity__getName(v64, v70, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v64, 0LL);
                  v75 = System_String__Format_43744796(v76, v78, Name, ClassName, 0LL);
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v64 )
                    goto LABEL_76;
                  v72 = v71;
                  v73 = (Il2CppObject *)ServantEntity__getName(v64, -1, -1, 0LL);
                  v74 = (Il2CppObject *)ServantEntity__getClassName(v64, 0LL);
                  v75 = System_String__Format_43739268(v72, v73, v74, 0LL);
                }
                if ( !v88 )
                  goto LABEL_76;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v88,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            ++v45;
            v41 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v43;
    }
    while ( (__int64)v43 < v84 );
  }
  return (System_Collections_Generic_List_string__o *)v88;
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v11; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v12; // x22

  if ( (byte_40FD28B & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_40FD28B = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    sub_B17100(CenterNum, v5, v6);
    sub_B170A0();
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B170D4();
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v11, v12, 0LL);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct SupportServantData_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_40FD263 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&SupportServantData___TypeInfo, v4);
    byte_40FD263 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct SupportServantData_array *)sub_B17014(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v5->static_fields->SupportDeckMax,
                                            v2);
  this->fields.supportServantData = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SupportSelectRootComponent__RefreshSupportServantData(this, v13);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  il2cpp_array_size_t i; // w22
  int64_t Servant; // x0
  int32_t j; // w20
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v8; // x21
  SupportServantData_o *v9; // x0
  struct SupportServantData_array *v10; // x8
  SupportServantData_o *v11; // x0
  struct SupportServantData_array *v12; // x8
  int64_t v13; // x21
  SupportServantData_o *v14; // x0
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v16; // x8
  struct SupportServantData_array *v17; // x9
  SupportServantData_o *v18; // x9

  if ( (byte_40FD294 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD294 = 1;
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
      v8 = Servant;
      v9 = orgSupportServantData->m_Items[i];
      if ( !v9 )
        goto LABEL_34;
      Servant = SupportServantData__getServant(v9, j, v2);
      if ( v8 != Servant )
        return 1;
      v10 = this->fields.supportServantData;
      if ( !v10 )
        goto LABEL_34;
      if ( i >= v10->max_length )
        goto LABEL_35;
      v11 = v10->m_Items[i];
      if ( !v11 )
        goto LABEL_34;
      Servant = SupportServantData__getEquip(v11, j, v2);
      v12 = this->fields.orgSupportServantData;
      if ( !v12 )
        goto LABEL_34;
      if ( i >= v12->max_length )
        goto LABEL_35;
      v13 = Servant;
      v14 = v12->m_Items[i];
      if ( !v14 )
        goto LABEL_34;
      if ( v13 != SupportServantData__getEquip(v14, j, v2) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v17 = this->fields.orgSupportServantData;
    if ( !v17 )
      goto LABEL_34;
    if ( i >= v17->max_length )
    {
LABEL_35:
      sub_B17100(Servant, method, v2);
      sub_B170A0();
    }
    v18 = v17->m_Items[i];
    if ( !v18 )
LABEL_34:
      sub_B170D4();
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

  if ( (byte_40FD265 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_40FD265 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_40FD264 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_40FD264 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >= 0;
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
  BalanceConfig_c *CenterNum; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x8
  il2cpp_array_size_t v18; // w22
  unsigned __int64 v19; // x27
  __int64 v20; // x28
  int v21; // w8
  il2cpp_array_size_t v22; // w19
  int32_t i; // w23
  __int64 v24; // x24
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v26; // x0
  System_Int32_array **UserServantLeaderEntity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  struct SupportServantData_array *v35; // x8
  SupportServantData_o *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v42; // [xsp+8h] [xbp-58h]

  if ( (byte_40FD285 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_B16FFC(&Method_System_Func_UserServantLeaderEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v10);
    sub_B16FFC(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v11);
    byte_40FD285 = 1;
  }
  CenterNum = (BalanceConfig_c *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_B170D4();
  v17 = *(_QWORD *)&fixDeckIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (unsigned int)CenterNum;
    v19 = 0LL;
    v20 = (int)CenterNum;
    v42 = fixDeckIds;
    do
    {
      if ( v19 >= (unsigned int)v17 )
      {
LABEL_29:
        sub_B17100(CenterNum, v13, v14);
        sub_B170A0();
      }
      v21 = fixDeckIds->m_Items[v19 + 1];
      v22 = v21 - 1;
      if ( v21 >= 1 && v22 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            CenterNum = BalanceConfig_TypeInfo;
          }
          if ( i >= CenterNum->static_fields->SupportDeckMemberMax )
            break;
          v24 = sub_B170CC(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v13, v14, v15, v16);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v24,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v18 >= supportServantData->max_length )
            goto LABEL_29;
          v26 = supportServantData->m_Items[v20];
          if ( !v26 )
            goto LABEL_28;
          UserServantLeaderEntity = (System_Int32_array **)SupportServantData__getUserServantLeaderEntity(v26, i, v14);
          if ( !v24 )
            goto LABEL_28;
          *(_QWORD *)(v24 + 16) = UserServantLeaderEntity;
          sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), UserServantLeaderEntity, v28, v29, v30, v31, v32, v33);
          v34 = *(_QWORD *)(v24 + 16);
          if ( !v34 )
            goto LABEL_28;
          if ( *(_DWORD *)(v34 + 64) )
          {
            v35 = this->fields.supportServantData;
            if ( !v35 )
              goto LABEL_28;
            if ( v22 >= v35->max_length )
              goto LABEL_29;
            v36 = v35->m_Items[v22];
            if ( !v36 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v36->fields.userServantLeaderEntityList;
            v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                                                       v13,
                                                                                       v14,
                                                                                       v15,
                                                                                       v16);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v38,
              (Il2CppObject *)v24,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantLeaderEntity__bool___ctor__);
            v39 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v38,
                    (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                   v39,
                   (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return 0;
          }
        }
      }
      fixDeckIds = v42;
      ++v19;
      LODWORD(v17) = v42->max_length;
    }
    while ( (__int64)v19 < (int)v17 );
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
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v14; // x2
  UserGameEntity_o *v15; // x22
  System_Array_o *fixMainSupportDeckIds; // x0
  int32_t mainSupportDeckId; // w25
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  Il2CppObject *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  BalanceConfig_c *v22; // x0
  System_Array_o *fixEventSupportDeckIds; // x0
  Il2CppObject *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  BalanceConfig_c *v26; // x0
  bool v27; // w21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  char v32; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v34; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v37; // x23
  struct SupportSelectRootComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  int32_t v46; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  SupportSelectRootComponent___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v53; // w20
  struct SupportSelectRootComponent___c_StaticFields *v54; // x9
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v56; // x23
  struct SupportSelectRootComponent___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  int32_t v65; // w0
  bool v66; // w8

  if ( (byte_40FD272 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v6);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v9);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v10);
    sub_B16FFC(&SupportSelectRootComponent___c_TypeInfo, v11);
    byte_40FD272 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_46;
  v15 = SelfUserGame;
  fixMainSupportDeckIds = (System_Array_o *)SelfUserGame->fields.fixMainSupportDeckIds;
  if ( !fixMainSupportDeckIds )
    goto LABEL_46;
  mainSupportDeckId = v15->fields.mainSupportDeckId;
  if ( fixMainSupportDeckIds[1].monitor )
  {
    v18 = System_Array__Clone(fixMainSupportDeckIds, 0LL);
    if ( v18 )
    {
      v20 = v18;
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B170BC(v18, int___TypeInfo);
      if ( !v21 )
        goto LABEL_18;
    }
    else
    {
      v21 = 0LL;
    }
  }
  else
  {
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B17014(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v22->static_fields->FixMainSupportDeckNum,
                                                                 v14);
  }
  fixEventSupportDeckIds = (System_Array_o *)v15->fields.fixEventSupportDeckIds;
  if ( !fixEventSupportDeckIds )
LABEL_46:
    sub_B170D4();
  if ( !fixEventSupportDeckIds[1].monitor )
    goto LABEL_19;
  v24 = System_Array__Clone(fixEventSupportDeckIds, 0LL);
  if ( !v24 )
  {
    v25 = 0LL;
    goto LABEL_24;
  }
  v20 = v24;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B170BC(v24, int___TypeInfo);
  if ( !v25 )
  {
LABEL_18:
    sub_B173C8(v20);
LABEL_19:
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B17014(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v26->static_fields->FixEventSupportDeckNum,
                                                                 v19);
  }
LABEL_24:
  v27 = System_Linq_Enumerable__SequenceEqual_int_(
          v21,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v32 = v27 & System_Linq_Enumerable__SequenceEqual_int_(
                v25,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) ^ 1;
  if ( (v32 & 1) != 0 )
    goto LABEL_43;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v34 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v34 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v28, v29, v30, v31);
    System_Func_int__bool____ctor(
      _9__67_0,
      v37,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v38 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v38->__9__67_0 = _9__67_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v46 = System_Linq_Enumerable__Count_int_(v45, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  v51 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v53 = v46;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v51 = SupportSelectRootComponent___c_TypeInfo;
  }
  v54 = v51->static_fields;
  _9__67_1 = v54->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v54 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v47, v48, v49, v50);
    System_Func_int__bool____ctor(
      _9__67_1,
      v56,
      Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v57 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v57->__9__67_1 = _9__67_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v57->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v65 = System_Linq_Enumerable__Count_int_(v64, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v53 >= 1 && v65 > 0 )
LABEL_43:
    v66 = 0;
  else
    v66 = CenterNum + 1 != mainSupportDeckId;
  return v66 | v32 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_40FD266 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_40FD266 = 1;
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v44; // x0
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  UserServantLeaderEntity_o *v46; // x22
  clsQuestCheck_o *v47; // x0
  UserServantEntity_o *v48; // x8
  PartyOrganizationUtility_o *v49; // x23
  __int64 v50; // x24
  __int64 v51; // x25
  int32_t v52; // w0
  int32_t v53; // w24
  int32_t Rarity; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  int32_t v56; // w25
  int32_t v57; // w0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v60; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x20
  __int64 v62; // x23
  __int64 v63; // x24
  int32_t v64; // w0
  ServantEntity_o *v65; // x23
  clsQuestCheck_o *v66; // x0
  PartyOrganizationUtility_o *v67; // x20
  int32_t v68; // w0
  System_String_o *Name; // x0
  UserServantEntity_o *v70; // x8
  System_String_o *v71; // x21
  int32_t v72; // w0
  EquipTargetInfo_o *v73; // x8
  int32_t v74; // w22
  System_String_o *SvtName; // x0
  System_String_o *RarityInvalidMessage; // x20
  PartyOrganizationUtility_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Text_StringBuilder_o *v82; // x21
  System_String_o *v83; // x0
  CommonUI_o *v84; // x20
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  CommonConfirmDialog_ClickDelegate_o *v92; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxLength; // [xsp+50h] [xbp-60h] BYREF
  int32_t actMaxRarity; // [xsp+54h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_40FD273 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v16);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v18);
    sub_B16FFC(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_10175/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v20);
    sub_B16FFC(&StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, v21);
    sub_B16FFC(&StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    byte_40FD273 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  maxLength = 0;
  *(_QWORD *)minFontSize = 0LL;
  v24 = sub_B170CC(
          SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&classPos,
          entity,
          method);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_44;
  *(_QWORD *)(v24 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v24 + 32) = entity;
  v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v24 + 32);
  *(_DWORD *)(v24 + 24) = result;
  *(_DWORD *)(v24 + 28) = classPos;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)entity, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v24 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_44;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      sub_B17100(v38, v39, v40);
      sub_B170A0();
    }
    v44 = supportServantData->m_Items[selectNum];
    if ( !v44 )
      goto LABEL_44;
    UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v44, *(_DWORD *)(v24 + 28), v40);
    if ( !UserServantLeaderEntity )
      goto LABEL_44;
    v46 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.equipTarget1 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v47 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v48 = (UserServantEntity_o *)*v31;
      if ( !*v31 )
        goto LABEL_44;
      v49 = (PartyOrganizationUtility_o *)v47;
      v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
      v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v97.fields.currentCryptoKey = v51;
      *(_QWORD *)&v97.fields.fakeValue = v50;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v97, 0LL);
      if ( !*v31 )
        goto LABEL_44;
      v53 = v52;
      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)*v31, 0LL);
      equipTarget1 = v46->fields.equipTarget1;
      if ( !equipTarget1 )
        goto LABEL_44;
      v56 = Rarity;
      v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(equipTarget1->fields.svtId, 0LL);
      if ( !v49 )
        goto LABEL_44;
      if ( PartyOrganizationUtility__IsRarityRestriction(v49, &skillName, &actMaxRarity, v53, v56, v57, -1, 0LL) )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          v60 = (UserServantEntity_o *)*v31;
          if ( *v31 )
          {
            v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            v63 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
            v62 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v98.fields.currentCryptoKey = v63;
            *(_QWORD *)&v98.fields.fakeValue = v62;
            v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v98, 0LL);
            if ( v61 )
            {
              v65 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v61,
                                         v64,
                                         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              v66 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v31 )
              {
                v67 = (PartyOrganizationUtility_o *)v66;
                v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*v31)[6], 0LL);
                if ( v65 )
                {
                  Name = ServantEntity__getName(v65, v68, -1, 0LL);
                  v70 = (UserServantEntity_o *)*v31;
                  if ( *v31 )
                  {
                    v71 = Name;
                    v72 = UserServantEntity__getRarity(v70, 0LL);
                    v73 = v46->fields.equipTarget1;
                    if ( v73 )
                    {
                      v74 = v72;
                      SvtName = EquipTargetInfo__GetSvtName(v73, 0LL);
                      if ( v67 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v67,
                                                 &maxLength,
                                                 v71,
                                                 v74,
                                                 SvtName,
                                                 skillName,
                                                 actMaxRarity,
                                                 0LL);
                        v77 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( v77 )
                        {
                          PartyOrganizationUtility__DecisionFontSize(v77, &minFontSize[1], minFontSize, maxLength, 0LL);
                          v82 = (System_Text_StringBuilder_o *)sub_B170CC(
                                                                 System_Text_StringBuilder_TypeInfo,
                                                                 v78,
                                                                 v79,
                                                                 v80,
                                                                 v81);
                          System_Text_StringBuilder___ctor(v82, 0LL);
                          if ( v82 )
                          {
                            System_Text_StringBuilder__Append_41914240(v82, RarityInvalidMessage, 0LL);
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10175/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_41914240(v82, v83, 0LL);
                            v84 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v85 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                                                       v82,
                                                       v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3255/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                           v88,
                                                                           v89,
                                                                           v90,
                                                                           v91);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v92,
                              (Il2CppObject *)v24,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( v84 )
                            {
                              CommonUI__OpenConfirmDialog_18237500(
                                v84,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v85,
                                v86,
                                v87,
                                v92,
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
        sub_B170D4();
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
  SupportServantSelectMenu_o *v12; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  SupportInfoJump_o *v14; // x0
  const MethodInfo *v15; // x1
  __int64 CenterNum; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v23; // x21
  CancelConfirmMenu_CallbackFunc_o *v24; // x22
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  int32_t v29; // w20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v31; // x2
  UserGameEntity_o *v32; // x23
  System_Array_o *fixMainSupportDeckIds; // x0
  int32_t mainSupportDeckId; // w21
  Il2CppObject *v35; // x0
  __int64 v36; // x2
  Il2CppObject *v37; // x24
  System_Int32_array *v38; // x22
  SupportServantSelectMenu_o *supportServantSelectMenu; // x0
  const MethodInfo *v40; // x2
  BalanceConfig_c *v41; // x0
  System_Array_o *fixEventSupportDeckIds; // x0
  Il2CppObject *v43; // x0
  const MethodInfo *v44; // x1
  System_Int32_array *v45; // x23
  BalanceConfig_c *v46; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  CancelConfirmDeckIdDialog_CallbackFunc_o *v54; // x27

  if ( (byte_40FD280 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v9);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v10);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v11);
    byte_40FD280 = 1;
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
      CenterNum = SupportSelectRootComponent__getCenterNum(this, v15);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
        {
          sub_B17100(CenterNum, v17, v18);
          sub_B170A0();
        }
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v23 = supportServantData->m_Items[(int)CenterNum];
        v24 = (CancelConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                    CancelConfirmMenu_CallbackFunc_TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19,
                                                    v20);
        CancelConfirmMenu_CallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v23, v24, 0LL);
          return;
        }
      }
      goto LABEL_59;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v26)
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
        SupportSelectRootComponent__SetActiveApplyIcon(this, v27);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v28);
        return;
      }
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      if ( supportServantSelectMenu )
      {
        SupportServantSelectMenu__ClearScrollValue(supportServantSelectMenu, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21129/*"ok"*/, v40);
        return;
      }
      goto LABEL_59;
    }
    v29 = SupportSelectRootComponent__getCenterNum(this, v26);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_59;
    v32 = SelfUserGame;
    fixMainSupportDeckIds = (System_Array_o *)SelfUserGame->fields.fixMainSupportDeckIds;
    if ( !fixMainSupportDeckIds )
      goto LABEL_59;
    mainSupportDeckId = v32->fields.mainSupportDeckId;
    if ( fixMainSupportDeckIds[1].monitor )
    {
      v35 = System_Array__Clone(fixMainSupportDeckIds, 0LL);
      if ( v35 )
      {
        v37 = v35;
        v38 = (System_Int32_array *)sub_B170BC(v35, int___TypeInfo);
        if ( !v38 )
          goto LABEL_48;
      }
      else
      {
        v38 = 0LL;
      }
    }
    else
    {
      v41 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      v38 = (System_Int32_array *)sub_B17014(
                                    int___TypeInfo,
                                    (unsigned int)v41->static_fields->FixMainSupportDeckNum,
                                    v31);
    }
    fixEventSupportDeckIds = (System_Array_o *)v32->fields.fixEventSupportDeckIds;
    if ( !fixEventSupportDeckIds )
      goto LABEL_59;
    if ( !fixEventSupportDeckIds[1].monitor )
      goto LABEL_49;
    v43 = System_Array__Clone(fixEventSupportDeckIds, 0LL);
    if ( !v43 )
    {
      v45 = 0LL;
      goto LABEL_54;
    }
    v37 = v43;
    v45 = (System_Int32_array *)sub_B170BC(v43, int___TypeInfo);
    if ( v45 )
    {
LABEL_54:
      SupportSelectRootComponent__getCenterNum(this, v44);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
      tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
      tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
      v54 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_B170CC(
                                                          CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo,
                                                          v50,
                                                          v51,
                                                          v52,
                                                          v53);
      CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        v54,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
        0LL);
      if ( cancelConfirmDeckIdDialog )
      {
        CancelConfirmDeckIdDialog__Open(
          cancelConfirmDeckIdDialog,
          v29 + 1,
          mainSupportDeckId,
          tempFixMainQuestSupportDeckIds,
          tempFixEventQuestSupportDeckIds,
          v38,
          v45,
          v54,
          0LL);
        return;
      }
LABEL_59:
      sub_B170D4();
    }
LABEL_48:
    sub_B173C8(v37);
LABEL_49:
    v46 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v45 = (System_Int32_array *)sub_B17014(
                                  int___TypeInfo,
                                  (unsigned int)v46->static_fields->FixEventSupportDeckNum,
                                  v36);
    goto LABEL_54;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v12 = this->fields.supportServantSelectMenu;
  if ( !v12 )
    goto LABEL_59;
  SupportServantSelectMenu__ClearScrollValue(v12, 0LL);
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_59;
  supportInfoJump->fields.selectClassId = -1;
  v14 = this->fields.supportInfoJump;
  if ( !v14 )
    goto LABEL_59;
  if ( !SupportInfoJump__ReturnScene(v14, 1, (Il2CppObject *)this->fields.supportInfoJump, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popScene(Instance, 1, (Il2CppObject *)this->fields.supportInfoJump, 0LL);
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
  System_Collections_Generic_List_string__o *FixedErrorList; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v18; // x22
  SupportServantData_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  SupportSelectConfirmMenu_CallbackFunc_o *v25; // x21
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  System_String_array *v27; // x0
  const MethodInfo *v28; // x4
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v30; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1

  if ( (byte_40FD27E & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_40FD27E = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = SupportSelectRootComponent__GetFixedErrorList(
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
    sub_B17100(FixedErrorList, v14, v15);
    sub_B170A0();
  }
  v18 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)FixedErrorList;
  v19 = supportServantData->m_Items[CenterNum];
  if ( v19 && SupportServantData__get_IsNoServant(v19, v14) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
    v25 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                       SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
    SupportSelectConfirmMenu_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndConfirmMenu__,
      0LL);
    if ( supportSelectConfirmMenu )
    {
      SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v25, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
  if ( !v18 )
    goto LABEL_21;
  if ( v18->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 1, v16);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( !supportSelectMenu )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(supportSelectMenu, v11, 1, this->fields.tempFixEventQuestSupportDeckIds, v28);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v30);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v32);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v33);
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
    v27 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v18,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_21;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, v27, 0LL);
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
  System_Collections_Generic_List_string__o *FixedErrorList; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v18; // x22
  SupportServantData_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  SupportSelectConfirmMenu_CallbackFunc_o *v25; // x21
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  System_String_array *v27; // x0
  const MethodInfo *v28; // x4
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v30; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1

  if ( (byte_40FD27D & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v8);
    byte_40FD27D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = SupportSelectRootComponent__GetFixedErrorList(
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
    sub_B17100(FixedErrorList, v14, v15);
    sub_B170A0();
  }
  v18 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)FixedErrorList;
  v19 = supportServantData->m_Items[CenterNum];
  if ( v19 && SupportServantData__get_IsNoServant(v19, v14) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
    v25 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                       SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
    SupportSelectConfirmMenu_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndConfirmMenu__,
      0LL);
    if ( supportSelectConfirmMenu )
    {
      SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v25, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
  if ( !v18 )
    goto LABEL_21;
  if ( v18->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 0, v16);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( !supportSelectMenu )
      goto LABEL_21;
    SupportSelectMenu__SetFixDeckButton(supportSelectMenu, v11, 0, this->fields.tempFixMainQuestSupportDeckIds, v28);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v30);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v32);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v33);
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
    v27 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v18,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_21;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, v27, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v12; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v13; // x22

  if ( (byte_40FD284 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_40FD284 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    sub_B17100(CenterNum, v5, v6);
    sub_B170A0();
  }
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                        SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                        v5,
                                                        v6,
                                                        v7,
                                                        v8);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_B170D4();
  SupportSelectEditMenu__Open(supportEditMenu, v12, isEdit, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19

  if ( (byte_40FD27F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, isFixed);
    byte_40FD27F = 1;
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
  System_String_array **v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  SupportSelectRootComponent_o *v5; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  unsigned __int64 v9; // x8
  SupportServantData_o *v10; // x20
  const MethodInfo *v11; // x1
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  unsigned __int64 v20; // x8
  SupportServantData_o *v21; // x20
  const MethodInfo *v22; // x1
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v29; // x22
  __int64 v30; // x24
  unsigned __int64 v31; // x8
  SupportServantData_o *v32; // x20
  const MethodInfo *v33; // x1
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v5 = this;
  if ( (byte_40FD262 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B16FFC(&SupportServantData_TypeInfo, method);
    byte_40FD262 = 1;
  }
  supportServantData = (unsigned int *)v5->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v7 = 0LL;
  v8 = 8LL;
  while ( 1 )
  {
    v9 = supportServantData[6];
    if ( (__int64)v7 >= (int)v9 )
      break;
    if ( v7 >= v9 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v7 + 8] )
    {
      v10 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, method, v2, v3, v4);
      SupportServantData___ctor(v10, v11);
      if ( v10 )
      {
        this = (SupportSelectRootComponent_o *)sub_B170BC(v10, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          sub_B170F4(this);
          sub_B170A0();
        }
      }
      if ( v7 >= supportServantData[6] )
      {
LABEL_37:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      *(_QWORD *)&supportServantData[2 * v7 + 8] = v10;
      sub_B16F98(
        (BattleServantConfConponent_o *)&supportServantData[v8],
        (System_Int32_array **)v10,
        v2,
        v12,
        v13,
        v14,
        v15,
        v16);
      supportServantData = (unsigned int *)v5->fields.supportServantData;
    }
    ++v7;
    v8 += 2LL;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v5->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v18 = 0LL;
  v19 = 8LL;
  while ( 1 )
  {
    v20 = orgSupportServantData[6];
    if ( (__int64)v18 >= (int)v20 )
      break;
    if ( v18 >= v20 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v18 + 8] )
    {
      v21 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, method, v2, v3, v4);
      SupportServantData___ctor(v21, v22);
      if ( v21 )
      {
        this = (SupportSelectRootComponent_o *)sub_B170BC(v21, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v18 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v18 + 8] = v21;
      sub_B16F98(
        (BattleServantConfConponent_o *)&orgSupportServantData[v19],
        (System_Int32_array **)v21,
        v2,
        v23,
        v24,
        v25,
        v26,
        v27);
      orgSupportServantData = (unsigned int *)v5->fields.orgSupportServantData;
    }
    ++v18;
    v19 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v5->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_B170D4();
  v29 = 0LL;
  v30 = 8LL;
  while ( 1 )
  {
    v31 = tmpSupportServantData[6];
    if ( (__int64)v29 >= (int)v31 )
      break;
    if ( v29 >= v31 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v29 + 8] )
    {
      v32 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, method, v2, v3, v4);
      SupportServantData___ctor(v32, v33);
      if ( v32 )
      {
        this = (SupportSelectRootComponent_o *)sub_B170BC(v32, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v29 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v29 + 8] = v32;
      sub_B16F98(
        (BattleServantConfConponent_o *)&tmpSupportServantData[v30],
        (System_Int32_array **)v32,
        v2,
        v34,
        v35,
        v36,
        v37,
        v38);
      tmpSupportServantData = (unsigned int *)v5->fields.tmpSupportServantData;
    }
    ++v29;
    v30 += 2LL;
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v11; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v12; // x22

  if ( (byte_40FD289 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_40FD289 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    sub_B17100(CenterNum, v5, v6);
    sub_B170A0();
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B170D4();
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v11, v12, 0LL);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v11; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v12; // x22

  if ( (byte_40FD28D & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_40FD28D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
  {
    sub_B17100(CenterNum, v5, v6);
    sub_B170A0();
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_B170CC(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_B170D4();
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v11, v12, 0LL);
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
  SupportServantData_o *v16; // x0
  BalanceConfig_c *v17; // x0
  const MethodInfo *v18; // x2
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  NetworkManager_ResultCallbackFunc_o *v24; // x21
  FollowerSetupRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FD26F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v8);
    byte_40FD26F = 1;
  }
  v9 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v10) )
  {
    for ( i = 0; ; ++i )
    {
      v17 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)i >= v17->static_fields->SupportDeckMax )
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
        sub_B17100(v17, v11, v12);
        sub_B170A0();
      }
      v16 = supportServantData->m_Items[i];
      if ( !v16 )
        goto LABEL_24;
      SupportServantData__SetOld(v16, orgSupportServantData->m_Items[i], v12);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_23:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_21129/*"ok"*/, v18);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v20,
                                                 v21,
                                                 v22,
                                                 v23);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowerSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v24,
                                                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_24:
    sub_B170D4();
  if ( !FollowerSetupRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v13; // x0
  System_Int32_array **editDeckName; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewIndicator_o *indicator; // x19
  SupportSelectListViewItem_o *CenterItem; // x0
  const MethodInfo *v20; // x2

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( !IsNullOrEmpty )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
    {
      sub_B17100(IsNullOrEmpty, v5, v6);
      sub_B170A0();
    }
    v13 = supportServantData->m_Items[CenterNum];
    if ( !v13
      || (editDeckName = (System_Int32_array **)this->fields.editDeckName,
          v13->fields._deckName_k__BackingField = (struct System_String_o *)editDeckName,
          sub_B16F98(
            (BattleServantConfConponent_o *)&v13->fields._deckName_k__BackingField,
            editDeckName,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          SupportSelectRootComponent__SaveTemp(this, -1, v15),
          (supportSelectMenu = this->fields.supportSelectMenu) == 0LL)
      || (indicator = supportSelectMenu->fields.indicator,
          CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, v16),
          !indicator) )
    {
LABEL_8:
      sub_B170D4();
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, CenterItem, v20);
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
  SupportSelectMenu_o *v14; // x0
  const MethodInfo *v15; // x1
  AvalonSceneManager_o *Instance; // x0
  AvalonSceneManager_o *v17; // x0
  SceneJumpInfo_o *sceneJumpInfo; // x0
  AvalonSceneManager_o *v19; // x0

  if ( (byte_40FD283 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40FD283 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
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
    v14 = this->fields.supportSelectMenu;
    if ( v14 )
    {
      SupportSelectMenu__Reset(v14, v12, v13);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v15);
      goto LABEL_12;
    }
LABEL_21:
    sub_B170D4();
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v17 )
      goto LABEL_21;
    AvalonSceneManager__popScene(v17, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      v19 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !v19 )
        goto LABEL_21;
      AvalonSceneManager__transitionScene(v19, 39, 1, 0LL, 0LL);
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
  SupportServantData_o *v5; // x0
  SupportSelectRootComponent_o *v6; // x0
  const MethodInfo *v7; // x4

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
    sub_B17100(this, *(_QWORD *)&targetIdx, method);
    sub_B170A0();
  }
  v5 = supportServantData->m_Items[targetIdx];
  if ( !v5 )
LABEL_7:
    sub_B170D4();
  SupportServantData__ResetOld(v5, *(const MethodInfo **)&targetIdx);
  SupportSelectRootComponent__CopySupportData(
    v6,
    v3->fields.supportServantData,
    v3->fields.tmpSupportServantData,
    0,
    v7);
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x21
  const MethodInfo *v20; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v22; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v24; // x1
  int32_t v25; // w0
  const MethodInfo *v26; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t v30; // w24
  int32_t i; // w25
  int32_t v32; // w26
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  BalanceConfig_c *v36; // x0
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v39; // x0
  System_Int32_array *v40; // x20
  System_Int32_array *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v46; // x24

  if ( (byte_40FD286 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_40FD286 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
LABEL_28:
    sub_B170D4();
  SupportSelectEditMenu__Close(supportEditMenu, 0LL);
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v20);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v22);
  v25 = SupportSelectRootComponent__getCenterNum(this, v24);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v25 + 1, v26);
  v30 = SupportSelectRootComponent__getCenterNum(this, v28);
  for ( i = 0; ; ++i )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    if ( i >= v36->static_fields->SupportDeckMax )
      break;
    if ( v30 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, i + 1, v29)
      || (v32 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v32, v29) )
    {
      if ( !v14 )
        goto LABEL_28;
      System_Collections_Generic_List_int___Add(
        v14,
        i,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v19 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v32, v29)
      && !SupportSelectRootComponent__IsPossibleCopy(this, i, this->fields.tempFixMainQuestSupportDeckIds, v34)
      || SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v32, v33)
      && !SupportSelectRootComponent__IsPossibleCopy(this, i, this->fields.tempFixEventQuestSupportDeckIds, v35) )
    {
      if ( !v19 )
        goto LABEL_28;
LABEL_18:
      System_Collections_Generic_List_int___Add(
        v19,
        i,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      continue;
    }
  }
  if ( !v14 )
    goto LABEL_28;
  copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
  supportServantData = this->fields.supportServantData;
  v39 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v19 )
    goto LABEL_28;
  v40 = v39;
  v41 = System_Collections_Generic_List_int___ToArray(
          v19,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v46 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_B170CC(
                                                             SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo,
                                                             v42,
                                                             v43,
                                                             v44,
                                                             v45);
  SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
    v46,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
    0LL);
  if ( !copyDeckSelectMenu )
    goto LABEL_28;
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v40, v41, v46, 0LL);
}


void __fastcall SupportSelectRootComponent__SetActiveApplyIcon(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  int32_t CenterNum; // w0
  const MethodInfo *v5; // x4

  if ( this->fields.supportInfoJump || this->fields.isEdit )
  {
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__HideActiveSupportApplyIcon(supportSelectMenu, method);
      return;
    }
LABEL_7:
    sub_B170D4();
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_7;
  SupportSelectMenu__SetActiveSupportApplyIcon(
    this->fields.supportSelectMenu,
    CenterNum + 1,
    this->fields.tempFixMainQuestSupportDeckIds,
    this->fields.tempFixEventQuestSupportDeckIds,
    v5);
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

  if ( (byte_40FD26E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, list);
    byte_40FD26E = 1;
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
    AssetManager__loadAssetStorage_29953896(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (BattleServantConfConponent_c *)list;
  sub_B16F98(p_cacheAssetNameList, (System_Int32_array **)list, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_29955940(v10, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 selectNum; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t v16; // w0
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  int32_t v20; // w22
  CommonUI_o *Instance; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x0
  __int64 *v27; // x8
  int64_t v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v32; // x8
  int64_t v33; // x23
  const MethodInfo *v34; // x4
  struct SupportServantData_array *v35; // x8
  int32_t v36; // w1
  SupportServantData_o *v37; // x0
  struct SupportServantData_array *v38; // x8
  SupportServantData_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49[2]; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FD275 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_System_Array_IndexOf_long___, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v13);
    byte_40FD275 = 1;
  }
  memset(&v49[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  selectNum = this->fields.selectNum;
  this->fields.state = 1;
  if ( result != 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    v27 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_28;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_34;
    v16 = BasicHelper__DecryptValue_19259816(userSvtEntity->fields.svtId, 0LL);
    v17 = item->fields.userSvtEntity;
    if ( !v17 )
      goto LABEL_34;
    v19 = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    v20 = v16;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v49, 0LL, 0LL);
    v19 = *(_OWORD *)&v49[0].fields.currentCryptoKey;
    v18 = *(_OWORD *)&v49[0].fields.fakeValue;
    v20 = 0;
  }
  *(_OWORD *)&v49[1].fields.currentCryptoKey = v19;
  *(_OWORD *)&v49[1].fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v48 = v49[1];
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v48, 0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
LABEL_34:
    sub_B170D4();
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_35;
  v32 = supportServantData->m_Items[selectNum];
  if ( !v32 )
    goto LABEL_34;
  v33 = v28;
  v28 = System_Array__IndexOf_long_(
          v32->fields.equipIdList,
          v28,
          (const MethodInfo_2045640 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)v28 != -1 )
  {
    v35 = this->fields.supportServantData;
    if ( !v35 )
      goto LABEL_34;
    if ( (unsigned int)selectNum >= v35->max_length )
      goto LABEL_35;
    v36 = v28;
    v37 = v35->m_Items[selectNum];
    if ( !v37 )
      goto LABEL_34;
    SupportServantData__removeEquipData(v37, v36, v30);
  }
  v38 = this->fields.supportServantData;
  if ( !v38 )
    goto LABEL_34;
  if ( (unsigned int)selectNum >= v38->max_length )
  {
LABEL_35:
    sub_B17100(v28, v29, v30);
    sub_B170A0();
  }
  v39 = v38->m_Items[selectNum];
  if ( !v39 )
    goto LABEL_34;
  SupportServantData__setEquipData(v39, classPos, v33, v20, v34);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
  v27 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_28:
  v44 = v26;
  System_Action___ctor(v26, (Il2CppObject *)this, *v27, 0LL);
  if ( !Instance )
    goto LABEL_34;
  CommonUI__CloseSupportServantEquipListMenu(Instance, v44, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(this, 1, 1, v45) && !this->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(this, 0, v46);
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_34;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, selectNum, v46);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v17; // x22
  struct SupportServantData_array **p_supportServantData; // x21
  __int64 i; // x23
  struct SupportServantData_array *v20; // x8
  BalanceConfig_c *v21; // x0
  bool v22; // w0
  __int64 v23; // x2
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v25; // x22
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x23
  __int64 v36; // x25
  __int64 v37; // x24
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x27
  unsigned int *v40; // x28
  SupportServantData_o *v41; // x22
  const MethodInfo *v42; // x1
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x7
  struct SupportServantData_array *v49; // x8
  struct SupportInfoJump_o *v50; // x10
  struct System_Int32_array *v51; // x9
  SupportServantData_o *v52; // x0
  __int64 v53; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  il2cpp_array_size_t v62; // w23
  __int64 v63; // x25
  __int64 v64; // x26
  struct System_Int32_array *v65; // x8
  struct SupportServantData_array *v66; // x24
  SupportServantData_o *v67; // x22
  const MethodInfo *v68; // x1
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppClass **v74; // x0
  const MethodInfo *v75; // x7
  struct SupportServantData_array *v76; // x8
  struct SupportInfoJump_o *v77; // x10
  struct System_Int32_array *v78; // x9
  SupportServantData_o *v79; // x0
  __int64 v80; // x8
  __int64 v81; // x25
  struct System_Int32_array *v82; // x8
  struct SupportServantData_array *v83; // x28
  SupportServantData_o *v84; // x22
  const MethodInfo *v85; // x1
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  Il2CppClass **v91; // x0
  const MethodInfo *v92; // x7
  struct SupportServantData_array *v93; // x8
  struct SupportInfoJump_o *v94; // x10
  struct System_Int32_array *v95; // x9
  SupportServantData_o *v96; // x0
  __int64 v97; // x8
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x0
  __int64 v108; // [xsp+8h] [xbp-58h]

  if ( (byte_40FD267 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, deckIndex);
    sub_B16FFC(&BalanceConfig_TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_B16FFC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v12);
    sub_B16FFC(&SupportServantData___TypeInfo, v13);
    sub_B16FFC(&SupportServantData_TypeInfo, v14);
    byte_40FD267 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_74;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v17 = 0LL;
  p_supportServantData = &this->fields.supportServantData;
  for ( i = 32LL; ; i += 8LL )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= v21->static_fields->SupportDeckMax )
      break;
    v20 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_74;
    if ( v17 >= v20->max_length )
    {
LABEL_75:
      sub_B17100(v21, deckIndex, method);
      sub_B170A0();
    }
    *(Il2CppClass **)((char *)&v20->obj.klass + i) = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v20 + i),
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ++v17;
  }
  if ( !otherUserGameEntity )
    goto LABEL_74;
  v22 = System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_74;
  v25 = *(_QWORD *)&mainSupportDeckIds->max_length;
  if ( !v22 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_74;
    v108 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v55 = (System_Int32_array **)sub_B17014(SupportServantData___TypeInfo, (unsigned int)(v108 + v25), v23);
    *p_supportServantData = (struct SupportServantData_array *)v55;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportServantData, v55, v56, v57, v58, v59, v60, v61);
    if ( (int)v25 < 1 )
    {
      v62 = 0;
LABEL_53:
      if ( (int)v108 < 1 )
        goto LABEL_70;
      v81 = 8LL;
      while ( 1 )
      {
        v82 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v82 )
          break;
        if ( v81 - 8 >= (unsigned __int64)v82->max_length )
          goto LABEL_75;
        if ( *((int *)&v82->obj.klass + v81) >= 1 )
        {
          v83 = *p_supportServantData;
          v84 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, deckIndex, method, v33, v34);
          SupportServantData___ctor(v84, v85);
          if ( !v83 )
            break;
          if ( v84 )
          {
            v21 = (BalanceConfig_c *)sub_B170BC(v84, v83->obj.klass->_1.element_class);
            if ( !v21 )
              goto LABEL_76;
          }
          if ( v62 >= v83->max_length )
            goto LABEL_75;
          v91 = &v83->obj.klass + (int)v62;
          v91[4] = (Il2CppClass *)v84;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v91 + 4),
            (System_Int32_array **)v84,
            (System_String_array **)method,
            v86,
            v87,
            v88,
            v89,
            v90);
          v93 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v62 >= v93->max_length )
            goto LABEL_75;
          v94 = this->fields.supportInfoJump;
          if ( !v94 )
            break;
          v95 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v95 )
            break;
          if ( v81 - 8 >= (unsigned __int64)v95->max_length )
            goto LABEL_75;
          v96 = v93->m_Items[v62];
          if ( !v96 )
            break;
          SupportServantData__Init_30856296(
            v96,
            otherUserGameEntity,
            v94->fields.kind,
            v94->fields.isSelect,
            v94->fields.eventSetupInfo,
            1,
            *((_DWORD *)&v95->obj.klass + v81),
            v92);
          ++v62;
        }
        v97 = v81 - 7;
        ++v81;
        if ( v97 >= (int)v108 )
          goto LABEL_70;
      }
    }
    else
    {
      v62 = 0;
      v63 = (int)v25;
      v64 = 8LL;
      while ( 1 )
      {
        v65 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v65 )
          break;
        if ( v64 - 8 >= (unsigned __int64)v65->max_length )
          goto LABEL_75;
        if ( *((int *)&v65->obj.klass + v64) >= 1 )
        {
          v66 = *p_supportServantData;
          v67 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, deckIndex, method, v33, v34);
          SupportServantData___ctor(v67, v68);
          if ( !v66 )
            break;
          if ( v67 )
          {
            v21 = (BalanceConfig_c *)sub_B170BC(v67, v66->obj.klass->_1.element_class);
            if ( !v21 )
            {
LABEL_76:
              sub_B170F4(v21);
              sub_B170A0();
            }
          }
          if ( v62 >= v66->max_length )
            goto LABEL_75;
          v74 = &v66->obj.klass + (int)v62;
          v74[4] = (Il2CppClass *)v67;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v74 + 4),
            (System_Int32_array **)v67,
            (System_String_array **)method,
            v69,
            v70,
            v71,
            v72,
            v73);
          v76 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v62 >= v76->max_length )
            goto LABEL_75;
          v77 = this->fields.supportInfoJump;
          if ( !v77 )
            break;
          v78 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v78 )
            break;
          if ( v64 - 8 >= (unsigned __int64)v78->max_length )
            goto LABEL_75;
          v79 = v76->m_Items[v62];
          if ( !v79 )
            break;
          SupportServantData__Init_30856296(
            v79,
            otherUserGameEntity,
            v77->fields.kind,
            v77->fields.isSelect,
            v77->fields.eventSetupInfo,
            0,
            *((_DWORD *)&v78->obj.klass + v64),
            v75);
          ++v62;
        }
        v80 = v64 - 7;
        ++v64;
        if ( v80 >= v63 )
          goto LABEL_53;
      }
    }
LABEL_74:
    sub_B170D4();
  }
  v26 = (System_Int32_array **)sub_B17014(SupportServantData___TypeInfo, (unsigned int)v25, v23);
  *p_supportServantData = (struct SupportServantData_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportServantData, v26, v27, v28, v29, v30, v31, v32);
  if ( (int)v25 >= 1 )
  {
    v35 = (int)v25;
    v36 = 8LL;
    v37 = 8LL;
    do
    {
      v38 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v38 )
        goto LABEL_74;
      v39 = v36 - 8;
      if ( v36 - 8 >= (unsigned __int64)v38->max_length )
        goto LABEL_75;
      if ( *((int *)&v38->obj.klass + v36) >= 1 )
      {
        v40 = (unsigned int *)*p_supportServantData;
        v41 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, deckIndex, method, v33, v34);
        SupportServantData___ctor(v41, v42);
        if ( !v40 )
          goto LABEL_74;
        if ( v41 )
        {
          v21 = (BalanceConfig_c *)sub_B170BC(v41, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
          if ( !v21 )
            goto LABEL_76;
        }
        if ( v39 >= v40[6] )
          goto LABEL_75;
        *(_QWORD *)&v40[v37] = v41;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v40[v37],
          (System_Int32_array **)v41,
          (System_String_array **)method,
          v43,
          v44,
          v45,
          v46,
          v47);
        v49 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_74;
        if ( v39 >= v49->max_length )
          goto LABEL_75;
        v50 = this->fields.supportInfoJump;
        if ( !v50 )
          goto LABEL_74;
        v51 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v51 )
          goto LABEL_74;
        if ( v39 >= v51->max_length )
          goto LABEL_75;
        v52 = *(SupportServantData_o **)((char *)&v49->obj.klass + v37 * 4);
        if ( !v52 )
          goto LABEL_74;
        SupportServantData__Init_30856296(
          v52,
          otherUserGameEntity,
          v50->fields.kind,
          v50->fields.isSelect,
          v50->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v51->obj.klass + v36),
          v48);
      }
      v53 = v36 - 7;
      ++v36;
      v37 += 2LL;
    }
    while ( v53 < v35 );
  }
LABEL_70:
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_74;
  indicator = supportSelectMenu->fields.indicator;
  v100 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, deckIndex, method, v33, v34);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_74;
  indicator->fields.modifyCenterItemCallBack = v100;
  sub_B16F98(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, 0LL, 0, 0LL, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct SupportInfoJump_o *v28; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x0
  bool v31; // w21
  unsigned __int64 v32; // x22
  struct SupportServantData_array **p_supportServantData; // x20
  __int64 i; // x23
  struct SupportServantData_array *v35; // x8
  BalanceConfig_c *v36; // x0
  struct SupportInfoJump_o *v37; // x8
  struct FollowerInfo_o *followerInfo; // x8
  System_Array_o *mainSupportDeckIds; // x0
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  SupportSelectRootComponent___c_c *v47; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v50; // x23
  struct SupportSelectRootComponent___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  unsigned int v59; // w0
  __int64 v60; // x2
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x3
  __int64 v69; // x4
  void *monitor; // x8
  __int64 v71; // x25
  __int64 v72; // x23
  unsigned __int64 v73; // x26
  unsigned int *v74; // x27
  SupportServantData_o *v75; // x22
  const MethodInfo *v76; // x1
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  const MethodInfo *v82; // x7
  struct SupportServantData_array *v83; // x9
  struct SupportInfoJump_o *v84; // x8
  SupportServantData_o *v85; // x0
  __int64 v86; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct SupportInfoJump_o *v96; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  QuestRestrictionInfo_o *v98; // x20
  clsQuestCheck_o *v99; // x0

  if ( (byte_40FD268 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v14);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B16FFC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v20);
    sub_B16FFC(&SupportServantData___TypeInfo, v21);
    sub_B16FFC(&SupportServantData_TypeInfo, v22);
    sub_B16FFC(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v23);
    sub_B16FFC(&SupportSelectRootComponent___c_TypeInfo, v24);
    byte_40FD268 = 1;
  }
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_63;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v28 = this->fields.supportInfoJump;
  if ( !v28 )
    goto LABEL_63;
  questRestrictionInfo = v28->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_63;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v31 = !QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
  else
LABEL_11:
    v31 = 1;
  v32 = 0LL;
  p_supportServantData = &this->fields.supportServantData;
  for ( i = 32LL; ; i += 8LL )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v32 >= v36->static_fields->SupportDeckMax )
      break;
    v35 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_63;
    if ( v32 >= v35->max_length )
      goto LABEL_64;
    *(Il2CppClass **)((char *)&v35->obj.klass + i) = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)((char *)v35 + i), 0LL, v2, v3, v4, v5, v6, v7);
    ++v32;
  }
  v37 = this->fields.supportInfoJump;
  if ( !v37 || (followerInfo = v37->fields.followerInfo) == 0LL )
LABEL_63:
    sub_B170D4();
  if ( v31 )
  {
    mainSupportDeckIds = (System_Array_o *)followerInfo->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_63;
  }
  else
  {
    mainSupportDeckIds = (System_Array_o *)followerInfo->fields.eventSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_63;
  }
  v40 = System_Array__Clone(mainSupportDeckIds, 0LL);
  if ( v40 )
  {
    v45 = v40;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B170BC(v40, int___TypeInfo);
    if ( v46 )
      goto LABEL_30;
    sub_B173C8(v45);
  }
  v46 = 0LL;
LABEL_30:
  v47 = SupportSelectRootComponent___c_TypeInfo;
  if ( (BYTE3(SupportSelectRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v47 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v41, v42, v43, v44);
    System_Func_int__bool____ctor(
      _9__49_0,
      v50,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v51 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v51->__9__49_0 = _9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v51->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = System_Linq_Enumerable__Where_int_(
          v46,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v59 = System_Linq_Enumerable__Count_int_(v58, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  v61 = (System_Int32_array **)sub_B17014(SupportServantData___TypeInfo, v59, v60);
  *p_supportServantData = (struct SupportServantData_array *)v61;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportServantData, v61, v62, v63, v64, v65, v66, v67);
  if ( !v46 )
    goto LABEL_63;
  monitor = v46[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v71 = 8LL;
    v72 = 8LL;
    while ( 1 )
    {
      v73 = v71 - 8;
      if ( v71 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v46->klass + v71) >= 1 )
      {
        v74 = (unsigned int *)*p_supportServantData;
        v75 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, method, v2, v68, v69);
        SupportServantData___ctor(v75, v76);
        if ( !v74 )
          goto LABEL_63;
        if ( v75 )
        {
          v36 = (BalanceConfig_c *)sub_B170BC(v75, *(_QWORD *)(*(_QWORD *)v74 + 64LL));
          if ( !v36 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v73 >= v74[6] )
          break;
        *(_QWORD *)&v74[v72] = v75;
        sub_B16F98((BattleServantConfConponent_o *)&v74[v72], (System_Int32_array **)v75, v2, v77, v78, v79, v80, v81);
        v83 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_63;
        if ( v73 >= v83->max_length )
          break;
        v84 = this->fields.supportInfoJump;
        if ( !v84 )
          goto LABEL_63;
        if ( v73 >= LODWORD(v46[1].monitor) )
          break;
        v85 = *(SupportServantData_o **)((char *)&v83->obj.klass + v72 * 4);
        if ( !v85 )
          goto LABEL_63;
        SupportServantData__Init_30858440(
          v85,
          v84->fields.followerInfo,
          v84->fields.kind,
          v84->fields.isSelect,
          v84->fields.eventSetupInfo,
          v84->fields.questRestrictionInfo,
          *((_DWORD *)&v46->klass + v71),
          v82);
      }
      LODWORD(monitor) = v46[1].monitor;
      v86 = v71 - 7;
      ++v71;
      v72 += 2LL;
      if ( v86 >= (int)monitor )
        goto LABEL_54;
    }
LABEL_64:
    sub_B17100(v36, method, v2);
    sub_B170A0();
  }
LABEL_54:
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_63;
  indicator = supportSelectMenu->fields.indicator;
  v89 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v68, v69);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_63;
  indicator->fields.modifyCenterItemCallBack = v89;
  sub_B16F98(
    (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = this->fields.supportInfoJump;
  if ( !v96 )
    goto LABEL_63;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  v98 = v96->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v99 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v99 || !followerQuestInfomationDraw )
    goto LABEL_63;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v98,
    (int32_t)v99[1].fields.cQuestReleaseListP,
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
  __int64 v21; // x2
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  __int64 i; // x25
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v35; // x9
  BalanceConfig_c *v36; // x0
  unsigned __int64 v37; // x26
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct System_Int32_array *v39; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 j; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v49; // x9
  struct System_Int32_array *v50; // x9
  unsigned __int64 v51; // x25
  SupportSelectRootComponent_o *v52; // x0
  const MethodInfo *v53; // x4
  SupportSelectRootComponent_o *v54; // x0
  const MethodInfo *v55; // x4
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x0
  const MethodInfo *v57; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v62; // x1
  struct SupportSelectMenu_o *v63; // x8
  UnityEngine_GameObject_o *headerObject; // x0
  const MethodInfo *v65; // x5
  SupportSelectMenu_o *v66; // x0
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v73; // x8
  unsigned __int64 v74; // x22
  System_Int32_array **eventSetupInfo; // x1
  SupportSelectMenu_o *v76; // x21
  SupportServantData_array *v77; // x22
  SupportSelectMenu_CallbackFunc_o *v78; // x23
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  SupportSelectMenu_DragSwapCallbackFunc_o *v83; // x24
  const MethodInfo *v84; // x5
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  struct SupportSelectMenu_o *v89; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  SupportSelectMenu_o *v98; // x0
  TitleInfoControl_o *v99; // x0
  const MethodInfo *v100; // x1
  struct SupportSelectMenu_o *v101; // x8
  UnityEngine_GameObject_o *v102; // x0
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct SupportServantData_array *v108; // x20
  __int64 v109; // x8
  unsigned __int64 v110; // x21
  System_Int32_array **v111; // x1
  SupportSelectMenu_o *v112; // x20
  SupportServantData_array *v113; // x21
  int32_t v114; // w22
  SupportSelectMenu_CallbackFunc_o *v115; // x23
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  SupportSelectMenu_DragSwapCallbackFunc_o *v120; // x24
  const MethodInfo *v121; // x5
  const MethodInfo *v122; // x2
  struct SupportServantData_array *v123; // x8
  bool v124; // w1
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  System_Action_o *v131; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FD269 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&BalanceConfig_TypeInfo, v4);
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_B16FFC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_B16FFC(&StringLiteral_12504/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_40FD269 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12504/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v19 = UnityEngine_Mathf__Min_40727532(Int, v18->static_fields->SupportDeckMax - 1, 0LL);
    deckIndex = v19;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v22 = (struct System_Int32_array *)sub_B17014(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum,
                                         v21);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v22;
    sub_B16F98(
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
      v36 = BalanceConfig_TypeInfo;
      v37 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      static_fields = v36->static_fields;
      if ( (__int64)v37 >= static_fields->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_79;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v37 < (int)max_length )
      {
        if ( v37 >= max_length )
          goto LABEL_80;
        v35 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_79;
        if ( v37 >= v35->max_length )
          goto LABEL_80;
        *((_DWORD *)&v35->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v39 = (struct System_Int32_array *)sub_B17014(
                                         int___TypeInfo,
                                         (unsigned int)static_fields->FixEventSupportDeckNum,
                                         v31);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v39;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (System_Int32_array **)v39,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    for ( j = 8LL; ; ++j )
    {
      v36 = BalanceConfig_TypeInfo;
      v51 = j - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v51 >= v36->static_fields->FixEventSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_79;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_79;
      v49 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v51 < (int)v49 )
      {
        if ( v51 >= v49 )
          goto LABEL_80;
        v50 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_79;
        if ( v51 >= v50->max_length )
          goto LABEL_80;
        *((_DWORD *)&v50->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v30);
    SupportSelectRootComponent__CopySupportData(
      v52,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v53);
    SupportSelectRootComponent__CopySupportData(
      v54,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v55);
    followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
    if ( followerQuestInfomationDraw )
    {
      FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, 0LL, 0, 0LL, 0LL);
      supportSelectMenu = this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__buttonDispSetting(supportSelectMenu, 1, v57);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v59);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v60);
        titleInfo = this->fields.titleInfo;
        if ( titleInfo )
        {
          TitleInfoControl__setTitleInfo_19611924(titleInfo, this->fields.myFSM, 2, 80, 0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v62);
          v63 = this->fields.supportSelectMenu;
          if ( v63 )
          {
            headerObject = v63->fields.headerObject;
            if ( headerObject )
            {
              UnityEngine_GameObject__SetActive(headerObject, 1, 0LL);
              v66 = this->fields.supportSelectMenu;
              if ( v66 )
              {
                SupportSelectMenu__SetActiveCurrentSupportSprite(v66, 0, 0, 0, 0, v65);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v73 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v73 >= 1 )
                  {
                    v74 = 0LL;
                    while ( v74 < (unsigned int)v73 )
                    {
                      v36 = (BalanceConfig_c *)supportServantData->m_Items[v74];
                      if ( v36 )
                      {
                        eventSetupInfo = (System_Int32_array **)this->fields.eventSetupInfo;
                        v36->_1.declaringType = (Il2CppClass *)eventSetupInfo;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&v36->_1.declaringType,
                          eventSetupInfo,
                          v31,
                          v67,
                          v68,
                          v69,
                          v70,
                          v71);
                      }
                      LODWORD(v73) = supportServantData->max_length;
                      if ( (__int64)++v74 >= (int)v73 )
                        goto LABEL_51;
                    }
LABEL_80:
                    sub_B17100(v36, v30, v31);
                    sub_B170A0();
                  }
LABEL_51:
                  v76 = this->fields.supportSelectMenu;
                  v77 = this->fields.supportServantData;
                  v78 = (SupportSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                              SupportSelectMenu_CallbackFunc_TypeInfo,
                                                              v30,
                                                              v31,
                                                              v67,
                                                              v68);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v78,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    0LL);
                  v83 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B170CC(
                                                                      SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                                      v79,
                                                                      v80,
                                                                      v81,
                                                                      v82);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v83,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    0LL);
                  if ( v76 )
                  {
                    SupportSelectMenu__Open(v76, v77, v19, v78, v83, v84);
                    v89 = this->fields.supportSelectMenu;
                    if ( v89 )
                    {
                      indicator = v89->fields.indicator;
                      v91 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v85, v86, v87, v88);
                      System_Action___ctor(
                        v91,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v91;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&indicator->fields.modifyCenterItemCallBack,
                          (System_Int32_array **)v91,
                          v92,
                          v93,
                          v94,
                          v95,
                          v96,
                          v97);
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
    sub_B170D4();
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  v98 = this->fields.supportSelectMenu;
  if ( !v98 )
    goto LABEL_79;
  SupportSelectMenu__buttonDispSetting(v98, 0, v16);
  v99 = this->fields.titleInfo;
  if ( !v99 )
    goto LABEL_79;
  TitleInfoControl__setTitleInfo_19611924(v99, this->fields.myFSM, 2, 81, 0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v100);
  v101 = this->fields.supportSelectMenu;
  if ( !v101 )
    goto LABEL_79;
  v102 = v101->fields.headerObject;
  if ( !v102 )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(v102, 0, 0LL);
  v108 = this->fields.supportServantData;
  if ( !v108 )
    goto LABEL_79;
  v109 = *(_QWORD *)&v108->max_length;
  if ( (int)v109 >= 1 )
  {
    v110 = 0LL;
    while ( v110 < (unsigned int)v109 )
    {
      v36 = (BalanceConfig_c *)v108->m_Items[v110];
      if ( v36 )
      {
        v111 = (System_Int32_array **)this->fields.eventSetupInfo;
        v36->_1.declaringType = (Il2CppClass *)v111;
        sub_B16F98((BattleServantConfConponent_o *)&v36->_1.declaringType, v111, v31, v103, v104, v105, v106, v107);
      }
      LODWORD(v109) = v108->max_length;
      if ( (__int64)++v110 >= (int)v109 )
        goto LABEL_67;
    }
    goto LABEL_80;
  }
LABEL_67:
  v112 = this->fields.supportSelectMenu;
  v113 = this->fields.supportServantData;
  v114 = deckIndex;
  v115 = (SupportSelectMenu_CallbackFunc_o *)sub_B170CC(SupportSelectMenu_CallbackFunc_TypeInfo, v30, v31, v103, v104);
  SupportSelectMenu_CallbackFunc___ctor(
    v115,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v120 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_B170CC(
                                                       SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                       v116,
                                                       v117,
                                                       v118,
                                                       v119);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v120,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v112 )
    goto LABEL_79;
  SupportSelectMenu__Open(v112, v113, v114, v115, v120, v121);
  v123 = this->fields.supportServantData;
  if ( !v123 )
    goto LABEL_79;
  v124 = (int)v123->max_length >= 2 && v123->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v124, v122);
LABEL_73:
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite )
    goto LABEL_79;
  gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL);
  if ( !gameObject )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v131 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v127, v128, v129, v130);
  System_Action___ctor(v131, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v131, 2, 1, 0LL);
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

  v8 = this;
  if ( (byte_40FD27B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_40FD27B = 1;
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
    sub_B170D4();
  if ( v15->max_length <= idx )
  {
LABEL_41:
    sub_B17100(this, *(_QWORD *)&idx, *(_QWORD *)&deckId);
    sub_B170A0();
  }
  v15->m_Items[v12 + 1] = v20;
}


void __fastcall SupportSelectRootComponent___EndLoadCommonBg_b__52_0(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (gameObject = UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  SupportServantSelectMenu_o *supportServantSelectMenu; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  CancelConfirmMenu_o *cancelConfirmMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AtlasManager_o *Instance; // x0
  const MethodInfo *v20; // x2

  if ( (byte_40FD26D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_40FD26D = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  supportServantSelectMenu = this->fields.supportServantSelectMenu;
  if ( !supportServantSelectMenu )
    goto LABEL_15;
  SupportServantSelectMenu__Init(supportServantSelectMenu, 0LL);
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init(supportSelectConfirmMenu, 0LL);
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_15;
  CancelConfirmMenu__Init(cancelConfirmMenu, 0LL);
  deckNameInputMenu = this->fields.deckNameInputMenu;
  if ( !deckNameInputMenu )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init(deckNameInputMenu, 0LL);
  fixErrorDialog = this->fields.fixErrorDialog;
  if ( !fixErrorDialog )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init(fixErrorDialog, 0LL);
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog
    || (CancelConfirmDeckIdDialog__Init(cancelConfirmDeckIdDialog, 0LL),
        (followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw) == 0LL)
    || (FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, 0LL, 0, 0LL, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
  this->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(this, 0LL, v20);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v9; // x0
  struct SupportServantData_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BalanceConfig_c *v17; // x0
  struct SupportServantData_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BalanceConfig_c *v25; // x0
  struct SupportServantData_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FD261 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&SupportServantData___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_13122/*"SvtEqScrollBarValue"*/, v5);
    byte_40FD261 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (struct SupportServantData_array *)sub_B17014(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v9->static_fields->SupportDeckMax,
                                               v7);
    this->fields.supportServantData = v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.supportServantData,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = (struct SupportServantData_array *)sub_B17014(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v17->static_fields->SupportDeckMax,
                                               v7);
    this->fields.orgSupportServantData = v18;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.orgSupportServantData,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    v26 = (struct SupportServantData_array *)sub_B17014(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v25->static_fields->SupportDeckMax,
                                               v7);
    this->fields.tmpSupportServantData = v26;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tmpSupportServantData,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13122/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventValUpEventIdList; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  EventUpValSetupInfo_o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  System_Action_o *v50; // x20

  if ( (byte_40FD26A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v12);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v15);
    sub_B16FFC(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v16);
    byte_40FD26A = 1;
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
  sub_B16F98(
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
  sub_B16F98(
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
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(MasterData_WarQuestSelectionMaster, 0, 0LL);
  v38 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v34, v35, v36, v37);
  EventUpValSetupInfo___ctor_24610352(v38, EventValUpEventIdList, 0, 0LL);
  this->fields.eventSetupInfo = v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  supportInfoJump = this->fields.supportInfoJump;
  if ( supportInfoJump && supportInfoJump->fields.otherUserGameEntity && supportInfoJump->fields.questRestrictionInfo )
  {
    v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadOutGameAtlas(v50, 0LL);
  }
  else
  {
    SupportSelectRootComponent__StartUp(this, v45);
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
    sub_B170D4();
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, method);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void __fastcall SupportSelectRootComponent__initSupportServantDatas(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  SupportSelectRootComponent_o *v5; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v7; // w20
  __int64 v8; // x22
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v10; // x21
  const MethodInfo *v11; // x1
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  SupportServantData_o *v17; // x0

  v5 = this;
  if ( (byte_40FD292 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_B16FFC(&SupportServantData_TypeInfo, method);
    byte_40FD292 = 1;
  }
  supportServantData = v5->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_B170D4();
  v7 = 0;
  v8 = 32LL;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v7 >= (int)max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v8) )
    {
      v10 = (SupportServantData_o *)sub_B170CC(SupportServantData_TypeInfo, method, v2, v3, v4);
      SupportServantData___ctor(v10, v11);
      if ( v10 )
      {
        this = (SupportSelectRootComponent_o *)sub_B170BC(v10, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v7 >= supportServantData->max_length )
      {
LABEL_17:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v8) = (Il2CppClass *)v10;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)supportServantData + v8),
        (System_Int32_array **)v10,
        v2,
        v12,
        v13,
        v14,
        v15,
        v16);
      supportServantData = v5->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v7 >= supportServantData->max_length )
      goto LABEL_17;
    v17 = *(SupportServantData_o **)((char *)&supportServantData->obj.klass + v8);
    if ( v17 )
    {
      SupportServantData__Init(v17, ++v7, v5->fields.eventSetupInfo, v3);
      supportServantData = v5->fields.supportServantData;
      v8 += 8LL;
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
  SupportServantData_o *v12; // x0
  int64_t OldServant; // x0
  struct SupportServantData_array *v14; // x8
  int64_t v15; // x23
  SupportServantData_o *v16; // x0
  struct SupportServantData_array *v17; // x8
  SupportServantData_o *v18; // x0
  struct SupportServantData_array *v19; // x8
  int64_t v20; // x23
  SupportServantData_o *v21; // x0
  char v22; // w20
  struct SupportServantData_array *v23; // x8
  SupportServantData_o *v24; // x8

  if ( (byte_40FD291 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, servant);
    byte_40FD291 = 1;
  }
  v7 = 0;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)servant);
  while ( 1 )
  {
    OldServant = (int64_t)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      OldServant = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( v7 >= *(_DWORD *)(*(_QWORD *)(OldServant + 184) + 164LL) )
    {
      v22 = 0;
      goto LABEL_27;
    }
    if ( servant )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_32;
      v12 = supportServantData->m_Items[CenterNum];
      if ( !v12 )
        goto LABEL_31;
      OldServant = SupportServantData__getServant(v12, v7, v9);
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v14->max_length )
        goto LABEL_32;
      v15 = OldServant;
      v16 = v14->m_Items[CenterNum];
      if ( !v16 )
        goto LABEL_31;
      OldServant = SupportServantData__getOldServant(v16, v7, v9);
      if ( v15 != OldServant )
        break;
    }
    if ( equip )
    {
      v17 = this->fields.supportServantData;
      if ( !v17 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v17->max_length )
        goto LABEL_32;
      v18 = v17->m_Items[CenterNum];
      if ( !v18 )
        goto LABEL_31;
      OldServant = SupportServantData__getEquip(v18, v7, v9);
      v19 = this->fields.supportServantData;
      if ( !v19 )
        goto LABEL_31;
      if ( (unsigned int)CenterNum >= v19->max_length )
        goto LABEL_32;
      v20 = OldServant;
      v21 = v19->m_Items[CenterNum];
      if ( !v21 )
        goto LABEL_31;
      OldServant = SupportServantData__getOldEquip(v21, v7, v9);
      if ( v20 != OldServant )
        break;
    }
    ++v7;
  }
  v22 = 1;
LABEL_27:
  v23 = this->fields.supportServantData;
  if ( !v23 )
    goto LABEL_31;
  if ( (unsigned int)CenterNum >= v23->max_length )
  {
LABEL_32:
    sub_B17100(OldServant, v8, v9);
    sub_B170A0();
  }
  v24 = v23->m_Items[CenterNum];
  if ( !v24 )
LABEL_31:
    sub_B170D4();
  return (v22 | System_String__op_Inequality(
                  v24->fields._oldDeckName_k__BackingField,
                  v24->fields._deckName_k__BackingField,
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
  const MethodInfo *v8; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  System_Int32_array *eventSupportDeckIds; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t v15; // w0
  const MethodInfo *v16; // x5
  int32_t v17; // w3
  char v18; // w1
  char v19; // w2
  SupportSelectMenu_o *supportSelectMenu; // x0
  int32_t v21; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v25; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Int32_array *v27; // x8
  int32_t max_length; // w24
  System_Int32_array *v29; // x22
  int32_t v30; // w21
  int32_t v31; // w0
  SupportSelectMenu_o *v32; // x0
  int32_t v33; // w20
  const MethodInfo *v34; // x4
  SupportSelectMenu_o *v35; // x0

  if ( (byte_40FD26C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_40FD26C = 1;
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
      v25 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      v17 = 0;
      v21 = v25 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v31 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      v21 = 0;
      v17 = v31 + 1;
    }
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( !supportSelectMenu )
      goto LABEL_39;
    v18 = ReturnTypeByQuestId == 0;
    v19 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  eventSupportDeckIds = (System_Int32_array *)System_Linq_Enumerable__SequenceEqual_int_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                                (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                                (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)eventSupportDeckIds & 1) == 0 )
  {
    v26 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v26,
                            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    v27 = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !v27 )
      goto LABEL_39;
    max_length = v27->max_length;
    v29 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v30 = 0;
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
                                                    (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      v30 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v21 = 0;
      goto LABEL_27;
    }
    if ( !v29 )
      goto LABEL_39;
    if ( CenterNum < v29->max_length )
    {
      v21 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v29->m_Items[CenterNum + 1],
              (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      supportSelectMenu = this->fields.supportSelectMenu;
      if ( !supportSelectMenu )
        goto LABEL_39;
      v19 = CenterNum >= max_length;
      v18 = CenterNum < max_length;
      v17 = v30;
      goto LABEL_34;
    }
LABEL_40:
    sub_B17100(eventSupportDeckIds, v12, v13);
    sub_B170A0();
  }
  if ( !mainSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= mainSupportDeckIds->max_length )
    goto LABEL_40;
  v15 = System_Array__IndexOf_int_(
          otherUserGameEntity->fields.mainSupportDeckIds,
          mainSupportDeckIds->m_Items[CenterNum + 1],
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v17 = v15 + 1;
  v18 = 1;
  v19 = 1;
  supportSelectMenu = this->fields.supportSelectMenu;
  v21 = v17;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite(supportSelectMenu, v18, v19, v17, v21, v16);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  v32 = this->fields.supportSelectMenu;
  if ( !v32
    || (v33 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(v32, v33, 0, this->fields.tempFixMainQuestSupportDeckIds, v8),
        (v35 = this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_B170D4();
  }
  SupportSelectMenu__SetFixDeckButton(v35, v33, 1, this->fields.tempFixEventQuestSupportDeckIds, v34);
}


void __fastcall SupportSelectRootComponent__setEditUI(
        SupportSelectRootComponent_o *this,
        bool editOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blackMask; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v8; // w21
  const MethodInfo *v9; // x2
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  SupportSelectListViewIndicator_o *indicator; // x0
  struct SupportSelectMenu_o *v12; // x8
  UnityEngine_Collider_o *namePanelCollider; // x0
  bool v14; // w21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  SupportSelectMenu_o *v17; // x0
  const MethodInfo *v18; // x2
  SupportSelectMenu_o *v19; // x0
  bool v20; // w20
  const MethodInfo *v21; // x2
  SupportSelectMenu_o *v22; // x0
  const MethodInfo *v23; // x1

  blackMask = (UnityEngine_Component_o *)this->fields.blackMask;
  this->fields.isEdit = editOn;
  if ( !blackMask )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(blackMask, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, editOn, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_12;
  v8 = !editOn;
  UnityEngine_Behaviour__set_enabled(scrollView, !editOn, 0LL);
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_12;
  indicator = supportSelectMenu->fields.indicator;
  if ( !indicator )
    goto LABEL_12;
  SupportSelectListViewIndicator__SetActive(indicator, v8, v9);
  v12 = this->fields.supportSelectMenu;
  if ( !v12 )
    goto LABEL_12;
  namePanelCollider = (UnityEngine_Collider_o *)v12->fields.namePanelCollider;
  if ( !namePanelCollider )
    goto LABEL_12;
  v14 = v8;
  UnityEngine_Collider__set_enabled(namePanelCollider, v14, 0LL);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v15);
  v17 = this->fields.supportSelectMenu;
  if ( !v17
    || (SupportSelectMenu__SetActiveFixDeckButton(v17, v14, v16), (v19 = this->fields.supportSelectMenu) == 0LL)
    || (v20 = editOn, SupportSelectMenu__SetAbleToSwapDrag(v19, v20, v18), (v22 = this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  SupportSelectMenu__SetupFooterButtons(v22, v20, v21);
  SupportSelectRootComponent__ChangeTitle(this, v23);
}


void __fastcall SupportSelectRootComponent__setInfoUIDisp(
        SupportSelectRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  SupportSelectListViewIndicator_o *indicator; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, disp, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL)
    || (indicator = supportSelectMenu->fields.indicator) == 0LL )
  {
    sub_B170D4();
  }
  SupportSelectListViewIndicator__SetActive(indicator, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AA3 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_40F7AA3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SupportSelectRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportSelectRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7AA4 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F7AA4 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  struct SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x21
  SupportServantData_o *v10; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  int32_t CurrentDeckID; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x28
  System_Int32_array *klass; // x25
  System_Int32_array *monitor; // x26
  int32_t v22; // w20
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27
  CommonUI_o *Instance; // x0

  if ( (byte_40F7AA5 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_40F7AA5 = 1;
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
      sub_B17100(_4__this, isDecide, method);
      sub_B170A0();
    }
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    CurrentDeckID = SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v19 = (Il2CppObject *)this->fields.__4__this;
    if ( !v19
      || (klass = (System_Int32_array *)v19[18].klass,
          monitor = (System_Int32_array *)v19[18].monitor,
          v22 = CurrentDeckID,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                  SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                                  v15,
                                                                  v16,
                                                                  v17,
                                                                  v18),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v19,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_B170D4();
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v22,
      klass,
      monitor,
      callback,
      0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct SupportSelectRootComponent_o *v11; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v14; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v17; // x20
  int32_t CurrentDeckID; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x28
  System_Int32_array *klass; // x25
  System_Int32_array *monitor; // x26
  int32_t v26; // w19
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  CommonUI_o *v28; // x0

  if ( (byte_40F7AA6 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_40F7AA6 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_15;
    supportServantData = v11->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v11->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
    {
      sub_B17100(Instance, v9, v10);
      sub_B170A0();
    }
    v14 = supportServantData->m_Items[selectNum];
    if ( !v14 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v14->fields.eventSetupInfo2;
    v17 = (CommonUI_o *)Instance;
    CurrentDeckID = SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v23 = (Il2CppObject *)this->fields.__4__this;
    if ( !v23
      || (klass = (System_Int32_array *)v23[18].klass,
          monitor = (System_Int32_array *)v23[18].monitor,
          v26 = CurrentDeckID,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_B170CC(
                                                                     SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                                     v19,
                                                                     v20,
                                                                     v21,
                                                                     v22),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v23,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            0LL),
          !v17) )
    {
LABEL_15:
      sub_B170D4();
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v17,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v26,
      klass,
      monitor,
      callback,
      0LL);
  }
  v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v28 )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(v28, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.svtId == svtInfo->fields.svtId;
}